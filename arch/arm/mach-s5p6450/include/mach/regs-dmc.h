/* linux/arch/arm/mach-s5p6440/include/mach/regs-dmc.h
 *
 * Copyright (c) 2004 Simtec Electronics <linux@simtec.co.uk>
 *		http://www.simtec.co.uk/products/SWLINUX/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * S5P6440 DRAM Control register definitions
*/

#ifndef __ASM_ARM_DMCREGS_H
#define __ASM_ARM_DMCREGS_H

#ifndef S5P64XX_DMCREG
#define S5P64XX_DMCREG(x) (S5P64XX_VA_DMC + (x))
#endif

#define S5P64XX_CONCONTROL	S5P64XX_DMCREG(0x00)

#define S5P64XX_MEMCONTROL	S5P64XX_DMCREG(0x04)
#define S5P64XX_MEMCONFIG0	S5P64XX_DMCREG(0x08)
#define S5P64XX_MEMCONFIG1	S5P64XX_DMCREG(0x0C)
#define S5P64XX_DIRECTCMD	S5P64XX_DMCREG(0x10)
#define S5P64XX_PRECHCONFIG	S5P64XX_DMCREG(0x14)
#define S5P64XX_PHYCONTROL0	S5P64XX_DMCREG(0x18)
#define S5P64XX_PHYCONTROL1	S5P64XX_DMCREG(0x1C)
#define S5P64XX_PHYCONTROL2	S5P64XX_DMCREG(0x20)

#define S5P64XX_PWRDNCONFIG	S5P64XX_DMCREG(0x28)
#define S5P64XX_TIMINGAREF	S5P64XX_DMCREG(0x30)
#define S5P64XX_TIMINGROW	S5P64XX_DMCREG(0x34)
#define S5P64XX_TIMINGDATA	S5P64XX_DMCREG(0x38)
#define S5P64XX_TIMINGPOWER	S5P64XX_DMCREG(0x3C)
#define S5P64XX_PHYSTATUS	S5P64XX_DMCREG(0x40)
#define S5P64XX_CHIP0STATUS	S5P64XX_DMCREG(0x48)
#define S5P64XX_CHIP1STATUS	S5P64XX_DMCREG(0x4C)
#define S5P64XX_AREFSTATUS	S5P64XX_DMCREG(0x50)
#define S5P64XX_MRSTATUS	S5P64XX_DMCREG(0x54)

#endif /* __ASM_ARM_DMCREGS_H */
