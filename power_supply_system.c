```c
#include <stdio.h>

// Define the voltage and current values
#define VOLTAGE 5.0
#define CURRENT 2.0

// Function to initialize power supply
void initialize_power_supply() {
    printf("Initializing power supply...\n");
    printf("Voltage: %.2fV\n", VOLTAGE);
    printf("Current: %.2fA\n", CURRENT);
}

// Function to check power supply status
int check_power_supply_status() {
    printf("Checking power supply status...\n");
    // Here you can add code to check the status of the power supply
    // For example, you can check if the voltage and current are within the acceptable range
    // If everything is OK, return 1. Otherwise, return 0.
    return 1;
}

// Function to shut down power supply
void shutdown_power_supply() {
    printf("Shutting down power supply...\n");
    // Here you can add code to safely shut down the power supply
}

int main() {
    initialize_power_supply();
    if (check_power_supply_status()) {
        printf("Power supply is working properly.\n");
    } else {
        printf("There is a problem with the power supply.\n");
    }
    shutdown_power_supply();
    return 0;
}
```
