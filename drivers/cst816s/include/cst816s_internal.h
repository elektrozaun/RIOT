/*
 * Copyright (C) 2020 Koen Zandberg
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */
/**
 * @ingroup     drivers_cst816s
 *
 * @{
 * @file
 * @brief       Internal constants for cst816s
 *
 * @author      Koen Zandberg <koen@bergzand.net>
 */
#ifndef CST816S_INTERNAL_H
#define CST816S_INTERNAL_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    cst816s timing constants
 * @{
 */
#define CST816S_RESET_DURATION_LOW_MS       (20)    /**< Duration of reset pin low (in ms) */
#define CST816S_RESET_DURATION_HIGH_MS      (400)   /**< Duration of reset pin high (in ms) */
#define CST816S_INIT_DELAY                  (300)   /**< delay between init commands (in us) */
/** @} */

#define CST816S_POWER_CONTROL_REG           0xe5
#define CST816S_PWR_NORMAL_OPERATION        0x00
#define CST816S_PWR_DEEP_SLEEP_CMD          0x03

#define CST816S_CHIP_ID_REG                 0xa7
#define CHIP_ID_CST816S                     0xb4
#define CHIP_ID_CST716                      0x20
#define CST816S_VENDOR_ID_REG               0xa8
#define CST816S_FIRMWARE_VERSION_REG        0xa9

/* read-write */
#define CST816S_MOTION_MASK_REG             0xec
#define CST816S_MOTION_MASK_EN_DCLICK       (1U << 0)  /* EnDClick - Enable Double-click action */
#define CST816S_MOTION_MASK_EN_CON_UD       (1U << 1)  /* EnConUD - Slide up and down to enable continuous operation */
#define CST816S_MOTION_MASK_EN_CON_LR       (1U << 2)  /* EnConLR - Continuous operation can slide around */

/* read-write, Interrupt low pulse output width. Unit 0.1ms, possible value: 1～200. The default value is 10. */
#define CST816S_IRQ_PULSE_WIDTH             0xed

/* read-write. Normal fast detection cycle. This value affects LpAutoWakeTime and AutoSleepTime. Unit 10ms, possible value: 1～30. */
/* The default value is 1. */
#define CST816S_NOR_SCAN_PER                0xee

/* read-write, gesture detection sliding partition angle control. Angle=tan(c)*10. c is the angle based on the positive direction of */
/* the x-axis. */
#define CST816S_MOTION_S1_ANGLE             0xef

/* readonly, Low power scan, MSB/LSB of the reference value of channel 1/2. */
#define CST816S_LP_SCAN_RAW1_H              0xf0
#define CST816S_LP_SCAN_RAW1_L              0xf1
#define CST816S_LP_SCAN_RAW2_H              0xf2
#define CST816S_LP_SCAN_RAW2_L              0xf3

/* read-write**. Automatic recalibration cycle in low power mode. The unit is 1 minute, and the possible value is 1 to 5. The default */
/* value is 5. */
#define CST816S_LP_AUTO_WAKE_TIME           0xf4
/* read-write**. Low-power scan wake-up threshold. The smaller the more sensitive. Possible values: 1 to 255. The default value */
/* is 48. */
#define CST816S_LP_SCAN_TH                  0xf5
/* read-write**. Low power scan range. The larger the more sensitive, the higher the power consumption. Possible values: 0, 1, 2, 3. */
/* The default value is 3. */
#define CST816S_LP_SCAN_WIN                 0xf6
/* read-write**. Low power scan frequency. The smaller the more sensitive. Possible values: 1 to 255. The default value is 7. */
#define CST816S_LP_SCAN_FREQ                0xf7
/* read-write**. Low power scan current. The smaller the more sensitive. Possible values: 1 to 255. */
#define CST816S_LP_SCAN_I_DAC               0xf8
/* read-write**. Automatically enter low power mode when there is no touch for x seconds. The unit is 1s, the default value is 2. */
#define CST816S_AUTO_SLEEP_TIME             0xf9

/* read-write*. Interrupt configuration */
#define CST816S_INTERRUPT_CONTROL_REG       0xfa
#define CST816S_INT_ONCE_WLP                (1U << 0)  /* OnceWLP - The long press gesture only emits a low pulse signal. */
#define CST816S_INT_EN_MOTION               (1U << 4)  /* EnMotion - When a gesture is detected, a low pulse is emitted. */
#define CST816S_INT_EN_CHANGE               (1U << 5)  /* EnChange - A low pulse is emitted when a touch state change is detected. */
#define CST816S_INT_EN_TOUCH                (1U << 6)  /* EnTouch - Periodically emit low pulses when a touch is detected. */
#define CST816S_INT_EN_TEST                 (1U << 7)  /* EnTest - Interrupt pin test, automatically and periodically send low pulses after enabling. */

/* read-write. Automatic reset (cancel) when there is a touch but no valid gesture within x seconds. The unit is 1s. When it is 0, */
/* this function is not enabled. Default is 5. */
#define CST816S_AUTO_RESET                  0xfb

/* read-write. Automatic reset (cancel) after long press for x seconds. The unit is 1s. When it is 0, this function is not enabled. */
/* Default is 10. */
#define CST816S_LONG_PRESS_TIME             0xfc

/* read-write. Pin IO configuration. */
#define CST816S_IO_CTL                      0xfd
#define CST816S_IO_CTL_EN_1V8               (1U << 0) /* I2C and IRQ pin voltage level selection, the default is VDD level. 0: VDD, 1: 1.8V. */
#define CST816S_IO_CTL_IIC_OD               (1U << 1) /* I2C pin drive mode, the default is resistor pull-up. 0: Resistor pull-up 1: OD. */
#define CST816S_IO_CTL_SOFT_RST             (1U << 2) /* Enable soft reset by pulling down the IRQ pin. 0: Soft reset is disabled. 1: Enable soft reset. */

/* read-write**. The default is 0, enabling automatic entry into low power mode. When it is a non-zero value, automatic entry into */
/* low power mode is disabled. */
#define CST816S_AUTO_SLEEP_DIS_REG          0xfe
#define CST816S_AUTO_SLEEP_ENABLE           0x00
#define CST816S_AUTO_SLEEP_DISABLE          0x01

#ifdef __cplusplus
}
#endif

#endif /* CST816S_INTERNAL_H */
/** @} */
