#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxi = 0;
    int mini = INT_MAX; 
    for(int i=0;i<prices.size();i++){
        if(mini > prices[i]){
            mini = prices[i];
        }
        if(maxi < prices[i]-mini){
            maxi = prices[i]-mini;
        }
    }

    return maxi;
}