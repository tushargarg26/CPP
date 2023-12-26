#include<iostream>
using namespace std;
int main()
{
    int a,i=1,j;
    cout<<"Enter value of a=";
    cin>> a;
    cout<<endl;
char ch='A';
while(i<=a)
    {
        
        j=1;

        while(j<=i)
        {
            cout<<ch<<" ";
            ch++;
            j=j+1;
        }
       
        cout<<endl;
        i=i+1;
    }
    
}