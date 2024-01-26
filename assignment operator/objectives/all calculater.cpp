#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter the two number :";
    cin>>num1>>num2;
    float sum=num1+num2;
    cout<<showpoint;//dosomikar por 6 digit dakhabe
    cout <<setw(25)<< "the sum is :"<<sum << endl;
    cout<<noshowpoint;//dosomickar ar digit dakhabe na
    float sub=num1-num2;
    cout<<fixed;
    cout<<setprecision(10);
    cout <<setw(25)<< "the subtraction is :"<<sub << endl;
    float mul=num1*num2;
    cout <<setw(25)<< "the multiple is :"<<mul << endl;
    double div=num1/num2;
    cout <<setw(25)<< "the division is :"<<div << endl;
    //int rem=num1%num2;
    //cout << "the remainder is :"<<rem << endl;
    getch();
}
