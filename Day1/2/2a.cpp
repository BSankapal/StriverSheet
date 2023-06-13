#include <bits/stdc++.h> 
using namespace std;

vector<int> nCr(int n){
    vector<int> temp;
    long long t = 1;
    temp.push_back(t);

    for (int i = 1; i < n; i++) {
      t = (t * (n - i)) / (i);
      temp.push_back(t);
    }

    return temp;
}

vector<vector<int> > pascalTriangle(int N) {
    // Write your code here.
    vector<vector<int> > ans;
    
    for(int i=1;i<=N;i++){
        vector<int> temp = nCr(i);
        ans.push_back(temp);
    }

    return ans;
}