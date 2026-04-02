//stock span example
#include<iostream>
using namespace std;
#include<vector>
class StockSpanner{
    public:
    vector<int>prices;
    int next(int price){
        prices.push_back(price);
        int span=1;
        int i=prices.size()-2;
        while(i>=0 && prices[i]<=price){
            span++;
            i--;
        }
        return span;
    }
};