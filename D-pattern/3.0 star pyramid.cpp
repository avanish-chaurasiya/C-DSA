#include<iostream>
using namespace std;
int main()
{
int i,j,n,k;
cout<<"enter the no.  ";
cin>>n;
int a=1;
for(i=1;i<=n;i++)
{
    for(k=n;k>i;k--)
    {cout<<" ";}
   for(j=1;j<=a;j++)
       {
         cout<<"*";
       }
       cout<<endl;
       a+=2;
}
}