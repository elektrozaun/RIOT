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
 * @brief       Register definitions for W5500 devices
 *
 * @author      Stefan Schmidt <stemschmidt@gmail.com>
 */

#ifndef W5500_REGS_H
#define W5500_REGS_H

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    SPI commands
 * @{
 */
#define CMD_READ            (0x08)
#define CMD_WRITE           (0x0c)
/** @} */

/**
 * @name    Common registers
 * @{
 */
#define REG_MODE            (0x0000)    /**< mode */
#define REG_GAR0            (0x0001)    /**< gateway address 0 */
#define REG_GAR1            (0x0002)    /**< gateway address 1 */
#define REG_GAR2            (0x0003)    /**< gateway address 2 */
#define REG_GAR3            (0x0004)    /**< gateway address 3 */
#define REG_SUBR0           (0x0005)    /**< subnet mask 0 */
#define REG_SUBR1           (0x0006)    /**< subnet mask 1 */
#define REG_SUBR2           (0x0007)    /**< subnet mask 2 */
#define REG_SUBR3           (0x0008)    /**< subnet mask 3 */
#define REG_SHAR0           (0x0009)    /**< source hardware address 0 */
#define REG_SHAR1           (0x000a)    /**< source hardware address 1 */
#define REG_SHAR2           (0x000b)    /**< source hardware address 2 */
#define REG_SHAR3           (0x000c)    /**< source hardware address 3 */
#define REG_SHAR4           (0x000d)    /**< source hardware address 4 */
#define REG_SHAR5           (0x000e)    /**< source hardware address 5 */
#define REG_SIPR0           (0x000f)    /**< source IP address 0 */
#define REG_SIPR1           (0x0010)    /**< source IP address 1 */
#define REG_SIPR2           (0x0011)    /**< source IP address 2 */
#define REG_SIPR3           (0x0012)    /**< source IP address 3 */
#define REG_INTLEVEL0       (0x0013)    /**< interrupt low level timer 0 */
#define REG_INTLEVEL1       (0x0014)    /**< interrupt low level timer 1 */
#define REG_IR              (0x0015)    /**< interrupt flags */
#define REG_IMR             (0x0016)    /**< interrupt masks */
#define REG_SIR             (0x0017)    /**< socket interrupt */
#define REG_SIMR            (0x0018)    /**< socket interupt mask */
#define REG_RTR0            (0x0019)    /**< retry time 0 */
#define REG_RTR1            (0x001a)    /**< retry time 1 */
#define REG_RCR             (0x001b)    /**< retry count */
#define REG_PTIMER          (0x001c)    /**< ppp lcp request timer */
#define REG_PMAGIC          (0x001d)    /**< ppp lcp magic number */
#define REG_PHAR0           (0x001e)    /**< ppp destination mac address 0 */
#define REG_PHAR1           (0x001f)    /**< ppp destination mac address 1 */
#define REG_PHAR2           (0x0020)    /**< ppp destination mac address 2 */
#define REG_PHAR3           (0x0021)    /**< ppp destination mac address 3 */
#define REG_PHAR4           (0x0022)    /**< ppp destination mac address 4 */
#define REG_PHAR5           (0x0023)    /**< ppp destination mac address 5 */
#define REG_PSID0           (0x0024)    /**< ppp session identification 0 */
#define REG_PSID1           (0x0025)    /**< ppp session identification 1 */
#define REG_PMRU0           (0x0026)    /**< ppp maximum segment size 0 */
#define REG_PMRU1           (0x0027)    /**< ppp maximum segment size 1 */
#define REG_UIPR0           (0x0028)    /**< unreachable IP address 0 */
#define REG_UIPR1           (0x0029)    /**< unreachable IP address 1 */
#define REG_UIPR2           (0x002a)    /**< unreachable IP address 2 */
#define REG_UIPR3           (0x002b)    /**< unreachable IP address 3 */
#define REG_UPORT0          (0x002c)    /**< unreachable port 0 */
#define REG_UPORT1          (0x002d)    /**< unreachable port 1 */
#define REG_PHYCFGR         (0x002e)    /**< phy configuration */
#define REG_VERSIONR        (0x0039)    /**< chip version */
/** @} */

/**
 * @name    Socket 0 register block -> upper nibble contains block select bits (bsb)
 * @{
 */
#define REG_S0_MR               (0x0800)    /**< socket 0 mode */
#define REG_S0_CR               (0x0801)    /**< socket 0 command */
#define REG_S0_IR               (0x0802)    /**< socket 0 interrupt */
#define REG_S0_SR               (0x0803)    /**< socket 0 status */
#define REG_S0_PORT0            (0x0804)    /**< socket 0 source port 0 */
#define REG_S0_PORT1            (0x0805)    /**< socket 0 source port 1 */
#define REG_S0_DHAR0            (0x0806)    /**< socket 0 destination hardware address 0 */
#define REG_S0_DHAR1            (0x0807)    /**< socket 0 destination hardware address 1 */
#define REG_S0_DHAR2            (0x0808)    /**< socket 0 destination hardware address 2 */
#define REG_S0_DHAR3            (0x0809)    /**< socket 0 destination hardware address 3 */
#define REG_S0_DHAR4            (0x080a)    /**< socket 0 destination hardware address 4 */
#define REG_S0_DHAR5            (0x080b)    /**< socket 0 destination hardware address 5 */
#define REG_S0_DIPR0            (0x080c)    /**< socket 0 destination IP address 0 */
#define REG_S0_DIPR1            (0x080d)    /**< socket 0 destination IP address 1 */
#define REG_S0_DIPR2            (0x080e)    /**< socket 0 destination IP address 2 */
#define REG_S0_DIPR3            (0x080f)    /**< socket 0 destination IP address 3 */
#define REG_S0_DPORT0           (0x0810)    /**< socket 0 destination port 0 */
#define REG_S0_DPORT1           (0x0811)    /**< socket 0 destination port 1 */
#define REG_S0_MSSR0            (0x0812)    /**< socket 0 maximum segment size 0 */
#define REG_S0_MSSR1            (0x0813)    /**< socket 0 maximum segment size 1 */
#define REG_S0_TOS              (0x0815)    /**< socket 0 IP TOS */
#define REG_S0_TTL              (0x0816)    /**< socket 0 IP TTL */
#define REG_S0_RXBUF_SIZE       (0x081e)    /**< socket 0 receive buffer size */
#define REG_S0_TXBUF_SIZE       (0x081f)    /**< socket 0 transmit buffer size */
#define REG_S0_TX_FSR0          (0x0820)    /**< socket 0 tx free size 0 */
#define REG_S0_TX_FSR1          (0x0821)    /**< socket 0 tx free size 1 */
#define REG_S0_TX_RD0           (0x0822)    /**< socket 0 tx read pointer 0 */
#define REG_S0_TX_RD1           (0x0823)    /**< socket 0 tx read pointer 1 */
#define REG_S0_TX_WR0           (0x0824)    /**< socket 0 tx write pointer 0 */
#define REG_S0_TX_WR1           (0x0825)    /**< socket 0 tx write pointer 1 */
#define REG_S0_RX_RSR0          (0x0826)    /**< socket 0 rx received size 0 */
#define REG_S0_RX_RSR1          (0x0827)    /**< socket 0 rx received size 1 */
#define REG_S0_RX_RD0           (0x0828)    /**< socket 0 rx read pointer 0 */
#define REG_S0_RX_RD1           (0x0829)    /**< socket 0 rx read pointer 1 */
#define REG_S0_RX_WR0           (0x082a)    /**< socket 0 rx write pointer 0 */
#define REG_S0_RX_WR1           (0x082b)    /**< socket 0 rx write pointer 1 */
#define REG_S0_IMR              (0x082c)    /**< socket 0 interrupt mask */
#define REG_S0_FRAG0            (0x082d)    /**< socket 0 fragment offset in IP header 0 */
#define REG_S0_FRAG1            (0x082e)    /**< socket 0 fragment offset in IP header 1 */
#define REG_S0_KPALVTR          (0x082f)    /**< socket 0 keep alive timer */
/** @} */

/**
 * @name    Some selected bitfield definitions
 * @{
 */
#define MODE_RESET          (0x80)      /**< device mode: reset */

#define RXBUF_8KB_TO_S0     (0x03)      /**< receive memory size: 8kib */
#define TXBUF_8KB_TO_S0     (0x03)      /**< transmit memory size: 8kib */

#define IMR_S0_INT          (0x01)      /**< global socket 0 interrupt mask */

#define MR_MACRAW           (0x04)      /**< socket mode: raw Ethernet */

#define CR_OPEN             (0x01)      /**< socket command: open */
#define CR_SEND_MAC         (0x21)      /**< socket command: send raw */
#define CR_RECV             (0x40)      /**< socket command: receive new data */

#define IR_RECV             (0x04)      /**< socket interrupt: data received */
#define IR_SEND_OK          (0x10)      /**< socket interrupt: send ok */

/** @} */

#ifdef __cplusplus
}
#endif

#endif /* W5500_REGS_H */
/** @} */
