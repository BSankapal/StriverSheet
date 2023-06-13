#include <bits/stdc++.h> 
using namespace std;

vector<vector<int> > zeroMatrix(vector<vector<int> > &matrix, int n, int m) {
	// Write your code here.
	vector<int> row(n, -1);
	vector<int> col(m, -1);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				row[i] = 1;
				col[j] = 1;
			}
		}
	}

	// for(int i=0;i<n;i++){
	// 	if(row[i] == 1){
	// 		for(int j=0;j<m;j++){
	// 			matrix[i][j] = 0;
	// 		}
	// 	}
	// }

	// for(int i=0;i<m;i++){
	// 	if(col[i] == 1){
	// 		for(int j=0;j<n;j++){
	// 			matrix[j][i] = 0;
	// 		}
	// 	}
	// }

    for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(col[j] == 1 || row[i] == 1){
				matrix[i][j] = 0;
			}
		}
	}
	
	return matrix;
}
