#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the no.";
    cin>>n;
    int mid = n/2+1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
       {if(i==mid || j==mid)
       cout<<"1 ";
        else 
        cout<<"  ";}
    
      cout<<endl;}
}