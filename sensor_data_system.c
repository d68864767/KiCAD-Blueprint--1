```c
#include <stdio.h>

// Define the sensor values
#define TEMPERATURE 25.0
#define ACCELERATION 9.8
#define RADIATION_LEVEL 0.0

// Function to initialize sensor data system
void initialize_sensor_data_system() {
    printf("Initializing sensor data system...\n");
    printf("Temperature: %.2fC\n", TEMPERATURE);
    printf("Acceleration: %.2fms^2\n", ACCELERATION);
    printf("Radiation Level: %.2f\n", RADIATION_LEVEL);
}

// Function to check sensor data system status
int check_sensor_data_system_status() {
    printf("Checking sensor data system status...\n");
    // Here you can add code to check the status of the sensor data system
    // For example, you can check if the sensor values are within the acceptable range
    // If everything is OK, return 1. Otherwise, return 0.
    return 1;
}

// Function to shut down sensor data system
void shutdown_sensor_data_system() {
    printf("Shutting down sensor data system...\n");
    // Here you can add code to safely shut down the sensor data system
}

// Function to get sensor data
void get_sensor_data() {
    printf("Getting sensor data...\n");
    // Here you can add code to get data from the sensors
    // For now, we will just print the predefined sensor values
    printf("Temperature: %.2fC\n", TEMPERATURE);
    printf("Acceleration: %.2fms^2\n", ACCELERATION);
    printf("Radiation Level: %.2f\n", RADIATION_LEVEL);
}

int main() {
    initialize_sensor_data_system();
    if (check_sensor_data_system_status()) {
        printf("Sensor data system is working properly.\n");
        get_sensor_data();
    } else {
        printf("There is a problem with the sensor data system.\n");
    }
    shutdown_sensor_data_system();
    return 0;
}
```
