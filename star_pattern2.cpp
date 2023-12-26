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
        int space=i-1;
        int star=a-i+1;
        while(star>0)
        {
            cout<<"*";
            star--;
        }
        while(space>0)
        {
            cout<<" ";
            space--;
        }
       
        

        cout<<endl;
        i=i+1;
    }
    
}