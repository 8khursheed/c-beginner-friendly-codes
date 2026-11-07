#include <stdio.h>

int menu();
float calculateVolume(float radius, float height, float pi, int mode);

int main() {
    int choice;
    float radius, height;
    float pi = 3.14159; 
    float volume;

    choice = menu();
 
    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Enter the height: ");
    scanf("%f", &height);

    volume = calculateVolume(radius, height, pi, choice);

    if (choice == 1) {
        printf("\nThe volume of the cylinder is: %.2f\n", volume);
    } else {
        printf("\nThe volume of the cone is: %.2f\n", volume);
    }

    return 0;
}

int menu() {
    int userChoice;
    
    do {
        printf("=== Volume Calculator Menu ===\n");
        printf("1. Calculate Volume of a Cylinder\n");
        printf("2. Calculate Volume of a Cone\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &userChoice);
        
        if (userChoice != 1 && userChoice != 2) {
            printf("Invalid choice! Please enter either 1 or 2.\n\n");
        }
    } while (userChoice != 1 && userChoice != 2);
    
    return userChoice;
}

float calculateVolume(float radius, float height, float pi, int mode) {
    float result = 0.0;
    
    if (mode == 1) {
        result = pi * radius * radius * height;
    } 
    else if (mode == 2) {
        result = 0.333 * pi * radius * radius * height;
    }
    
    return result;
}
