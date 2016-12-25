/*
 * PKUnity UNIGFX Registers
 */

#define UDE2_BASE                   (PKUNITY_UNIGFX2_BASE + 0x0000)

#define DE2_VERSION_REG             PUV4_IOREG(UDE2_BASE + 0x0000)
#define DE2_COMPONENT_REG           PUV4_IOREG(UDE2_BASE + 0x0004)
#define DE2_UPDATE_STATE_REG        PUV4_IOREG(UDE2_BASE + 0x0010)
#define DE2_INT_REG                 PUV4_IOREG(UDE2_BASE + 0x0014)
#define DE2_AXI_CFG_REG             PUV4_IOREG(UDE2_BASE + 0x0018)
#define DE2_AXI_GFX1_NUM_REG        PUV4_IOREG(UDE2_BASE + 0x001c)
#define DE2_AXI_VID1_NUM_REG        PUV4_IOREG(UDE2_BASE + 0x0020)
#define DE2_AXI_CSR1_NUM_REG        PUV4_IOREG(UDE2_BASE + 0x0024)
#define DE2_AXI_GFX2_NUM_REG        PUV4_IOREG(UDE2_BASE + 0x0028)
#define DE2_AXI_VID2_NUM_REG        PUV4_IOREG(UDE2_BASE + 0x002c)
#define DE2_AXI_CSR2_NUM_REG        PUV4_IOREG(UDE2_BASE + 0x0030)
#define DE2_AXI_TOTAL_NUM_REG       PUV4_IOREG(UDE2_BASE + 0x0034)
#define DE2_AXI_STAT_CFG_REG        PUV4_IOREG(UDE2_BASE + 0x0038)
#define DE2_AXI_STAT_1_REG          PUV4_IOREG(UDE2_BASE + 0x003c)
#define DE2_AXI_STAT_2_REG          PUV4_IOREG(UDE2_BASE + 0x0040)
#define DE2_AXI_STAT_3_REG          PUV4_IOREG(UDE2_BASE + 0x0044)
#define DE2_AXI_STAT_4_REG          PUV4_IOREG(UDE2_BASE + 0x0048)
#define DE2_AXI_STAT_5_REG          PUV4_IOREG(UDE2_BASE + 0x004c)
#define DE2_AXI_STAT_6_REG          PUV4_IOREG(UDE2_BASE + 0x0050)
#define DE2_AXI_STAT_7_REG          PUV4_IOREG(UDE2_BASE + 0x0054)
#define DE2_GFX1_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0080)
#define DE2_GFX1_XY_REG             PUV4_IOREG(UDE2_BASE + 0x0084)
#define DE2_GFX1_SIZE_REG           PUV4_IOREG(UDE2_BASE + 0x0088)
#define DE2_GFX1_ADDR_REG           PUV4_IOREG(UDE2_BASE + 0x008c)
#define DE2_GFX1_STRIDE_REG         PUV4_IOREG(UDE2_BASE + 0x0090)
#define DE2_GFX1_FIFO_MARK_REG      PUV4_IOREG(UDE2_BASE + 0x0094)
#define DE2_VID1_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0100)
#define DE2_VID1_XY_REG             PUV4_IOREG(UDE2_BASE + 0x0104)
#define DE2_VID1_SIZE_REG           PUV4_IOREG(UDE2_BASE + 0x0108)
#define DE2_VID1_ADDR_REG           PUV4_IOREG(UDE2_BASE + 0x010C)
#define DE2_VID1_STRIDE_REG         PUV4_IOREG(UDE2_BASE + 0x0110)
#define DE2_VID1_U_ADDR_REG         PUV4_IOREG(UDE2_BASE + 0x0114)
#define DE2_VID1_U_STRIDE_REG       PUV4_IOREG(UDE2_BASE + 0x0118)
#define DE2_VID1_V_ADDR_REG         PUV4_IOREG(UDE2_BASE + 0x011C)
#define DE2_VID1_V_STRIDE_REG       PUV4_IOREG(UDE2_BASE + 0x0120)
#define DE2_VID1_FIFO_MARK_REG      PUV4_IOREG(UDE2_BASE + 0x0124)
#define DE2_VID1_VDS_CFG_REG        PUV4_IOREG(UDE2_BASE + 0x0128)
#define DE2_VID1_SCL_CFG_REG        PUV4_IOREG(UDE2_BASE + 0x012C)
#define DE2_VID1_SCL_SIZE_REG       PUV4_IOREG(UDE2_BASE + 0x0130)
#define DE2_VID1_SCL_HPARA_REG      PUV4_IOREG(UDE2_BASE + 0x0134)
#define DE2_VID1_SCL_VPARA_REG      PUV4_IOREG(UDE2_BASE + 0x0138)
#define DE2_VID1_ADJ_CFG_REG        PUV4_IOREG(UDE2_BASE + 0x013C)
#define DE2_VID1_ADJ_WRITE_REG      PUV4_IOREG(UDE2_BASE + 0x0140)
#define DE2_CSR1_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0180)
#define DE2_CSR1_XY_REG             PUV4_IOREG(UDE2_BASE + 0x0184)
#define DE2_CSR1_SIZE_REG           PUV4_IOREG(UDE2_BASE + 0x0188)
#define DE2_CSR1_ADDR_REG           PUV4_IOREG(UDE2_BASE + 0x018C)
#define DE2_CSR1_FIFO_MARK_REG      PUV4_IOREG(UDE2_BASE + 0x0190)
#define DE2_CSR1_COLOR1_REG         PUV4_IOREG(UDE2_BASE + 0x0194)
#define DE2_CSR1_COLOR2_REG         PUV4_IOREG(UDE2_BASE + 0x0198)
#define DE2_BLD1_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0200)
#define DE2_BLD1_DFT_COLOR_REG      PUV4_IOREG(UDE2_BASE + 0x0204)
#define DE2_BLD1_CK_COLOR_REG       PUV4_IOREG(UDE2_BASE + 0x0208)
#define DE2_BLD1_CK_MARK_REG        PUV4_IOREG(UDE2_BASE + 0x020C)
#define DE2_BLD1_AW_ST_REG          PUV4_IOREG(UDE2_BASE + 0x0210)
#define DE2_BLD1_AW_END_REG         PUV4_IOREG(UDE2_BASE + 0x0214)
#define DE2_BLD1_ALPHA_COLOR_REG    PUV4_IOREG(UDE2_BASE + 0x0218)
#define DE2_GAMMA1_CFG_REG          PUV4_IOREG(UDE2_BASE + 0x021c)
#define DE2_GAMMA1_WRITE_REG        PUV4_IOREG(UDE2_BASE + 0x0220)
#define DE2_DITHER1_CFG_REG         PUV4_IOREG(UDE2_BASE + 0x0224)
#define DE2_DITHER1_MATRIX1_REG     PUV4_IOREG(UDE2_BASE + 0x0228)
#define DE2_DITHER1_MATRIX2_REG     PUV4_IOREG(UDE2_BASE + 0x022c)
#define DE2_SCG1_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0240)
#define DE2_SCG1_H_BLANK_REG        PUV4_IOREG(UDE2_BASE + 0x0244)
#define DE2_SCG1_H_SYNC_REG         PUV4_IOREG(UDE2_BASE + 0x0248)
#define DE2_SCG1_V_BLANK_REG        PUV4_IOREG(UDE2_BASE + 0x024c)
#define DE2_SCG1_V_SYNC_REG         PUV4_IOREG(UDE2_BASE + 0x0250)
#define DE2_SCG1_XY_REG             PUV4_IOREG(UDE2_BASE + 0x0254)
#define DE2_SQC1_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0260)
#define DE2_SQC1_EN_CTL_REG         PUV4_IOREG(UDE2_BASE + 0x0264)
#define DE2_SQC1_DELAY1_REG         PUV4_IOREG(UDE2_BASE + 0x0268)
#define DE2_SQC1_DELAY2_REG         PUV4_IOREG(UDE2_BASE + 0x026C)
#define DE2_SQC1_PWM_REG            PUV4_IOREG(UDE2_BASE + 0x0270)
#define DE2_SQC1_LVDS_REG           PUV4_IOREG(UDE2_BASE + 0x0274)
#define DE2_GFX2_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0280)
#define DE2_GFX2_XY_REG             PUV4_IOREG(UDE2_BASE + 0x0284)
#define DE2_GFX2_SIZE_REG           PUV4_IOREG(UDE2_BASE + 0x0288)
#define DE2_GFX2_ADDR_REG           PUV4_IOREG(UDE2_BASE + 0x028c)
#define DE2_GFX2_STRIDE_REG         PUV4_IOREG(UDE2_BASE + 0x0290)
#define DE2_GFX2_FIFO_MARK_REG      PUV4_IOREG(UDE2_BASE + 0x0294)
#define DE2_VID2_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0300)
#define DE2_VID2_XY_REG             PUV4_IOREG(UDE2_BASE + 0x0304)
#define DE2_VID2_SIZE_REG           PUV4_IOREG(UDE2_BASE + 0x0308)
#define DE2_VID2_ADDR_REG           PUV4_IOREG(UDE2_BASE + 0x030C)
#define DE2_VID2_STRIDE_REG         PUV4_IOREG(UDE2_BASE + 0x0310)
#define DE2_VID2_U_ADDR_REG         PUV4_IOREG(UDE2_BASE + 0x0314)
#define DE2_VID2_U_STRIDE_REG       PUV4_IOREG(UDE2_BASE + 0x0318)
#define DE2_VID2_V_ADDR_REG         PUV4_IOREG(UDE2_BASE + 0x031c)
#define DE2_VID2_V_STRIDE_REG       PUV4_IOREG(UDE2_BASE + 0x0320)
#define DE2_VID2_FIFO_MARK_REG      PUV4_IOREG(UDE2_BASE + 0x0324)
#define DE2_VID2_VDS_CFG_REG        PUV4_IOREG(UDE2_BASE + 0x0328)
#define DE2_VID2_SCL_CFG_REG        PUV4_IOREG(UDE2_BASE + 0x032c)
#define DE2_VID2_SCL_SIZE_REG       PUV4_IOREG(UDE2_BASE + 0x0330)
#define DE2_VID2_SCL_HPARA_REG      PUV4_IOREG(UDE2_BASE + 0x0334)
#define DE2_VID2_SCL_VPARA_REG      PUV4_IOREG(UDE2_BASE + 0x0338)
#define DE2_VID2_ADJ_CFG_REG        PUV4_IOREG(UDE2_BASE + 0x033c)
#define DE2_VID2_ADJ_WRITE_REG      PUV4_IOREG(UDE2_BASE + 0x0340)
#define DE2_CSR2_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0380)
#define DE2_CSR2_XY_REG             PUV4_IOREG(UDE2_BASE + 0x0384)
#define DE2_CSR2_SIZE_REG           PUV4_IOREG(UDE2_BASE + 0x0388)
#define DE2_CSR2_ADDR_REG           PUV4_IOREG(UDE2_BASE + 0x038C)
#define DE2_CSR2_FIFO_MARK_REG      PUV4_IOREG(UDE2_BASE + 0x0390)
#define DE2_CSR2_COLOR1_REG         PUV4_IOREG(UDE2_BASE + 0x0394)
#define DE2_CSR2_COLOR2_REG         PUV4_IOREG(UDE2_BASE + 0x0398)
#define DE2_BLD2_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0400)
#define DE2_BLD2_DFT_COLOR_REG      PUV4_IOREG(UDE2_BASE + 0x0404)
#define DE2_BLD2_CK_COLOR_REG       PUV4_IOREG(UDE2_BASE + 0x0408)
#define DE2_BLD2_CK_MARK_REG        PUV4_IOREG(UDE2_BASE + 0x040C)
#define DE2_BLD2_AW_ST_REG          PUV4_IOREG(UDE2_BASE + 0x0410)
#define DE2_BLD2_AW_END_REG         PUV4_IOREG(UDE2_BASE + 0x0414)
#define DE2_BLD2_ALPHA_COLOR_REG    PUV4_IOREG(UDE2_BASE + 0x0418)
#define DE2_GAMMA2_CFG_REG          PUV4_IOREG(UDE2_BASE + 0x041c)
#define DE2_GAMMA2_WRITE_REG        PUV4_IOREG(UDE2_BASE + 0x0420)
#define DE2_DITHER2_CFG_REG         PUV4_IOREG(UDE2_BASE + 0x0424)
#define DE2_DITHER2_MATRIX1_REG     PUV4_IOREG(UDE2_BASE + 0x0428)
#define DE2_DITHER2_MATRIX2_REG     PUV4_IOREG(UDE2_BASE + 0x042c)
#define DE2_SCG2_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0440)
#define DE2_SCG2_H_BLANK_REG        PUV4_IOREG(UDE2_BASE + 0x0444)
#define DE2_SCG2_H_SYNC_REG         PUV4_IOREG(UDE2_BASE + 0x0448)
#define DE2_SCG2_V_BLANK_REG        PUV4_IOREG(UDE2_BASE + 0x044c)
#define DE2_SCG2_V_SYNC_REG         PUV4_IOREG(UDE2_BASE + 0x0450)
#define DE2_SCG2_XY_REG             PUV4_IOREG(UDE2_BASE + 0x0454)
#define DE2_SQC2_CFG_REG            PUV4_IOREG(UDE2_BASE + 0x0460)
#define DE2_SQC2_EN_CTL_REG         PUV4_IOREG(UDE2_BASE + 0x0464)
#define DE2_SQC2_DELAY1_REG         PUV4_IOREG(UDE2_BASE + 0x0468)
#define DE2_SQC2_DELAY2_REG         PUV4_IOREG(UDE2_BASE + 0x046C)
#define DE2_SQC2_PWM_REG            PUV4_IOREG(UDE2_BASE + 0x0470)

#define UDE_CFG_DST_MASK             __BS(4, 4)
#define UDE_CFG_DST8                 __BF(0x0, 4, 4)
#define UDE_CFG_DST16                __BF(0x3, 4, 4)
#define UDE_CFG_DST24                __BF(0x4, 4, 4)
#define UDE_CFG_DST32                __BF(0x5, 4, 4)