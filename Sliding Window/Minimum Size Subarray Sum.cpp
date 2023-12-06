// Minimum Size Subarray Sum:
// Given an array of positive integers nums and a positive integer target, return the minimal length of a
// subarray
//  whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

// Example 1:
// Input: target = 7, nums = [2,3,1,2,4,3]
// Output: 2
// Explanation: The subarray [4,3] has the minimal length under the problem constraint.

// Example 2:
// Input: target = 4, nums = [1,4,4]
// Output: 1

// Example 3:
// Input: target = 11, nums = [1,1,1,1,1,1,1,1]
// Output: 0

// Approach:
// - set pointers i,j at 0
// -traverse till j<nums.size
// -cal presum+=nums[j]
// -while presum >=target
//   -cal len =j-i+1
//   -decrease the presum from pointer i and increment it
// -increment j

// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//         int i=0,j=0,presum=0;
//         int minlen=INT_MAX,len=0;
//         while(j<nums.size()){
//             presum+=nums[j];
//             while(presum>=target){
//                 len=j-i+1;
//                 minlen=min(len,minlen);
//                 presum-=nums[i];
//                 i++;
//             }
//             j++;
//         }
//         if(minlen==INT_MAX)return 0;
//         return minlen;
//     }
// };