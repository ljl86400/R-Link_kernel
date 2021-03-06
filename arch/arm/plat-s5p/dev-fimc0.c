/* linux/arch/arm/plat-s5p/dev-fimc0.c
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com/
 *
 * Device definition for fimc device 0
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#include <linux/kernel.h>
#include <linux/string.h>
#include <linux/platform_device.h>
#include <mach/map.h>
#include <asm/irq.h>
#include <plat/fimc.h>
#include <plat/devs.h>
#include <plat/cpu.h>

static struct resource s3c_fimc_resource[] = {
	[0] = {
		.start = S5P_PA_FIMC0,
		.end   = S5P_PA_FIMC0 + S5P_SZ_FIMC0 - 1,
		.flags = IORESOURCE_MEM,
	},
	[1] = {
		.start = IRQ_FIMC0,
		.end   = IRQ_FIMC0,
		.flags = IORESOURCE_IRQ,
	},
};

struct platform_device s3c_device_fimc0 = {
	.name		  = "s3c-fimc",
	.id		  = 0,
	.num_resources	  = ARRAY_SIZE(s3c_fimc_resource),
	.resource	  = s3c_fimc_resource,
};

static struct s3c_platform_fimc default_fimc0_data __initdata = {
	.default_cam	= CAMERA_PAR_A,
#if defined(CONFIG_CPU_S5PV210_EVT1)
	.hw_ver	= 0x45,
#else
	.hw_ver	= 0x43,
#endif
};

void __init s3c_fimc0_set_platdata(struct s3c_platform_fimc *pd)
{
	struct s3c_platform_fimc *npd;

	if (!pd)
		pd = &default_fimc0_data;

	npd = kmemdup(pd, sizeof(struct s3c_platform_fimc), GFP_KERNEL);
	if (!npd)
		printk(KERN_ERR "%s: no memory for platform data\n", __func__);
	else {
		if (!npd->cfg_gpio)
			npd->cfg_gpio = s3c_fimc0_cfg_gpio;

		if (!npd->clk_on)
			npd->clk_on = s3c_fimc_clk_on;

#if defined(CONFIG_CPU_S5PV210_EVT1)
		npd->hw_ver = 0x45;
#else
		npd->hw_ver = 0x43;
#endif
		s3c_device_fimc0.dev.platform_data = npd;
	}
}

