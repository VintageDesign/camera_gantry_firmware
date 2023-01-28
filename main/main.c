#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <inttypes.h>
#include <stdio.h>

static const char *TAG = "APP";
void app_main()
{
    printf("Hello World!\n");

    esp_restart();
}
