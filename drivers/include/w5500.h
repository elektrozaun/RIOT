/*
 * Copyright (C) 2022 Frankfurt University of Applied Sciences
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @defgroup    drivers_w5500 W5500 ethernet driver
 * @ingroup     drivers_netdev
 * @brief       Driver for W5500 ethernet devices
 *
 * This device driver only exposes the MACRAW mode of W5500 devices, so it does
 * not offer any support for the on-chip IPv4, UDP, and TCP capabilities of
 * these chips. In connection with RIOT we are only interested in the RAW
 * Ethernet packets, which we can use through netdev with any software network
 * stack provided by RIOT (e.g. GNRC). This enables W5500 devices to communicate
 * via IPv6, enables unlimited connections, and more...
 *
 * @note        This driver expects to be triggered by the external interrupt
 *              line of the W5500 device. On some Arduino shields this is not
 *              enabled by default, you have to close the corresponding solder
 *              bridge to make it work...
 *
 * @{
 *
 * @file
 * @brief       Interface definition for the W5500 device driver
 *
 * @author      Stefan Schmidt <stemschmidt@gmail.com>
 */

#ifndef W5500_H
#define W5500_H

#include <stdint.h>

#include "periph/spi.h"
#include "periph/gpio.h"
#include "net/netdev.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @brief   W5500 error codes
 */
enum {
    W5500_ERR_BUS = -1,
};

/**
 * @brief   W5500 device descriptor
 */
typedef struct {
    spi_t spi;              /**< SPI bus used */
    spi_clk_t clk;          /**< clock speed used on the selected SPI bus */
    gpio_t cs;              /**< pin connected to the chip select line */
    gpio_t evt;             /**< pin connected to the INT line */
} w5500_params_t;

/**
 * @brief   Device descriptor for W5500 devices
 */
typedef struct {
    netdev_t nd;            /**< extends the netdev structure */
    w5500_params_t p;       /**< device configuration parameters */
} w5500_t;

/**
 * @brief   So the initial device setup
 *
 * This function pre-initializes the netdev structure, saves the configuration
 * parameters and finally initializes the SPI bus and the used GPIO pins.
 *
 * @param [out] dev     the handle of the device to initialize
 * @param [in]  params  parameters for device initialization
 * @param [in]  index   Index of @p params in a global parameter struct array.
 *                      If initialized manually, pass a unique identifier instead.
 */
void w5500_setup(w5500_t *dev, const w5500_params_t *params, uint8_t index);

#ifdef __cplusplus
}
#endif

#endif /* W5500_H */
/** @} */
