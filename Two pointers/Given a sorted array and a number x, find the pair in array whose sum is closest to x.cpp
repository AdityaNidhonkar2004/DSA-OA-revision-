// Given a sorted array and a number x, find the pair in array whose sum is closest to x
// Given a sorted array and a number x, find a pair in an array whose sum is closest to x.

// Examples:

// Input: arr[] = {10, 22, 28, 29, 30, 40}, x = 54
// Output: 22 and 30

// Input: arr[] = {1, 3, 4, 7, 10}, x = 15
// Output: 4 and 10

// Approch:
// -set two pointers one at index 0 and another at index size-1
// -now loop till i<j
// -set diff to INT_MAX
// -and calulate a[i]+a[j]-x
// -get the minimum value of the diff and update the indices of the elements
// - now if a[i]+a[j]>x decrement j
// -else increment i

// // Initialize left and right indexes and difference between
//     // pair sum and x
//     int l = 0, r = n-1, diff = INT_MAX;

//     // While there are elements between l and r
//     while (r > l)
//     {
//        // Check if this pair is closer than the closest pair so far
//        if (abs(arr[l] + arr[r] - x) < diff)
//        {
//            res_l = l;
//            res_r = r;
//            diff = abs(arr[l] + arr[r] - x);
//        }

//        // If this pair has more sum, move to smaller values.
//        if (arr[l] + arr[r] > x)
//            r--;
//        else // Move to larger values
//            l++;
//     }

//     cout <<" The closest pair is " << arr[res_l] << " and " << arr[res_r];
// }

// // Driver program to test above functions
// int main()
// {
//     int arr[] =  {10, 22, 28, 29, 30, 40}, x = 54;
//     int n = sizeof(arr)/sizeof(arr[0]);
//     printClosest(arr, n, x);
//     return 0;
// }