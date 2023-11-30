// Triplet Sum in Array (3sum):
// Link:https://leetcode.com/problems/3sum/description/

// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation:
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.
// Example 2:

// Input: nums = [0,1,1]
// Output: []
// Explanation: The only possible triplet does not sum up to 0.
// Example 3:

// Input: nums = [0,0,0]
// Output: [[0,0,0]]
// Explanation: The only possible triplet sums up to 0.

//  Approach(Two pointers):
// -Sort the array
// -set three pointers i=0 j ,k
// -define for loop from i=0 to size-1
//   -set j=i+1 and k=size-1
//   -use while loop till j<k
//     -calculate sum=a[i]+a[j]+a[k]
//     -if(sum>x)
//       k--;
//
//     -else if sum<x
//         j++;
//     -else
//          push the elements a[i],a[j],a[k]in vector and return it
//

//  class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             if(i>0 && nums[i]==nums[i-1])continue;
//             int j=i+1,k=nums.size()-1;
//             while(j<k){
//                 int sum=nums[i]+nums[j]+nums[k];
//                 if(sum>0){
//                     k--;
//                 }
//                 else if (sum<0){
//                     j++;
//                 }
//                 else{
//                     vector<int> v={nums[i],nums[j],nums[k]};
//                     ans.push_back(v);
//                     k--;
//                     j++;
//                     while(j<k && nums[j-1]==nums[j])j++;
//                     while(j<k && nums[k]==nums[k+1])k--;
//                 }
//             }
//         }
//         return ans;

//     }
// };