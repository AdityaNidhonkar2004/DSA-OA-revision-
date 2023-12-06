// Get Equal Substrings Within Budget:

// You are given two strings s and t of the same length and an integer maxCost.
// You want to change s to t. Changing the ith character of s to ith character of t costs |s[i] - t[i]| (i.e., the absolute difference between the ASCII values of the characters).
// Return the maximum length of a substring of s that can be changed to be the same as the corresponding substring of t with a cost less than or equal to maxCost. If there is no substring from s that can be changed to its corresponding substring from t, return 0.

// Example 1:
// Input: s = "abcd", t = "bcdf", maxCost = 3
// Output: 3
// Explanation: "abc" of s can change to "bcd".
// That costs 3, so the maximum length is 3.

// Example 2:
// Input: s = "abcd", t = "cdef", maxCost = 3
// Output: 1
// Explanation: Each character in s costs 2 to change to character in t,  so the maximum length is 1.

// Example 3:
// Input: s = "abcd", t = "acde", maxCost = 0
// Output: 1
// Explanation: You cannot make any change, so the maximum length is 1.

// Approach:
// -first set pointers i and j at 0 let right pointer be i and left be j
// -use for loop on right pointer till it reaches end
// -in each iteration cal cost=abs(s[j]-t[j])
// -if the cost exceeds the maxcost start decreasing the size of substring from left
// -and also calulate len at each iteration

// code:
// class Solution {
// public:
//     int equalSubstring(string s, string t, int maxCost) {
//         int i=0,j=0;
//         int cost=0,len=0,maxlen=-1;
//         for(int j=0;j<s.size();j++){
//             cost+=abs(s[j]-t[j]);
//             while(cost>maxCost){
//                 cost-=abs(s[i]-t[i]);
//                 i++;
//             }
//             len=j-i+1;
//             maxlen=max(len,maxlen);
//         }
//         return maxlen;

//     }
// };
