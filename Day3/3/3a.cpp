#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int c = 0;
	int el = -1;
	for(int i=0;i<n;i++){
		if(c == 0){
			el = arr[i];
			c = 1;
		}
		else if(el == arr[i]){
			c++;
		}
		else{
			c--;
		}
	}

	int cnt = 0;
	for(int i=0;i<n;i++){
		if(el == arr[i])
			cnt++;
	}
	if(cnt > floor(n/2))
		return el;
	
	return -1;

}