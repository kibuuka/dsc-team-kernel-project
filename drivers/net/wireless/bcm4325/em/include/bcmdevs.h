/*
 * Broadcom device-specific manifest constants.
 *
 * Copyright (C) 2009, Broadcom Corporation
 * All Rights Reserved.
 * 
 * THIS SOFTWARE IS OFFERED "AS IS", AND BROADCOM GRANTS NO WARRANTIES OF ANY
 * KIND, EXPRESS OR IMPLIED, BY STATUTE, COMMUNICATION OR OTHERWISE. BROADCOM
 * SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A SPECIFIC PURPOSE OR NONINFRINGEMENT CONCERNING THIS SOFTWARE.
 *
 * $Id: bcmdevs.h,v 13.172.4.5.4.11.4.7 2009/05/22 06:47:57 Exp $
 */


#ifndef	_BCMDEVS_H
#define	_BCMDEVS_H


#define	VENDOR_EPIGRAM		0xfeda
#define	VENDOR_BROADCOM		0x14e4
#define VENDOR_SI_IMAGE		0x1095		
#define VENDOR_TI		0x104c		
#define VENDOR_RICOH		0x1180		
#define VENDOR_JMICRON		0x197b
#if !defined(ESTA_POSTMOGRIFY_REMOVAL)
#define	VENDOR_3COM		0x10b7
#define	VENDOR_NETGEAR		0x1385
#define	VENDOR_DIAMOND		0x1092
#define	VENDOR_INTEL		0x8086
#define	VENDOR_DELL		0x1028
#define	VENDOR_HP		0x103c
#define	VENDOR_HP_COMPAQ	0x0e11
#define	VENDOR_APPLE		0x106b
#define VENDOR_BUFFALO		0x1154		

#endif 


#define	VENDOR_BROADCOM_PCMCIA	0x02d0


#define	VENDOR_BROADCOM_SDIO	0x00BF


#define BCM_DNGL_VID            0xa5c
#define BCM_DNGL_BL_PID_4320    0xbd11
#define BCM_DNGL_BL_PID_4328    0xbd12
#define BCM_DNGL_BL_PID_4322    0xbd13
#define BCM_DNGL_BL_PID_4325    0xbd14
#define BCM_DNGL_BL_PID_4315    0xbd15
#define BCM_DNGL_BL_PID_4319    0xbd16
#define BCM_DNGL_BDC_PID        0xbdc

#if !defined(ESTA_POSTMOGRIFY_REMOVAL)

#define	BCM4210_DEVICE_ID	0x1072		
#define	BCM4230_DEVICE_ID	0x1086		
#define	BCM4401_ENET_ID		0x170c		
#define	BCM3352_DEVICE_ID	0x3352		
#define	BCM3360_DEVICE_ID	0x3360		
#define	BCM4211_DEVICE_ID	0x4211
#define	BCM4231_DEVICE_ID	0x4231
#define	BCM4303_D11B_ID		0x4303		
#define	BCM4311_D11G_ID		0x4311		
#define	BCM4311_D11DUAL_ID	0x4312		
#define	BCM4311_D11A_ID		0x4313		
#define	BCM4328_D11DUAL_ID	0x4314		
#define	BCM4328_D11G_ID		0x4315		
#define	BCM4328_D11A_ID		0x4316		
#define	BCM4318_D11G_ID		0x4318		
#define	BCM4318_D11DUAL_ID	0x4319		
#define	BCM4318_D11A_ID		0x431a		
#endif 
#define	BCM4325_D11DUAL_ID	0x431b		
#define	BCM4325_D11G_ID		0x431c		
#define	BCM4325_D11A_ID		0x431d		
#if !defined(ESTA_POSTMOGRIFY_REMOVAL)
#define	BCM4306_D11G_ID		0x4320		
#define	BCM4306_D11A_ID		0x4321		
#define	BCM4306_UART_ID		0x4322		
#define	BCM4306_V90_ID		0x4323		
#define	BCM4306_D11DUAL_ID	0x4324		
#define	BCM4306_D11G_ID2	0x4325		
#define	BCM4321_D11N_ID		0x4328		
#define	BCM4321_D11N2G_ID	0x4329		
#define	BCM4321_D11N5G_ID	0x432a		
#define BCM4322_D11N_ID		0x432b		
#define BCM4322_D11N2G_ID	0x432c		
#define BCM4322_D11N5G_ID	0x432d		
#endif 
#define BCM4329_D11N_ID		0x432e		
#define BCM4329_D11N2G_ID	0x432f		
#define BCM4329_D11N5G_ID	0x4330		
#define	BCM4315_D11DUAL_ID	0x4334		
#define	BCM4315_D11G_ID		0x4335		
#define	BCM4315_D11A_ID		0x4336		


#if !defined(ESTA_POSTMOGRIFY_REMOVAL)
#define	BCMGPRS_UART_ID		0x4333		
#define	BCMGPRS2_UART_ID	0x4344		
#define FPGA_JTAGM_ID		0x43f0		
#define BCM_JTAGM_ID		0x43f1		
#endif 
#define SDIOH_FPGA_ID		0x43f2		
#if !defined(ESTA_POSTMOGRIFY_REMOVAL)
#define BCM_SDIOH_ID		0x43f3		
#define SDIOD_FPGA_ID		0x43f4		
#endif 
#define SPIH_FPGA_ID		0x43f5		
#if !defined(ESTA_POSTMOGRIFY_REMOVAL)
#define BCM_SPIH_ID		0x43f6		
#define MIMO_FPGA_ID		0x43f8		
#define	BCM4402_ENET_ID		0x4402		
#define	BCM4402_V90_ID		0x4403		
#define	BCM4410_DEVICE_ID	0x4410		
#define	BCM4412_DEVICE_ID	0x4412		
#define	BCM4430_DEVICE_ID	0x4430		
#define	BCM4432_DEVICE_ID	0x4432		
#define	BCM4704_ENET_ID		0x4706		
#endif 
#define	BCM4710_DEVICE_ID	0x4710		
#if !defined(ESTA_POSTMOGRIFY_REMOVAL)
#define	BCM47XX_ILINE_ID	0x4711		
#define	BCM47XX_V90_ID		0x4712		
#define	BCM47XX_ENET_ID		0x4713		
#define	BCM47XX_EXT_ID		0x4714		
#define	BCM47XX_USB_ID		0x4715		
#define	BCM47XX_USBH_ID		0x4716		
#define	BCM47XX_USBD_ID		0x4717		
#define	BCM47XX_IPSEC_ID	0x4718		
#define	BCM47XX_ROBO_ID		0x4719		
#define	BCM47XX_USB20H_ID	0x471a		
#define	BCM47XX_USB20D_ID	0x471b		
#define	BCM47XX_ATA100_ID	0x471d		
#define	BCM47XX_SATAXOR_ID	0x471e		
#define	BCM47XX_GIGETH_ID	0x471f		
#define	BCM4712_MIPS_ID		0x4720		
#define	BCM4716_DEVICE_ID	0x4722		
#define BCM47XX_SMBUS_EMU_ID	0x47fe		
#define	BCM47XX_XOR_EMU_ID	0x47ff		
#define	EPI41210_DEVICE_ID	0xa0fa		
#define	EPI41230_DEVICE_ID	0xa10e		
#define JINVANI_SDIOH_ID	0x4743		
#endif 
#define BCM27XX_SDIOH_ID	0x2702		
#define PCIXX21_FLASHMEDIA0_ID	0x8033		
#define PCIXX21_SDIOH0_ID	0x8034		
#define PCIXX21_FLASHMEDIA_ID	0x803b		
#define PCIXX21_SDIOH_ID	0x803c		
#define R5C822_SDIOH_ID		0x0822		
#define JMICRON_SDIOH_ID	0x2381		


#define	BCM4306_CHIP_ID		0x4306		
#define	BCM4311_CHIP_ID		0x4311		
#define	BCM4312_CHIP_ID		0x4312		
#define	BCM4315_CHIP_ID		0x4315		
#define	BCM4318_CHIP_ID		0x4318		
#define	BCM4319_CHIP_ID		0x4319		
#define	BCM4320_CHIP_ID		0x4320		
#define	BCM4321_CHIP_ID		0x4321		
#define	BCM4322_CHIP_ID		0x4322		
#define	BCM4325_CHIP_ID		0x4325		
#define	BCM4328_CHIP_ID		0x4328		
#define	BCM4329_CHIP_ID		0x4329		
#define	BCM4402_CHIP_ID		0x4402		
#define	BCM4704_CHIP_ID		0x4704		
#define	BCM4710_CHIP_ID		0x4710		
#define	BCM4712_CHIP_ID		0x4712		
#define BCM4785_CHIP_ID		0x4785		
#define	BCM5350_CHIP_ID		0x5350		
#define	BCM5352_CHIP_ID		0x5352		
#define	BCM5354_CHIP_ID		0x5354		
#define BCM5365_CHIP_ID		0x5365          



#define	BCM4303_PKG_ID		2		
#define	BCM4309_PKG_ID		1		
#define	BCM4712LARGE_PKG_ID	0		
#define	BCM4712SMALL_PKG_ID	1		
#define	BCM4712MID_PKG_ID	2		
#define BCM4328USBD11G_PKG_ID	2		
#define BCM4328USBDUAL_PKG_ID	3		
#define BCM4328SDIOD11G_PKG_ID	4		
#define BCM4328SDIODUAL_PKG_ID	5		
#define BCM4329_289PIN_PKG_ID	0		
#define BCM4329_182PIN_PKG_ID	1		
#define BCM5354E_PKG_ID		1		
#define HDLSIM5350_PKG_ID	1		
#define HDLSIM_PKG_ID		14		
#define HWSIM_PKG_ID		15		

#if !defined(ESTA_POSTMOGRIFY_REMOVAL)

#define	BFL_BTCOEXIST	0x00000001	
#define	BFL_PACTRL	0x00000002	
#define	BFL_AIRLINEMODE	0x00000004	
#define	BFL_ADCDIV	0x00000008	
#define	BFL_ENETROBO	0x00000010	
#define	BFL_NOPLLDOWN	0x00000020	
#define	BFL_CCKHIPWR	0x00000040	
#define	BFL_ENETADM	0x00000080	
#define	BFL_ENETVLAN	0x00000100	
#ifdef WLAFTERBURNER
#define	BFL_AFTERBURNER	0x00000200	
#endif 
#define BFL_NOPCI	0x00000400	
#define BFL_FEM		0x00000800	
#define BFL_EXTLNA	0x00001000	
#define BFL_HGPA	0x00002000	
#define	BFL_BTCMOD	0x00004000	
#define	BFL_ALTIQ	0x00008000	
#define BFL_NOPA	0x00010000	
#define BFL_RSSIINV	0x00020000	
#define BFL_PAREF	0x00040000	
#define BFL_3TSWITCH	0x00080000	
#define BFL_PHASESHIFT	0x00100000	
#define BFL_BUCKBOOST	0x00200000	
#define BFL_FEM_BT	0x00400000	
#define BFL_NOCBUCK	0x00800000	
#define BFL_CCKFAVOREVM	0x01000000	
#define BFL_PALDO	0x02000000	
#define BFL_LNLDO2_2P5	0x04000000	
#define BFL_FASTPWR	0x08000000


#define BFL2_RXBB_INT_REG_DIS	0x00000001	
#define BFL2_DEPRECIATED_STUB	0x00000002	
#define BFL2_TXPWRCTRL_EN	0x00000004	
#define BFL2_2X4_DIV		0x00000008	
#define BFL2_5G_PWRGAIN		0x00000010	
#define BFL2_PCIEWAR_OVR	0x00000020	
#define BFL2_CAESERS_BRD	0x00000040	
#define BFL2_BTC3WIRE		0x00000080	
#define BFL2_SKWRKFEM_BRD	0x00000100	


#define	BOARD_GPIO_BTC3W_IN	0x850	
#define	BOARD_GPIO_BTC3W_OUT	0x020	
#define	BOARD_GPIO_BTCMOD_IN	0x010	
#define	BOARD_GPIO_BTCMOD_OUT	0x020	
#define	BOARD_GPIO_BTC_IN	0x080	
#define	BOARD_GPIO_BTC_OUT	0x100	
#define	BOARD_GPIO_PACTRL	0x200	
#define BOARD_GPIO_12		0x1000	
#define BOARD_GPIO_13		0x2000	

#define	PCI_CFG_GPIO_SCS	0x10	
#define PCI_CFG_GPIO_HWRAD	0x20	
#define PCI_CFG_GPIO_XTAL	0x40	
#define PCI_CFG_GPIO_PLL	0x80	


#define PLL_DELAY		150		
#define FREF_DELAY		200		
#define MIN_SLOW_CLK		32		
#define	XTAL_ON_DELAY		1000		


#define	BU4710_BOARD		0x0400
#define	VSIM4710_BOARD		0x0401
#define	QT4710_BOARD		0x0402

#define	BU4309_BOARD		0x040a
#define	BCM94309CB_BOARD	0x040b
#define	BCM94309MP_BOARD	0x040c
#define	BCM4309AP_BOARD		0x040d

#define	BCM94302MP_BOARD	0x040e

#define	BU4306_BOARD		0x0416
#define	BCM94306CB_BOARD	0x0417
#define	BCM94306MP_BOARD	0x0418

#define	BCM94710D_BOARD		0x041a
#define	BCM94710R1_BOARD	0x041b
#define	BCM94710R4_BOARD	0x041c
#define	BCM94710AP_BOARD	0x041d

#define	BU2050_BOARD		0x041f

#define	BCM94306P50_BOARD	0x0420

#define	BCM94309G_BOARD		0x0421

#define	BU4704_BOARD		0x0423
#define	BU4702_BOARD		0x0424

#define	BCM94306PC_BOARD	0x0425		

#define	MPSG4306_BOARD		0x0427

#define	BCM94702MN_BOARD	0x0428


#define	BCM94702CPCI_BOARD	0x0429


#define	BCM95380RR_BOARD	0x042a


#define	BCM94306CBSG_BOARD	0x042b


#define	PCSG94306_BOARD		0x042d


#define	BU4704SD_BOARD		0x042e


#define	BCM94704AGR_BOARD	0x042f


#define	BCM94308MP_BOARD	0x0430


#define	BCM94306GPRS_BOARD	0x0432


#define BU5365_FPGA_BOARD	0x0433

#define BU4712_BOARD		0x0444
#define	BU4712SD_BOARD		0x045d
#define	BU4712L_BOARD		0x045f


#define BCM94712AP_BOARD	0x0445
#define BCM94712P_BOARD		0x0446


#define BU4318_BOARD		0x0447
#define CB4318_BOARD		0x0448
#define MPG4318_BOARD		0x0449
#define MP4318_BOARD		0x044a
#define SD4318_BOARD		0x044b


#define BCM96338_BOARD		0x6338
#define BCM96348_BOARD		0x6348
#define BCM96358_BOARD		0x6358
#define BCM96368_BOARD		0x6368


#define	BCM94306P_BOARD		0x044c


#define	BCM94303MP_BOARD	0x044e


#define	BCM94306MPSGH_BOARD	0x044f


#define BCM94306MPM  		0x0450
#define BCM94306MPL  		0x0453


#define	BCM94712AGR_BOARD	0x0451


#define	PC4303_BOARD		0x0454


#define	BCM95350K_BOARD		0x0455


#define	BCM95350R_BOARD		0x0456


#define	BCM94306MPLNA_BOARD	0x0457


#define	BU4320_BOARD		0x0458
#define	BU4320S_BOARD		0x0459
#define	BCM94320PH_BOARD	0x045a


#define	BCM94306MPH_BOARD	0x045b


#define	BCM94306PCIV_BOARD	0x045c

#define	BU4712SD_BOARD		0x045d

#define	BCM94320PFLSH_BOARD	0x045e

#define	BU4712L_BOARD		0x045f
#define	BCM94712LGR_BOARD	0x0460
#define	BCM94320R_BOARD		0x0461

#define	BU5352_BOARD		0x0462

#define	BCM94318MPGH_BOARD	0x0463

#define	BU4311_BOARD		0x0464
#define	BCM94311MC_BOARD	0x0465
#define	BCM94311MCAG_BOARD	0x0466

#define	BCM95352GR_BOARD	0x0467


#define	BCM95351AGR_BOARD	0x0470


#define	BCM94704MPCB_BOARD	0x0472


#define BU4785_BOARD		0x0478


#define BU4321_BOARD		0x046b
#define BU4321E_BOARD		0x047c
#define MP4321_BOARD		0x046c
#define CB2_4321_BOARD		0x046d
#define CB2_4321_AG_BOARD	0x0066
#define MC4321_BOARD		0x046e


#define BU4328_BOARD		0x0481
#define BCM4328SDG_BOARD	0x0482
#define BCM4328SDAG_BOARD	0x0483
#define BCM4328UG_BOARD		0x0484
#define BCM4328UAG_BOARD	0x0485
#define BCM4328PC_BOARD		0x0486
#define BCM4328CF_BOARD		0x0487


#define BCM94325DEVBU_BOARD	0x0490
#define BCM94325BGABU_BOARD	0x0491

#define BCM94325SDGWB_BOARD	0x0492

#define BCM94325SDGMDL_BOARD    0x04aa
#define BCM94325SDGMDL2_BOARD	0x04c6

#define BCM94325SDABGWBA_BOARD  0x04e1


#define BCM94322MC_SSID		0x04a4
#define BCM94322U_SSID		0x04a8
#define BCM94322HM_SSID		0x04b0
#define BCM94322USB_SSID	0x04a8
#define BCM94322USB2D_SSID	0x04bf


#define BCM94315DEVBU_SSID	0x04c2
#define BCM94315USBGP_SSID  0x04c7
#define BCM94315BGABU_SSID  0x04ca
#define BCM94315USBGP41_SSID 0x04cb


#define BCM94319DEVBU_SSID	0X04e5
#define BCM94319USB_SSID	0X04e6
#define BCM94319SD_SSID		0X04e7



#define GPIO_NUMPINS		16


#define	NORADIO_ID		0xe4f5
#define	NORADIO_IDCODE		0x4e4f5246

#define	BCM2050_ID		0x2050
#define	BCM2050_IDCODE		0x02050000
#define	BCM2050A0_IDCODE	0x1205017f
#define	BCM2050A1_IDCODE	0x2205017f
#define	BCM2050R8_IDCODE	0x8205017f

#define BCM2055_ID		0x2055
#define BCM2055_IDCODE		0x02055000
#define BCM2055A0_IDCODE	0x1205517f

#define BCM2056_ID		0x2056
#define BCM2056_IDCODE		0x02056000
#define BCM2056A0_IDCODE	0x1205517f

#define	BCM2060_ID		0x2060
#define	BCM2060_IDCODE		0x02060000
#define	BCM2060WW_IDCODE	0x1206017f

#define BCM2062_ID		0x2062
#define BCM2062_IDCODE		0x02062000
#define BCM2062A0_IDCODE	0x0206217f

#define BCM2063_ID		0x2063
#define BCM2063_IDCODE		0x02063000
#define BCM2063A0_IDCODE	0x0206317f


#define	IDCODE_MFG_MASK		0x00000fff
#define	IDCODE_MFG_SHIFT	0
#define	IDCODE_ID_MASK		0x0ffff000
#define	IDCODE_ID_SHIFT		12
#define	IDCODE_REV_MASK		0xf0000000
#define	IDCODE_REV_SHIFT	28
#endif 

#endif 
