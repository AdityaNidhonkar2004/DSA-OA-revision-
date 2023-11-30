// Find the closest pair from two sorted arrays:
// Given two arrays arr1[0…m-1] and arr2[0..n-1], and a number x, the task is to find the pair arr1[i] + arr2[j] such that absolute value of (arr1[i] + arr2[j] – x) is minimum.

// Example:

// Input: arr1[] = {1, 4, 5, 7};
// arr2[] = {10, 20, 30, 40};
// x = 32
// Output: 1 and 30

// Input: arr1[] = {1, 4, 5, 7};
// arr2[] = {10, 20, 30, 40};
// x = 50
// Output: 7 and 40

// Approach:
// -Initialize a variable diff as infinite (Diff is used to store the difference between pair and x). We need to find the minimum diff.
// Initialize two index variables l and r in the given sorted array.
// (a) Initialize first to the leftmost index in ar1: l = 0
// (b) Initialize second the rightmost index in ar2: r = n-1
// Loop while l< length.ar1 and r>=0
// (a) If abs(ar1[l] + ar2[r] – x) < diff then update diff and result
// (b) If (ar1[l] + ar2[r] < sum ) then l++
// (c) Else r–
// Print the result.

// C++ program to find the pair from two sorted arrays such
// that the sum of pair is closest to a given number x
// #include <iostream>
// #include <climits>
// #include <cstdlib>
// using namespace std;

// ar1[0..m-1] and ar2[0..n-1] are two given sorted arrays
// and x is given number. This function prints the pair from
// both arrays such that the sum of the pair is closest to x.
// void printClosest(int ar1[], int ar2[], int m, int n, int x)
// {
// Initialize the diff between pair sum and x.
// 	int diff = INT_MAX;

// res_l and res_r are result indexes from ar1[] and ar2[]
// respectively
// 	int res_l, res_r;

// Start from left side of ar1[] and right side of ar2[]
// 	int l = 0, r = n-1;
// 	while (l<m && r>=0)
// {
// If this pair is closer to x than the previously
// found closest, then update res_l, res_r and diff
// 	if (abs(ar1[l] + ar2[r] - x) < diff)
// 	{
// 		res_l = l;
// 		res_r = r;
// 		diff = abs(ar1[l] + ar2[r] - x);
// 	}

// If sum of this pair is more than x, move to smaller
// side
// 	if (ar1[l] + ar2[r] > x)
// 		r--;
// 	else // move to the greater side
// 		l++;
// 	}

// Print the result
// 	cout << "The closest pair is [" << ar1[res_l] << ", "
// 		<< ar2[res_r] << "] \n";
// }

// Driver program to test above functions
// int main()
// {
// 	int ar1[] = {1, 4, 5, 7};
// 	int ar2[] = {10, 20, 30, 40};
// 	int m = sizeof(ar1)/sizeof(ar1[0]);
// 	int n = sizeof(ar2)/sizeof(ar2[0]);
// 	int x = 38;
// 	printClosest(ar1, ar2, m, n, x);
// 	return 0;
// }
