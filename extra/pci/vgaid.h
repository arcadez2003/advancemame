/* nvidia */
{ 0x10de, 0x0010, 0x0ff0, "" },
{ 0x10de, 0x0020, 0x0ff0, "" },
{ 0x10de, 0x00a0, 0x0ff0, "" },
{ 0x10de, 0x0100, 0x0ff0, "" },
{ 0x10de, 0x0110, 0x0ff0, "(*)" },
{ 0x10de, 0x0150, 0x0ff0, "" },
{ 0x10de, 0x0170, 0x0ff0, "(*)" },
{ 0x10de, 0x0180, 0x0ff0, "(*)" },
{ 0x10de, 0x01a0, 0x0ffc, "(*)" }, /* 0x0ff0 mask changed to remove nForce devices */
{ 0x10de, 0x01f0, 0x0ff0, "(*)" },
{ 0x10de, 0x0200, 0x0ff0, "(*)" },
{ 0x10de, 0x0250, 0x0ff0, "(*)" },
{ 0x10de, 0x0280, 0x0ff0, "(*)" },
{ 0x10de, 0x0300, 0x0ff0, "(*)" },
{ 0x10de, 0x0310, 0x0ff0, "(*)" },
{ 0x10de, 0x0320, 0x0ff0, "(*)" },
{ 0x10de, 0x0330, 0x0ff0, "(*)" },
{ 0x10de, 0x0340, 0x0ff0, "(*)" },

/* nvidia sgs */
/* { 0x12d2, 0x0010, 0x0ff0, "" }, */ /* too old to list */

/* ati r128 */
{ 0x1002, 0x4c45, 0xffff, "" },
{ 0x1002, 0x4c56, 0xffff, "" },
{ 0x1002, 0x4c46, 0xffff, "" },
{ 0x1002, 0x4c4c, 0xffff, "" },
/* { 0x1002, 0x5000, 0xff00, "" }, */
{ 0x1002, 0x5046, 0xffff, "" },
{ 0x1002, 0x5052, 0xffff, "" },
/* { 0x1002, 0x5200, 0xff00, "" }, */
{ 0x1002, 0x5245, 0xffff, "" },
{ 0x1002, 0x5246, 0xffff, "" },
{ 0x1002, 0x524b, 0xffff, "" },
{ 0x1002, 0x524c, 0xffff, "" },
/* { 0x1002, 0x5300, 0xff00, "" }, */
/* { 0x1002, 0x5400, 0xff00, "" }, */
{ 0x1002, 0x5446, 0xffff, "" },
{ 0x1002, 0x5452, 0xffff, "" },
{ 0x1002, 0x4242, 0xffff, "" },
{ 0x1002, 0x4c57, 0xffff, "" },
{ 0x1002, 0x4c59, 0xffff, "" },
{ 0x1002, 0x4c5a, 0xffff, "" },
{ 0x1002, 0x4c66, 0xffff, "" },
/* { 0x1002, 0x4100, 0xff00, "" }, */
{ 0x1002, 0x4144, 0xffff, "" },
{ 0x1002, 0x4145, 0xffff, "" },
{ 0x1002, 0x4146, 0xffff, "" },
/* { 0x1002, 0x4900, 0xff00, "" }, */
{ 0x1002, 0x4964, 0xffff, "" },
{ 0x1002, 0x4965, 0xffff, "" },
{ 0x1002, 0x4966, 0xffff, "" },
{ 0x1002, 0x4967, 0xffff, "" },
/* { 0x1002, 0x4e00, 0xff00, "" }, */
{ 0x1002, 0x4e44, 0xffff, "" },
{ 0x1002, 0x4e45, 0xffff, "" },
{ 0x1002, 0x4e46, 0xffff, "" },
/* { 0x1002, 0x4e47, 0xffff, "" }, */
{ 0x1002, 0x4e48, 0xffff, "" },
/* { 0x1002, 0x5100, 0xff00, "" }, */
{ 0x1002, 0x5144, 0xffff, "" },
{ 0x1002, 0x5145, 0xffff, "" },
{ 0x1002, 0x5146, 0xffff, "" },
{ 0x1002, 0x5147, 0xffff, "" },
{ 0x1002, 0x514c, 0xffff, "" },
{ 0x1002, 0x514d, 0xffff, "" },
{ 0x1002, 0x514e, 0xffff, "" },
{ 0x1002, 0x514f, 0xffff, "" },
{ 0x1002, 0x5157, 0xffff, "" },
{ 0x1002, 0x5158, 0xffff, "" },
{ 0x1002, 0x5159, 0xffff, "" },
{ 0x1002, 0x515a, 0xffff, "" },
{ 0x1002, 0x516c, 0xffff, "" },

/* g400 */
{ 0x102b, 0x0525, 0xffff, "" },
{ 0x102b, 0x0520, 0xffff, "" },
{ 0x102b, 0x0521, 0xffff, "" },
{ 0x102b, 0x051a, 0xffff, "" },
{ 0x102b, 0x051e, 0xffff, "" },
{ 0x102b, 0x2527, 0xffff, "" },
{ 0x102b, 0x1000, 0xffff, "" },
{ 0x102b, 0x1001, 0xffff, "" },

/* matrox millenium */
{ 0x102b, 0x0519, 0xffff, "" },
{ 0x102b, 0x051b, 0xffff, "" },
{ 0x102b, 0x051f, 0xffff, "" },

/* 3dfx */
{ 0x121a, 0x0003, 0xffff, "(*)" },
{ 0x121a, 0x0005, 0xffff, "" },
{ 0x121a, 0x0009, 0xffff, "" },

/* Permedia pm2 */
{ 0x3d3d, 0x0007, 0xffff, "(*)" },
{ 0x3d3d, 0x0009, 0xffff, "(*)" },

/* s3 savage */
{ 0x5333, 0x8811, 0xffff, "" },
{ 0x5333, 0x8903, 0xffff, "" },
{ 0x5333, 0x8904, 0xffff, "" },
{ 0x5333, 0x8a13, 0xffff, "" },
{ 0x5333, 0x5631, 0xffff, "" },
{ 0x5333, 0x883d, 0xffff, "" },
{ 0x5333, 0x8a01, 0xffff, "" },
{ 0x5333, 0x8a10, 0xffff, "" },
{ 0x5333, 0x8c00, 0xffff, "" },
{ 0x5333, 0x8c01, 0xffff, "" },
{ 0x5333, 0x8c02, 0xffff, "" },
{ 0x5333, 0x8c03, 0xffff, "" },
{ 0x5333, 0x8a20, 0xffff, "" },
{ 0x5333, 0x8a21, 0xffff, "" },
{ 0x5333, 0x8a22, 0xffff, "" },
{ 0x5333, 0x8a23, 0xffff, "" },
{ 0x5333, 0x8c10, 0xffff, "" },
{ 0x5333, 0x8c12, 0xffff, "" },
{ 0x5333, 0x9102, 0xffff, "" },
{ 0x5333, 0x8d03, 0xffff, "" },
{ 0x5333, 0x8d04, 0xffff, "" },

/* trident */
{ 0x1023, 0x8400, 0xff00, "" },
{ 0x1023, 0x8500, 0xff00, "" },
{ 0x1023, 0x8600, 0xff00, "" },
{ 0x1023, 0x8700, 0xff00, "" },
{ 0x1023, 0x8800, 0xff00, "" },
{ 0x1023, 0x8900, 0xff00, "" },
{ 0x1023, 0x8A00, 0xff00, "" },
{ 0x1023, 0x8B00, 0xff00, "" },
{ 0x1023, 0x8C00, 0xff00, "" },
{ 0x1023, 0x8D00, 0xff00, "" },
{ 0x1023, 0x8E00, 0xff00, "" },
{ 0x1023, 0x8F00, 0xff00, "" },
{ 0x1023, 0x9000, 0xff00, "" },
{ 0x1023, 0x9100, 0xff00, "" },
{ 0x1023, 0x9200, 0xff00, "" },
{ 0x1023, 0x9300, 0xff00, "" },
{ 0x1023, 0x9400, 0xff00, "" },
{ 0x1023, 0x9500, 0xff00, "" },
{ 0x1023, 0x9600, 0xff00, "" },
{ 0x1023, 0x9700, 0xff00, "" },
{ 0x1023, 0x9800, 0xff00, "" },
{ 0x1023, 0x9900, 0xfff0, "" },
{ 0x1023, 0x9910, 0xfff0, "" },
{ 0x1023, 0x9920, 0xfff0, "" },
{ 0x1023, 0x9930, 0xffff, "" },

/* rendition */
{ 0x1163, 0x2000, 0xffff, "(*)" },

/* sis */
/* { 0x1039, 0x0001, 0xffff, "" }, */ /* ? PCI Bridge ? */
{ 0x1039, 0x0002, 0xffff, "" },
{ 0x1039, 0x0205, 0xffff, "" },
{ 0x1039, 0x0215, 0xffff, "" },
{ 0x1039, 0x0225, 0xffff, "" },
{ 0x1039, 0x0200, 0xffff, "" },
{ 0x1039, 0x0300, 0xffff, "" },
{ 0x1039, 0x6306, 0xffff, "" },
{ 0x1039, 0x5300, 0xffff, "" },
{ 0x1039, 0x6300, 0xffff, "" },
{ 0x1039, 0x6326, 0xffff, "" },

/* cirrus laguna */
{ 0x1013, 0x00d0, 0xffff, "" },
{ 0x1013, 0x00d4, 0xffff, "" },
{ 0x1013, 0x00d6, 0xffff, "" },

/* apm */
{ 0x1142, 0x6424, 0xffff, "(*)" },
{ 0x1142, 0x643d, 0xffff, "(*)" },
