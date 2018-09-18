/*
 * $Id: factory.h,v 1.6 Broadcom SDK $
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

#ifndef _UTILS_FACTORY_H_
#define _UTILS_FACTORY_H_

/*  *********************************************************************
    *  Data structures.
    ********************************************************************* */

typedef struct factory_config_s {
    uint32  magic;
    uint8   mac[6];
    uint32  serial_num_magic;
    uint8   serial_num[20];
} factory_config_t;

/*  *********************************************************************
    *  Constants
    ********************************************************************* */

#define FACTORY_CONFIG_MAGIC        0x46414354     /* 'FACT' (big-endian) */

#ifdef CFG_FACTORY_CONFIG_BASE
#define FACTORY_CONFIG_BASE_ADDR    CFG_FACTORY_CONFIG_BASE
#define FACTORY_CONFIG_OFFSET       CFG_FACTORY_CONFIG_OFFSET
#else
#define FACTORY_CONFIG_BASE_ADDR    0xBFC00000      /* The first sector */
#define FACTORY_CONFIG_OFFSET       0x20            /* Offset */
#endif

#ifdef CFG_PRODUCT_REGISTRATION_INCLUDED
#define FACTORY_SERIAL_NUMBER_MAGIC 0x53455249      /* 'SERI' */
#endif /* CFG_PRODUCT_REGISTRATION_INCLUDED */


/*  *********************************************************************
    *  Prototypes
    ********************************************************************* */

sys_error_t factory_config_get(factory_config_t *cfg);
sys_error_t factory_config_set(factory_config_t *cfg);

#endif /* _UTILS_FACTORY_H_ */
