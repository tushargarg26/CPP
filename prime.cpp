#include<iostream>
using namespace std;
int main()
{
    int a,i=2;
    cout<<"Enter value of a=";
    cin>> a;
    cout<<endl;

    while(i<a)
    {
        if(a%i==0){
            cout<<"NOT PRIME";
            return 0;
        }
              i=i+1;
    }
    cout<<"PRIME";
    
}