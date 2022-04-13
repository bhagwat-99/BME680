#include <stdio.h>
#include "I2C.h"

char *i2c_bus = "/dev/i2c-1";
#define SLAVE_ADDR 0x77

unsigned char *ret_value;

int main()
{
    i2c_init(i2c_bus);

    printf("i2c bus opened successfully\n");

    ret_value = read_chip_ID();
    printf("Chip ID : %x\n",*ret_value);


    i2c_close(i2c_bus);

    return 0;
}
