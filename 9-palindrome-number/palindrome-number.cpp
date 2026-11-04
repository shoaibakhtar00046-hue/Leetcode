class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers and numbers ending in 0 (except 0 itself) are not palindromes
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // When the length is an odd number, we can get rid of the middle digit by reversedHalf / 10
        // e.g., when x = 12321, x = 12, reversedHalf = 123 -> compare 12 with 123 / 10 (12)
        return x == reversedHalf || x == reversedHalf / 10;
    }
};