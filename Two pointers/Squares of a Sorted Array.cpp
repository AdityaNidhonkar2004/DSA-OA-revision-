// Squares of a Sorted Array:
// Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

// Example 1:
// Input: nums = [-4,-1,0,3,10]
// Output: [0,1,9,16,100]
// Explanation: After squaring, the array becomes [16,1,0,9,100].
// After sorting, it becomes [0,1,9,16,100].

// Example 2:

// Input: nums = [-7,-3,2,3,11]
// Output: [4,9,9,49,121]

// Approach:
// -create a new vector ans
// -set pointer i=0 j=nums.size()-1
// -traverse through ans vector from size-1 to 0
// -if absolute value of nums[i]>absolute value of nums[j]
//     At ans[k] put nums[i]*nums[i]
//     i++;
// -else
//     At ans[k] put nums[j]*nums[j]
//     j--;

// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         vector<int> ans(nums.size());
//         int i=0,j=nums.size()-1;
//         for(int k=ans.size()-1;k>=0;k--){
//             if(abs(nums[i]) > abs(nums[j])){
//                 ans[k]=nums[i]*nums[i];
//                 i++;
//             }
//             else{
//                 ans[k]=nums[j]*nums[j];
//                 j--;
//             }
//         }
//         return ans;

//     }
// };