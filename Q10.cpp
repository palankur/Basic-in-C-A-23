//Write a C++ program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
    int i,a[10],sum=0;
    cout<<"Enter ten numbers : ";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"Sum of all the numbers are : "<<sum;
    return 0;

}
