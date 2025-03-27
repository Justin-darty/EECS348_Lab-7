#include <stdio.h>
#include "temperature.h"

/**
 * @brief Convert temperature in Celsius to Fahrenheit
 * 
 * @param celsius
 * @return float
 */
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

/**
 * @brief Convert temperature in Fahrenheit to Celsius
 * 
 * @param fahrenheit
 * @return float
 */
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32.0) * 5.0 / 9.0;
}

/**
 * @brief Convert temperature in Celsius to Kelvin
 * 
 * @param celsius
 * @return float
 */
float celsius_to_kelvin(float celsius) {
    return celsius + 273.15;
}

/**
 * @brief Convert temperature in Kelvin to Celsius
 * 
 * @param kelvin
 * @return float
 */
float kelvin_to_celsius(float kelvin) {
    return kelvin - 273.15;
}

/**
 * @brief Categorize the temperature and provide an advisory message
 * 
 * @param celsius
 */
void categorize_temperature(float celsius) {
    const char* category;
    const char* advisory;

    if (celsius <= 0) {
        category = "Freezing";
        advisory = "Stay warm, wear layers, and limit exposure to cold.";
    } else if (celsius > 0 && celsius <= 10) {
        category = "Cold";
        advisory = "Wear a coat, gloves, and a scarf to stay comfortable.";
    } else if (celsius > 10 && celsius <= 25) {
        category = "Comfortable";
        advisory = "A light jacket or sweater should be enough.";
    } else if (celsius > 25 && celsius <= 35) {
        category = "Hot";
        advisory = "Stay hydrated and wear light clothing.";
    } else {
        category = "Extreme Heat";
        advisory = "Avoid direct sun exposure and stay indoors if possible.";
    }

    // Print the categorization and advisory
    printf("Temperature Category: %s\n", category);
    printf("Advisory: %s\n", advisory);
}
//comment
