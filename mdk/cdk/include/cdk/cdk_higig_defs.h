#ifndef __HIGIG_DEFS_H__
#define __HIGIG_DEFS_H__
/*
 * $Id: cdk_higig_defs.h,v 1.2 Broadcom SDK $
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
 * This file provides access macros for the HiGig module header.
 *
 */

#include <cdk/cdk_symbols.h>

/*******************************************************************************
 *
 *                    HIGIG DEFINITIONS BEGIN HERE
 *
 ******************************************************************************/


/* Start of HiGig packet indicators */
#define CDK_HIGIG_SOF                   0xfb
#define CDK_HIGIG2_SOF                  0xfc


/* HiGig module header size (in bytes) */
#define CDK_HIGIG_SIZE                  12
#define CDK_HIGIG2_SIZE                 16


/* HiGig module header size (in words) */
#define CDK_HIGIG_WSIZE                 3
#define CDK_HIGIG2_WSIZE                4


/*******************************************************************************
 * SWFORMAT:  HIGIG
 * BLOCKS:  
 * DESC:     Bit Definitions of the Internal Module Header
 * SIZE:     96
 * FIELDS:
 *     VC_LABEL         H-TLS VC Label (unused in Firebolt)
 *     CLASSIFICATION_TAG Classification tag (if HEADER_TYPE == 1)
 *     LABEL_PRESENT    Indicates if VC label is present (unused in Firebolt)
 *     L3               L3 switch packet
 *     DST_MODID_5      Destination Module ID (bit 5)
 *     SRC_MODID_5      Source Module ID (bit 5)
 *     MIRROR           Mirror bit
 *     MIRROR_DONE      Mirror done bit
 *     MIRROR_ONLY      Mirror only bit
 *     INGRESS_TAGGED   Ingress Tagged bit
 *     DST_TGID         SL-style stacking destination TGID (unused for Firebolt)
 *     DST_T            SL-style stacking destination T (unused for Firebolt)
 *     DST_MODID_LS     Destination Module ID (LSB)
 *     CNG              CNG bit 0
 *     HEADER_TYPE      Header type field
 *     PRIORITY         Internal priority field
 *     DST_PORT         Destination port
 *     SRC_PORT_TGID    Source port/TGID field
 *     PFM              PFM field
 *     OPCODE           Module Header opcode field
 *     SRC_MODID_LS     Source module ID (LSB)
 *     VTAG             Module header VLAN tag
 *     DST_MODID_6      Source Module ID (bit 6)
 *     SRC_MODID_6      Source Module ID (bit 6)
 *     HDR_EXT_LEN      Header extension length
 *     CNG1             CNG bit 1
 *     HGI              HGI
 *     START            Start of frame indicator (must be set to 0xFB for Higig packets)
 *
 ******************************************************************************/
#define HIGIG 0x00000000

#define HIGIG_SIZE 12

/*
 * This structure should be used to declare and program HIGIG.
 *
 */
typedef union HIGIG_s {
	uint32_t v[3];
	uint32_t higig[3];
	uint32_t _higig;
} HIGIG_t;

#define HIGIG_CLR(r) CDK_MEMSET(&((r)._higig), 0, sizeof(HIGIG_t))
#define HIGIG_SET(r,i,d) (r).higig[i] = d
#define HIGIG_GET(r,i) (r).higig[i]

/*
 * These macros can be used to access individual fields.
 *
 */
#define HIGIG_VC_LABELf_GET(r) (((r).higig[2]) & 0xfffff)
#define HIGIG_VC_LABELf_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0xfffff)) | (((uint32_t)f) & 0xfffff))
#define HIGIG_CLASSIFICATION_TAGf_GET(r) ((((r).higig[2]) >> 16) & 0xffff)
#define HIGIG_CLASSIFICATION_TAGf_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0xffff << 16)) | ((((uint32_t)f) & 0xffff) << 16))
#define HIGIG_LABEL_PRESENTf_GET(r) ((((r).higig[2]) >> 20) & 0x1)
#define HIGIG_LABEL_PRESENTf_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x1 << 20)) | ((((uint32_t)f) & 0x1) << 20))
#define HIGIG_L3f_GET(r) ((((r).higig[2]) >> 21) & 0x1)
#define HIGIG_L3f_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x1 << 21)) | ((((uint32_t)f) & 0x1) << 21))
#define HIGIG_DST_MODID_5f_GET(r) ((((r).higig[2]) >> 22) & 0x1)
#define HIGIG_DST_MODID_5f_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x1 << 22)) | ((((uint32_t)f) & 0x1) << 22))
#define HIGIG_SRC_MODID_5f_GET(r) ((((r).higig[2]) >> 23) & 0x1)
#define HIGIG_SRC_MODID_5f_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x1 << 23)) | ((((uint32_t)f) & 0x1) << 23))
#define HIGIG_MIRRORf_GET(r) ((((r).higig[2]) >> 24) & 0x1)
#define HIGIG_MIRRORf_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x1 << 24)) | ((((uint32_t)f) & 0x1) << 24))
#define HIGIG_MIRROR_DONEf_GET(r) ((((r).higig[2]) >> 25) & 0x1)
#define HIGIG_MIRROR_DONEf_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x1 << 25)) | ((((uint32_t)f) & 0x1) << 25))
#define HIGIG_MIRROR_ONLYf_GET(r) ((((r).higig[2]) >> 26) & 0x1)
#define HIGIG_MIRROR_ONLYf_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x1 << 26)) | ((((uint32_t)f) & 0x1) << 26))
#define HIGIG_INGRESS_TAGGEDf_GET(r) ((((r).higig[2]) >> 27) & 0x1)
#define HIGIG_INGRESS_TAGGEDf_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x1 << 27)) | ((((uint32_t)f) & 0x1) << 27))
#define HIGIG_DST_TGIDf_GET(r) ((((r).higig[2]) >> 28) & 0x7)
#define HIGIG_DST_TGIDf_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x7 << 28)) | ((((uint32_t)f) & 0x7) << 28))
#define HIGIG_DST_Tf_GET(r) ((((r).higig[2]) >> 31) & 0x1)
#define HIGIG_DST_Tf_SET(r,f) (r).higig[2]=(((r).higig[2] & ~((uint32_t)0x1 << 31)) | ((((uint32_t)f) & 0x1) << 31))
#define HIGIG_DST_MODID_LSf_GET(r) (((r).higig[1]) & 0x1f)
#define HIGIG_DST_MODID_LSf_SET(r,f) (r).higig[1]=(((r).higig[1] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f))
#define HIGIG_CNGf_GET(r) ((((r).higig[1]) >> 5) & 0x1)
#define HIGIG_CNGf_SET(r,f) (r).higig[1]=(((r).higig[1] & ~((uint32_t)0x1 << 5)) | ((((uint32_t)f) & 0x1) << 5))
#define HIGIG_HEADER_TYPEf_GET(r) ((((r).higig[1]) >> 6) & 0x3)
#define HIGIG_HEADER_TYPEf_SET(r,f) (r).higig[1]=(((r).higig[1] & ~((uint32_t)0x3 << 6)) | ((((uint32_t)f) & 0x3) << 6))
#define HIGIG_PRIORITYf_GET(r) ((((r).higig[1]) >> 8) & 0x7)
#define HIGIG_PRIORITYf_SET(r,f) (r).higig[1]=(((r).higig[1] & ~((uint32_t)0x7 << 8)) | ((((uint32_t)f) & 0x7) << 8))
#define HIGIG_DST_PORTf_GET(r) ((((r).higig[1]) >> 11) & 0x1f)
#define HIGIG_DST_PORTf_SET(r,f) (r).higig[1]=(((r).higig[1] & ~((uint32_t)0x1f << 11)) | ((((uint32_t)f) & 0x1f) << 11))
#define HIGIG_SRC_PORT_TGIDf_GET(r) ((((r).higig[1]) >> 16) & 0x3f)
#define HIGIG_SRC_PORT_TGIDf_SET(r,f) (r).higig[1]=(((r).higig[1] & ~((uint32_t)0x3f << 16)) | ((((uint32_t)f) & 0x3f) << 16))
#define HIGIG_PFMf_GET(r) ((((r).higig[1]) >> 22) & 0x3)
#define HIGIG_PFMf_SET(r,f) (r).higig[1]=(((r).higig[1] & ~((uint32_t)0x3 << 22)) | ((((uint32_t)f) & 0x3) << 22))
#define HIGIG_OPCODEf_GET(r) ((((r).higig[1]) >> 24) & 0x7)
#define HIGIG_OPCODEf_SET(r,f) (r).higig[1]=(((r).higig[1] & ~((uint32_t)0x7 << 24)) | ((((uint32_t)f) & 0x7) << 24))
#define HIGIG_SRC_MODID_LSf_GET(r) ((((r).higig[1]) >> 27) & 0x1f)
#define HIGIG_SRC_MODID_LSf_SET(r,f) (r).higig[1]=(((r).higig[1] & ~((uint32_t)0x1f << 27)) | ((((uint32_t)f) & 0x1f) << 27))
#define HIGIG_VTAGf_GET(r) (((r).higig[0]) & 0xffff)
#define HIGIG_VTAGf_SET(r,f) (r).higig[0]=(((r).higig[0] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff))
#define HIGIG_DST_MODID_6f_GET(r) ((((r).higig[0]) >> 16) & 0x1)
#define HIGIG_DST_MODID_6f_SET(r,f) (r).higig[0]=(((r).higig[0] & ~((uint32_t)0x1 << 16)) | ((((uint32_t)f) & 0x1) << 16))
#define HIGIG_SRC_MODID_6f_GET(r) ((((r).higig[0]) >> 17) & 0x1)
#define HIGIG_SRC_MODID_6f_SET(r,f) (r).higig[0]=(((r).higig[0] & ~((uint32_t)0x1 << 17)) | ((((uint32_t)f) & 0x1) << 17))
#define HIGIG_HDR_EXT_LENf_GET(r) ((((r).higig[0]) >> 18) & 0x7)
#define HIGIG_HDR_EXT_LENf_SET(r,f) (r).higig[0]=(((r).higig[0] & ~((uint32_t)0x7 << 18)) | ((((uint32_t)f) & 0x7) << 18))
#define HIGIG_CNG1f_GET(r) ((((r).higig[0]) >> 21) & 0x1)
#define HIGIG_CNG1f_SET(r,f) (r).higig[0]=(((r).higig[0] & ~((uint32_t)0x1 << 21)) | ((((uint32_t)f) & 0x1) << 21))
#define HIGIG_HGIf_GET(r) ((((r).higig[0]) >> 22) & 0x3)
#define HIGIG_HGIf_SET(r,f) (r).higig[0]=(((r).higig[0] & ~((uint32_t)0x3 << 22)) | ((((uint32_t)f) & 0x3) << 22))
#define HIGIG_STARTf_GET(r) ((((r).higig[0]) >> 24) & 0xff)
#define HIGIG_STARTf_SET(r,f) (r).higig[0]=(((r).higig[0] & ~((uint32_t)0xff << 24)) | ((((uint32_t)f) & 0xff) << 24))

/*******************************************************************************
 * End of 'HIGIG'
 ******************************************************************************/




/*******************************************************************************
 * SWFORMAT:  HIGIG2
 * BLOCKS:  
 * DESC:     Bit Definitions of the Higig2 Module Header
 * SIZE:     128
 * FIELDS:
 *     PPD_DATA         PPD Data Field
 *     PPD0:RSVD_4_0    Reserved Bits
 *     PPD0:HDR_EXT_LEN Header extension length
 *     PPD0:OPCODE      Next Hop Opcode indicates the operation type for the next hop Module
 *     PPD0:PRESERVE_DOT1P If set, don't touch the 802.1 priority/CFI of the outermost L2 header
 *     PPD0:PRESERVE_DSCP If set, don't touch the DSCP of the outermost IP header
 *     PPD0:SRC_T       
 *     PPD0:PFM         Port filtering mode
 *     PPD0:VID_LOW     VID_LOW [7:0] indicates VLAN ID [7:0]
 *     PPD0:VID_HIGH    [7:5] indicates 802.1p COS; [4] indicates the CFI bit, and [3:0] indicates VLANID[11:8]
 *     PPD0:VC_LABEL    Lower 16 bits of VC Label
 *     PPD0:MIRROR_CLASSIFICATION_TAG Mirror classification tag
 *     PPD0:ORIG_SRC_PORT Original source port of the packet
 *     PPD0:ORIG_SRC_MODID Original source module ID of the packet
 *     PPD0:VC_LABEL_19_16 Uppermost 4 bits of VC Label
 *     PPD0:LABEL_PRESENT Indicates type of MPLS packet
 *     PPD0:L3          Indicates that the packet is L3 switched
 *     PPD0:LABEL_OVERLAY_TYPE VC Label overlay type (must have LABEL_PRESENT set to 0) - 00 - no overlay (Easy Rider), 01 - Original System Ingress Port, 10 - Mirror Classification Tag, 11 - Reserved
 *     PPD0:MIRROR      Indicates that packet has been switched and only needs to be mirrored
 *     PPD0:MIRROR_DONE Indicates that packet has been mirrored and may still need to be switched
 *     PPD0:MIRROR_ONLY Indicates that packet has been switched and only needs to be mirrored
 *     PPD0:INGRESS_TAGGED Indicates if the packet was tagged when it originally ingress XGS system. For DT_MODE, this bit setting indicates that the packet has inner tag
 *     PPD0:DST_TGID    Equivalent to DW2_3 [7] of legacy HiGig header
 *     PPD0:DST_T       Congestion Mark
 *     PPD1:RSVD_4_0    Reserved Bits
 *     PPD1:HDR_EXT_LEN Header extension length
 *     PPD1:OPCODE      Next Hop Opcode indicates the operation type for the next hop Module
 *     PPD1:RSVD_12_11  Reserved Bits
 *     PPD1:SRC_T       
 *     PPD1:PFM         Port filtering mode
 *     PPD1:VID_LOW     VID_LOW [7:0] indicates VLAN ID [7:0]
 *     PPD1:VID_HIGH    [7:5] indicates 802.1p COS; [4] indicates the CFI bit, and [3:0] indicates VLANID[11:8]
 *     PPD1:RSVD_48_32  Reserved Bits
 *     PPD1:CLASSIFICATION_TAG MSBs of Classification tag
 *     PPD2:SOURCE_TYPE Indicates whether the source is a physical port (set to 1) or virtual port (set to 0)
 *     PPD2:DEST_TYPE   Indicates whether the destination is a physical port (set to 1) or virtual port (set to 0)
 *     PPD2:PRESERVE_DOT1P If set, don't touch the 802.1 priority/CFI of the outermost L2 header
 *     PPD2:PRESERVE_DSCP If set, don't touch the DSCP of the outermost IP header
 *     PPD2:VNI_HIGH    The upper 2-bits of the VNI
 *     PPD2:RSVD_7_6    Reserved bits
 *     PPD2:OPCODE      Unused in PPD2 header.  Bit positions reserved due to Humv bug with FRC.MCST field
 *     PPD2:RSVD_11     Reserved bits
 *     PPD2:LAG_FAILOVER When set, it indicates that the packet is redirected by a LAG failover.  The packet must not be redirected again by LAG failover.
 *     PPD2:DO_NOT_LEARN When set, do not perform MAC learning
 *     PPD2:DO_NOT_MODIFY When set, indicates the packet should be sent to the destination port unmodified
 *     PPD2:MIRROR      Indicates whether the packet is mirrored or switched.
 *     PPD2:SOURCE_VP   The source VP from which the packet originally enters the system.  Used for MAC learning and source knockout
 *     PPD2:DEST_VP     The destination VP index or multicast index for egress chip packet modifications and encapsulation
 *     PPD2:VNI_LOW     The lower 8-bits of the VNI
 *     PPD2:VNI_MID     The middle 2-bits of the VNI
 *     PPD2:FWD_TYPE    Indicates the forwarding type of the HG packet
 *     PPD2:MULTIPOINT  Indicates whether the packet is sent to a single point or multipoint tree within the egress chip
 *     PPD3:PPD3_CONTAINER_TYPE Indicates format of information carried in the PPD3_DATA_CONTAINER: 0000 - No valid information, 0001 - Offload Engine Container, 0010-1111 - Reserved
 *     PPD3:RSVD_7_4    Reserved
 *     PPD3:OPCODE      Unused in PPD3 header.  Bit positions reserved due to Humv bug with FRC.MCST field
 *     PPD3:SOURCE_TYPE Indicates whether the source is a physical port (set to 1) or virtual port (set to 0)
 *     PPD3:RSVD_28     Reserved
 *     PPD3:DO_NOT_LEARN When set, do not perform MAC learning
 *     PPD3:PRESERVE_DOT1P If set, don't touch the 802.1 priority/CFI of the outermost L2 header
 *     PPD3:PRESERVE_DSCP If set, don't touch the DSCP of the outermost IP header
 *     PPD3:SOURCE_INFO Packets source information (could be source physical or virtual port)
 *     PPD3:PPD3_DATA_CONTAINER PPD3 data container (defined based on PPD3_CONTAINER_TYPE)
 *     PPD_TYPE         Packet Processing Decriptor Type
 *     DP               Drop Precedence
 *     LBID             Load Balancing ID
 *     SRC_PID          Source port or if [5] = 1, then LAG member
 *     SRC_MODID        Source Module ID
 *     DST_PORT_MGIDL   When MCST=0, destination port ID, when MCST=1, these are the LSBs of MGID
 *     DST_MODID_MGIDH  When MCST=0, destination module ID, when MCST=1, MSBs of MGID
 *     TC               Traffic Class
 *     MCST             Destination type is Multicast
 *     START            Start of frame indicator (must be set to 0xFB for Higig packets)
 *
 ******************************************************************************/
#define HIGIG2 0x00000000

#define HIGIG2_SIZE 16

/*
 * This structure should be used to declare and program HIGIG2.
 *
 */
typedef union HIGIG2_s {
	uint32_t v[4];
	uint32_t higig2[4];
	uint32_t _higig2;
} HIGIG2_t;

#define HIGIG2_CLR(r) CDK_MEMSET(&((r)._higig2), 0, sizeof(HIGIG2_t))
#define HIGIG2_SET(r,i,d) (r).higig2[i] = d
#define HIGIG2_GET(r,i) (r).higig2[i]

/*
 * These macros can be used to access individual fields.
 *
 */
#define HIGIG2_PPD_DATAf_GET(r,a) cdk_field_be_get((r).higig2,4,0,63,a)
#define HIGIG2_PPD_DATAf_SET(r,a) cdk_field_be_set((r).higig2,4,0,63,a)
#define HIGIG2_PPD0_RSVD_4_0f_GET(r) (((r).higig2[3]) & 0x1f)
#define HIGIG2_PPD0_RSVD_4_0f_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f))
#define HIGIG2_PPD0_HDR_EXT_LENf_GET(r) ((((r).higig2[3]) >> 5) & 0x7)
#define HIGIG2_PPD0_HDR_EXT_LENf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x7 << 5)) | ((((uint32_t)f) & 0x7) << 5))
#define HIGIG2_PPD0_OPCODEf_GET(r) ((((r).higig2[3]) >> 8) & 0x7)
#define HIGIG2_PPD0_OPCODEf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x7 << 8)) | ((((uint32_t)f) & 0x7) << 8))
#define HIGIG2_PPD0_PRESERVE_DOT1Pf_GET(r) ((((r).higig2[3]) >> 11) & 0x1)
#define HIGIG2_PPD0_PRESERVE_DOT1Pf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11))
#define HIGIG2_PPD0_PRESERVE_DSCPf_GET(r) ((((r).higig2[3]) >> 12) & 0x1)
#define HIGIG2_PPD0_PRESERVE_DSCPf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12))
#define HIGIG2_PPD0_SRC_Tf_GET(r) ((((r).higig2[3]) >> 13) & 0x1)
#define HIGIG2_PPD0_SRC_Tf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13))
#define HIGIG2_PPD0_PFMf_GET(r) ((((r).higig2[3]) >> 14) & 0x3)
#define HIGIG2_PPD0_PFMf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x3 << 14)) | ((((uint32_t)f) & 0x3) << 14))
#define HIGIG2_PPD0_VID_LOWf_GET(r) ((((r).higig2[3]) >> 16) & 0xff)
#define HIGIG2_PPD0_VID_LOWf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0xff << 16)) | ((((uint32_t)f) & 0xff) << 16))
#define HIGIG2_PPD0_VID_HIGHf_GET(r) ((((r).higig2[3]) >> 24) & 0xff)
#define HIGIG2_PPD0_VID_HIGHf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0xff << 24)) | ((((uint32_t)f) & 0xff) << 24))
#define HIGIG2_PPD0_VC_LABELf_GET(r) (((r).higig2[2]) & 0xffff)
#define HIGIG2_PPD0_VC_LABELf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff))
#define HIGIG2_PPD0_MIRROR_CLASSIFICATION_TAGf_GET(r) ((((r).higig2[2]) >> 4) & 0xffff)
#define HIGIG2_PPD0_MIRROR_CLASSIFICATION_TAGf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0xffff << 4)) | ((((uint32_t)f) & 0xffff) << 4))
#define HIGIG2_PPD0_ORIG_SRC_PORTf_GET(r) ((((r).higig2[2]) >> 4) & 0xff)
#define HIGIG2_PPD0_ORIG_SRC_PORTf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0xff << 4)) | ((((uint32_t)f) & 0xff) << 4))
#define HIGIG2_PPD0_ORIG_SRC_MODIDf_GET(r) ((((r).higig2[2]) >> 12) & 0xff)
#define HIGIG2_PPD0_ORIG_SRC_MODIDf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0xff << 12)) | ((((uint32_t)f) & 0xff) << 12))
#define HIGIG2_PPD0_VC_LABEL_19_16f_GET(r) ((((r).higig2[2]) >> 16) & 0xf)
#define HIGIG2_PPD0_VC_LABEL_19_16f_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0xf << 16)) | ((((uint32_t)f) & 0xf) << 16))
#define HIGIG2_PPD0_LABEL_PRESENTf_GET(r) ((((r).higig2[2]) >> 20) & 0x1)
#define HIGIG2_PPD0_LABEL_PRESENTf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x1 << 20)) | ((((uint32_t)f) & 0x1) << 20))
#define HIGIG2_PPD0_L3f_GET(r) ((((r).higig2[2]) >> 21) & 0x1)
#define HIGIG2_PPD0_L3f_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x1 << 21)) | ((((uint32_t)f) & 0x1) << 21))
#define HIGIG2_PPD0_LABEL_OVERLAY_TYPEf_GET(r) ((((r).higig2[2]) >> 22) & 0x3)
#define HIGIG2_PPD0_LABEL_OVERLAY_TYPEf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x3 << 22)) | ((((uint32_t)f) & 0x3) << 22))
#define HIGIG2_PPD0_MIRRORf_GET(r) ((((r).higig2[2]) >> 24) & 0x1)
#define HIGIG2_PPD0_MIRRORf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x1 << 24)) | ((((uint32_t)f) & 0x1) << 24))
#define HIGIG2_PPD0_MIRROR_DONEf_GET(r) ((((r).higig2[2]) >> 25) & 0x1)
#define HIGIG2_PPD0_MIRROR_DONEf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x1 << 25)) | ((((uint32_t)f) & 0x1) << 25))
#define HIGIG2_PPD0_MIRROR_ONLYf_GET(r) ((((r).higig2[2]) >> 26) & 0x1)
#define HIGIG2_PPD0_MIRROR_ONLYf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x1 << 26)) | ((((uint32_t)f) & 0x1) << 26))
#define HIGIG2_PPD0_INGRESS_TAGGEDf_GET(r) ((((r).higig2[2]) >> 27) & 0x1)
#define HIGIG2_PPD0_INGRESS_TAGGEDf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x1 << 27)) | ((((uint32_t)f) & 0x1) << 27))
#define HIGIG2_PPD0_DST_TGIDf_GET(r) ((((r).higig2[2]) >> 28) & 0x7)
#define HIGIG2_PPD0_DST_TGIDf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x7 << 28)) | ((((uint32_t)f) & 0x7) << 28))
#define HIGIG2_PPD0_DST_Tf_GET(r) ((((r).higig2[2]) >> 31) & 0x1)
#define HIGIG2_PPD0_DST_Tf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x1 << 31)) | ((((uint32_t)f) & 0x1) << 31))
#define HIGIG2_PPD1_RSVD_4_0f_GET(r) (((r).higig2[3]) & 0x1f)
#define HIGIG2_PPD1_RSVD_4_0f_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1f)) | (((uint32_t)f) & 0x1f))
#define HIGIG2_PPD1_HDR_EXT_LENf_GET(r) ((((r).higig2[3]) >> 5) & 0x7)
#define HIGIG2_PPD1_HDR_EXT_LENf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x7 << 5)) | ((((uint32_t)f) & 0x7) << 5))
#define HIGIG2_PPD1_OPCODEf_GET(r) ((((r).higig2[3]) >> 8) & 0x7)
#define HIGIG2_PPD1_OPCODEf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x7 << 8)) | ((((uint32_t)f) & 0x7) << 8))
#define HIGIG2_PPD1_RSVD_12_11f_GET(r) ((((r).higig2[3]) >> 11) & 0x3)
#define HIGIG2_PPD1_RSVD_12_11f_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x3 << 11)) | ((((uint32_t)f) & 0x3) << 11))
#define HIGIG2_PPD1_SRC_Tf_GET(r) ((((r).higig2[3]) >> 13) & 0x1)
#define HIGIG2_PPD1_SRC_Tf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13))
#define HIGIG2_PPD1_PFMf_GET(r) ((((r).higig2[3]) >> 14) & 0x3)
#define HIGIG2_PPD1_PFMf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x3 << 14)) | ((((uint32_t)f) & 0x3) << 14))
#define HIGIG2_PPD1_VID_LOWf_GET(r) ((((r).higig2[3]) >> 16) & 0xff)
#define HIGIG2_PPD1_VID_LOWf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0xff << 16)) | ((((uint32_t)f) & 0xff) << 16))
#define HIGIG2_PPD1_VID_HIGHf_GET(r) ((((r).higig2[3]) >> 24) & 0xff)
#define HIGIG2_PPD1_VID_HIGHf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0xff << 24)) | ((((uint32_t)f) & 0xff) << 24))
#define HIGIG2_PPD1_RSVD_48_32f_GET(r) (((r).higig2[2]) & 0xffff)
#define HIGIG2_PPD1_RSVD_48_32f_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff))
#define HIGIG2_PPD1_CLASSIFICATION_TAGf_GET(r) ((((r).higig2[2]) >> 16) & 0xffff)
#define HIGIG2_PPD1_CLASSIFICATION_TAGf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0xffff << 16)) | ((((uint32_t)f) & 0xffff) << 16))
#define HIGIG2_PPD2_SOURCE_TYPEf_GET(r) (((r).higig2[3]) & 0x1)
#define HIGIG2_PPD2_SOURCE_TYPEf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1)) | (((uint32_t)f) & 0x1))
#define HIGIG2_PPD2_DEST_TYPEf_GET(r) ((((r).higig2[3]) >> 1) & 0x1)
#define HIGIG2_PPD2_DEST_TYPEf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 1)) | ((((uint32_t)f) & 0x1) << 1))
#define HIGIG2_PPD2_PRESERVE_DOT1Pf_GET(r) ((((r).higig2[3]) >> 2) & 0x1)
#define HIGIG2_PPD2_PRESERVE_DOT1Pf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 2)) | ((((uint32_t)f) & 0x1) << 2))
#define HIGIG2_PPD2_PRESERVE_DSCPf_GET(r) ((((r).higig2[3]) >> 3) & 0x1)
#define HIGIG2_PPD2_PRESERVE_DSCPf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 3)) | ((((uint32_t)f) & 0x1) << 3))
#define HIGIG2_PPD2_VNI_HIGHf_GET(r) ((((r).higig2[3]) >> 4) & 0x3)
#define HIGIG2_PPD2_VNI_HIGHf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x3 << 4)) | ((((uint32_t)f) & 0x3) << 4))
#define HIGIG2_PPD2_RSVD_7_6f_GET(r) ((((r).higig2[3]) >> 6) & 0x3)
#define HIGIG2_PPD2_RSVD_7_6f_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x3 << 6)) | ((((uint32_t)f) & 0x3) << 6))
#define HIGIG2_PPD2_OPCODEf_GET(r) ((((r).higig2[3]) >> 8) & 0x7)
#define HIGIG2_PPD2_OPCODEf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x7 << 8)) | ((((uint32_t)f) & 0x7) << 8))
#define HIGIG2_PPD2_RSVD_11f_GET(r) ((((r).higig2[3]) >> 11) & 0x1)
#define HIGIG2_PPD2_RSVD_11f_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11))
#define HIGIG2_PPD2_LAG_FAILOVERf_GET(r) ((((r).higig2[3]) >> 12) & 0x1)
#define HIGIG2_PPD2_LAG_FAILOVERf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12))
#define HIGIG2_PPD2_DO_NOT_LEARNf_GET(r) ((((r).higig2[3]) >> 13) & 0x1)
#define HIGIG2_PPD2_DO_NOT_LEARNf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13))
#define HIGIG2_PPD2_DO_NOT_MODIFYf_GET(r) ((((r).higig2[3]) >> 14) & 0x1)
#define HIGIG2_PPD2_DO_NOT_MODIFYf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14))
#define HIGIG2_PPD2_MIRRORf_GET(r) ((((r).higig2[3]) >> 15) & 0x1)
#define HIGIG2_PPD2_MIRRORf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15))
#define HIGIG2_PPD2_SOURCE_VPf_GET(r) ((((r).higig2[3]) >> 16) & 0xffff)
#define HIGIG2_PPD2_SOURCE_VPf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0xffff << 16)) | ((((uint32_t)f) & 0xffff) << 16))
#define HIGIG2_PPD2_DEST_VPf_GET(r) (((r).higig2[2]) & 0xffff)
#define HIGIG2_PPD2_DEST_VPf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0xffff)) | (((uint32_t)f) & 0xffff))
#define HIGIG2_PPD2_VNI_LOWf_GET(r) ((((r).higig2[2]) >> 16) & 0xff)
#define HIGIG2_PPD2_VNI_LOWf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0xff << 16)) | ((((uint32_t)f) & 0xff) << 16))
#define HIGIG2_PPD2_VNI_MIDf_GET(r) ((((r).higig2[2]) >> 24) & 0x3)
#define HIGIG2_PPD2_VNI_MIDf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x3 << 24)) | ((((uint32_t)f) & 0x3) << 24))
#define HIGIG2_PPD2_FWD_TYPEf_GET(r) ((((r).higig2[2]) >> 26) & 0x1f)
#define HIGIG2_PPD2_FWD_TYPEf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x1f << 26)) | ((((uint32_t)f) & 0x1f) << 26))
#define HIGIG2_PPD2_MULTIPOINTf_GET(r) ((((r).higig2[2]) >> 31) & 0x1)
#define HIGIG2_PPD2_MULTIPOINTf_SET(r,f) (r).higig2[2]=(((r).higig2[2] & ~((uint32_t)0x1 << 31)) | ((((uint32_t)f) & 0x1) << 31))
#define HIGIG2_PPD3_PPD3_CONTAINER_TYPEf_GET(r) (((r).higig2[3]) & 0xf)
#define HIGIG2_PPD3_PPD3_CONTAINER_TYPEf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0xf)) | (((uint32_t)f) & 0xf))
#define HIGIG2_PPD3_RSVD_7_4f_GET(r) ((((r).higig2[3]) >> 4) & 0xf)
#define HIGIG2_PPD3_RSVD_7_4f_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0xf << 4)) | ((((uint32_t)f) & 0xf) << 4))
#define HIGIG2_PPD3_OPCODEf_GET(r) ((((r).higig2[3]) >> 8) & 0x7)
#define HIGIG2_PPD3_OPCODEf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x7 << 8)) | ((((uint32_t)f) & 0x7) << 8))
#define HIGIG2_PPD3_SOURCE_TYPEf_GET(r) ((((r).higig2[3]) >> 11) & 0x1)
#define HIGIG2_PPD3_SOURCE_TYPEf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 11)) | ((((uint32_t)f) & 0x1) << 11))
#define HIGIG2_PPD3_RSVD_28f_GET(r) ((((r).higig2[3]) >> 12) & 0x1)
#define HIGIG2_PPD3_RSVD_28f_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 12)) | ((((uint32_t)f) & 0x1) << 12))
#define HIGIG2_PPD3_DO_NOT_LEARNf_GET(r) ((((r).higig2[3]) >> 13) & 0x1)
#define HIGIG2_PPD3_DO_NOT_LEARNf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 13)) | ((((uint32_t)f) & 0x1) << 13))
#define HIGIG2_PPD3_PRESERVE_DOT1Pf_GET(r) ((((r).higig2[3]) >> 14) & 0x1)
#define HIGIG2_PPD3_PRESERVE_DOT1Pf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 14)) | ((((uint32_t)f) & 0x1) << 14))
#define HIGIG2_PPD3_PRESERVE_DSCPf_GET(r) ((((r).higig2[3]) >> 15) & 0x1)
#define HIGIG2_PPD3_PRESERVE_DSCPf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0x1 << 15)) | ((((uint32_t)f) & 0x1) << 15))
#define HIGIG2_PPD3_SOURCE_INFOf_GET(r) ((((r).higig2[3]) >> 16) & 0xffff)
#define HIGIG2_PPD3_SOURCE_INFOf_SET(r,f) (r).higig2[3]=(((r).higig2[3] & ~((uint32_t)0xffff << 16)) | ((((uint32_t)f) & 0xffff) << 16))
#define HIGIG2_PPD3_PPD3_DATA_CONTAINERf_GET(r) ((r).higig2[2])
#define HIGIG2_PPD3_PPD3_DATA_CONTAINERf_SET(r,f) (r).higig2[2]=((uint32_t)f)
#define HIGIG2_PPD_TYPEf_GET(r) (((r).higig2[1]) & 0x7)
#define HIGIG2_PPD_TYPEf_SET(r,f) (r).higig2[1]=(((r).higig2[1] & ~((uint32_t)0x7)) | (((uint32_t)f) & 0x7))
#define HIGIG2_DPf_GET(r) ((((r).higig2[1]) >> 6) & 0x3)
#define HIGIG2_DPf_SET(r,f) (r).higig2[1]=(((r).higig2[1] & ~((uint32_t)0x3 << 6)) | ((((uint32_t)f) & 0x3) << 6))
#define HIGIG2_LBIDf_GET(r) ((((r).higig2[1]) >> 8) & 0xff)
#define HIGIG2_LBIDf_SET(r,f) (r).higig2[1]=(((r).higig2[1] & ~((uint32_t)0xff << 8)) | ((((uint32_t)f) & 0xff) << 8))
#define HIGIG2_SRC_PIDf_GET(r) ((((r).higig2[1]) >> 16) & 0xff)
#define HIGIG2_SRC_PIDf_SET(r,f) (r).higig2[1]=(((r).higig2[1] & ~((uint32_t)0xff << 16)) | ((((uint32_t)f) & 0xff) << 16))
#define HIGIG2_SRC_MODIDf_GET(r) ((((r).higig2[1]) >> 24) & 0xff)
#define HIGIG2_SRC_MODIDf_SET(r,f) (r).higig2[1]=(((r).higig2[1] & ~((uint32_t)0xff << 24)) | ((((uint32_t)f) & 0xff) << 24))
#define HIGIG2_DST_PORT_MGIDLf_GET(r) (((r).higig2[0]) & 0xff)
#define HIGIG2_DST_PORT_MGIDLf_SET(r,f) (r).higig2[0]=(((r).higig2[0] & ~((uint32_t)0xff)) | (((uint32_t)f) & 0xff))
#define HIGIG2_DST_MODID_MGIDHf_GET(r) ((((r).higig2[0]) >> 8) & 0xff)
#define HIGIG2_DST_MODID_MGIDHf_SET(r,f) (r).higig2[0]=(((r).higig2[0] & ~((uint32_t)0xff << 8)) | ((((uint32_t)f) & 0xff) << 8))
#define HIGIG2_TCf_GET(r) ((((r).higig2[0]) >> 16) & 0xf)
#define HIGIG2_TCf_SET(r,f) (r).higig2[0]=(((r).higig2[0] & ~((uint32_t)0xf << 16)) | ((((uint32_t)f) & 0xf) << 16))
#define HIGIG2_MCSTf_GET(r) ((((r).higig2[0]) >> 20) & 0x1)
#define HIGIG2_MCSTf_SET(r,f) (r).higig2[0]=(((r).higig2[0] & ~((uint32_t)0x1 << 20)) | ((((uint32_t)f) & 0x1) << 20))
#define HIGIG2_STARTf_GET(r) ((((r).higig2[0]) >> 24) & 0xff)
#define HIGIG2_STARTf_SET(r,f) (r).higig2[0]=(((r).higig2[0] & ~((uint32_t)0xff << 24)) | ((((uint32_t)f) & 0xff) << 24))

/*******************************************************************************
 * End of 'HIGIG2'
 ******************************************************************************/




/*******************************************************************************
 *
 *                         HIGIG SYMBOL TABLE
 *
 ******************************************************************************/

extern cdk_symbols_t higig_symbols;


#endif /* __HIGIG_DEFS_H__ */
