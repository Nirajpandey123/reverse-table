#include <stdio.h>

int main() {
    int choice;
    float area;

    printf("Calculate Area:\n");
    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Square\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: {
            float length, width;
            printf("Enter length of rectangle: ");
            scanf("%f", &length);
            printf("Enter width of rectangle: ");
            scanf("%f", &width);
            area = length * width;
            printf("Area of Rectangle: %.2f\n", area);
            break;
        }
        case 2: {
            float radius;
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            area = 3.14* radius * radius; 
            printf("Area of Circle: %.2f\n", area);
            break;
        }
        case 3: {
            float side;
            printf("Enter side of square: ");
            scanf("%f", &side);
            area = side * side;
            printf("Area of Square: %.2f\n", area);
            break;
        }
        default:
            printf("Invalid choice! Please enter a number between 1 and 3.\n");
            break;
    }

    return 0;
}
