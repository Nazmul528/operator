#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the two number :";
    cin>>num1>>num2;
    int sum=num1+num2;
    cout << "the sum is :"<<sum << endl;
    int sub=num1-num2;
    cout << "the subtraction is :"<<sub << endl;
    int mul=num1*num2;
    cout << "the multiple is :"<<mul << endl;
    double div=(float)num1/num2;
    cout << "the division is :"<<div << endl;
    int rem=num1%num2;
    cout << "the remainder is :"<<rem << endl;
    getch();
}
