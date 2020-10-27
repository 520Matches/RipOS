#ifndef _GPIO_H
#define _GPIO_H

#include "base.h"

#define GPFSEL1   ( BASE_ADDRESS + 0x200004)
#define GPPUD     ( BASE_ADDRESS + 0x200094)
#define GPPUDCLK0 ( BASE_ADDRESS + 0x200098)

extern void put32(unsigned long,unsigned int);
extern unsigned int get32(unsigned long);
extern void delay(unsigned long);

#endif
