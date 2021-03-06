#ifndef _HAL_H
#define _HAL_H

#include <inttypes.h>
#include <stdbool.h>

extern uint32_t g_syshz; 

void HAL_setup(void);

void xbd_reset(bool value);
void uart_write_char(char c);
void uart_write_str(char *str);
void xbd_reset(bool value);
void xbh_reset(void);
void power_gain_set(uint32_t xbpgain);

#define dint() __asm("cpsid i")
#define eint() __asm("cpsie i")

#endif
