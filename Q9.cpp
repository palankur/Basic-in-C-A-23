//Write a C++ program to find the maximum of two numbers
#include<iostream>
using namespace std;
int main()
{
    int a,b,j;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    j=((a>b)?a:b);
    cout<<"The greatest number between the given number is : "<<j;
    return 0;
}
