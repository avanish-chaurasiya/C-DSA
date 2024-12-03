#include<iostream>
using namespace std;
int main ()
{
    int cost, sell;
    cout<<"enter the cost price and selling price";
    cin>>cost>>sell;
    if(sell>cost)
    {
        cout<<"the seller has made profit of";
        float profit=sell-cost;
        cout<<profit;
    }
    else{
        cout<<"the seller has made loss of";
        float loss=cost-sell;
        cout<<loss;
    }

}