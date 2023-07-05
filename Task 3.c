#include<stdio.h>

int b(int a) {
    if(a > 30) {
        printf("Error!"); // Print an error message if the argument is too large
        return 0;
    }
    else if (a == 1) {
        return 2; // In this case, we have 2 options: either the number 5 or the number 9
    }
    else if (a == 2) {
        return 4; // In this case, there can be 4 options, namely: 55, 99, 59 95
    }
    else {
        return b(a - 1) + b(a - 2); // This is a function for calculating any sequence of numbers (up to and including 30)
    }
}

int main() {
    printf("Enter the input number:");
    int n;
    scanf("%d", &n); // Reading the input value from the keyboard
    printf("%d\n", b(n)); //Outputting the result from using a custom function

    return 0;
}
