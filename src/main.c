#include <stdio.h>
#include "I2C.h"
#include "BME680.h"

char *i2c_bus = "/dev/apalis-i2c1";
#define SLAVE_ADDR 0x77

unsigned char *ret_value;

int main()
{
    int ret_val = i2c_init(i2c_bus);
    if(ret_val<0)
    {
        return -1;
    }

    ret_value = read_chip_ID();

    printf("Chip ID : %x\n",*ret_value);


    i2c_close(i2c_bus);

    return 0;
}
