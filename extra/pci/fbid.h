#include "pci_ids.h"

/* aty128fb.c */
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_RE, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_RF, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_RK, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_RL, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_PF, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_PR, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_U3, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_U1, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_LE, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RAGE128_LF, "" },

/* neofb.c */
#define PCI_CHIP_NM2070 0x0001
#define PCI_CHIP_NM2090 0x0002
#define PCI_CHIP_NM2093 0x0003
#define PCI_CHIP_NM2097 0x0083
#define PCI_CHIP_NM2160 0x0004
#define PCI_CHIP_NM2200 0x0005
#define PCI_CHIP_NM2230 0x0025
#define PCI_CHIP_NM2360 0x0006
#define PCI_CHIP_NM2380 0x0016
{ PCI_VENDOR_ID_NEOMAGIC, PCI_CHIP_NM2070, "" },
{ PCI_VENDOR_ID_NEOMAGIC, PCI_CHIP_NM2090, "" },
{ PCI_VENDOR_ID_NEOMAGIC, PCI_CHIP_NM2093, "" },
{ PCI_VENDOR_ID_NEOMAGIC, PCI_CHIP_NM2097, "" },
{ PCI_VENDOR_ID_NEOMAGIC, PCI_CHIP_NM2160, "" },
{ PCI_VENDOR_ID_NEOMAGIC, PCI_CHIP_NM2200, "" },
{ PCI_VENDOR_ID_NEOMAGIC, PCI_CHIP_NM2230, "" },
{ PCI_VENDOR_ID_NEOMAGIC, PCI_CHIP_NM2360, "" },
{ PCI_VENDOR_ID_NEOMAGIC, PCI_CHIP_NM2380, "" },

/* pm2fb.c */
/* { PCI_VENDOR_ID_TI, PCI_DEVICE_ID_TI_TVP4020, "" }, */ /* too old to list */
{ PCI_VENDOR_ID_3DLABS, PCI_DEVICE_ID_3DLABS_PERMEDIA2, "" },
{ PCI_VENDOR_ID_3DLABS, PCI_DEVICE_ID_3DLABS_PERMEDIA2V, "" },

/* pm3fb.c */
#define PCI_DEVICE_ID_3DLABS_PERMEDIA3 0x000a
{ PCI_VENDOR_ID_3DLABS, PCI_DEVICE_ID_3DLABS_PERMEDIA3, "" },

/* radeonfb.c */
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QD, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QE, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QF, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QG, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QY, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QZ, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_LW, "" },
/* { PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_LX, "" }, */ /* Fire GL */
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_LY, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_LZ, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QL, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QN, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QO, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_Ql, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_BB, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QM, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QW, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_QX, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_Id, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_Ie, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_If, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_Ig, "" },
/* { PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_Ld, "" }, */ /* Fire GL */
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_Lf, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_Lg, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_ND, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_NE, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_NF, "" },
/* { PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_NG, "" }, */ /* Fire GL */
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_AE, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_AF, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_NH, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_NI, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_Y_, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_AD, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_AP, "" },
{ PCI_VENDOR_ID_ATI, PCI_DEVICE_ID_ATI_RADEON_AR, "" },

/* tdfxfb.c */
#define PCI_DEVICE_ID_3DFX_VOODOO5	0x0009
{ PCI_VENDOR_ID_3DFX, PCI_DEVICE_ID_3DFX_BANSHEE, "" },
{ PCI_VENDOR_ID_3DFX, PCI_DEVICE_ID_3DFX_VOODOO3, "" },
{ PCI_VENDOR_ID_3DFX, PCI_DEVICE_ID_3DFX_VOODOO5, "" },

/* tridentfb.c */
#define CYBER9320	0x9320
#define CYBER9388	0x9388
#define CYBER9382	0x9382
#define CYBER9385	0x9385
#define CYBER9397	0x9397
#define CYBER9397DVD	0x939A
#define CYBER9520	0x9520
#define CYBER9525DVD	0x9525
#define TGUI9660	0x9660
#define IMAGE975	0x9750
#define IMAGE985	0x9850
#define BLADE3D		0x9880
#define CYBERBLADEE4	0x9540
#define CYBERBLADEi7	0x8400
#define CYBERBLADEi7D	0x8420
#define CYBERBLADEi1	0x8500
#define CYBERBLADEi1D	0x8520
#define CYBERBLADEAi1	0x8600
#define CYBERBLADEAi1D	0x8620
#define CYBERBLADEXPAi1 0x8820
#define CYBERBLADEXPm8  0x9910
#define CYBERBLADEXPm16 0x9930
{ PCI_VENDOR_ID_TRIDENT, BLADE3D, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEi7, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEi7D, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEi1, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEi1D, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEAi1, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEAi1D, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEE4, "" },
{ PCI_VENDOR_ID_TRIDENT, TGUI9660, "" },
{ PCI_VENDOR_ID_TRIDENT, IMAGE975, "" },
{ PCI_VENDOR_ID_TRIDENT, IMAGE985, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBER9320, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBER9388, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBER9520, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBER9525DVD, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBER9397, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBER9397DVD, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEXPAi1, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEXPm8, "" },
{ PCI_VENDOR_ID_TRIDENT, CYBERBLADEXPm16, "" },
 
/* intelfb.c */
#define PCI_DEVICE_ID_INTEL_830M	0x3577
#define PCI_DEVICE_ID_INTEL_845G	0x2562
#define PCI_DEVICE_ID_INTEL_85XGM	0x3582
#define PCI_DEVICE_ID_INTEL_865G	0x2572
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_830M, "" },
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_845G, "" },
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_85XGM, "" },
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_865G, "" },

/* matroxfb_base */
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_MIL, "" },
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_MIL_2, "" },
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_MIL_2_AGP, "" },
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_MYS, "" },
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_G100_MM, "" },
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_G100_AGP, "" },
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_G200_PCI, "" },
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_G200_AGP, "" },
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_G400, "" },
{ PCI_VENDOR_ID_MATROX, PCI_DEVICE_ID_MATROX_G550, "" },

/* rivafb.c */
#ifdef USE_FB_PATCH
/* { PCI_VENDOR_ID_NVIDIA_SGS, 0x0018, "(*)" }, */ /* RIVA 128 */
{ PCI_VENDOR_ID_NVIDIA, 0x0020, "(*)" }, /* RIVA TNT [NV4] */
{ PCI_VENDOR_ID_NVIDIA, 0x0028, "(*)" }, /* RIVA TNT2/TNT2 Pro [NV5] */
{ PCI_VENDOR_ID_NVIDIA, 0x0029, "(*)" }, /* RIVA TNT2 Ultra [NV5] */
{ PCI_VENDOR_ID_NVIDIA, 0x002A, "(*)" }, /* Riva TnT2 [NV5] */
{ PCI_VENDOR_ID_NVIDIA, 0x002B, "(*)" }, /* Riva TnT2 [NV5] */
{ PCI_VENDOR_ID_NVIDIA, 0x002C, "(*)" }, /* Vanta/Vanta LT [NV6] */
{ PCI_VENDOR_ID_NVIDIA, 0x002D, "(*)" }, /* RIVA TNT2 Model 64/Model 64 Pro [NV5M64] */
{ PCI_VENDOR_ID_NVIDIA, 0x002E, "(*)" }, /* Vanta [NV6] */
{ PCI_VENDOR_ID_NVIDIA, 0x002F, "(*)" }, /* Vanta [NV6] */
{ PCI_VENDOR_ID_NVIDIA, 0x00A0, "(*)" }, /* Aladdin TNT2 [NV5] */
{ PCI_VENDOR_ID_NVIDIA, 0x0100, "(*)" }, /* GeForce 256 SDR [NV10] */
{ PCI_VENDOR_ID_NVIDIA, 0x0101, "(*)" }, /* GeForce 256 DDR [NV10DDR] */
{ PCI_VENDOR_ID_NVIDIA, 0x0103, "(*)" }, /* Quadro [NV10GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0110, "(*)" }, /* GeForce2 MX/MX 400 [NV11] */
{ PCI_VENDOR_ID_NVIDIA, 0x0111, "(*)" }, /* GeForce2 MX 100 DDR/200 DDR [NV11DDR] */
{ PCI_VENDOR_ID_NVIDIA, 0x0112, "(*)" }, /* GeForce2 Go [NV11] */
{ PCI_VENDOR_ID_NVIDIA, 0x0113, "(*)" }, /* Quadro2 MXR/EX [NV11GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0150, "(*)" }, /* GeForce2 GTS/Pro [NV15] */
{ PCI_VENDOR_ID_NVIDIA, 0x0151, "(*)" }, /* NV15DDR [GeForce2 Ti] */
{ PCI_VENDOR_ID_NVIDIA, 0x0152, "(*)" }, /* GeForce2 Ultra, Bladerunner [NV15BR] */
{ PCI_VENDOR_ID_NVIDIA, 0x0153, "(*)" }, /* Quadro2 Pro [NV15GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0170, "(*)" }, /* GeForce4 MX 460 [NV17] */
{ PCI_VENDOR_ID_NVIDIA, 0x0171, "(*)" }, /* GeForce4 MX 440 [NV17] */
{ PCI_VENDOR_ID_NVIDIA, 0x0172, "(*)" }, /* GeForce4 MX 420 [NV17] */
{ PCI_VENDOR_ID_NVIDIA, 0x0173, "(*)" }, /* GeForce4 MX 440-SE */
{ PCI_VENDOR_ID_NVIDIA, 0x0174, "(*)" }, /* GeForce4 MX 440 Go [NV17] */
{ PCI_VENDOR_ID_NVIDIA, 0x0175, "(*)" }, /* GeForce4 MX 420 Go [NV17] */
{ PCI_VENDOR_ID_NVIDIA, 0x0176, "(*)" }, /* GeForce4 MX 420 Go 32M [NV17] */
{ PCI_VENDOR_ID_NVIDIA, 0x0177, "(*)" }, /* GeForce4 MX 460 Go [NV17] */
{ PCI_VENDOR_ID_NVIDIA, 0x0178, "(*)" }, /* Quadro4 500 XGL [NV17GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0179, "(*)" }, /* GeForce4 MX 420 Go 64M [NV17] */
{ PCI_VENDOR_ID_NVIDIA, 0x017A, "(*)" }, /* Quadro4 200/400 [NV17GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x017B, "(*)" }, /* Quadro4 550 XGL [NV17GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x017C, "(*)" }, /* Quadro4 500 Go GL */
{ PCI_VENDOR_ID_NVIDIA, 0x017D, "(*)" }, /* GeForce4 410 Go 16M [NV17] */
{ PCI_VENDOR_ID_NVIDIA, 0x0181, "(*)" }, /* GeForce4 MX 440 AGP 8x [NV18] */
{ PCI_VENDOR_ID_NVIDIA, 0x0182, "(*)" }, /* GeForce4 MX 440SE AGP 8x [NV18] */
{ PCI_VENDOR_ID_NVIDIA, 0x0183, "(*)" }, /* GeForce4 MX 420 AGP 8x [NV18] */
{ PCI_VENDOR_ID_NVIDIA, 0x0186, "(*)" }, /* GeForce4 448 Go [NV18] */
{ PCI_VENDOR_ID_NVIDIA, 0x0187, "(*)" }, /* GeForce4 488 Go [NV18] */
{ PCI_VENDOR_ID_NVIDIA, 0x0188, "(*)" }, /* Quadro4 580 XGL [NV18GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x018A, "(*)" }, /* Quadro4 280 NVS AGP [NV18GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x018B, "(*)" }, /* Quadro4 380 XGL [NV18GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x01A0, "(*)" }, /* GeForce2 Integrated [NVCrush11] */
{ PCI_VENDOR_ID_NVIDIA, 0x01F0, "(*)" }, /* GeForce4 MX Integrated GPU [NV18] */
{ PCI_VENDOR_ID_NVIDIA, 0x0200, "(*)" }, /* GeForce3 [NV20] */
{ PCI_VENDOR_ID_NVIDIA, 0x0201, "(*)" }, /* GeForce3 Ti 200 [NV20] */
{ PCI_VENDOR_ID_NVIDIA, 0x0202, "(*)" }, /* GeForce3 Ti 500 [NV20] */
{ PCI_VENDOR_ID_NVIDIA, 0x0203, "(*)" }, /* Quadro4 500 DDC [NV20DCC] */
{ PCI_VENDOR_ID_NVIDIA, 0x0250, "(*)" }, /* GeForce4 Ti 4600 [NV25] */
{ PCI_VENDOR_ID_NVIDIA, 0x0251, "(*)" }, /* GeForce4 Ti 4400 [NV25] */
{ PCI_VENDOR_ID_NVIDIA, 0x0252, "(*)" }, /* GeForce4 Ti [NV25] */
{ PCI_VENDOR_ID_NVIDIA, 0x0253, "(*)" }, /* GeForce4 Ti 4200 [NV25] */
{ PCI_VENDOR_ID_NVIDIA, 0x0258, "(*)" }, /* Quadro4 900 XGL [NV25GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0259, "(*)" }, /* Quadro4 750 XGL [NV25GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x025B, "(*)" }, /* Quadro4 700 XGL [NV25GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0280, "(*)" }, /* GeForce4 Ti 4800 [NV28] */
{ PCI_VENDOR_ID_NVIDIA, 0x0281, "(*)" }, /* GeForce4 Ti 4200 AGP 8x [NV28] */
{ PCI_VENDOR_ID_NVIDIA, 0x0282, "(*)" }, /* GeForce4 Ti 4800 SE [NV28] */
{ PCI_VENDOR_ID_NVIDIA, 0x0286, "(*)" }, /* GeForce4 4200 Go AGP 8x [NV28] */
{ PCI_VENDOR_ID_NVIDIA, 0x0288, "(*)" }, /* Quadro4 980 XGL [NV28GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0289, "(*)" }, /* Quadro4 780 XGL [NV28GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x028C, "(*)" }, /* Quadro4 700 Go GL [NV28GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0300, "(*)" }, /* GeForce FX [NV30] */
{ PCI_VENDOR_ID_NVIDIA, 0x0301, "(*)" }, /* GeForce FX 5800 Ultra [NV30] */
{ PCI_VENDOR_ID_NVIDIA, 0x0302, "(*)" }, /* GeForce FX 5800 [NV30] */
{ PCI_VENDOR_ID_NVIDIA, 0x0308, "(*)" }, /* Quadro FX 2000 [NV30GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0309, "(*)" }, /* Quadro FX 1000 [NV30GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0311, "(*)" }, /* GeForce FX 5600 Ultra [NV31] */
{ PCI_VENDOR_ID_NVIDIA, 0x0312, "(*)" }, /* GeForce FX 5600 [NV31] */
{ PCI_VENDOR_ID_NVIDIA, 0x0313, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0314, "(*)" }, /* GeForce FX 5600SE (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0316, "(*)" }, /* NV31M (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x0317, "(*)" }, /* NV31M Pro (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x0318, "(*)" }, /* (from XFree 4.3) */
{ PCI_VENDOR_ID_NVIDIA, 0x0319, "(*)" }, /* (from XFree 4.3) */
{ PCI_VENDOR_ID_NVIDIA, 0x031A, "(*)" }, /* GeForce FX Go5600 (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x031B, "(*)" }, /* GeForce FX Go5650 (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x031C, "(*)" }, /* Quadro FX Go700 (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x031D, "(*)" }, /* NV31GLM (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x031E, "(*)" }, /* NV31GLM Pro (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x031F, "(*)" }, /* NV31GLM Pro (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x0321, "(*)" }, /* GeForce FX 5200 Ultra [NV34] */
{ PCI_VENDOR_ID_NVIDIA, 0x0322, "(*)" }, /* GeForce FX 5200 [NV34] */
{ PCI_VENDOR_ID_NVIDIA, 0x0323, "(*)" }, /* GeForce FX 5200SE (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0324, "(*)" }, /* GeForce FX Go5200 (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x0325, "(*)" }, /* GeForce FX Go5250 (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x0326, "(*)" }, /* (From XFree 4.3) */
{ PCI_VENDOR_ID_NVIDIA, 0x0328, "(*)" }, /* GeForce FX Go5200 32M/64M (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x032A, "(*)" }, /* (from XFree 4.3) */
{ PCI_VENDOR_ID_NVIDIA, 0x032B, "(*)" }, /* Quadro FX 500 [NV34GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x032D, "(*)" }, /* GeForce FX Go5100 (from nVidia site) */
{ PCI_VENDOR_ID_NVIDIA, 0x032E, "(*)" }, /* (from XFree 4.3) */
{ PCI_VENDOR_ID_NVIDIA, 0x0330, "(*)" }, /* GeForce FX 5900 Ultra [NV35] */
{ PCI_VENDOR_ID_NVIDIA, 0x0331, "(*)" }, /* GeForce FX 5900 [NV35] */
{ PCI_VENDOR_ID_NVIDIA, 0x0332, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0333, "(*)" }, /* GeForce FX 5950 Ultra (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0334, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0338, "(*)" }, /* Quadro FX 3000 [NV35GL] */
{ PCI_VENDOR_ID_NVIDIA, 0x0341, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0342, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0343, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0347, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0348, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x0349, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x034B, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x034C, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x034E, "(*)" }, /* (from XFree 4.3.99.12) */
{ PCI_VENDOR_ID_NVIDIA, 0x034F, "(*)" }, /* (from XFree 4.3.99.12) */
#else
/* original 2.4.22 */
/* { PCI_VENDOR_ID_NVIDIA_SGS, PCI_DEVICE_ID_NVIDIA_SGS_RIVA128, "(*)" }, */ /* too old to list */
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_TNT, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_TNT2, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_UTNT2, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_VTNT2, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_UVTNT2, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_ITNT2, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE_SDR, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE_DDR, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_QUADRO, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE2_MX, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE2_MX2, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_QUADRO2_MXR, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE2_GTS, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE2_GTS2, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE2_ULTRA, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_QUADRO2_PRO, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE2_GO, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE3, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE3_1, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_GEFORCE3_2, "(*)" },
{ PCI_VENDOR_ID_NVIDIA, PCI_DEVICE_ID_NVIDIA_QUADRO_DDC, "(*)" },
#endif

/* i810_main.h 23 */
#ifdef USE_FB_PATCH
#define PCI_DEVICE_ID_INTEL_82810_MC4           0x7124
#define PCI_DEVICE_ID_INTEL_82810_IG4           0x7125
#define PCI_DEVICE_ID_INTEL_82815_100           0x1102
#define PCI_DEVICE_ID_INTEL_82815_NOAGP         0x1112
#define PCI_DEVICE_ID_INTEL_82815_FULL_CTRL     0x1130
#define PCI_DEVICE_ID_INTEL_82815_FULL_BRG      0x1131
#define PCI_DEVICE_ID_INTEL_82815_FULL          0x1132
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82810_IG1, "" },
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82810_IG3, "" },
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82810_IG4, "" },
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82815_100, "" },
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82815_NOAGP, "" },
{ PCI_VENDOR_ID_INTEL, PCI_DEVICE_ID_INTEL_82815_FULL, "" },
#endif

#ifdef USE_FB_PATCH
/* i740fb */
#define I740_ID_PCI 0x00d1
#define I740_ID_AGP 0x7800
{ PCI_VENDOR_ID_INTEL, I740_ID_PCI, "" },
{ PCI_VENDOR_ID_INTEL, I740_ID_AGP, "" },
#endif

/* sstfb.c */
{ PCI_VENDOR_ID_3DFX, PCI_DEVICE_ID_3DFX_VOODOO, "" },
{ PCI_VENDOR_ID_3DFX, PCI_DEVICE_ID_3DFX_VOODOO2, "" },

/* sis/vesafb */
/* They don't allwo to set an arbitrary video mode */

/* clgenfb.c */
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5436, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5434_8, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5434_4, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5430, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_7543, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_7548, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5480, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5446, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5462, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5464, "" },
{ PCI_VENDOR_ID_CIRRUS, PCI_DEVICE_ID_CIRRUS_5465, "" },

/* vmwarefb */
#ifdef USE_FB_PATCH
#define PCI_VENDOR_ID_VMWARE        0x15AD
#define PCI_DEVICE_ID_VMWARE_SVGA2  0x0405
#define PCI_DEVICE_ID_VMWARE_SVGA   0x0710
{ PCI_VENDOR_ID_VMWARE, PCI_DEVICE_ID_VMWARE_SVGA, "" },
{ PCI_VENDOR_ID_VMWARE, PCI_DEVICE_ID_VMWARE_SVGA2, "" },
#endif

/* cyber2000fb */
{ PCI_VENDOR_ID_INTERG, PCI_DEVICE_ID_INTERG_2000, "" },
{ PCI_VENDOR_ID_INTERG, PCI_DEVICE_ID_INTERG_2010, "" },
{ PCI_VENDOR_ID_INTERG, PCI_DEVICE_ID_INTERG_5000, "" },

/* savagefb */
#ifdef USE_FB_PATCH
#define PCI_CHIP_SAVAGE4      0x8a22
#define PCI_CHIP_SAVAGE3D     0x8a20
#define PCI_CHIP_SAVAGE3D_MV  0x8a21
#define PCI_CHIP_SAVAGE2000   0x9102
#define PCI_CHIP_SAVAGE_MX_MV 0x8c10
#define PCI_CHIP_SAVAGE_MX    0x8c11
#define PCI_CHIP_SAVAGE_IX_MV 0x8c12
#define PCI_CHIP_SAVAGE_IX    0x8c13
#define PCI_CHIP_PROSAVAGE_PM 0x8a25
#define PCI_CHIP_PROSAVAGE_KM 0x8a26
#define PCI_CHIP_S3TWISTER_P  0x8d01
#define PCI_CHIP_S3TWISTER_K  0x8d02
{ PCI_VENDOR_ID_S3, PCI_CHIP_SAVAGE4, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_SAVAGE3D, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_SAVAGE3D_MV, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_SAVAGE2000, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_SAVAGE_MX_MV, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_SAVAGE_MX, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_SAVAGE_IX_MV, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_SAVAGE_IX, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_PROSAVAGE_PM, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_PROSAVAGE_KM, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_S3TWISTER_P, "" },
{ PCI_VENDOR_ID_S3, PCI_CHIP_S3TWISTER_K, "" },
#endif

/* aty */
{ PCI_VENDOR_ID_ATI, 0x4758, "" },
{ PCI_VENDOR_ID_ATI, 0x4358, "" },
{ PCI_VENDOR_ID_ATI, 0x4554, "" },
{ PCI_VENDOR_ID_ATI, 0x5654, "" },
{ PCI_VENDOR_ID_ATI, 0x5655, "" },
{ PCI_VENDOR_ID_ATI, 0x5656, "" },
{ PCI_VENDOR_ID_ATI, 0x4754, "" },
{ PCI_VENDOR_ID_ATI, 0x4755, "" },
{ PCI_VENDOR_ID_ATI, 0x4756, "" },
{ PCI_VENDOR_ID_ATI, 0x4757, "" },
{ PCI_VENDOR_ID_ATI, 0x475a, "" },
{ PCI_VENDOR_ID_ATI, 0x4c54, "" },
{ PCI_VENDOR_ID_ATI, 0x4c47, "" },
{ PCI_VENDOR_ID_ATI, 0x4742, "" },
{ PCI_VENDOR_ID_ATI, 0x4744, "" },
{ PCI_VENDOR_ID_ATI, 0x4749, "" },
{ PCI_VENDOR_ID_ATI, 0x4750, "" },
{ PCI_VENDOR_ID_ATI, 0x4751, "" },
{ PCI_VENDOR_ID_ATI, 0x4752, "" },
{ PCI_VENDOR_ID_ATI, 0x4c42, "" },
{ PCI_VENDOR_ID_ATI, 0x4c44, "" },
{ PCI_VENDOR_ID_ATI, 0x4c49, "" },
{ PCI_VENDOR_ID_ATI, 0x4c50, "" },
{ PCI_VENDOR_ID_ATI, 0x4c4d, "" },
{ PCI_VENDOR_ID_ATI, 0x4c4e, "" },

