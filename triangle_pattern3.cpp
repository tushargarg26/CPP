#include<iostream>
using namespace std;
int main()
{
 /*   int a,i=1,j,count;
    cout<<"Enter value of a=";
    cin>> a;
    cout<<endl;

    while(i<=a)
    {
        j=1,count=i;
        while(j<=i)
        {
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    */
// without using count variable;

int a,i=1,j;
    cout<<"Enter value of a=";
    cin>> a;
    cout<<endl;

    while(i<=a)
    {
        j=i;
        while(j<i*2)
        {
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

}