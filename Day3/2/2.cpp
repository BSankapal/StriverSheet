#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m) {
	// // Write your code here.
	long nn = n;
	long xx = x;
	long ans = 1;

	while(nn>0){
		if(nn%2 == 1){
			ans = ((ans)%m*(xx)%m)%m;
			nn--;
		}
		else{
			xx = ((xx)%m*(xx)%m)%m;
			nn = nn/2;
	 	}
	}
	return (int)(ans%m);

}