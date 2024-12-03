#include<iostream>
using namespace std;
int main()
{
int i,j,n;
cout<<"enter the no.  ";
cin>>n;
 int k=1;

for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
   { 
    cout<<k<<" ";
    k++;   //for first odd no. use k=k+2
    }
    cout<<endl;
}
}

// for(m=1;m<=sum;m++)
// {
//     cout<<m<<" ";
// }}