#include <stdio.h>
#include "BME680.h"
#include "I2C.h"

unsigned char * read_chip_ID()
{
    uint8_t reg = CHIP_ID;
    uint8_t n_bytes = 1;
    
    return i2c_read(SLAVE_ADDR, CHIP_ID, n_bytes);
}

float read_temperature()
{
    uint8_t 
    uint8_t * p_ret_val = i2c_read(SLAVE_ADDR, unsigned char reg, unsigned char NBytes)
}