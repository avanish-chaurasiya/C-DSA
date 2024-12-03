#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the number";
    cin>>n;
    if(n%2!=0)
   {

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==(n/2)+1)
        {cout<<"*"<<" ";
        continue;;}
        {if(j==(n/2)+1)
        cout<<"*"<<" ";
        else
        cout<<"  ";}
        
    }
    cout<<endl;
   }}
    else 
    cout<<"cannot form";
}