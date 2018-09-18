/*
 * $Id: phy_config.h,v 1.2 Broadcom SDK $
 *
 * $Copyright: Copyright 2016 Broadcom Corporation.
 * This program is the proprietary software of Broadcom Corporation
 * and/or its licensors, and may only be used, duplicated, modified
 * or distributed pursuant to the terms and conditions of a separate,
 * written license agreement executed between you and Broadcom
 * (an "Authorized License").  Except as set forth in an Authorized
 * License, Broadcom grants no license (express or implied), right
 * to use, or waiver of any kind with respect to the Software, and
 * Broadcom expressly reserves all rights in and to the Software
 * and all intellectual property rights therein.  IF YOU HAVE
 * NO AUTHORIZED LICENSE, THEN YOU HAVE NO RIGHT TO USE THIS SOFTWARE
 * IN ANY WAY, AND SHOULD IMMEDIATELY NOTIFY BROADCOM AND DISCONTINUE
 * ALL USE OF THE SOFTWARE.  
 *  
 * Except as expressly set forth in the Authorized License,
 *  
 * 1.     This program, including its structure, sequence and organization,
 * constitutes the valuable trade secrets of Broadcom, and you shall use
 * all reasonable efforts to protect the confidentiality thereof,
 * and to use this information only in connection with your use of
 * Broadcom integrated circuit products.
 *  
 * 2.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS
 * PROVIDED "AS IS" AND WITH ALL FAULTS AND BROADCOM MAKES NO PROMISES,
 * REPRESENTATIONS OR WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY,
 * OR OTHERWISE, WITH RESPECT TO THE SOFTWARE.  BROADCOM SPECIFICALLY
 * DISCLAIMS ANY AND ALL IMPLIED WARRANTIES OF TITLE, MERCHANTABILITY,
 * NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, LACK OF VIRUSES,
 * ACCURACY OR COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR
 * CORRESPONDENCE TO DESCRIPTION. YOU ASSUME THE ENTIRE RISK ARISING
 * OUT OF USE OR PERFORMANCE OF THE SOFTWARE.
 * 
 * 3.     TO THE MAXIMUM EXTENT PERMITTED BY LAW, IN NO EVENT SHALL
 * BROADCOM OR ITS LICENSORS BE LIABLE FOR (i) CONSEQUENTIAL,
 * INCIDENTAL, SPECIAL, INDIRECT, OR EXEMPLARY DAMAGES WHATSOEVER
 * ARISING OUT OF OR IN ANY WAY RELATING TO YOUR USE OF OR INABILITY
 * TO USE THE SOFTWARE EVEN IF BROADCOM HAS BEEN ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGES; OR (ii) ANY AMOUNT IN EXCESS OF
 * THE AMOUNT ACTUALLY PAID FOR THE SOFTWARE ITSELF OR USD 1.00,
 * WHICHEVER IS GREATER. THESE LIMITATIONS SHALL APPLY NOTWITHSTANDING
 * ANY FAILURE OF ESSENTIAL PURPOSE OF ANY LIMITED REMEDY.$
 *
 */

/*
 * This config file defines all compilation-time specifications for the PHY library.
 * 
 * Reasonable defaults are provided for all configuration options where
 * appropriate.
 * 
 * You need not edit this file directly to change your configuration, nor is
 * modifying this file advised -- so doing will require manually merging
 * whenever the PHY is upgraded.
 * 
 * You should provide your own configuration options or overrides through
 * a combination of:
 * 
 *      1. The compiler command line, such as -D{OPTION}={VALUE}
 *      2. Create your own custom configuration file:
 *         a) Create a file called 'phy_custom_config.h'
 *         b) Define all custom settings, using this file as the reference
 *         c) Add -DPHY_INCLUDE_CUSTOM_CONFIG to your compilation
 *         d) Make sure the compilation include path includes 'phy_custom_config.h'
 */
#ifndef __PHY_CONFIG_H__
#define __PHY_CONFIG_H__


/*
 * Include basic types.
 */
#include <cdk_config.h>
#include <cdk/cdk_types.h>


/*
 * Include system config file if specified:
 */
#ifdef PHY_INCLUDE_CUSTOM_CONFIG
#include <phy_custom_config.h>
#endif


/*
 * Host/Architecture/System definitions for timer operations.
 * These values have no defaults and are required for controlling
 * chip initialization sequences, etc.
 */

#ifndef PHY_SYS_USLEEP
#error PHY_SYS_USLEEP must be defined for the target system/os
#else
extern int PHY_SYS_USLEEP(uint32_t usecs);
#endif


/*
 * OPTIONAL Feature definitions.
 * These all have reasonable defaults
 */

/* Auto-include support for internal PHYs based on CDK configuration. */
#ifndef PHY_CONFIG_INCLUDE_CHIP_AUTO
#define PHY_CONFIG_INCLUDE_CHIP_AUTO            1
#endif

/* Include PHY register symbols for use by a debug shell. */
#ifndef PHY_CONFIG_INCLUDE_CHIP_SYMBOLS
#define PHY_CONFIG_INCLUDE_CHIP_SYMBOLS         1
#endif

/* Set/get local and get link partner auto-negotiation abilities */
#ifndef PHY_CONFIG_INCLUDE_LINK_ABILITIES
#define PHY_CONFIG_INCLUDE_LINK_ABILITIES       1
#endif

/* Remote (line-side) loopback support */
#ifndef PHY_CONFIG_INCLUDE_REMOTE_LOOPBACK
#define PHY_CONFIG_INCLUDE_REMOTE_LOOPBACK      1
#endif

/* Extended PHY Configuration */

/* Default setting for extended PHY configuration */
#ifndef PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
#define PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT 1
#endif

/* Support for changing the XAUI Tx lane map */
#ifndef PHY_CONFIG_INCLUDE_XAUI_TX_LANE_MAP_SET
#define PHY_CONFIG_INCLUDE_XAUI_TX_LANE_MAP_SET PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
#endif

/* Support for changing the XAUI Rx lane map */
#ifndef PHY_CONFIG_INCLUDE_XAUI_RX_LANE_MAP_SET
#define PHY_CONFIG_INCLUDE_XAUI_RX_LANE_MAP_SET PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
#endif

/* Support for setting the XAUI Tx lane polarity */
#ifndef PHY_CONFIG_INCLUDE_XAUI_TX_POLARITY_SET
#define PHY_CONFIG_INCLUDE_XAUI_TX_POLARITY_SET PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
#endif

/* Support for setting the XAUI Rx lane polarity */
#ifndef PHY_CONFIG_INCLUDE_XAUI_RX_POLARITY_SET
#define PHY_CONFIG_INCLUDE_XAUI_RX_POLARITY_SET PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
#endif

/* Support for setting the PCS Tx lane polarity */
#ifndef PHY_CONFIG_INCLUDE_PCS_TX_POLARITY_SET
#define PHY_CONFIG_INCLUDE_PCS_TX_POLARITY_SET  PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
#endif

/* Support for setting the PCS Rx lane polarity */
#ifndef PHY_CONFIG_INCLUDE_PCS_RX_POLARITY_SET
#define PHY_CONFIG_INCLUDE_PCS_RX_POLARITY_SET  PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
#endif

/* Support for auto-tuning PHY transmit/receive signals. */
#ifndef PHY_CONFIG_INCLUDE_AUTO_TUNE
#define PHY_CONFIG_INCLUDE_AUTO_TUNE            PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
#endif

/* Enable an external boot ROM, if supported */
#ifndef PHY_CONFIG_EXTERNAL_BOOT_ROM
#define PHY_CONFIG_EXTERNAL_BOOT_ROM            PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
#endif

/* Allow fast firmware downloads by increasing MDIO clock frequency */
#ifndef PHY_CONFIG_MDIO_FAST_LOAD
#define PHY_CONFIG_MDIO_FAST_LOAD               1
#endif

/* Local PHY driver data storage in phy_ctrl_t structure. */
#ifndef PHY_CONFIG_PRIVATE_DATA_WORDS
#define PHY_CONFIG_PRIVATE_DATA_WORDS           1
#endif

#endif /* __PHY_CONFIG_H__ */

#ifdef CONFIG_OPTION
#ifdef PHY_INCLUDE_CUSTOM_CONFIG
CONFIG_OPTION(PHY_INCLUDE_CUSTOM_CONFIG)
#endif
#ifdef PHY_CONFIG_INCLUDE_CHIP_AUTO
CONFIG_OPTION(PHY_CONFIG_INCLUDE_CHIP_AUTO)
#endif
#ifdef PHY_CONFIG_INCLUDE_CHIP_SYMBOLS
CONFIG_OPTION(PHY_CONFIG_INCLUDE_CHIP_SYMBOLS)
#endif
#ifdef PHY_CONFIG_INCLUDE_LINK_ABILITIES
CONFIG_OPTION(PHY_CONFIG_INCLUDE_LINK_ABILITIES)
#endif
#ifdef PHY_CONFIG_INCLUDE_REMOTE_LOOPBACK
CONFIG_OPTION(PHY_CONFIG_INCLUDE_REMOTE_LOOPBACK)
#endif
#ifdef PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT
CONFIG_OPTION(PHY_CONFIG_EXTENDED_CONFIG_INCLUDE_DEFAULT)
#endif
#ifdef PHY_CONFIG_INCLUDE_XAUI_TX_LANE_MAP_SET
CONFIG_OPTION(PHY_CONFIG_INCLUDE_XAUI_TX_LANE_MAP_SET)
#endif
#ifdef PHY_CONFIG_INCLUDE_XAUI_RX_LANE_MAP_SET
CONFIG_OPTION(PHY_CONFIG_INCLUDE_XAUI_RX_LANE_MAP_SET)
#endif
#ifdef PHY_CONFIG_INCLUDE_XAUI_TX_POLARITY_SET
CONFIG_OPTION(PHY_CONFIG_INCLUDE_XAUI_TX_POLARITY_SET)
#endif
#ifdef PHY_CONFIG_INCLUDE_XAUI_RX_POLARITY_SET
CONFIG_OPTION(PHY_CONFIG_INCLUDE_XAUI_RX_POLARITY_SET)
#endif
#ifdef PHY_CONFIG_INCLUDE_PCS_TX_POLARITY_SET
CONFIG_OPTION(PHY_CONFIG_INCLUDE_PCS_TX_POLARITY_SET)
#endif
#ifdef PHY_CONFIG_INCLUDE_PCS_RX_POLARITY_SET
CONFIG_OPTION(PHY_CONFIG_INCLUDE_PCS_RX_POLARITY_SET)
#endif
#ifdef PHY_CONFIG_INCLUDE_AUTO_TUNE
CONFIG_OPTION(PHY_CONFIG_INCLUDE_AUTO_TUNE)
#endif
#ifdef PHY_CONFIG_EXTERNAL_BOOT_ROM
CONFIG_OPTION(PHY_CONFIG_EXTERNAL_BOOT_ROM)
#endif
#ifdef PHY_CONFIG_MDIO_FAST_LOAD
CONFIG_OPTION(PHY_CONFIG_MDIO_FAST_LOAD)
#endif
#ifdef PHY_CONFIG_PRIVATE_DATA_WORDS
CONFIG_OPTION(PHY_CONFIG_PRIVATE_DATA_WORDS)
#endif
#endif /* CONFIG_OPTION */
#include "phy_config_chips.h"
