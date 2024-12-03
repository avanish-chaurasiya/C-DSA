#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter the number ";
    cin>>n;
    int sum=0;
    
    // for(i=1;i<=n;i++)
    // {
    //   if(i%2==0)
    //     {sum=sum-i;}
    //     else
    //     {sum=sum+i;}
    // }
    
    // cout<<sum;

    //  OR
    if(n%2==0)
    cout<<-n/2;
    else
    cout<<(-n/2)+n;
}