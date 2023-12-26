#include<iostream>
using namespace std;
int main()
{
    int a,i=1,j;
    char count=97;
    cout<<"Enter value of a=";
    cin>> a;
    cout<<endl;

  /*  while(i<=a)
    {
        j=1;
        while(j<=a)
        {
            cout<<count;
            j=j+1;
        }
        count=count+1;
        cout<<endl;
        i=i+1;
    }*/
    while(i<=a)
    {
        j=1;
        while(j<=a)
        {
            char ch=('A'+j-1);
            cout<<ch;
            j=j+1;
        }
       
        cout<<endl;
        i=i+1;
    }
    
}