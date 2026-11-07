int countOdds(int low, int high) {
    
    
    int total_numbers = high - low + 1;
    
    if (total_numbers % 2 == 0) {
        return total_numbers / 2;
    } else {
        // If total count is odd, check if either boundary is odd
        if (low % 2 != 0 || high % 2 != 0) {
            return (total_numbers / 2) + 1;
        } else {
            return total_numbers / 2;
        }
    }
}