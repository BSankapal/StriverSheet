#include <bits/stdc++.h> 
int path(int a, int b, int c, int d){
	if(a==c-1 && b==d-1){
		return 1;
	}
	else if(a >= c || b >= d){
		return 0;
	}
	else
		return path(a+1, b, c ,d)+path(a, b+1, c, d);
}

int uniquePaths(int m, int n) {
	// Write your code here.
	int ans = path(0, 0, m, n);
	return ans;
}