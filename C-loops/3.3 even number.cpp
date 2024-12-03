#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number";
    cin>>n;
    
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        cout<<i<<endl;
    } 
    // print AP of the given number 1,3,5,7,9,.... upto n
    //  n=n*2;
    // for(i=1;i<=n;i++)
    // {
    //     if(i%2!=0)
    //     cout<<i<<endl;
    //}
}
