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
        char ch='A'+i-1;
        j=1;

        while(j<=i)
        {
            // OR--->> ch='A'+i+j-2;
            cout<<ch<<" ";
            j=j+1;
        }
       
        cout<<endl;
        i=i+1;
    }
    
}