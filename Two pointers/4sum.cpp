// 4Sum:
// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target
// You may return the answer in any order.

// Example 1:

// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
// Example 2:

// Input: nums = [2,2,2,2,2], target = 8
// Output: [[2,2,2,2]]

// Approach:
// -Sort the array
// -set four pointers i=0 j ,k,l
// -define for loop from i=0 to size-2
// -define another loop from j=i+1 to size
//   -set k=j+1 and l=size-1
//   -use while loop till k<l
//     -calculate sum=a[i]+a[j]+a[k]+a[l]
//     -if(sum>x)
//       l--;
//
//     -else if sum<x
//         k++;
//     -else
//          push the elements a[i],a[j],a[k],a[l] in vector and return it
//

// code:
// class Solution {
// public:
//     vector<vector<int>> fourSum(vector<int>& nums, int target) {
//          vector<vector<int>> ans;
//          sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-1;i++){
//             if(i>0 && nums[i-1]==nums[i]) continue;
//             for(int j=i+1;j<nums.size();j++){
//                 if(j!=1+i && nums[j]==nums[j-1])continue;
//                 int k=j+1,l=nums.size()-1;
//                 while(k<l){
//                     long long sum=nums[i];
//                     sum+=nums[j];
//                     sum+=nums[k];
//                     sum+=nums[l];
//                     if(sum>target){
//                         l--;
//                     }
//                     else if(sum<target){
//                         k++;
//                     }
//                     else{
//                         vector<int> v={nums[i],nums[j],nums[k],nums[l]};
//                         ans.push_back(v);
//                         k++;
//                         l--;
//                         while(k<l && nums[k]==nums[k-1])k++;
//                         while(k<l && nums[l]==nums[l+1])l--;
//                     }
//                 }

//             }
//         }
//         return ans;
//     }
// };