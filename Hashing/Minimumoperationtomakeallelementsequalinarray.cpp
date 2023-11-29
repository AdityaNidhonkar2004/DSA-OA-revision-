// Given an array with n positive integers. We need to find the minimum number of operations to make all elements equal. We can perform addition, multiplication, subtraction, or division with any part on an array element.

// Examples:

// Input : arr[] = {1, 2, 3, 4}
// Output : 3
// Since all elements are different,
// we need to perform at least three
// operations to make them same. For
// example, we can make them all 1
// by doing three subtractions. Or make
// them all 3 by doing three additions.

// Input : arr[] = {1, 1, 1, 1}
// Output : 0

// Approach:
// - to get the highest frequency of the element in the array
// -now to get the minimum no. of operations we need to subtract the the freq with the size of array
// -and the ans is ready .

// int minioperations(vector<int> &v){
//   int cnt=0;
//   unordered_map<int,int> mp;
//   for(int i=0;i<v.size();i++){
//       mp[v[i]]++;
//       if(mp[v[i]]>cnt){
//         cnt=mp[v[i]];
//       }
//   }
//   return v.size()-cnt;
// }
