/*Given an integer x, return true if x is a palindrome, and false otherwise.



Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.*/


/*class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        if (x < 10)
            return true;
        int temp = x;
        int reverse = 0;
        while (temp != 0) {
            reverse *= 10;
            reverse += temp % 10;
            temp /= 10;
        }
        if (reverse == x)
            return true;
        else
            return false;
    }
};*/


//#include <string>
//using namespace std;
// 
// 
//class Solution {
//public:
//    bool isPalindrome(int x) {
//        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
//
//        string s = to_string(x);
//        for (int i = 0; i < s.length() / 2; i++) {
//            if (s[i] != s[s.length() - 1 - i])
//                return false;
//        }
//        return true;
//    }
//};

class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (but not 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // For even and odd digit counts:
        // Even: x == reversedHalf
        // Odd:  x == reversedHalf / 10 (middle digit doesn't matter)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};