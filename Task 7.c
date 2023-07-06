#include <stdio.h>
#include <math.h>

// Function to find the number of intersection points between two circles
int findIntersectionPoints(int x1, int y1, int r1, int x2, int y2, int r2) {
    // Calculate the distance between the centers of the circles
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Check if the circles are completely inside or outside each other
    if (distance > r1 + r2) {
        // Circles do not intersect
        return 0;
    } else if (distance < fabs(r1 - r2)) {
        // One circle is completely inside the other
        return 0;
    } else if (distance == 0 && r1 == r2) {
        // Circles are coincident, infinite intersection points
        return -1;
    } else {
        // Circles intersect at two points
        return 2;
    }
}

int main() {
    int x1, y1, r1, x2, y2, r2;

    // Read input for the first circle and the second circle
    printf("Enter the coordinates and radius of the first circle (x1 y1 r1) and (x2 y2 r2): ");
    scanf("d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    // Find the number of intersection points
    int intersectionPoints = findIntersectionPoints(x1, y1, r1, x2, y2, r2);

    // Print the result
    if (intersectionPoints == -1) {
        printf("-1\n");
    } else {
        printf("Number of intersection points: %d\n", intersectionPoints);
    }

    return 0;
}
