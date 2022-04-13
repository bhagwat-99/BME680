#include <stdio.h>
#include "BME680.h"
#include "I2C.h"


unsigned char reg;
unsigned char *pret_value;

unsigned char * read_chip_ID()
{
    reg = CHIP_ID;
    return i2c_read(SLAVE_ADDR, CHIP_ID, 0x01);

}