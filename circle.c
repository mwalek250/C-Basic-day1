#include <stdio.h>

#define PI 3.14

int main() {
    float radius, area;

    // Input radius from user
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area
    area = PI * radius * radius;

    // Print result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}
