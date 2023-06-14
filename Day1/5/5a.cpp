#include <bits/stdc++.h> 
using namespace std;

void sort012(int *arr, int n)
{
   //   Write your code here
   int low = 0, med = 0, high = n-1;

   while(med <= high){
      if(arr[med] == 0){
         swap(arr[med++], arr[low++]);
      }  
      else if(arr[med] == 2){
         swap(arr[med], arr[high--]);
      }
      else{
         med++;
      }
   }

}