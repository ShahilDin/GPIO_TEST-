#include <stdio.h> // Standar Input/Output Header File 
#include "driver/gpio.h" // This file contains declarations for functions and macros that are specific to the gpio of the ESP32 device. allows to control the GPIO
#include "freertos/FreeRTOS.h" //FreeRTOS is a real-time operating system kernel for microcontrollers, it allows to create task, semaphores, queue and other real-time related functionality. 
#include "freertos/task.h"///Delay function 

void app_main(void)
{
    // setting the input/output for the GPIO pin
    gpio_set_direction(GPIO_NUM_2,GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_0,GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_4,GPIO_MODE_OUTPUT);
    
    while(true)
    {
        // setting the value of those output to run the RGB 
        gpio_set_level(GPIO_NUM_0,1);
        gpio_set_level(GPIO_NUM_2,0);
        gpio_set_level(GPIO_NUM_4,0);

        vTaskDelay(100); //delay 

        gpio_set_level(GPIO_NUM_0,0);
        gpio_set_level(GPIO_NUM_2,1);
        gpio_set_level(GPIO_NUM_4,0);
        
        vTaskDelay(100);

        gpio_set_level(GPIO_NUM_0,0);
        gpio_set_level(GPIO_NUM_2,0);
        gpio_set_level(GPIO_NUM_4,1);
        
        vTaskDelay(100);
        

    }

    
}
