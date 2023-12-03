// Subarrays with K Different Integers:

// Given an integer array nums and an integer k, return the number of good subarrays of nums.

// A good array is an array where the number of different integers in that array is exactly k.

// For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
// A subarray is a contiguous part of an array.

// Example 1:
// Input: nums = [1,2,1,2,3], k = 2
// Output: 7
// Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]

// Example 2:
// Input: nums = [1,2,1,3,4], k = 3
// Output: 3
// Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].

// Approach:
// -here firstly you have to find number of subarrays with at most k distinct intergers and then find the subarrays with at most k-1 distinct intergers and then subtrack them to get exactly k distinct integer subarray

// class Solution {
// public:
// int helper(vector<int> &v,int t){
//     int ans=0,i=0,j=0;
//     unordered_map<int,int> mp;
//     while(j<v.size()){
//         mp[v[j]]++;
//         j++;
//         while(mp.size()>t){
//             mp[v[i]]--;
//             if(mp[v[i]]==0)mp.erase(v[i]);
//             ans+=v.size()-j+1;
//             i++;
//         }
//     }
//     return ans;
// }
//     int subarraysWithKDistinct(vector<int>& nums, int k) {
//         return abs(helper(nums,k)-helper(nums,k-1));

//     }
// };
