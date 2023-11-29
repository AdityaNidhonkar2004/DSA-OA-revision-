// Given an array arr[] of N integers. The task is to find the sum of the elements which have frequencies greater than or equal to that element in the array.

// Examples:

// Input: arr[] = {2, 1, 1, 2, 1, 6}
// Output: 3
// The elements in the array are {2, 1, 6}
// Where,
//  2 appear 2 times which is greater than equal to 2 itself.
//  1 appear 3 times which is greater than 1 itself.
//  But 6 appears 1 time which is not greater than or equals to 6.
// So, sum = 2 + 1 = 3.

// Input: arr[] = {1, 2, 3, 3, 2, 3, 2, 3, 3}
// Output: 6

// Approach:
// -get the frequency of each element
// -now iterate through the map again and compare it.first with it.second with given condition
// -that it.first <=it.second them add it to sum+=it.first
// -return sum
