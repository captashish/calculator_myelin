#include"Functions.h"
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include"Calculator.cpp"

using namespace std;

void calC()
{
    int choice;
    float result;
    char ch;
    do
    {
        system("clear");
        choice=askOption();
        result=performCalc(choice);
        showResult(result);
        cout<<"\nDo you want to continue Y/N :";
        cin>>ch;
    }
    while(ch=='y'||ch=='Y');
}

void showResult(float for_result)
{
    cout<<"\n\tThe result of above operation is: "<<for_result<<'\n';
}

float performCalc(int for_choice)
{
    Calculator c1;
    float ret_result;
    switch(for_choice)
    {
        case 1: ret_result=c1.add();
        break;
        case 2: ret_result=c1.subtract();
        break;
        case 3: ret_result=c1.multiply();
        break;
        case 4: ret_result=c1.divide();
        break;
        default: cout<<"\nWrong option entered :\n";
        exit(0);
    }
    return ret_result;
}

int askOption()
{
    int for_choice;
    cout<<"\n\n\n\t\t\tWelcome to command line Calculator !!!";
    cout<<"\n\t\t1. Addition";
    cout<<"\n\t\t2. Subtraction";
    cout<<"\n\t\t3. Multiplication";
    cout<<"\n\t\t4. Division";
    cout<<"\n\n\t Enter your choice : ";
    cin>>for_choice;
    return for_choice;
}
