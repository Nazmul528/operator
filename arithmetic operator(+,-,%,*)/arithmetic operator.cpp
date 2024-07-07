#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter the two number :";
    cin>>num1>>num2;
    int sum =num1+num2;
    cout << "the sum two number :"<<sum<<endl;

    int sub =num1-num2;
    cout << "the sub two number :"<<sub<<endl;

    int mul =num1*num2;
    cout << "the multiplication two number :"<<mul<<endl;

    double div =(float)num1/num2;
    cout << "the divition two number :"<<div<<endl;

    int rem =num1%num2;
    cout << "the remainder two number :"<<rem<<endl;


}
