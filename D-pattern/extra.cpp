#include<iostream>
using namespace std;
int main()
{
int i,j,n,k;
cout<<"enter the no.  ";
cin>>n;

for(i=1;i<n;i++)
{    int a=0;
    for(j=1;j<=i;j++)     //or for(j=i;j>=1;j--)
    {cout<<i-a;           //    cout<<j;
     a++;}
   
    cout<<endl;
}
}