#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double a,b,hight,area;
    cout <<"Enter the  a and d lanth: :";
    cin >> a>>b;
    cout <<"Enter the hight :";
    cin >> hight;
    area=0.5*(a+b) *hight;
    cout <<"area of Trapezoid :"<<area;
    getch();
}
