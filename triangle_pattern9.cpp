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
        j=i-1;
        int count=1;
        int space=a-i;
        while(space>0)
        {
            cout<<" ";
            space--;
        }
        int star=i;
        while(star>0)
        {
            cout<<count;
            count++;
            star--;
        }
       
        while(j>0)
        {
            cout<<j;
            j--;
            
        }

        
        cout<<endl;
        i=i+1;
    }
    
}