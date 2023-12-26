#include<iostream>
using namespace std;
int main()
{
    int a,i=1,j;
    char count=97;
    cout<<"Enter value of a=";
    cin>> a;
    cout<<endl;

/*
    int temp=1;
    while(i<=a)
    {
        j=1;

        while(j<=a)
        {
            char ch=('A'+temp-1);
            temp++;
            cout<<ch;
            j=j+1;
        }
       
        cout<<endl;
        i=i+1;
    }
    
}
*/
char ch='A';
while(i<=a)
    {
        j=1;

        while(j<=a)
        {
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
       
        cout<<endl;
        i=i+1;
    }
    
}