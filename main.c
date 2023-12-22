```c
#include <stdio.h>

// Include the header files for the other systems
#include "power_supply_system.c"
#include "communication_system.c"
#include "sensor_data_system.c"
#include "control_system.c"
#include "radiation_hardened_system.c"

int main() {
    // Initialize all systems
    initialize_power_supply();
    initialize_communication_system();
    initialize_sensor_data_system();
    initialize_control_system();
    initialize_radiation_hardened_system();

    // Check the status of all systems
    int power_status = check_power_supply_status();
    int communication_status = check_communication_system_status();
    int sensor_status = check_sensor_data_system_status();
    int control_status = check_control_system_status();
    int radiation_status = check_radiation_hardened_system_status();

    // If all systems are working properly
    if (power_status && communication_status && sensor_status && control_status && radiation_status) {
        printf("All systems are working properly.\n");

        // Control systems
        control_power_supply();
        control_communication_system();
        control_sensor_data_system();
        control_radiation_hardened_system();

        // Get sensor data
        get_sensor_data();

        // Send data
        send_data("Hello, world!");

        // Receive data
        char* data = receive_data();
        printf("Received data: %s\n", data);
    } else {
        printf("There is a problem with one or more systems.\n");
    }

    // Shut down all systems
    shutdown_power_supply();
    shutdown_communication_system();
    shutdown_sensor_data_system();
    shutdown_control_system();
    shutdown_radiation_hardened_system();

    return 0;
}
```
