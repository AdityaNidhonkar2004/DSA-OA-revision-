// Number of subarrays having sum less than K:
// Given an array of non-negative numbers and a non-negative number k, find the number of subarrays having sum less than k. We may assume that there is no overflow.

// Examples :

// Input : arr[] = {2, 5, 6}
//         K = 10
// Output : 4
// The subarrays are {2}, {5}, {6} and
// {2, 5},

// Input : arr[] = {1, 11, 2, 3, 15}
//         K = 10
// Output : 4
// {1}, {2}, {3} and {2, 3}

// Approach:
// An efficient solution is based on a sliding window technique that can be used to solve the problem. We use two pointers start and end to represent starting and ending points of the sliding window. (Not that we need to find contiguous parts).

// Initially both start and endpoint to the beginning of the array, i.e. index 0. Now, let’s try to add a new element el. There are two possible conditions.

// 1st case :

// If sum is less than k, increment end by one position. So contiguous arrays this step produce are (end – start). We also add end to previous sum. There are as many such arrays as the length of the window.
// 2nd case :

// If sum becomes greater than or equal to k, this means we need to subtract starting element from sum so that the sum again becomes less than k. So we adjust the window’s left border by incrementing start.
// We follow the same procedure until end < array size.

// int countSubarrays(int arr[],
//                    int n, int k)
// {
//     int start = 0, end = 0,
//         count = 0, sum = arr[0];

//     while (start < n && end < n) {

// If sum is less than k,
// move end by one position.
// Update count and sum
// accordingly.
//         if (sum < k) {
//             end++;

//             if (end >= start)
//                 count += end - start;

// For last element,
// end may become n
//             if (end < n)
//                 sum += arr[end];
//         }

// If sum is greater than or
// equal to k, subtract
// arr[start] from sum and
// decrease sliding window by
// moving start by one position
//         else {
//             sum -= arr[start];
//             start++;
//         }
//     }

//     return count;
// }