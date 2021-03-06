/* linux/arch/arm/mach-s5p6450/include/mach/regs-gpio.h
 *
 * Copyright (c) 2009 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5P6450 - GPIO register definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARCH_REGS_GPIO_H
#define __ASM_ARCH_REGS_GPIO_H __FILE__

#include <mach/map.h>

/* Base addresses for each of the banks */
#define S5P6450_GPA_BASE		(S5P_VA_GPIO + 0x000)
#define S5P6450_GPB_BASE		(S5P_VA_GPIO + 0x020)
#define S5P6450_GPC_BASE		(S5P_VA_GPIO + 0x040)
#define S5P6450_GPD_BASE		(S5P_VA_GPIO + 0x060)
#define S5P6450_GPF_BASE		(S5P_VA_GPIO + 0x0A0)
#define S5P6450_GPG_BASE		(S5P_VA_GPIO + 0x0C0)
#define S5P6450_GPH_BASE		(S5P_VA_GPIO + 0x0E0)
#define S5P6450_GPI_BASE		(S5P_VA_GPIO + 0x100)
#define S5P6450_GPJ_BASE		(S5P_VA_GPIO + 0x120)
#define S5P6450_GPK_BASE		(S5P_VA_GPIO + 0x140)
#define S5P6450_GPN_BASE		(S5P_VA_GPIO + 0x830)
#define S5P6450_GPP_BASE		(S5P_VA_GPIO + 0x160)
#define S5P6450_GPQ_BASE		(S5P_VA_GPIO + 0x180)
#define S5P6450_GPR_BASE		(S5P_VA_GPIO + 0x290)
#define S5P6450_GPS_BASE		(S5P_VA_GPIO + 0x300)


#define S5P6450_SPCON0			(S5P_VA_GPIO + 0x1A0)
#define S5P6450_SPCON1			(S5P_VA_GPIO + 0x2B0)

#define S5P6450_LCDSRCON		(S5P_VA_GPIO + 0x2B8)
#define S5P6450_MEM0CONSLP0		(S5P_VA_GPIO + 0x1C0)
#define S5P6450_MEM0CONSLP1		(S5P_VA_GPIO + 0x1C4)
#define S5P6450_MEM0DRVCON		(S5P_VA_GPIO + 0x1D0)
#define S5P6450_MEM1DRVCON		(S5P_VA_GPIO + 0x1D4)

#define S5P6450_EINT0CON		(S5P_VA_GPIO + 0x900)
#define S5P6450_EINT0FLTCON0		(S5P_VA_GPIO + 0x910)
#define S5P6450_EINT0FLTCON1		(S5P_VA_GPIO + 0x914)
#define S5P6450_EINT0MASK		(S5P_VA_GPIO + 0x920)
#define S5P6450_EINT0PEND		(S5P_VA_GPIO + 0x924)

#define S5P6450_SPCONSLP		(S5P_VA_GPIO + 0x880)
#define S5P6450_SLPEN			(S5P_VA_GPIO + 0x930)
#define S5P6450_PSHOLD_CON		(S5P_VA_GPIO + 0x934)

#define S5P6450_EINT12CON		(S5P_VA_GPIO + 0x200)
#define S5P6450_EINT56CON		(S5P_VA_GPIO + 0x208)
#define S5P6450_EINT8CON		(S5P_VA_GPIO + 0x20C)
#define S5P6450_EINT12FLTCON	(S5P_VA_GPIO + 0x220)
#define S5P6450_EINT56FLTCON	(S5P_VA_GPIO + 0x228)
#define S5P6450_EINT8FLTCON		(S5P_VA_GPIO + 0x22C)
#define S5P6450_EINT12MASK		(S5P_VA_GPIO + 0x240)
#define S5P6450_EINT56MASK		(S5P_VA_GPIO + 0x248)
#define S5P6450_EINT8MASK		(S5P_VA_GPIO + 0x24C)
#define S5P6450_EINT12PEND		(S5P_VA_GPIO + 0x260)
#define S5P6450_EINT56PEND      (S5P_VA_GPIO + 0x268)
#define S5P6450_EINT8PEND		(S5P_VA_GPIO + 0x26C)

#define S5P6450_PRIORITY		(S5P_VA_GPIO + 0x280)
#define S5P6450_SERVICE			(S5P_VA_GPIO + 0x284)
#define S5P6450_SERVICEPEND		(S5P_VA_GPIO + 0x288)

/* SPCON0 reg Bit Map */
#define S5P6450_SPCON0_DRVCON_HSSPI_MASK	(0x3 << 28)
#define S5P6450_SPCON0_DRVCON_HSSPI_2mA		(0x0 << 28)
#define S5P6450_SPCON0_DRVCON_HSSPI_4mA		(0x2 << 28)
#define S5P6450_SPCON0_DRVCON_HSSPI_10mA	(0x1 << 28)
#define S5P6450_SPCON0_DRVCON_HSSPI_12mA	(0x3 << 28)

#define S5P6450_SPCON0_DRVCON_HSMMC_MASK	(0x3 << 26)
#define S5P6450_SPCON0_DRVCON_HSMMC_2mA		(0x0 << 26)
#define S5P6450_SPCON0_DRVCON_HSMMC_4mA		(0x2 << 26)
#define S5P6450_SPCON0_DRVCON_HSMMC_10mA	(0x1 << 26)
#define S5P6450_SPCON0_DRVCON_HSMMC_12mA	(0x3 << 26)

#define S5P6450_SPCON0_DRVCON_LCD_MASK		(0x3 << 24)
#define S5P6450_SPCON0_DRVCON_LCD_2mA		(0x0 << 24)
#define S5P6450_SPCON0_DRVCON_LCD_4mA		(0x2 << 24)
#define S5P6450_SPCON0_DRVCON_LCD_10mA		(0x1 << 24)
#define S5P6450_SPCON0_DRVCON_LCD_12mA		(0x3 << 24)

#define S5P6450_SPCON0_nRSTOUT_OEN			(1 << 20)

#define S5P6450_SPCON0_DRVCON_SPICLK1_MASK	(0x3 << 18)
#define S5P6450_SPCON0_DRVCON_SPICLK1_2mA	(0x0 << 18)
#define S5P6450_SPCON0_DRVCON_SPICLK1_4mA	(0x2 << 18)
#define S5P6450_SPCON0_DRVCON_SPICLK1_10mA	(0x1 << 18)
#define S5P6450_SPCON0_DRVCON_SPICLK1_12mA	(0x3 << 18)
#define S5P6450_SPCON0_MEM0_D_PUD_MASK		(0x3 << 8)
#define S5P6450_SPCON0_MEM0_D_PUD_DISABLED	(0x0 << 8)
#define S5P6450_SPCON0_MEM0_D_PUD_DOWN		(0x1 << 8)
#define S5P6450_SPCON0_MEM0_D_PUD_UP		(0x2 << 8)

#define S5P6450_SPCON0_LCD_SEL_MASK			(0x3 << 0)
#define S5P6450_SPCON0_LCD_SEL_I80			(0x0 << 0)
#define S5P6450_SPCON0_LCD_SEL_RGB			(0x1 << 0)

/* SPCON1 reg Bit Map */
#define S5P6450_SPCON1_DRVCON_I2C_PWM_MASK	(0x3 << 30)
#define S5P6450_SPCON1_DRVCON_I2C_PWM_2mA	(0x0 << 30)
#define S5P6450_SPCON1_DRVCON_I2C_PWM_4mA	(0x2 << 30)
#define S5P6450_SPCON1_DRVCON_I2C_PWM_10mA	(0x1 << 30)
#define S5P6450_SPCON1_DRVCON_I2C_PWM_12mA	(0x3 << 30)

#define S5P6450_SPCON1_DRVCON_UART_MASK		(0x3 << 28)
#define S5P6450_SPCON1_DRVCON_UART_2mA		(0x0 << 28)
#define S5P6450_SPCON1_DRVCON_UART_4mA		(0x2 << 28)
#define S5P6450_SPCON1_DRVCON_UART_10mA		(0x1 << 28)
#define S5P6450_SPCON1_DRVCON_UART_12mA		(0x3 << 28)

#define S5P6450_SPCON1_DRVCON_GPD_MASK		(0x3 << 26)
#define S5P6450_SPCON1_DRVCON_GPD_2mA		(0x0 << 26)
#define S5P6450_SPCON1_DRVCON_GPD_4mA		(0x2 << 26)
#define S5P6450_SPCON1_DRVCON_GPD_10mA		(0x1 << 26)
#define S5P6450_SPCON1_DRVCON_GPD_12mA		(0x3 << 26)


#define S5P6450_SPCON1_DRVCON_LCD_VD1_MASK	(0x3 << 24)
#define S5P6450_SPCON1_DRVCON_LCD_VD1_2mA	(0x0 << 24)
#define S5P6450_SPCON1_DRVCON_LCD_VD1_4mA	(0x2 << 24)
#define S5P6450_SPCON1_DRVCON_LCD_VD1_10mA	(0x1 << 24)
#define S5P6450_SPCON1_DRVCON_LCD_VD1_12mA	(0x3 << 24)

#define S5P6450_SPCON1_DRVCON_LCD_VD2_MASK	(0x3 << 22)
#define S5P6450_SPCON1_DRVCON_LCD_VD2_2mA	(0x0 << 22)
#define S5P6450_SPCON1_DRVCON_LCD_VD2_4mA	(0x2 << 22)
#define S5P6450_SPCON1_DRVCON_LCD_VD2_10mA	(0x1 << 22)
#define S5P6450_SPCON1_DRVCON_LCD_VD2_12mA	(0x3 << 22)

#define S5P6450_SPCON1_DRVCON_I2S2_MASK		(0x3 << 20)
#define S5P6450_SPCON1_DRVCON_I2S2_2mA		(0x0 << 20)
#define S5P6450_SPCON1_DRVCON_I2S2_4mA		(0x2 << 20)
#define S5P6450_SPCON1_DRVCON_I2S2_10mA		(0x1 << 20)
#define S5P6450_SPCON1_DRVCON_I2S2_12mA		(0x3 << 20)
#define S5P6450_SPCON1_MEM1_SR_CON5_SLOW	(0x1 << 13)
#define S5P6450_SPCON1_MEM1_SR_CON5_FAST	(0x0 << 13)

#define S5P6450_SPCON1_MEM1_SR_CON4_SLOW	(0x1 << 12)
#define S5P6450_SPCON1_MEM1_SR_CON4_FAST	(0x0 << 12)

#define S5P6450_SPCON1_MEM1_SR_CON3_SLOW	(0x1 << 11)
#define S5P6450_SPCON1_MEM1_SR_CON3_FAST	(0x0 << 11)

#define S5P6450_SPCON1_MEM1_SR_CON2_SLOW	(0x1 << 10)
#define S5P6450_SPCON1_MEM1_SR_CON2_FAST	(0x0 << 10)

#define S5P6450_SPCON1_MEM1_SR_CON1_SLOW	(0x1 << 9)
#define S5P6450_SPCON1_MEM1_SR_CON1_FAST	(0x0 << 9)

#define S5P6450_SPCON1_MEM1_SR_CON0_SLOW	(0x1 << 8)
#define S5P6450_SPCON1_MEM1_SR_CON0_FAST	(0x0 << 8)

#define S5P6450_SPCON1_DRVCON_I2S_V40_MASK	(0x3 << 6)
#define S5P6450_SPCON1_DRVCON_I2S_V40_2mA	(0x0 << 6)
#define S5P6450_SPCON1_DRVCON_I2S_V40_4mA	(0x2 << 6)
#define S5P6450_SPCON1_DRVCON_I2S_V40_10mA	(0x1 << 6)
#define S5P6450_SPCON1_DRVCON_I2S_V40_12mA	(0x3 << 6)

#define S5P6450_SPCON1_DRVCON_GPS_MASK		(0x3 << 4)
#define S5P6450_SPCON1_DRVCON_GPS_2mA		(0x0 << 4)
#define S5P6450_SPCON1_DRVCON_GPS_4mA		(0x2 << 4)
#define S5P6450_SPCON1_DRVCON_GPS_10mA		(0x1 << 4)
#define S5P6450_SPCON1_DRVCON_GPS_12mA		(0x3 << 4)

#define S5P6450_SPCON1_DRVCON_GPS_IO_MASK	(0x3 << 2)
#define S5P6450_SPCON1_DRVCON_GPS_IO_2mA	(0x0 << 2)
#define S5P6450_SPCON1_DRVCON_GPS_IO_4mA	(0x2 << 2)
#define S5P6450_SPCON1_DRVCON_GPS_IO_10mA	(0x1 << 2)
#define S5P6450_SPCON1_DRVCON_GPS_IO_12mA	(0x3 << 2)

/* LCDSRCON reg Bit Map */
#define S5P6450_LCDSRCON_VCLK_SLEWRATE_SLOW		(0x1 << 27)
#define S5P6450_LCDSRCON_VCLK_SLEWRATE_FAST		(0x0 << 27)

#define S5P6450_LCDSRCON_VDEN_SLEWRATE_SLOW		(0x1 << 26)
#define S5P6450_LCDSRCON_VDEN_SLEWRATE_FAST		(0x0 << 26)

#define S5P6450_LCDSRCON_VSYNC_SLEWRATE_SLOW	(0x1 << 25)
#define S5P6450_LCDSRCON_VSYNC_SLEWRATE_FAST	(0x0 << 25)

#define S5P6450_LCDSRCON_HSYNC_SLEWRATE_SLOW	(0x1 << 24)
#define S5P6450_LCDSRCON_HSYNC_SLEWRATE_FAST	(0x0 << 24)

#define S5P6450_LCDSRCON_DATA_SLEW_ALL_SLOW		(0xFFFFF)
#define S5P6450_LCDSRCON_DATA_SLEW_ALL_FAST		(0x0)

/* These set of macros are not really useful for the
 * GPF/GPI/GPJ/GPN/GPP,
 * useful for others set of GPIO's (4 bit)
 */
#define S5P6450_GPIO_CONMASK(__gpio)	(0xf << ((__gpio) * 4))
#define S5P6450_GPIO_INPUT(__gpio)	(0x0 << ((__gpio) * 4))
#define S5P6450_GPIO_OUTPUT(__gpio)	(0x1 << ((__gpio) * 4))

/* Use these macros for GPF/GPI/GPJ/GPN/GPP set of GPIO (2 bit)
 * */
#define S5P6450_GPIO2_CONMASK(__gpio)	(0x3 << ((__gpio) * 2))
#define S5P6450_GPIO2_INPUT(__gpio)	(0x0 << ((__gpio) * 2))
#define S5P6450_GPIO2_OUTPUT(__gpio)	(0x1 << ((__gpio) * 2))

#endif /* __ASM_ARCH_REGS_GPIO_H */
