// Count number of substrings with exactly k distinct characters:
// Given a string of lowercase alphabets, count all possible substrings (not necessarily distinct) that has exactly k distinct characters.

// Examples:

// Input: abc, k = 2
// Output: 2
// Possible substrings are {“ab”, “bc”}

// Input: aba, k = 2
// Output: 3
// Possible substrings are {“ab”, “ba”, “aba”}

// Efficient Approach:
//  The idea is to count all the subarrays with at most K distinct characters and then subtract all the subarrays with atmost K – 1 characters. That leaves us with count of subarrays with exactly K distinct characters.
