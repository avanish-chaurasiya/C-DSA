#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number";
    cin>>n;
    int a=0,b=1;
    for(i=1;i<=n;i++)
    {
      if(i==0)
      {cout<<a<<endl;
      continue;}
      
      if(i==1)
      {cout<<b<<endl;
      continue;}
      int c=a+b;
      a=b;
      b=c;
      cout<<c<<endl;
    }
}