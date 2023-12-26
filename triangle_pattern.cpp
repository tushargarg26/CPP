#include<iostream>
using namespace std;
int main()
{
    int a,i=1,j,count=1;
    cout<<"Enter value of a=";
    cin>> a;
    cout<<endl;

    while(i<=a)
    {
        j=1;
        while(j<=i)
        {
             cout<<i<<" ";
             j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}