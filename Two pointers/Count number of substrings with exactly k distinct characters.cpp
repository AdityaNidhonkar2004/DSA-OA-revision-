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

// #include <iostream>
// #include <string>
// #include <unordered_map>
// using namespace std;

// the number of subarrays with at most K distinct elements
// int most_k_chars(string& s, int k)
// {
// 	if (s.size() == 0) {
// 		return 0;
// 	}
// 	unordered_map<char, int> map;
// 	int num = 0, left = 0;

// 	for (int i = 0; i < s.size(); i++) {
// 		map[s[i]]++;
// 		while (map.size() > k) {
// 			map[s[left]]--;
// 			if (map[s[left]] == 0) {
// 				map.erase(s[left]);
// 			}
// 			left++;
// 		}
// 		num += i - left + 1;
// 	}
// 	return num;
// }

// int exact_k_chars(string& s, int k)
// {
// 	return most_k_chars(s, k) - most_k_chars(s, k - 1);
// }

// // Driver Program
// int main()
// {
// 	string s1 = "pqpqs";
// 	int k = 2;
// 	cout << "Total substrings with exactly " << k
// 		<< " distinct characters : "
// 		<< exact_k_chars(s1, k) << endl;

// 	string s2 = "aabab";
// 	k = 2;
// 	cout << "Total substrings with exactly " << k
// 		<< " distinct characters : "
// 		<< exact_k_chars(s2, k) << endl;
// }
