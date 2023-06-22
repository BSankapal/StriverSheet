#include<vector>
#include<bits/stdc++.h>
using namespace std;

void mergeTwoSortedArraysWithoutExtraSpace(vector<long long> &a, vector<long long> &b){
	// Write your code here.
	int n = a.size();
	int m = b.size();

	int i = n-1, j = 0;
	// while(a[i] < b[j]){
	// 	i++;
	// 	j++;
	// }

	while(a[i] > b[j]){
		swap(a[i], b[j]);
		i--;
		j++;
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
}