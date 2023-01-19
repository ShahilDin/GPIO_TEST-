#include <stdio.h>
#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_2,GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_0,GPIO_MODE_OUTPUT);
    gpio_set_direction(GPIO_NUM_4,GPIO_MODE_OUTPUT);
    
    while(true)
    {
        gpio_set_level(GPIO_NUM_0,1);
        gpio_set_level(GPIO_NUM_2,0);
        gpio_set_level(GPIO_NUM_4,0);

        vTaskDelay(100);

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