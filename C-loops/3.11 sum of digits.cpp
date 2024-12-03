#include<iostream>
using namespace std;
int main()
{
    int i=1,n,sum=0;
    cout<<"enter the number ";
    cin>>n;
    
    while(i<=n)
    {
        int re=n%10;
         sum=sum+re;
        n=n/10;
        
    }
    cout<<sum;
}