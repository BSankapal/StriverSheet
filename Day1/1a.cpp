//Brute force
#include <bits/stdc++.h> 
using namespace std;

void row(vector<vector<int> > &matrix, int n, int m){
	for(int i=0;i<m;i++){
		if(matrix[n][i] != 0){
			matrix[n][i] = INT_MIN;
		}
	}
}

void col(vector<vector<int> > &matrix, int n, int m){
	for(int i=0;i<n;i++){
		if(matrix[i][m] != 0){
			matrix[i][m] = INT_MIN;
		}
	}
}

vector<vector<int> > zeroMatrix(vector<vector<int> > &matrix, int n, int m) {
	// Write your code here.
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				row(matrix, i, m);
				col(matrix, n, j);
			}
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == INT_MIN){
				matrix[i][j] = 0;
			}
		}
	}
	
	return matrix;
}
