char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char** result = malloc(n * sizeof(char*));
    
    for (int i = 1; i <= n; i++) {
        if (i % 15 == 0) {
            result[i - 1] = strdup("FizzBuzz");
        } else if (i % 3 == 0) {
            result[i - 1] = strdup("Fizz");
        } else if (i % 5 == 0) {
            result[i - 1] = strdup("Buzz");
        } else {
            result[i - 1] = malloc(12 * sizeof(char));
            sprintf(result[i - 1], "%d", i);
        }
    }
    return result;
}