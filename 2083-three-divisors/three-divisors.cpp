class Solution {
public:
    bool isThree(int n) {
        int root = sqrt(n);
        
        // Step 1: Check if n is a perfect square
        if (root * root != n) {
            return false;
        }
        
        // Step 2: Check if the square root is a prime number
        if (root <= 1) return false;
        for (int i = 2; i * i <= root; i++) {
            if (root % i == 0) {
                return false;
            }
        }
        
        return true;
    }
};