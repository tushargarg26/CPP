#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n,sum, i;
    cout<<"Enter value of n=";
    cin>> n;
    cout<<a<<" "<<b<<" ";

    for(i=0;i<n;i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
}