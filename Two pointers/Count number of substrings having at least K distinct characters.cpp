// Count number of substrings having at least K distinct characters
// Given a string S consisting of N characters and a positive integer K, the task is to count the number of substrings having at least K distinct characters.

// Examples:

// Input: S = “abcca”, K = 3
// Output: 4
// Explanation:
// The substrings that contain at least K(= 3) distinct characters are:

// “abc”: Count of distinct characters = 3.
// “abcc”: Count of distinct characters = 3.
// “abcca”: Count of distinct characters = 3.
// “bcca”: Count of distinct characters = 3.
// Therefore, the total count of substrings is 4.

// Approach:
//  The above approach can also be optimized by using the concept of Sliding Window and Hashing. Follow the steps below to solve the problem:

// Initialize a variable, say ans as 0 to store the count of substrings having at least K distinct characters.
// Initialize two pointers, begin and end to store the starting and ending point of the sliding window.
// Initialize a HashMap, say M to store the frequency of characters in the window.
// Iterate until end is less than N, and perform the following steps:
// Include the character at the end of the window, by incrementing the value of S[end] in M by 1.
// Iterate until the size of M becomes less than K, and perform the following steps:
// Remove the characters from the start of the window by decrementing the value of S[begin] in M by 1.
// If its frequency becomes 0, then erase it from the map M.
// Count all the substrings starting from begin till N by incrementing ans by (N – end + 1).
// After completing the above steps, print the value of ans as the result.

// void atleastkDistinctChars(string s, int k)
// {
// Stores the size of the string
//     int n = s.size();

// Initialize a HashMap
//     unordered_map<char, int> mp;

// Stores the start and end
// indices of sliding window
//     int begin = 0, end = 0;

// Stores the required result
//     int ans = 0;

// Iterate while the end
// pointer is less than n
//     while (end < n) {

// Include the character at
// the end of the window
//         char ch = s[end];
//         mp[ch]++;

// Increment end pointer by 1
//         end++;

// Iterate until count of distinct
// characters becomes less than K
//         while (mp.size() >= k) {

// Remove the character from
// the beginning of window
//             char pre = s[begin];
//             mp[pre]--;

// If its frequency is 0,
// remove it from the map
//             if (mp[pre] == 0) {
//                 mp.erase(pre);
//             }

// Update the answer
//             ans += s.length() - end + 1;
//             begin++;
//         }
//     }

// Print the result
//     cout << ans;
// }