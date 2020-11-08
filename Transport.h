#ifndef TRANSPORT_H_INCLUDED
#define TRANSPORT_H_INCLUDED

#include <iostream>
#include <iomanip>
using namespace std;
class Transport
{
protected:
    int number;
    float szt;
public:
    Transport()
    {
        number=0;
        szt=0.0;
    }
    Transport(int a,float b)
    {
        number=a;
        szt=b;
    }
    void input()
    {
        cout<<"\tEnter how many furniture: ";
        cin>>number;
        cout<<"\tEnter furniture size: ";
        cin>>szt;
    }
    void output()
    {
       cout<<"\tFurniture number"<<setw(4)<<":"<<number<<endl;
        cout<<"\tTotal Size is "<<setw(6)<<":"<<szt<<endl;
        if(number<=5 && szt<=100.00)

            cout<<"\tPrice is "<<setw(11)<<":"<<450<<endl;

        else if((number>5 && number<=10) && (szt>100.00 && szt<=200.00))
            cout<<"\tPrice is "<<setw(11)<<":"<<1000<<endl;
        else
            cout<<"\tPrice is "<<setw(11)<<":"<<2000<<endl;
    }
};

#endif // TRANSPORT_H_INCLUDED
