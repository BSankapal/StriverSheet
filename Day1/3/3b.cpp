#include <bits/stdc++.h> 
using namespace std;

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int findPivot = -1;
    for(int i=n-2;i>=0;i--){
        if(permutation[i] < permutation[i+1]){
            findPivot = i;
            break;
        }
    }

    if(findPivot == -1){
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    // int nextGreater = -1, min = INT_MAX;
    for(int j=n-1;j>findPivot;j--){
        if(permutation[j] > permutation[findPivot]){
            swap(permutation[findPivot], permutation[j]);
            break;
        }
    }

    
    reverse(permutation.begin()+findPivot+1, permutation.end());

    return permutation;

}