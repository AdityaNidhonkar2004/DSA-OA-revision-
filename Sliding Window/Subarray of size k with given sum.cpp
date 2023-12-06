// Subarray of size k with given sum:
// Given an array arr[], an integer K and a Sum. The task is to check if there exists any subarray with K elements whose sum is equal to the given sum. If any of the subarray with size K has the sum equal to the given sum then print YES otherwise print NO.

// Examples:
// Input: arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20}
//         k = 4, sum = 18
// Output: YES

// Subarray = {4, 2, 10, 2}
// Input: arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20}
//         k = 3, sum = 6
// Output: YES

// Approach:
// -apply sliding window concept and check if the sum of each element is equal to the given sum