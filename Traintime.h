#ifndef TRAINTIME_H_INCLUDED
#define TRAINTIME_H_INCLUDED
#include <iostream>
#include <iomanip>
using namespace std;

class Traintime
{
private:

    struct Times
    {
        int hr,mins,sec;
        char a[10];
    };
    Times ent,ext;

public:
    Traintime getdata()
    {
        char c;
        cout<<"\tEnter Arrival time: ";
        cin>>ent.hr>>c>>ent.mins>>c>>ent.sec>>ent.a;
        cout<<"\tEnter Destination time: ";
        cin>>ext.hr>>c>>ext.mins>>c>>ext.sec>>ext.a;
    }
    void displaydata(Traintime d)
    {
        cout<<"\tArrival time "<<setw(7)<<":"<<ent.hr<<":"<<ent.mins<<":"<<ent.sec<<ent.a<<endl;
        cout<<"\tDestination time "<<setw(3)<<":"<<ext.hr<<":"<<ext.mins<<":"<<ext.sec<<ext.a<<endl;
    }
    void duration(Traintime dd)
    {
        int h,m,s;
        if(ent.a[0]=='p' && ext.a[0]!='p')
        {
            if(ent.hr>ext.hr)
            {
                ext.hr+=12;
                //ent.hr-=12;
            }
        }
        else  if(ent.a[0]=='a' && ent.hr==12)
        {
            ent.hr-=12;
        }
        else if(ent.a[0]=='a' && ext.a[0]=='a')
        {
            if(ent.hr<ext.hr)
            {
                ent.hr=ent.hr;
                ext.hr=ext.hr;
            }
            else if(ent.hr>ext.hr)
            {
                ext.hr+=24;
            }
        }
        else if(ent.a[0]=='p' && ext.a[0]=='p')
        {
            if(ent.hr<ext.hr)
            {
                ent.hr=ent.hr;
                ext.hr=ext.hr;
            }
            else if(ent.hr>ext.hr)
            {
                ext.hr+=24;
            }
        }
        else if(ent.hr>ext.hr)
        {
            ext.hr+=12;
        }
        else if(ent.hr<ext.hr)
        {
            ext.hr+=12;
        }
        if(ext.sec<ent.sec)
        {
            ext.sec=60;
            ent.mins++;
        }
        if(ext.mins<ent.mins)
        {
            ext.mins+=60;
            ent.hr++;
        }
        h = ext.hr - ent.hr;
        m = ext.mins - ent.mins;
        s = ext.sec - ent.sec;
        cout<<"\tDuration "<<setw(11)<<":"<<h<<":"<<m<<":"<<s<<" hours"<<endl;
    }
};

#endif // TRAINTIME_H_INCLUDED
