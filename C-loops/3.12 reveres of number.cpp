#include<iostream>
using namespace std;
int main()
{
    int i=1,n,re;
    cout<<"enter the number ";
    cin>>n;
    
    // while(i<=n)
    // {
    //     int ld =n%10;
    //     // cout<<re;
        
    //      re=re*10;
    //      re=re+ld;
    //     n=n/10;
        
    // }
    // cout<<re;
            //   OR
      while(i<=n)
    {
        int re=n%10;
         cout<<re;
        n=n/10;
        
    }
   
}