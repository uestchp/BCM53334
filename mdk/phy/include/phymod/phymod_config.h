/*
 * $Id: phymod_config.h,v 1.3 Broadcom SDK $
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
 * This config file defines all compilation-time specifications for the PHYMOD library.
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
 *         a) Create a file called 'phymod_custom_config.h'
 *         b) Define all custom settings, using this file as the reference
 *         c) Add -DPHYMOD_INCLUDE_CUSTOM_CONFIG to your compilation
 *         d) Make sure the compilation include path includes 'phymod_custom_config.h'
 * 
 */
#ifndef __PHYMOD_CONFIG_H__
#define __PHYMOD_CONFIG_H__

#define PHYMOD_INCLUDE_CUSTOM_CONFIG		1 

/*
 * Include custom config file if specified:
 */
#ifdef PHYMOD_INCLUDE_CUSTOM_CONFIG
#include <phymod_custom_config.h>
#endif

/* System definitions for basic C types. */

/* Type uint8_t is not provided by the system */
#ifndef PHYMOD_CONFIG_DEFINE_UINT8_T
#define PHYMOD_CONFIG_DEFINE_UINT8_T            1
#endif

/* Default type definition for uint8_t */
#ifndef PHYMOD_CONFIG_TYPE_UINT8_T
#define PHYMOD_CONFIG_TYPE_UINT8_T              unsigned char
#endif

/* Type uint16_t is not provided by the system */
#ifndef PHYMOD_CONFIG_DEFINE_UINT16_T
#define PHYMOD_CONFIG_DEFINE_UINT16_T           1
#endif

/* Default type definition for uint16_t */
#ifndef PHYMOD_CONFIG_TYPE_UINT16_T
#define PHYMOD_CONFIG_TYPE_UINT16_T             unsigned short
#endif

/* Type uint32_t is not provided by the system */
#ifndef PHYMOD_CONFIG_DEFINE_UINT32_T
#define PHYMOD_CONFIG_DEFINE_UINT32_T           1
#endif

/* Default type definition for uint32_t */
#ifndef PHYMOD_CONFIG_TYPE_UINT32_T
#define PHYMOD_CONFIG_TYPE_UINT32_T             unsigned int
#endif

/* Type size_t is not provided by the system */
#ifndef PHYMOD_CONFIG_DEFINE_SIZE_T
#define PHYMOD_CONFIG_DEFINE_SIZE_T             1
#endif

/* Default type definition for size_t */
#ifndef PHYMOD_CONFIG_TYPE_SIZE_T
#define PHYMOD_CONFIG_TYPE_SIZE_T               unsigned int
#endif

/* Formatting macro PHYMOD_PRIu32 is not provided by the system */
#ifndef PHYMOD_CONFIG_DEFINE_PRIu32
#define PHYMOD_CONFIG_DEFINE_PRIu32             1
#endif

/* Default definition for formatting macro PHYMOD_PRIu32 */
#ifndef PHYMOD_CONFIG_MACRO_PRIu32
#define PHYMOD_CONFIG_MACRO_PRIu32              "u"
#endif

/* Formatting macro PHYMOD_PRIx32 is not provided by the system */
#ifndef PHYMOD_CONFIG_DEFINE_PRIx32
#define PHYMOD_CONFIG_DEFINE_PRIx32             1
#endif

/* Default definition for formatting macro PHYMOD_PRIx32 */
#ifndef PHYMOD_CONFIG_MACRO_PRIx32
#define PHYMOD_CONFIG_MACRO_PRIx32              "x"
#endif

/* Error codes are not provided by the system */
#ifndef PHYMOD_CONFIG_DEFINE_ERROR_CODES
#define PHYMOD_CONFIG_DEFINE_ERROR_CODES        1
#endif

/*
 * Host/Architecture/System definitions for timer operations.
 * These values have no defaults and are required for controlling
 * chip initialization sequences, etc.
 */

/*
 * OPTIONAL Feature definitions.
 * These all have reasonable defaults
 */

/* Include support for printing error messages. */
#ifndef PHYMOD_CONFIG_INCLUDE_ERROR_PRINT
#define PHYMOD_CONFIG_INCLUDE_ERROR_PRINT       1
#endif

/* Include support for printing debug messages. */
#ifndef PHYMOD_CONFIG_INCLUDE_DEBUG_PRINT
#define PHYMOD_CONFIG_INCLUDE_DEBUG_PRINT       1
#endif

/* Include support for printing diagnostics output. */
#ifndef PHYMOD_CONFIG_INCLUDE_DIAG_PRINT
#define PHYMOD_CONFIG_INCLUDE_DIAG_PRINT        1
#endif

/* Include support for floating point in diagnostics functions. */
#ifndef PHYMOD_CONFIG_INCLUDE_FLOATING_POINT
#define PHYMOD_CONFIG_INCLUDE_FLOATING_POINT    0
#endif

/* Include PHY register symbols for use by a debug shell. */
#ifndef PHYMOD_CONFIG_INCLUDE_CHIP_SYMBOLS
#define PHYMOD_CONFIG_INCLUDE_CHIP_SYMBOLS      1
#endif

/*
 * Include register and memory field information for the debug shell.
 * This provides encoding, decoding, and displaying individual field values
 * for each register and memory.
 * Requires more code space than just the chip symbols alone.
 */
#ifndef PHYMOD_CONFIG_INCLUDE_FIELD_INFO
#define PHYMOD_CONFIG_INCLUDE_FIELD_INFO        1
#endif

/*
 * Use symbolic names for all of the fields in a register or memory when
 * encoding or decoding them.
 * This is the most powerful option, but increases the code size a little
 * beyond the basic field information (which deals only with the bit spans
 * of the fields). Definitely enable if you have space.
 */
#ifndef PHYMOD_CONFIG_INCLUDE_FIELD_NAMES
#define PHYMOD_CONFIG_INCLUDE_FIELD_NAMES       1
#endif

/*
 * Include alternative symbol names for registers and memories.
 * Mainly for internal Broadcom use, so you can safely leave this option off.
 */
#ifndef PHYMOD_CONFIG_INCLUDE_ALIAS_NAMES
#define PHYMOD_CONFIG_INCLUDE_ALIAS_NAMES       1
#endif

/*
 * Include reset values for registers and memories.
 * Mainly for internal Broadcom use, so you can safely leave this option off.
 */
#ifndef PHYMOD_CONFIG_INCLUDE_RESET_VALUES
#define PHYMOD_CONFIG_INCLUDE_RESET_VALUES      0
#endif

/* Allow fast firmware downloads by increasing MDIO clock frequency */
#ifndef PHYMOD_CONFIG_MDIO_FAST_LOAD
#define PHYMOD_CONFIG_MDIO_FAST_LOAD            1
#endif

/* Maximum cores per logical port */
#ifndef PHYMOD_CONFIG_MAX_CORES_PER_PORT
#define PHYMOD_CONFIG_MAX_CORES_PER_PORT        3
#endif

/* Maximum lanes per core/chip */
#ifndef PHYMOD_CONFIG_MAX_LANES_PER_CORE
#define PHYMOD_CONFIG_MAX_LANES_PER_CORE        8
#endif

#endif /* __PHYMOD_CONFIG_H__ */

#ifdef CONFIG_OPTION
#ifdef PHYMOD_CONFIG_DEFINE_UINT8_T
CONFIG_OPTION(PHYMOD_CONFIG_DEFINE_UINT8_T)
#endif
#ifdef PHYMOD_CONFIG_DEFINE_UINT16_T
CONFIG_OPTION(PHYMOD_CONFIG_DEFINE_UINT16_T)
#endif
#ifdef PHYMOD_CONFIG_DEFINE_UINT32_T
CONFIG_OPTION(PHYMOD_CONFIG_DEFINE_UINT32_T)
#endif
#ifdef PHYMOD_CONFIG_DEFINE_SIZE_T
CONFIG_OPTION(PHYMOD_CONFIG_DEFINE_SIZE_T)
#endif
#ifdef PHYMOD_CONFIG_DEFINE_PRIu32
CONFIG_OPTION(PHYMOD_CONFIG_DEFINE_PRIu32)
#endif
#ifdef PHYMOD_CONFIG_DEFINE_PRIx32
CONFIG_OPTION(PHYMOD_CONFIG_DEFINE_PRIx32)
#endif
#ifdef PHYMOD_CONFIG_DEFINE_ERROR_CODES
CONFIG_OPTION(PHYMOD_CONFIG_DEFINE_ERROR_CODES)
#endif
#ifdef PHYMOD_CONFIG_INCLUDE_ERROR_PRINT
CONFIG_OPTION(PHYMOD_CONFIG_INCLUDE_ERROR_PRINT)
#endif
#ifdef PHYMOD_CONFIG_INCLUDE_DEBUG_PRINT
CONFIG_OPTION(PHYMOD_CONFIG_INCLUDE_DEBUG_PRINT)
#endif
#ifdef PHYMOD_CONFIG_INCLUDE_DIAG_PRINT
CONFIG_OPTION(PHYMOD_CONFIG_INCLUDE_DIAG_PRINT)
#endif
#ifdef PHYMOD_CONFIG_INCLUDE_FLOATING_POINT
CONFIG_OPTION(PHYMOD_CONFIG_INCLUDE_FLOATING_POINT)
#endif
#ifdef PHYMOD_CONFIG_INCLUDE_CHIP_SYMBOLS
CONFIG_OPTION(PHYMOD_CONFIG_INCLUDE_CHIP_SYMBOLS)
#endif
#ifdef PHYMOD_CONFIG_INCLUDE_FIELD_INFO
CONFIG_OPTION(PHYMOD_CONFIG_INCLUDE_FIELD_INFO)
#endif
#ifdef PHYMOD_CONFIG_INCLUDE_FIELD_NAMES
CONFIG_OPTION(PHYMOD_CONFIG_INCLUDE_FIELD_NAMES)
#endif
#ifdef PHYMOD_CONFIG_INCLUDE_ALIAS_NAMES
CONFIG_OPTION(PHYMOD_CONFIG_INCLUDE_ALIAS_NAMES)
#endif
#ifdef PHYMOD_CONFIG_INCLUDE_RESET_VALUES
CONFIG_OPTION(PHYMOD_CONFIG_INCLUDE_RESET_VALUES)
#endif
#ifdef PHYMOD_CONFIG_MDIO_FAST_LOAD
CONFIG_OPTION(PHYMOD_CONFIG_MDIO_FAST_LOAD)
#endif
#ifdef PHYMOD_CONFIG_MAX_CORES_PER_PORT
CONFIG_OPTION(PHYMOD_CONFIG_MAX_CORES_PER_PORT)
#endif
#ifdef PHYMOD_CONFIG_MAX_LANES_PER_CORE
CONFIG_OPTION(PHYMOD_CONFIG_MAX_LANES_PER_CORE)
#endif
#endif /* CONFIG_OPTION */

