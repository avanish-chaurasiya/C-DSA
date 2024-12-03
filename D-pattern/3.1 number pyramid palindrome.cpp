#include<iostream>
using namespace std;
int main()
{
int i,j,n,k;
cout<<"enter the no.  ";
cin>>n;
int a=n;
for(i=1;i<=n;i++)
{    a--;
    for(k=1;k<=a;k++)
    {cout<<" ";}
   
    for(j=1;j<=i;j++)
    {cout<<j;}

    for(j=i-1;j>=1;j--)
    {cout<<j;}
    cout<<endl;


}
}