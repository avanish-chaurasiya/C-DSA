#include<iostream>
using namespace std;
int main ()
{
     int a,b;
     char c;
     cout<<"enter the first number ";
     cin>>a;
     cout<<"enter the first number ";
     cin>>b;
     cout<<"enter the operator (+,-,*,/) ";
     cin>>c;
     switch (c)
     {
     case '+':
     cout<<a+b;
        break;

    case '-':
     cout<<a-b;
        break;
        case '*':
     cout<<a*b;
        break;
        case '/':
     cout<<a/b;
        break;
     
     default:
     cout<<"enter valid operator";
        break;
     }

}