#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=65;j<=65+n;j++)
        {cout<<(char)j<<" " ;}
        cout<<endl;
    }
    

}