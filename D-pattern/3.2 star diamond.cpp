#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"enter the no.";
   cin>>n;
   int nst =1;
   int nsp= n-1;
   for(i=i;i<=2*n-1;i++)
   { // for space 
    for(j=1;j<=nsp;j++)
    {
        cout<<" ";
    }
    if(i<=n-1)  nsp--;
    else nsp++;

    // for star
    for(k=1;k<=nst;k++)
    {
    cout<<"*";
    }
    if(i<=n-1)  nsp+=2;
    else nsp-=2;
    cout<<endl;
   }
}