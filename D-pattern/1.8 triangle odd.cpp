#include<iostream>
using namespace std;
int main()
{
int i,j,n;
cout<<"enter the no.  ";
cin>>n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=(2*i)-1;j+=2)
    {cout<<j;}
    cout<<endl;
}
}