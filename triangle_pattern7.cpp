#include<iostream>
using namespace std;
int main()
{
    int a,i=1,j;
    cout<<"Enter value of a=";
    cin>> a;
    cout<<endl;

while(i<=a)
    {
        char ch='A'+a-i;
        j=1;
         while(j<=i)
        {
            cout<<ch<<" ";
            ch=ch+1;
            j=j+1;
        }
       
        cout<<endl;
        i=i+1;
    }
    
}