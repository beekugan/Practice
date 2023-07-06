#include <stdio.h>

int minSteps(int x, int y) {
    if (x == y) { // If x and y are the same, no step is required
        return 0;
    } else if (y - x == 1) { //If the difference between x and y is 1, one step is required
        return 1;
    } else if (y - x < 3) { // If the difference between x and y is less than or equal to 3, two steps are required
        return 2;
    } else if (y - x == 3) { // If the difference between x and y is less than or equal to 3, three steps are required
        return 3;
    } else {
        int a = (y - x - 2) / 2; // Number of 2-step transitions
        int b = (y - x - 2) % 2; // The balance if it is not possible to make a full 2-step transition
        return 2 + a + b;
    }
}

int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);

    if (x < 0 || x >= 2147483648 || y < 0 || y >= 2147483648 || x > y) {
        printf("Invalid x and y values.\n");
        return 1;
    }

    int steps = minSteps(x, y);
    printf("Minimum number of steps: %d\n", steps);

    return 0;
}
