#ifndef I2C_H
#define I2C_H

#include <stdio.h> // printf()
#include <sys/types.h> // open()
#include <sys/stat.h> // open()
#include <fcntl.h> // open()
#include <sys/ioctl.h> // ioctl()
#include <errno.h> // errno
#include <string.h> // strerror()
#include <unistd.h> // close()
#include <linux/i2c-dev.h> // struct i2c_msg
#include <linux/i2c.h> // struct i2c_rdwr_ioctl_data

int i2c_init(char *i2c_bus);
int i2c_close(char *i2c_bus);


unsigned char * i2c_read(unsigned char slave_addr, unsigned char reg, unsigned char NBytes);
int i2c_write(unsigned char slave_addr, unsigned char reg, unsigned char *data_to_write, unsigned char NBytes);


#endif