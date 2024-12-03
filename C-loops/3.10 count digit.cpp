#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout<<"enter the number ";
    cin>>n;
    int count=0;
    while(i<=n)
    {
        n=n/10;
        count++;
    }
    cout<<count;
}