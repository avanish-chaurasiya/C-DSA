#include<iostream>
using namespace std;
int main ()
{
    char ch;
    cout<<"enter the character ";
    cin>>ch;
    int ascii=(int)ch;

    if(ascii>=65 && ascii<=90 || ascii>=97 && ascii<=122)
    cout<<"it is character";
    else
    cout<<"it is not character";
}