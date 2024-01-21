#include <zephyr/kernel.h>
#include <zephyr/drivers/gpio.h>
#include "zblink.h"

extern const struct gpio_dt_spec ZBLINK_LED;

void th_zblink()
{
    int i;
    while (1)
    {
        for (i = 0; i < 6; i++)
        {
            gpio_pin_toggle_dt(&ZBLINK_LED);
            k_msleep(50);
        }
        gpio_pin_set_dt(&ZBLINK_LED, 0);
        k_msleep(1000);
    }
}
