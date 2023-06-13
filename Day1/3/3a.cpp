//TLE - TIME LIMTI

#include <bits/stdc++.h> 
using namespace std;
void solve(vector<int> &per, vector<vector<int> > &ans, vector<int> &curr, int n){
    if(curr.size() >= n){
        ans.push_back(curr);
        return ;
    }

    for(int i:per){
        if(find(curr.begin(), curr.end(), i) == curr.end()){
            curr.push_back(i);
            solve(per, ans, curr, n);
            curr.pop_back();
        }
        // swap(per[index], per[i]);
    }
}

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    vector<int> temp(n);
    for(int i=0;i<n;i++)
        temp[i] = permutation[i];
    
    sort(permutation.begin(), permutation.end());

    // int index = 0;
    vector<vector<int> > ans;
    // vector
    // int index = 0;
    vector<int> curr = {};
    solve(permutation, ans, curr, n);

    int b = -1;
    for(int i=0;i<ans.size();i++){
        int a = 1;
        for(int j=0;j<n;j++){
            if(ans[i][j] != temp[j]){
                a = 0;
            }
        }
        if(a == 1){
            b = i;
            break;
        }
    }

    if(b == ans.size()-1){
        return ans[0];
    }

    return ans[b+1];

}