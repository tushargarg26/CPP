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
        int space=a-i;
        while(space>0)
        {
            cout<<" ";
            space--;
        }
        int star=i;
        while(star>0)
        {
            cout<<"*";
            star--;
        }

        cout<<endl;
        i=i+1;
    }
    
}