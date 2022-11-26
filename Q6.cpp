//Write a C++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int l,b,h;
    //float avg;
    cout<<"Enter three numbers : ";
    cin>>l>>b>>h;
    float avg=((l+b+h)/3);
    cout<<"Average of the numbers are : "<<avg;
    return 0;
}
