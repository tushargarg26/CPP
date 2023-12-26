#include<iostream>
using namespace std;
int main()
{
    int a,i=2;
    bool isprime=1;
    cout<<"Enter value of a=";
    cin>> a;
  

    for(i=2;i<a;i++)
    {
        if(a%i==0){
            isprime=0;
            break;
        }
             
    }
    if(isprime==1){
        cout<<"is a prime no.";
    }
    else{
        cout<<"is NOT a prime no.";
    }
    
}