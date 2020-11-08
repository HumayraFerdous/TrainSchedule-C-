#ifndef PASSENGER_H_INCLUDED
#define PASSENGER_H_INCLUDED
#include <iostream>
#include <iomanip>
using namespace std;

enum compart {A,B};
class Passenger
{
protected:
    compart ch;
public:
    void input()
    {
        char c;
        cout<<"\tEnter compartment: ";
        cin>>c;
        ch=(c=='A')? A : B;
    }
    void output()
    {
        cout<<"\tCompartment "<<setw(8)<<":";
        cout<<((ch==A)? "First Class" : "Second Class");
        if(ch==A)
            cout<<"\n\tPrice is "<<setw(11)<<":"<<295<<endl;
        else
            cout<<"\n\tPrice is "<<setw(11)<<":"<<180<<endl;
    }

};

#endif // PASSENGER_H_INCLUDED
