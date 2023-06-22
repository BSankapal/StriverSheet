#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n = arr.size();
    int e1 = -1, e2 = -1;
    int c1 = 0, c2 = 0;

    for(int i=0;i<n;i++){
        if(c1 == 0 && arr[i] != e2){
            e1 = arr[i];
            c1 = 1;
        }
        else if(c2 == 0 && arr[i] != e1){
            e2 = arr[i];
            c2 = 1;
        }
        else if(e1 == arr[i]){
            c1++;
        }
        else if(e2 == arr[i]){
            c2++;
        }
        else{
            c1--;
            c2--;
        }
    }

    int cnt1 = 0, cnt2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == e1){
            cnt1++;
        }
        else if(arr[i] == e2){
            cnt2++;
        }
    }

    vector<int> ans;
    if(cnt1 > floor(n/3)){
        ans.push_back(e1);
    }
    if(cnt2 > floor(n/3)){
        ans.push_back(e2);
    }

    return ans;

}