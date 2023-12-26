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
        while(space>0)
        {
            cout<<" ";
            space--;
        }
        int star=a-i+1;
        while(star>0)
        {
            cout<<i;
            star--;
        }

        cout<<endl;
        i=i+1;
    }
    
}