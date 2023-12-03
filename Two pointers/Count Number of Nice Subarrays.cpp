// Count Number of Nice Subarrays:
// Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

// Return the number of nice sub-arrays.

// Example 1:

// Input: nums = [1,1,2,1,1], k = 3
// Output: 2
// Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].
// Example 2:

// Input: nums = [2,4,6], k = 1
// Output: 0
// Explanation: There is no odd numbers in the array.
// Example 3:

// Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
// Output: 16

// Approach:
// -here replace the odd ocurring number with 1 and even with 0
// -now the question becomes similar to number of subarray sum k
// -and solve it using hashing and presum

// code
// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         for(int i=0;i<nums.size();i++){
//             if(nums[i]%2==0){
//                 nums[i]=0;
//             }
//             else{
//                 nums[i]=1;
//             }
//         }
//          Number of subarray sum k code starts here
//         unordered_map<int,int> mp;
//         mp[0]=1;
//         int presum=0,ans=0;
//         for(int i=0;i<nums.size();i++){
//             presum+=nums[i];
//             ans+=mp[presum-k];
//             mp[presum]++;
//         }
//         return ans;

//     }
// };