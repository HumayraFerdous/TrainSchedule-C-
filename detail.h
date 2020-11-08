#ifndef DETAIL_H_INCLUDED
#define DETAIL_H_INCLUDED
#include <iostream>
#include <string.h>
#include <iomanip>
#include "user.h"
using namespace std;

class detail: public user
{
protected:
    int age;
    char NID[100];
    long phone;
    char email[100];
public:
    detail() : user()
    {
        age=0;
        strcpy(NID," ");
        phone=0; //character a nite hobe
        strcpy(email," ");
    }
    detail(int a,char b[],long c,char d[]) : user()
    {
        age=a;
        strcpy(NID,b);
        phone=c;
        strcpy(email,d);
    }
    void getdata()
    {
        user::getdata();
        cout<<"\tEnter age: ";
        cin>>age;
        cout<<"\tEnter National Id number: ";
        cin>>NID;
        cout<<"\tEnter phone number: ";
        cin>>phone;
        cout<<"\tEnter Email Id: ";
        cin>>email;
    }
    void displaydata()
    {
        user::displaydata();
        cout<<"\tAge "<<setw(11)<<":"<<age<<endl;
        cout<<"\tNational Id "<<setw(3)<<":"<<NID<<endl;
        cout<<"\tPhone number "<<setw(2)<<":"<<phone<<endl;
        cout<<"\tEmail Id "<<setw(6)<<":"<<email<<endl;
    }
    void ind(int pn)
    {
        ifstream ifile;
        ifile.open("f.txt",ios::in|ios::out|ios::binary);
        ifile.seekg(pn*sizeof(detail));
        ifile.read((char*)this,sizeof(*this));
    }
    void outd()
    {
        ofstream ofile;
        ofile.open("f.txt",ios::app | ios::binary);
        ofile.write((char*)this, sizeof(*this));
    }
};


#endif // DETAIL_H_INCLUDED
