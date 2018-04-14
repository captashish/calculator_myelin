#include"Calculator.h"
#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

Calculator::Calculator()
{
a = 0;
b = 0;
}
float Calculator::add()
{
    cout<<"\n\n\t\t\tWelcome to addition window ......!\n";
    cout<<"\n\tEnter 1st number: ";
    cin>>a;
    cout<<"\n\tEnter 2nd number: ";
    cin>>b;
    return a + b;
}
float Calculator::subtract()
{
    cout<<"\n\n\t\t\tWelcome to subtraction window ......!\n";
    cout<<"\n\tEnter 1st number: ";
    cin>>a;
    cout<<"\n\tEnter 2nd number: ";
    cin>>b;
    return a - b;
}
float Calculator::divide()
{
    float temp_res;
    cout<<"\n\n\t\t\tWelcome to division window ......!\n";
    cout<<"\n\tEnter 1st number: ";
    cin>>a;
    cout<<"\n\tEnter 2nd number: ";
    cin>>b;
    if(b==0)
    {
        cout<<"\n\t\tCannot divide by 0 !!! .... Aborting!  ";
        exit(0);
    }
    temp_res=a/b;
    return (temp_res);
}
float Calculator::multiply()
{
    cout<<"\n\n\t\t\tWelcome to multiplication window ......!\n";
    cout<<"\n\tEnter 1st number: ";
    cin>>a;
    cout<<"\n\tEnter 2nd number: ";
    cin>>b;
    return a * b;
}
