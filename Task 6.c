#include <stdio.h>
#include <math.h>

// A function for calculating the length of a vector
double calculateVectorLength(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1; // The difference in the x coordinate
    int dy = y2 - y1; // The difference in the y coordinate
    double length = sqrt(dx * dx + dy * dy); // Calculation of the square root of the sum of the squares of the differences
    return length; // We return the calculated length of the vector
}

int main() {
    int x1, y1, x2, y2;

    printf("Enter the coordinates of the vector's start (x1 y1) and (x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    double length = calculateVectorLength(x1, y1, x2, y2); //Call the function to calculate the length of the vector

    printf("The length of the vector is: %.6f\n", length); // The output of the result is accurate to six decimal places

    return 0;
}
