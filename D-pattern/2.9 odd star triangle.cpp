#include<iostream>
using namespace std;
int main()
{
    int i,j,n,a;
    cout<<"enter the no.";
    cin>>n;
    a=1;
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=a;j++)     // or j<=2*i-1
       {
         cout<<"*";
       }
       cout<<endl;
       a+=2;

    }
}   

 