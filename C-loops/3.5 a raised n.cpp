#include<iostream>
using namespace std;
int main()
{
    int i,a,n;
    float rev;
    cout<<"enter the number";
    cin>>a>>n;
    float power=1;
    if(n>=0)
   { for(i=1;i<=n;i++)
    {
        power=power*a;
    }
  cout<<power;}
  else
  { for(i=1;i<=-n;i++)
    {
        power=power*a;
         rev=1/power;
    }
  cout<<rev;}
    
}