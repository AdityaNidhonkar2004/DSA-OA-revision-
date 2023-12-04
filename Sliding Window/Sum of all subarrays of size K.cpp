// Sum of all subarrays of size K:
// Given an array arr[] and an integer K, the task is to calculate the sum of all subarrays of size K.

// Examples:

// Input: arr[] = {1, 2, 3, 4, 5, 6}, K = 3
// Output: 6 9 12 15
// Explanation:
// All subarrays of size k and their sum:
// Subarray 1: {1, 2, 3} = 1 + 2 + 3 = 6
// Subarray 2: {2, 3, 4} = 2 + 3 + 4 = 9
// Subarray 3: {3, 4, 5} = 3 + 4 + 5 = 12
// Subarray 4: {4, 5, 6} = 4 + 5 + 6 = 15

// Approach:
// -simple sliding window and store sum in a vector and return it ;

// code:
//  vector<int> SumofallsubarraysofsizeK(vector<int> v ,int k){
//   int presum=0;
//   vector<int> ans;
//   for(int i=0;i<k;i++){
//     presum+=v[i];
//   }
//   int i=1,j=k;
//   while(j<v.size()){
//     int currsum=presum+v[j]-v[i];
//     ans.push_back(currsum);
//     j++;
//     i++;
//     presum=currsum;
//   }
//   return ans;
//  }