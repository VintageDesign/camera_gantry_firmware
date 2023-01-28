#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <inttypes.h>

#include <servo.h>


static const char *TAG = "APP";
extern "C" void app_main()
{
    Servo servo;
    servo.attach(23);
    while(true)
    {
    servo.write(0);
    vTaskDelay(1000/portTICK_PERIOD_MS);
    servo.write(100);
        vTaskDelay(1000/portTICK_PERIOD_MS);
    }
}
