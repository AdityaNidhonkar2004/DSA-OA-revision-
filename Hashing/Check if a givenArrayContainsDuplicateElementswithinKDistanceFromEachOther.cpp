// Given an unsorted array that may contain duplicates. Also given a number k which is smaller than the size of the array. Write a function that returns true if the array contains duplicates within k distance.
// Examples:

// Input: k = 3, arr[] = {1, 2, 3, 4, 1, 2, 3, 4}
// Output: false
// All duplicates are more than k distance away.

// Input: k = 3, arr[] = {1, 2, 3, 1, 4, 5}
// Output: true
// 1 is repeated at distance 3.

// Input: k = 3, arr[] = {1, 2, 3, 4, 5}
// Output: false

// Input: k = 3, arr[] = {1, 2, 3, 4, 4}
// Output: true

// Approach:
// -in map store the key as my element and value as its index if that element is not present in map
// -if its present the just get their distance by dist=i-mp[arr[i]]
// - if dist is greater than k return false else return true