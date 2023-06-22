#include <bits/stdc++.h>
using namespace std; 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	long long Sn = (long long)(n*(n+1))/2;
	long long Sn2 = ((long long)n*(long long)(n+1)*(long long)(2*n+1))/6;
	
	long long S = 0, S2 =0;
	for(long long i=0;i<n;i++){
		S += arr[i];
		S2 += ((long long)arr[i]*(long long)arr[i]);
	}

	//x-y
	long long a = S-Sn;
	//x2-y2
	long long b = S2 - Sn2;

	//x+y
	long long c = b/a;

	
	int x = (a+c)/2;
	int y = abs(a-x);

	return make_pair((int)y,(int)x);

}
