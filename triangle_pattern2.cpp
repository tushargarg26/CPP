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
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}