/*
 * Copyright (C) 2022 Frankfurt University of Applied Sciences
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     drivers_w5500
 * @{
 *
 * @file
 * @brief       Default parameters for W5500 Ethernet devices
 *
 * @author      Stefan Schmidt <stemschmidt@gmail.com>
 */

#ifndef W5500_PARAMS_H
#define W5500_PARAMS_H

#include "board.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    Default configuration parameters for the W5500 driver
 * @{
 */
#ifndef W5500_PARAM_SPI
#define W5500_PARAM_SPI         (SPI_DEV(0))       /**< Default SPI device */
#endif
#ifndef W5500_PARAM_SPI_CLK
#define W5500_PARAM_SPI_CLK     (SPI_CLK_5MHZ)     /**< Default SPI speed */
#endif
#ifndef W5500_PARAM_CS
#define W5500_PARAM_CS          (GPIO_PIN(0, 0))   /**< Default SPI chip select pin */
#endif
#ifndef W5500_PARAM_EVT
#define W5500_PARAM_EVT         (GPIO_PIN(0, 1))   /**< Default event pin */
#endif

#ifndef W5500_PARAMS
#define W5500_PARAMS            { .spi = W5500_PARAM_SPI,     \
                                  .clk = W5500_PARAM_SPI_CLK, \
                                  .cs  = W5500_PARAM_CS,      \
                                  .evt = W5500_PARAM_EVT }
#endif
/** @} */

/**
 * @brief   W5500 configuration
 */
static const  w5500_params_t w5500_params[] = {
    W5500_PARAMS
};

#ifdef __cplusplus
}
#endif

#endif /* W5500_PARAMS_H */
/** @} */
