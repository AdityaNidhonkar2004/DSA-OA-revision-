// Count pairs in a sorted array whose sum is less than x:
// Given a sorted integer array and number x, the task is to count pairs in array whose sum is less than x.

// Examples:

// Input  : arr[] = {1, 3, 7, 9, 10, 11}
//          x = 7
// Output : 1
// There is only one pair (1, 3)

// Input  : arr[] = {1, 2, 3, 4, 5, 6, 7, 8}
//          x = 7
// Output : 6
// Pairs are (1, 2), (1, 3), (1, 4), (1, 5)
//           (2, 3) and (2, 4)

// Approach:
// 1) Initialize two variables i and j to find the candidate
//    elements in the sorted array.
//        (a) i= 0
//        (b) j = n - 1
// 2) Initialize : result = 0
// 2) Loop while i < j.
// If current left and current
// right have sum smaller than x,
// the all elements from i+1 to j
// form a pair with current
//     (a) If (arr[i] + arr[j] < x)
//           result = result + (j - r)
//           i++;

//     (b) Else
//             j--;

// 3) Return result
