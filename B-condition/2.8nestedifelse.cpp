#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    if(n%3==0 || n%5==0) 
    {
        if( n%15!=0)
        cout<<"it is divisible by 3 or 5  and not divisible by 15";
    }
    else{
        cout<<"it is not divisible by 3 and 5 ";
        
    }
    
}