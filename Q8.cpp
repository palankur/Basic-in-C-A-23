//Write a C++ program to swap values of two int variables without using third variable
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    cout<<"Enter the first number : ";
    cin>>i;
    cout<<"enter the second number : ";
    cin>>j;
    i=i+j;
    j=i-j;
    i=i-j;
    cout<<"After swapping the value of first variable is : "<<i<<" and the value of second variable is : "<<j;
    return 0;
}
