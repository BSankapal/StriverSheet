#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int max = -1;
    for(int i=0;i<prices.size();i++){
        for(int j=i+1;j<prices.size();j++){
            if(prices[j]-prices[i]>max){
                max = prices[j]-prices[i];
            }
        }
    }
    if(max == -1)
        return 0;

    return max;
}