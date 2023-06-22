#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	int slow = arr[0];
	int fast = arr[0];

	slow = arr[slow];
	fast = arr[arr[fast]];
	
	while(fast != slow){
		slow = arr[slow];
		fast = arr[arr[fast]];
	}

	fast = arr[0];
	while(fast != slow){
		slow = arr[slow];
		fast = arr[fast];
	}

	return slow;
}
