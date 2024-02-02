#ifndef __zblink_h__
#define __zblink_h__

#ifndef ZBLINK_LED
#define ZBLINK_LED led0
#endif

#define SET_LED() gpio_pin_set_dt(&led0, 1)
#define RES_LED() gpio_pin_set_dt(&led0, 0)
#define TOGGLE_LED() gpio_pin_toggle_dt(&led0)

void th_zblink();
#define DEFINE_THREAD_ZBLINK() K_THREAD_DEFINE(th_zblink_id, 512, th_zblink, NULL, NULL, NULL, 5, 0, 0)

#endif