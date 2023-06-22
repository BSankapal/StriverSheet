#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int> > &mat, int n, int m)
{
    // Write your code here
    // Write your code here
    int top = 0, bottom = n-1, left = 0, right = m-1, temp, k;

    while(top < bottom && left < right){
        temp = mat[top][left];
        for(int i=left+1;i<=right;i++){
            swap(temp, mat[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            swap(temp, mat[i][right]);
        }
        right--;
        for(int i=right;i>=left;i--){
            swap(temp,mat[bottom][i]);
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            swap(temp,mat[i][left]);
        }
        left++;
        mat[top-1][left-1]=temp;
    }

}