#include <stdio.h>
#include "temperature.h"

int main() {
    int choice;
    float temp, result;

    // Display the program header
    printf("Temperature Conversion Program\n");
    printf("Choose the conversion you want to perform:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Categorize Temperature\n");

    // Prompt the user to choose an option
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Switch-case to handle the different temperature conversion options
    switch (choice) {
        case 1:
            // Celsius to Fahrenheit conversion
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = celsius_to_fahrenheit(temp);  // Call the conversion function
            printf("%.2f Celsius = %.2f Fahrenheit\n", temp, result);
            break;
        case 2:
            // Fahrenheit to Celsius conversion
            printf("Enter temperature in Fahrenheit: ");
            scanf("%f", &temp);
            result = fahrenheit_to_celsius(temp);  // Call the conversion function
            printf("%.2f Fahrenheit = %.2f Celsius\n", temp, result);
            break;
        case 3:
            // Celsius to Kelvin conversion
            printf("Enter temperature in Celsius: ");
            scanf("%f", &temp);
            result = celsius_to_kelvin(temp);  // Call the conversion function
            printf("%.2f Celsius = %.2f Kelvin\n", temp, result);
            break;
        case 4:
            // Kelvin to Celsius conversion
            printf("Enter temperature in Kelvin: ");
            scanf("%f", &temp);
            result = kelvin_to_celsius(temp);  // Call the conversion function
            printf("%.2f Kelvin = %.2f Celsius\n", temp, result);
            break;
        case 5:
            // Categorize the temperature and give advice
            printf("Enter temperature in Celsius to categorize: ");
            scanf("%f", &temp);
            categorize_temperature(temp);  // Call the categorize function
            break;
        default:
            // Handle invalid input
            printf("Invalid choice! Please enter a number between 1 and 5.\n");
    }

    return 0;
}
