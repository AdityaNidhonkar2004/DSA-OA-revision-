// Find all triplets with zero sum:

// Given an array of distinct elements. The task is to find triplets in the array whose sum is zero.

// Examples :

// Input: arr[] = {0, -1, 2, -3, 1}
// Output: (0 -1 1), (2 -3 1)
// Explanation: The triplets with zero sum are 0 + -1 + 1 = 0 and 2 + -3 + 1 = 0

// Input: arr[] = {1, -2, 1, 0, 5}
// Output: 1 -2  1
// Explanation: The triplets with zero sum is 1 + -2 + 1 = 0

// Time Complexity: O(n2), Only two nested loops are required, so the time complexity is O(n2).
// Auxiliary Space: O(1), no extra space is required, so the space complexity is constant.

// Approach(using two pointers):
// -Sort the array
// -set three pointers i=0 j ,k
// -define for loop from i=0 to size-1
//   -set j=i+1 and k=size-1
//   -use while loop till j<k
//     -calculate sum=a[i]+a[j]+a[k]
//     -if(sum>0)
//       k--;
//
//     -else if sum<0
//         j++;
//     else
//       return true;
//

// C++ program to find triplets in a given
// array whose sum is zero
// #include <bits/stdc++.h>
// using namespace std;

// void findTriplets(int arr[], int n)
// {
//     bool found = false;

//     sort(arr, arr + n);

//     for (int i = 0; i < n - 1; i++) {
//         int j = i + 1;
//         int k = n - 1;
//         int x = arr[i];
//         while (j < k) {
//             if (x + arr[j] + arr[k] == 0) {
//
//                 j++;
//                 k--;
//                 found = true;
//             }

//             else if (x + arr[j] + arr[k] < 0)
//                 j++;

//             else
//                 k--;
//         }
//     }

//     if (found == false)
//         cout << " No Triplet Found" << endl;
// }

// int main()
// {
//     int arr[] = { 0, -1, 2, -3, 1 };
//     int n = sizeof(arr) / sizeof(arr[0]);
//     findTriplets(arr, n);
//     return 0;
// }