#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number";
    cin>>n;
    int count=0;
    for(i=1;i<=n;i++)
    {
       if( n%i==0)
        {count++;}

    }
    if(count==2)
    cout<<"prime no.";
    else
    cout<<"composite no.";
}