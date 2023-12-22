```c
#include <stdio.h>

// Define the radiation level
#define RADIATION_LEVEL 0.0

// Function to initialize radiation hardened system
void initialize_radiation_hardened_system() {
    printf("Initializing radiation hardened system...\n");
    printf("Radiation Level: %.2f\n", RADIATION_LEVEL);
}

// Function to check radiation hardened system status
int check_radiation_hardened_system_status() {
    printf("Checking radiation hardened system status...\n");
    // Here you can add code to check the status of the radiation hardened system
    // For example, you can check if the radiation level is within the acceptable range
    // If everything is OK, return 1. Otherwise, return 0.
    return 1;
}

// Function to shut down radiation hardened system
void shutdown_radiation_hardened_system() {
    printf("Shutting down radiation hardened system...\n");
    // Here you can add code to safely shut down the radiation hardened system
}

// Function to control radiation hardened system
void control_radiation_hardened_system() {
    printf("Controlling radiation hardened system...\n");
    // Here you can add code to control the radiation hardened system
    // For example, you can adjust the radiation level or activate/deactivate the radiation protection
}

int main() {
    initialize_radiation_hardened_system();
    if (check_radiation_hardened_system_status()) {
        printf("Radiation hardened system is working properly.\n");
        control_radiation_hardened_system();
    } else {
        printf("There is a problem with the radiation hardened system.\n");
    }
    shutdown_radiation_hardened_system();
    return 0;
}
```
