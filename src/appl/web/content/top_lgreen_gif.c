/*
 * $Id: top_lgreen_gif.c,v 1.3 Broadcom SDK $
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

/***** GENERATED FILE; DO NOT EDIT. *****/

#include "appl/ssp.h"

static RES_CONST_DECL unsigned char CODE _text0000[] = {
    0x47, 0x49, 0x46, 0x38, 0x39, 0x61, 0x10, 0x00,      /* GIF89a.. */
    0x10, 0x00, 0xf7, 0x00, 0x00, 0x00, 0xf7, 0x00,      /* ........ */
    0x08, 0x94, 0x08, 0x08, 0x9c, 0x08, 0x08, 0xad,      /* ........ */
    0x08, 0x08, 0xd6, 0x08, 0x18, 0xff, 0x18, 0x21,      /* .......! */
    0x9c, 0x21, 0x21, 0xbd, 0x21, 0x21, 0xd6, 0x21,      /* .!!.!!.! */
    0x29, 0xef, 0x29, 0x39, 0x39, 0x39, 0x4a, 0x9c,      /* ).)999J. */
    0x4a, 0x4a, 0xff, 0x4a, 0x5a, 0x5a, 0x5a, 0x5a,      /* JJ.JZZZZ */
    0xde, 0x5a, 0x73, 0x73, 0x73, 0x7b, 0x7b, 0x7b,      /* .Zsss{{{ */
    0x8c, 0x8c, 0x8c, 0x94, 0xd6, 0x94, 0x9c, 0x9c,      /* ........ */
    0x9c, 0xa5, 0xa5, 0xc6, 0xad, 0xad, 0xad, 0xad,      /* ........ */
    0xce, 0xad, 0xbd, 0xde, 0xbd, 0xc6, 0xff, 0xff,      /* ........ */
    0xd6, 0xe7, 0xd6, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,      /* ........ */
    0xff, 0xff, 0xff, 0xff, 0xff, 0x21, 0xf9, 0x04,      /* .....!.. */
    0x01, 0x00, 0x00, 0x18, 0x00, 0x2c, 0x00, 0x00,      /* .....,.. */
    0x00, 0x00, 0x10, 0x00, 0x10, 0x00, 0x00, 0x08,      /* ........ */
    0x8d, 0x00, 0x31, 0x08, 0x1c, 0x48, 0xb0, 0xa0,      /* ..1..H.. */
    0xc1, 0x83, 0x08, 0x13, 0x22, 0xb4, 0x60, 0x20,      /* ....".`  */
    0x80, 0x43, 0x0b, 0x09, 0x0d, 0x38, 0x90, 0x80,      /* .C...8.. */
    0x60, 0x80, 0x45, 0x01, 0x07, 0x2d, 0x2c, 0xd0,      /* `.E..-,. */
    0x90, 0x41, 0x02, 0x81, 0x8f, 0x04, 0x0e, 0x18,      /* .A...... */
    0x0c, 0x70, 0x40, 0xc2, 0x05, 0x07, 0x04, 0x00,      /* .p@..... */
    0x00, 0x28, 0x80, 0x20, 0x42, 0xc1, 0x00, 0x03,      /* .(. B... */
    0x10, 0x20, 0x50, 0xb9, 0x92, 0x41, 0x02, 0x05,      /* . P..A.. */
    0x15, 0x08, 0xc2, 0xfc, 0x58, 0x93, 0x81, 0x4d,      /* ....X..M */
    0x05, 0x10, 0x74, 0x0e, 0x48, 0x59, 0xc0, 0xa7,      /* ..t.HY.. */
    0xcf, 0x9b, 0x10, 0x72, 0x0a, 0xb4, 0x30, 0xb4,      /* ...r..0. */
    0xa8, 0x51, 0x06, 0x07, 0x1a, 0x40, 0x98, 0x40,      /* .Q...@.@ */
    0xd0, 0x00, 0x82, 0x04, 0x4f, 0x11, 0x2c, 0x78,      /* ....O.,x */
    0x30, 0xb5, 0xa0, 0xd5, 0x04, 0x09, 0x10, 0x1c,      /* 0....... */
    0xd8, 0x0a, 0x21, 0x82, 0x52, 0x82, 0x11, 0x14,      /* ..!.R... */
    0xa8, 0x6d, 0xc0, 0x75, 0x2a, 0x85, 0x83, 0x15,      /* .m.u*... */
    0x20, 0xc8, 0x2d, 0x3b, 0xe1, 0x6d, 0xc2, 0x0a,      /*  .-;.m.. */
    0x13, 0x26, 0x54, 0xb0, 0x1b, 0x10, 0x00, 0x3b,      /* .&T....; */
};


RES_CONST_DECL SSP_DATA_ENTRY CODE sspfile_top_lgreen_gif[] = {
    { 0x80, 0, 944, 0, 0, _text0000 },
};
