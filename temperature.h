#ifndef __TEMPERATURE_H__
#define __TEMPERATURE_H__

/**
 * @brief Convert temperature in Celsius to Fahrenheit
 * 
 * @param celsius
 * @return float
 */
float celsius_to_fahrenheit(float celsius);

/**
 * @brief Convert temperature in Fahrenheit to Celsius
 * 
 * @param fahrenheit
 * @return float
 */
float fahrenheit_to_celsius(float fahrenheit);

/**
 * @brief Convert temperature in Celsius to Kelvin
 * 
 * @param celsius
 * @return float
 */
float celsius_to_kelvin(float celsius);

/**
 * @brief Convert temperature in Kelvin to Celsius
 * 
 * @param kelvin
 * @return float
 */
float kelvin_to_celsius(float kelvin);

/**
 * @brief Categorize the temperature into different categories (Cold, Comfortable, Hot, etc.)
 * 
 * @param temperature
 * @return const char* 
 */
void categorize_temperature(float celsius);

#endif /* __TEMPERATURE_H__ */
