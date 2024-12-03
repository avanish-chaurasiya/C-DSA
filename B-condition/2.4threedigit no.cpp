#include<iostream>
using namespace std;
int main ()
{
    int n;
    int count=0;
    cout<<"enter the number";
    cin>>n;
    while(n>=1)
    {
     n=n/10;
     count++;
     }
    if(count==3)
    {cout<<"it is three digit number ";}
    else
    {cout<<"it is not three digit number";}
}
   