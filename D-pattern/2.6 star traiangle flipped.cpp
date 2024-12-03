#include<iostream>
using namespace std;
int main()
{
int i,j,n,k;
cout<<"enter the no.  ";
cin>>n;
for(i=1;i<=n;i++)
{   for(k=n;k>i;k--) 
{
    cout<<" ";
}
    for(j=1;j<=i;j++)
    {cout<<"*";}      //(" *") it will be print    *
                                        //        * *
    cout<<endl;                        //        * * *

}
}