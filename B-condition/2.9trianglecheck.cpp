#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout<<"enter the side of the triangle ";
    cin>>a>>b>>c;
    if ((a+b>c) && (b+c>a) && (c+a>b))
    cout<<"can form traingle ";
    else
    cout<<"cannot form triangle ";
}