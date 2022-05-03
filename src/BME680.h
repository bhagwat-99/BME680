#ifndef _BME680_I2C_H
#define _BME680_I2C_H

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;


#define SLAVE_ADDR 0x77 //for i2c
//#define SLAVE_ADDR 0xd0 //for spi

#define CHIP_ID 0xd0

unsigned char * read_chip_ID();


#endif