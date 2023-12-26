#include<iostream>
using namespace std;
int main()
{
int a,i=1,j;

    cout<<"Enter value of a=";
    cin>> a;
    cout<<endl;

 /*   while(i<=a)
    {
        j=i;
        while(j<=i && j>0)
        {
            cout<<j<<" ";
            j=j-1;
        }
        cout<<endl;
        i=i+1;
    }
    */
   //OR
while(i<=a)
    {
        j=1;
        while(j<=i)
        {
            cout<<(i-j+1)<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}