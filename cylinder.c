
#include <stdio.h>

#define PI 3.14

int main() {
    float radius, height, volume;

    // Input radius and height from user
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume
    volume = PI * radius * radius * height;

    // Print result
    printf("The volume of the cylinder is: %.2f\n", volume);

    return 0;
    }
