#include <stdio.h>

int main() {
    int n, count = 0;
    // Entering a number by the user
    printf("Enter a natural number (greater than 1 and less than 150): ");
    scanf("%d", &n);

    // Checking the correctness of the entered number
    if (n <= 1 || n >= 150) {
        printf("The entered number does not satisfy the constraint. Try again.\n");
        return 0;
    }
    // A loop to check the divisors of n
    for (int i = 1; i <= n; i++) {
        if (n % i == n / i) {
            count++;
        }
    }
    // Derivation of the result of the problem
    printf("The number of equal divisors of the number %d is %d\n", n, count);

    return 0;
}
