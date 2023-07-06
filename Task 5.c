#include <stdio.h>

int countSequences(int n) {
    // Creating an array dp to store intermediate results
    int dp[n + 1];

    // Base values for calculations
    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    // Calculation of sequences for n > 2
    for (int i = 3; i <= n; i++) {
        // The recurrence relation formula for dp[i]
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 12345;
    }

    // Return the value of dp[n] as the result
    return dp[n];
}

int main() {
    int n;

    // Request to enter the length of the sequence
    printf("Enter the length of the sequencen: ");
    scanf("%d", &n);

    // Call the countSequences function to count the number of sequences
    int result = countSequences(n);

    // Outputting the result
    printf("Number of searched sequences: %d\n", result);

    return 0;
}
