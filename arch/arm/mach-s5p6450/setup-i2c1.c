/* linux/arch/arm/plat-s5p/setup-i2c1.c
 *
 * Copyright (c) 2009 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * I2C0 GPIO configuration.
 *
 * Based on plat-s3c64xx/setup-i2c1.c
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include <linux/kernel.h>
#include <linux/types.h>

struct platform_device; /* don't need the contents */

#include <mach/gpio.h>
#include <plat/iic.h>
#include <plat/gpio-bank-r.h>
#include <plat/gpio-cfg.h>


void s3c_i2c1_cfg_gpio(struct platform_device *dev)
{
        s3c_gpio_cfgpin(S5P6450_GPR(9), S5P64XX_GPR9_I2C_SCL1);
        s3c_gpio_cfgpin(S5P6450_GPR(10), S5P64XX_GPR10_I2C_SDA1);
        s3c_gpio_setpull(S5P6450_GPR(9), S3C_GPIO_PULL_UP);
        s3c_gpio_setpull(S5P6450_GPR(10), S3C_GPIO_PULL_UP);
}





