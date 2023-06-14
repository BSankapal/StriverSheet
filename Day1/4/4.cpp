#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */

    long long int maxi = 0;
    long long int sum = 0;

    for(long long int i=0;i<n;i++){
        sum += arr[i]; 

        maxi = max(maxi, sum);

        if(sum < 0)
            sum = 0;
    }

    // if(maxi < 0)
    //     return 0;

    return maxi;
}