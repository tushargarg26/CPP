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
        j=1;
        while(star>0)
        {
            cout<<j;
            j++;
            star--;
        }
        while(space>0)
        {
            cout<<"*";
            space--;
        }
      
        int space2=i-1;
        while(space2>0)
        {
            cout<<"*";
            space2--;
        }
        star=a-i+1;
        int temp=a-i+1;
        while(star>0)
        {
            cout<<temp;
            temp--;
            star--;
        }

        

        cout<<endl;
        i=i+1;
    }
    
}