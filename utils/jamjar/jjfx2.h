#ifndef jjfx2_H_
#define jjfx2_H_

#include "Arduino.h"
#include <avr/pgmspace.h>

#define jjfx2_NUM_CELLS 1024
#define jjfx2_SAMPLERATE 32768
const int8_t __attribute__((progmem)) jjfx2_DATA [] = {
-2, /* 0000 */
	2, /* 0002 */
	8, /* 0004 */
	16, /* 0006 */
	24, /* 0008 */
	32, /* 0010 */
	40, /* 0012 */
	50, /* 0014 */
	58, /* 0016 */
	66, /* 0018 */
	74, /* 0020 */
	82, /* 0022 */
	90, /* 0024 */
	98, /* 0026 */
	106, /* 0028 */
	114, /* 0030 */
	122, /* 0032 */
	130, /* 0034 */
	138, /* 0036 */
	146, /* 0038 */
	152, /* 0040 */
	160, /* 0042 */
	168, /* 0044 */
	176, /* 0046 */
	184, /* 0048 */
	192, /* 0050 */
	200, /* 0052 */
	208, /* 0054 */
	216, /* 0056 */
	224, /* 0058 */
	232, /* 0060 */
	240, /* 0062 */
	242, /* 0064 */
	236, /* 0066 */
	230, /* 0068 */
	222, /* 0070 */
	214, /* 0072 */
	206, /* 0074 */
	198, /* 0076 */
	190, /* 0078 */
	182, /* 0080 */
	174, /* 0082 */
	166, /* 0084 */
	160, /* 0086 */
	152, /* 0088 */
	144, /* 0090 */
	136, /* 0092 */
	128, /* 0094 */
	120, /* 0096 */
	112, /* 0098 */
	104, /* 0100 */
	96, /* 0102 */
	88, /* 0104 */
	80, /* 0106 */
	72, /* 0108 */
	64, /* 0110 */
	56, /* 0112 */
	48, /* 0114 */
	40, /* 0116 */
	32, /* 0118 */
	24, /* 0120 */
	-28, /* 0122 */
	-142, /* 0124 */
	-2, /* 0126 */
	126, /* 0128 */
	-14, /* 0130 */
	-126, /* 0132 */
	18, /* 0134 */
	118, /* 0136 */
	-32, /* 0138 */
	-122, /* 0140 */
	36, /* 0142 */
	112, /* 0144 */
	-50, /* 0146 */
	-112, /* 0148 */
	52, /* 0150 */
	102, /* 0152 */
	-70, /* 0154 */
	-106, /* 0156 */
	68, /* 0158 */
	92, /* 0160 */
	-80, /* 0162 */
	-94, /* 0164 */
	82, /* 0166 */
	84, /* 0168 */
	-100, /* 0170 */
	-84, /* 0172 */
	96, /* 0174 */
	72, /* 0176 */
	-106, /* 0178 */
	-72, /* 0180 */
	110, /* 0182 */
	62, /* 0184 */
	-120, /* 0186 */
	-62, /* 0188 */
	114, /* 0190 */
	48, /* 0192 */
	-126, /* 0194 */
	-48, /* 0196 */
	128, /* 0198 */
	36, /* 0200 */
	-128, /* 0202 */
	-34, /* 0204 */
	122, /* 0206 */
	20, /* 0208 */
	-132, /* 0210 */
	-20, /* 0212 */
	128, /* 0214 */
	6, /* 0216 */
	-128, /* 0218 */
	-2, /* 0220 */
	120, /* 0222 */
	-12, /* 0224 */
	-126, /* 0226 */
	14, /* 0228 */
	116, /* 0230 */
	-28, /* 0232 */
	-118, /* 0234 */
	30, /* 0236 */
	110, /* 0238 */
	-46, /* 0240 */
	-114, /* 0242 */
	48, /* 0244 */
	100, /* 0246 */
	-62, /* 0248 */
	-102, /* 0250 */
	64, /* 0252 */
	92, /* 0254 */
	-82, /* 0256 */
	-94, /* 0258 */
	80, /* 0260 */
	82, /* 0262 */
	-90, /* 0264 */
	-82, /* 0266 */
	92, /* 0268 */
	72, /* 0270 */
	-106, /* 0272 */
	-74, /* 0274 */
	100, /* 0276 */
	60, /* 0278 */
	-112, /* 0280 */
	-62, /* 0282 */
	116, /* 0284 */
	50, /* 0286 */
	-120, /* 0288 */
	-48, /* 0290 */
	116, /* 0292 */
	36, /* 0294 */
	-126, /* 0296 */
	-36, /* 0298 */
	124, /* 0300 */
	24, /* 0302 */
	-124, /* 0304 */
	-20, /* 0306 */
	120, /* 0308 */
	8, /* 0310 */
	-128, /* 0312 */
	-6, /* 0314 */
	118, /* 0316 */
	-8, /* 0318 */
	-120, /* 0320 */
	10, /* 0322 */
	114, /* 0324 */
	-24, /* 0326 */
	-118, /* 0328 */
	28, /* 0330 */
	106, /* 0332 */
	-42, /* 0334 */
	-108, /* 0336 */
	44, /* 0338 */
	100, /* 0340 */
	-60, /* 0342 */
	-104, /* 0344 */
	60, /* 0346 */
	90, /* 0348 */
	-74, /* 0350 */
	-92, /* 0352 */
	76, /* 0354 */
	82, /* 0356 */
	-92, /* 0358 */
	-84, /* 0360 */
	88, /* 0362 */
	70, /* 0364 */
	-98, /* 0366 */
	-72, /* 0368 */
	102, /* 0370 */
	62, /* 0372 */
	-110, /* 0374 */
	-62, /* 0376 */
	104, /* 0378 */
	50, /* 0380 */
	-116, /* 0382 */
	-50, /* 0384 */
	118, /* 0386 */
	40, /* 0388 */
	-120, /* 0390 */
	-36, /* 0392 */
	114, /* 0394 */
	24, /* 0396 */
	-124, /* 0398 */
	-24, /* 0400 */
	118, /* 0402 */
	10, /* 0404 */
	-120, /* 0406 */
	-8, /* 0408 */
	114, /* 0410 */
	-6, /* 0412 */
	-122, /* 0414 */
	6, /* 0416 */
	110, /* 0418 */
	-22, /* 0420 */
	-114, /* 0422 */
	24, /* 0424 */
	106, /* 0426 */
	-38, /* 0428 */
	-110, /* 0430 */
	40, /* 0432 */
	98, /* 0434 */
	-54, /* 0436 */
	-100, /* 0438 */
	56, /* 0440 */
	90, /* 0442 */
	-72, /* 0444 */
	-92, /* 0446 */
	70, /* 0448 */
	80, /* 0450 */
	-82, /* 0452 */
	-82, /* 0454 */
	86, /* 0456 */
	72, /* 0458 */
	-98, /* 0460 */
	-72, /* 0462 */
	94, /* 0464 */
	60, /* 0466 */
	-106, /* 0468 */
	-62, /* 0470 */
	110, /* 0472 */
	54, /* 0474 */
	-110, /* 0476 */
	-50, /* 0478 */
	106, /* 0480 */
	38, /* 0482 */
	-118, /* 0484 */
	-40, /* 0486 */
	114, /* 0488 */
	26, /* 0490 */
	-116, /* 0492 */
	-24, /* 0494 */
	112, /* 0496 */
	12, /* 0498 */
	-120, /* 0500 */
	-12, /* 0502 */
	112, /* 0504 */
	-4, /* 0506 */
	-114, /* 0508 */
	4, /* 0510 */
	108, /* 0512 */
	-18, /* 0514 */
	-114, /* 0516 */
	20, /* 0518 */
	102, /* 0520 */
	-34, /* 0522 */
	-106, /* 0524 */
	36, /* 0526 */
	96, /* 0528 */
	-52, /* 0530 */
	-100, /* 0532 */
	52, /* 0534 */
	88, /* 0536 */
	-64, /* 0538 */
	-90, /* 0540 */
	68, /* 0542 */
	82, /* 0544 */
	-82, /* 0546 */
	-82, /* 0548 */
	78, /* 0550 */
	70, /* 0552 */
	-90, /* 0554 */
	-72, /* 0556 */
	94, /* 0558 */
	62, /* 0560 */
	-102, /* 0562 */
	-62, /* 0564 */
	98, /* 0566 */
	50, /* 0568 */
	-110, /* 0570 */
	-52, /* 0572 */
	110, /* 0574 */
	40, /* 0576 */
	-114, /* 0578 */
	-38, /* 0580 */
	106, /* 0582 */
	28, /* 0584 */
	-116, /* 0586 */
	-28, /* 0588 */
	110, /* 0590 */
	14, /* 0592 */
	-114, /* 0594 */
	-12, /* 0596 */
	108, /* 0598 */
	0, /* 0600 */
	-116, /* 0602 */
	0, /* 0604 */
	104, /* 0606 */
	-16, /* 0608 */
	-108, /* 0610 */
	16, /* 0612 */
	100, /* 0614 */
	-32, /* 0616 */
	-106, /* 0618 */
	32, /* 0620 */
	94, /* 0622 */
	-46, /* 0624 */
	-96, /* 0626 */
	48, /* 0628 */
	88, /* 0630 */
	-62, /* 0632 */
	-90, /* 0634 */
	62, /* 0636 */
	80, /* 0638 */
	-74, /* 0640 */
	-80, /* 0642 */
	78, /* 0644 */
	72, /* 0646 */
	-88, /* 0648 */
	-72, /* 0650 */
	84, /* 0652 */
	60, /* 0654 */
	-96, /* 0656 */
	-62, /* 0658 */
	100, /* 0660 */
	52, /* 0662 */
	-104, /* 0664 */
	-52, /* 0666 */
	100, /* 0668 */
	40, /* 0670 */
	-112, /* 0672 */
	-40, /* 0674 */
	108, /* 0676 */
	28, /* 0678 */
	-112, /* 0680 */
	-26, /* 0682 */
	106, /* 0684 */
	14, /* 0686 */
	-116, /* 0688 */
	-16, /* 0690 */
	104, /* 0692 */
	2, /* 0694 */
	-108, /* 0696 */
	-2, /* 0698 */
	102, /* 0700 */
	-12, /* 0702 */
	-110, /* 0704 */
	12, /* 0706 */
	98, /* 0708 */
	-28, /* 0710 */
	-100, /* 0712 */
	28, /* 0714 */
	94, /* 0716 */
	-44, /* 0718 */
	-96, /* 0720 */
	44, /* 0722 */
	86, /* 0724 */
	-56, /* 0726 */
	-88, /* 0728 */
	58, /* 0730 */
	80, /* 0732 */
	-72, /* 0734 */
	-80, /* 0736 */
	68, /* 0738 */
	70, /* 0740 */
	-82, /* 0742 */
	-72, /* 0744 */
	86, /* 0746 */
	62, /* 0748 */
	-92, /* 0750 */
	-62, /* 0752 */
	88, /* 0754 */
	50, /* 0756 */
	-102, /* 0758 */
	-52, /* 0760 */
	90, /* 0762 */
	38, /* 0764 */
	-94, /* 0766 */
	-36, /* 0768 */
	90, /* 0770 */
	26, /* 0772 */
	-100, /* 0774 */
	-28, /* 0776 */
	94, /* 0778 */
	14, /* 0780 */
	-98, /* 0782 */
	-14, /* 0784 */
	94, /* 0786 */
	4, /* 0788 */
	-100, /* 0790 */
	-2, /* 0792 */
	90, /* 0794 */
	-10, /* 0796 */
	-94, /* 0798 */
	8, /* 0800 */
	86, /* 0802 */
	-22, /* 0804 */
	-90, /* 0806 */
	22, /* 0808 */
	82, /* 0810 */
	-34, /* 0812 */
	-84, /* 0814 */
	36, /* 0816 */
	78, /* 0818 */
	-48, /* 0820 */
	-80, /* 0822 */
	48, /* 0824 */
	70, /* 0826 */
	-58, /* 0828 */
	-72, /* 0830 */
	62, /* 0832 */
	64, /* 0834 */
	-70, /* 0836 */
	-64, /* 0838 */
	68, /* 0840 */
	54, /* 0842 */
	-80, /* 0844 */
	-56, /* 0846 */
	80, /* 0848 */
	48, /* 0850 */
	-86, /* 0852 */
	-48, /* 0854 */
	82, /* 0856 */
	38, /* 0858 */
	-94, /* 0860 */
	-40, /* 0862 */
	88, /* 0864 */
	28, /* 0866 */
	-94, /* 0868 */
	-26, /* 0870 */
	90, /* 0872 */
	16, /* 0874 */
	-98, /* 0876 */
	-18, /* 0878 */
	90, /* 0880 */
	4, /* 0882 */
	-94, /* 0884 */
	-4, /* 0886 */
	88, /* 0888 */
	-8, /* 0890 */
	-94, /* 0892 */
	8, /* 0894 */
	84, /* 0896 */
	-20, /* 0898 */
	-88, /* 0900 */
	22, /* 0902 */
	82, /* 0904 */
	-34, /* 0906 */
	-84, /* 0908 */
	32, /* 0910 */
	74, /* 0912 */
	-44, /* 0914 */
	-78, /* 0916 */
	46, /* 0918 */
	70, /* 0920 */
	-56, /* 0922 */
	-72, /* 0924 */
	54, /* 0926 */
	62, /* 0928 */
	-66, /* 0930 */
	-64, /* 0932 */
	68, /* 0934 */
	56, /* 0936 */
	-74, /* 0938 */
	-56, /* 0940 */
	72, /* 0942 */
	46, /* 0944 */
	-84, /* 0946 */
	-48, /* 0948 */
	82, /* 0950 */
	38, /* 0952 */
	-86, /* 0954 */
	-38, /* 0956 */
	84, /* 0958 */
	28, /* 0960 */
	-94, /* 0962 */
	-30, /* 0964 */
	86, /* 0966 */
	18, /* 0968 */
	-92, /* 0970 */
	-18, /* 0972 */
	88, /* 0974 */
	8, /* 0976 */
	-94, /* 0978 */
	-6, /* 0980 */
	84, /* 0982 */
	-6, /* 0984 */
	-90, /* 0986 */
	6, /* 0988 */
	84, /* 0990 */
	-18, /* 0992 */
	-88, /* 0994 */
	18, /* 0996 */
	78, /* 0998 */
	-30, /* 1000 */
	-82, /* 1002 */
	32, /* 1004 */
	74, /* 1006 */
	-44, /* 1008 */
	-76, /* 1010 */
	42, /* 1012 */
	68, /* 1014 */
	-54, /* 1016 */
	-70, /* 1018 */
	54, /* 1020 */
	64, /* 1022 */
	-62, /* 1024 */
	-64, /* 1026 */
	60, /* 1028 */
	54, /* 1030 */
	-72, /* 1032 */
	-56, /* 1034 */
	72, /* 1036 */
	48, /* 1038 */
	-78, /* 1040 */
	-48, /* 1042 */
	74, /* 1044 */
	38, /* 1046 */
	-86, /* 1048 */
	-40, /* 1050 */
	80, /* 1052 */
	30, /* 1054 */
	-86, /* 1056 */
	-30, /* 1058 */
	82, /* 1060 */
	20, /* 1062 */
	-92, /* 1064 */
	-20, /* 1066 */
	82, /* 1068 */
	8, /* 1070 */
	-88, /* 1072 */
	-8, /* 1074 */
	84, /* 1076 */
	-2, /* 1078 */
	-88, /* 1080 */
	4, /* 1082 */
	80, /* 1084 */
	-16, /* 1086 */
	-84, /* 1088 */
	16, /* 1090 */
	78, /* 1092 */
	-28, /* 1094 */
	-80, /* 1096 */
	28, /* 1098 */
	72, /* 1100 */
	-38, /* 1102 */
	-74, /* 1104 */
	40, /* 1106 */
	68, /* 1108 */
	-50, /* 1110 */
	-70, /* 1112 */
	50, /* 1114 */
	60, /* 1116 */
	-60, /* 1118 */
	-64, /* 1120 */
	62, /* 1122 */
	54, /* 1124 */
	-68, /* 1126 */
	-56, /* 1128 */
	66, /* 1130 */
	46, /* 1132 */
	-76, /* 1134 */
	-50, /* 1136 */
	72, /* 1138 */
	40, /* 1140 */
	-78, /* 1142 */
	-40, /* 1144 */
	76, /* 1146 */
	30, /* 1148 */
	-86, /* 1150 */
	-32, /* 1152 */
	78, /* 1154 */
	20, /* 1156 */
	-84, /* 1158 */
	-20, /* 1160 */
	82, /* 1162 */
	10, /* 1164 */
	-88, /* 1166 */
	-10, /* 1168 */
	78, /* 1170 */
	-2, /* 1172 */
	-84, /* 1174 */
	0, /* 1176 */
	80, /* 1178 */
	-12, /* 1180 */
	-82, /* 1182 */
	12, /* 1184 */
	74, /* 1186 */
	-24, /* 1188 */
	-78, /* 1190 */
	26, /* 1192 */
	72, /* 1194 */
	-36, /* 1196 */
	-74, /* 1198 */
	36, /* 1200 */
	66, /* 1202 */
	-46, /* 1204 */
	-68, /* 1206 */
	48, /* 1208 */
	62, /* 1210 */
	-56, /* 1212 */
	-62, /* 1214 */
	54, /* 1216 */
	52, /* 1218 */
	-66, /* 1220 */
	-56, /* 1222 */
	66, /* 1224 */
	46, /* 1226 */
	-72, /* 1228 */
	-48, /* 1230 */
	70, /* 1232 */
	38, /* 1234 */
	-82, /* 1236 */
	-42, /* 1238 */
	74, /* 1240 */
	30, /* 1242 */
	-80, /* 1244 */
	-32, /* 1246 */
	76, /* 1248 */
	22, /* 1250 */
	-86, /* 1252 */
	-24, /* 1254 */
	76, /* 1256 */
	10, /* 1258 */
	-82, /* 1260 */
	-12, /* 1262 */
	78, /* 1264 */
	2, /* 1266 */
	-82, /* 1268 */
	-2, /* 1270 */
	74, /* 1272 */
	-10, /* 1274 */
	-80, /* 1276 */
	10, /* 1278 */
	74, /* 1280 */
	-22, /* 1282 */
	-76, /* 1284 */
	22, /* 1286 */
	68, /* 1288 */
	-32, /* 1290 */
	-72, /* 1292 */
	34, /* 1294 */
	66, /* 1296 */
	-44, /* 1298 */
	-66, /* 1300 */
	42, /* 1302 */
	58, /* 1304 */
	-54, /* 1306 */
	-62, /* 1308 */
	54, /* 1310 */
	54, /* 1312 */
	-62, /* 1314 */
	-54, /* 1316 */
	60, /* 1318 */
	46, /* 1320 */
	-72, /* 1322 */
	-50, /* 1324 */
	68, /* 1326 */
	38, /* 1328 */
	-74, /* 1330 */
	-40, /* 1332 */
	72, /* 1334 */
	30, /* 1336 */
	-82, /* 1338 */
	-34, /* 1340 */
	74, /* 1342 */
	20, /* 1344 */
	-80, /* 1346 */
	-22, /* 1348 */
	76, /* 1350 */
	12, /* 1352 */
	-82, /* 1354 */
	-12, /* 1356 */
	74, /* 1358 */
	2, /* 1360 */
	-80, /* 1362 */
	-4, /* 1364 */
	74, /* 1366 */
	-8, /* 1368 */
	-78, /* 1370 */
	8, /* 1372 */
	70, /* 1374 */
	-18, /* 1376 */
	-74, /* 1378 */
	20, /* 1380 */
	68, /* 1382 */
	-30, /* 1384 */
	-70, /* 1386 */
	28, /* 1388 */
	62, /* 1390 */
	-40, /* 1392 */
	-66, /* 1394 */
	40, /* 1396 */
	58, /* 1398 */
	-50, /* 1400 */
	-60, /* 1402 */
	48, /* 1404 */
	52, /* 1406 */
	-60, /* 1408 */
	-56, /* 1410 */
	58, /* 1412 */
	46, /* 1414 */
	-64, /* 1416 */
	-48, /* 1418 */
	62, /* 1420 */
	38, /* 1422 */
	-74, /* 1424 */
	-42, /* 1426 */
	68, /* 1428 */
	30, /* 1430 */
	-74, /* 1432 */
	-32, /* 1434 */
	72, /* 1436 */
	24, /* 1438 */
	-80, /* 1440 */
	-24, /* 1442 */
	72, /* 1444 */
	12, /* 1446 */
	-78, /* 1448 */
	-14, /* 1450 */
	74, /* 1452 */
	4, /* 1454 */
	-78, /* 1456 */
	-4, /* 1458 */
	70, /* 1460 */
	-8, /* 1462 */
	-76, /* 1464 */
	8, /* 1466 */
	72, /* 1468 */
	-18, /* 1470 */
	-74, /* 1472 */
	18, /* 1474 */
	66, /* 1476 */
	-26, /* 1478 */
	-68, /* 1480 */
	28, /* 1482 */
	62, /* 1484 */
	-36, /* 1486 */
	-64, /* 1488 */
	36, /* 1490 */
	56, /* 1492 */
	-46, /* 1494 */
	-60, /* 1496 */
	46, /* 1498 */
	52, /* 1500 */
	-54, /* 1502 */
	-54, /* 1504 */
	52, /* 1506 */
	46, /* 1508 */
	-64, /* 1510 */
	-48, /* 1512 */
	60, /* 1514 */
	38, /* 1516 */
	-66, /* 1518 */
	-40, /* 1520 */
	58, /* 1522 */
	28, /* 1524 */
	-66, /* 1526 */
	-30, /* 1528 */
	60, /* 1530 */
	20, /* 1532 */
	-66, /* 1534 */
	-22, /* 1536 */
	64, /* 1538 */
	14, /* 1540 */
	-68, /* 1542 */
	-14, /* 1544 */
	62, /* 1546 */
	4, /* 1548 */
	-68, /* 1550 */
	-6, /* 1552 */
	64, /* 1554 */
	-4, /* 1556 */
	-66, /* 1558 */
	4, /* 1560 */
	60, /* 1562 */
	-14, /* 1564 */
	-64, /* 1566 */
	14, /* 1568 */
	58, /* 1570 */
	-22, /* 1572 */
	-60, /* 1574 */
	22, /* 1576 */
	54, /* 1578 */
	-32, /* 1580 */
	-58, /* 1582 */
	32, /* 1584 */
	50, /* 1586 */
	-40, /* 1588 */
	-52, /* 1590 */
	38, /* 1592 */
	46, /* 1594 */
	-46, /* 1596 */
	-48, /* 1598 */
	44, /* 1600 */
	40, /* 1602 */
	-52, /* 1604 */
	-42, /* 1606 */
	50, /* 1608 */
	34, /* 1610 */
	-60, /* 1612 */
	-38, /* 1614 */
	54, /* 1616 */
	28, /* 1618 */
	-60, /* 1620 */
	-30, /* 1622 */
	58, /* 1624 */
	22, /* 1626 */
	-64, /* 1628 */
	-24, /* 1630 */
	58, /* 1632 */
	14, /* 1634 */
	-64, /* 1636 */
	-16, /* 1638 */
	62, /* 1640 */
	6, /* 1642 */
	-64, /* 1644 */
	-6, /* 1646 */
	58, /* 1648 */
	-4, /* 1650 */
	-64, /* 1652 */
	2, /* 1654 */
	60, /* 1656 */
	-12, /* 1658 */
	-62, /* 1660 */
	10, /* 1662 */
	56, /* 1664 */
	-20, /* 1666 */
	-60, /* 1668 */
	20, /* 1670 */
	54, /* 1672 */
	-30, /* 1674 */
	-56, /* 1676 */
	28, /* 1678 */
	48, /* 1680 */
	-38, /* 1682 */
	-52, /* 1684 */
	36, /* 1686 */
	44, /* 1688 */
	-44, /* 1690 */
	-46, /* 1692 */
	42, /* 1694 */
	40, /* 1696 */
	-54, /* 1698 */
	-44, /* 1700 */
	48, /* 1702 */
	34, /* 1704 */
	-56, /* 1706 */
	-36, /* 1708 */
	54, /* 1710 */
	30, /* 1712 */
	-60, /* 1714 */
	-30, /* 1716 */
	54, /* 1718 */
	22, /* 1720 */
	-60, /* 1722 */
	-24, /* 1724 */
	58, /* 1726 */
	16, /* 1728 */
	-62, /* 1730 */
	-16, /* 1732 */
	56, /* 1734 */
	6, /* 1736 */
	-62, /* 1738 */
	-8, /* 1740 */
	58, /* 1742 */
	0, /* 1744 */
	-62, /* 1746 */
	0, /* 1748 */
	56, /* 1750 */
	-10, /* 1752 */
	-60, /* 1754 */
	10, /* 1756 */
	54, /* 1758 */
	-18, /* 1760 */
	-58, /* 1762 */
	18, /* 1764 */
	50, /* 1766 */
	-28, /* 1768 */
	-56, /* 1770 */
	26, /* 1772 */
	48, /* 1774 */
	-34, /* 1776 */
	-50, /* 1778 */
	32, /* 1780 */
	44, /* 1782 */
	-44, /* 1784 */
	-48, /* 1786 */
	40, /* 1788 */
	38, /* 1790 */
	-48, /* 1792 */
	-42, /* 1794 */
	46, /* 1796 */
	34, /* 1798 */
	-56, /* 1800 */
	-38, /* 1802 */
	50, /* 1804 */
	28, /* 1806 */
	-56, /* 1808 */
	-30, /* 1810 */
	54, /* 1812 */
	22, /* 1814 */
	-60, /* 1816 */
	-24, /* 1818 */
	54, /* 1820 */
	14, /* 1822 */
	-60, /* 1824 */
	-16, /* 1826 */
	58, /* 1828 */
	8, /* 1830 */
	-60, /* 1832 */
	-10, /* 1834 */
	54, /* 1836 */
	0, /* 1838 */
	-60, /* 1840 */
	-2, /* 1842 */
	54, /* 1844 */
	-8, /* 1846 */
	-58, /* 1848 */
	6, /* 1850 */
	52, /* 1852 */
	-16, /* 1854 */
	-56, /* 1856 */
	16, /* 1858 */
	50, /* 1860 */
	-24, /* 1862 */
	-52, /* 1864 */
	22, /* 1866 */
	46, /* 1868 */
	-32, /* 1870 */
	-50, /* 1872 */
	30, /* 1874 */
	42, /* 1876 */
	-38, /* 1878 */
	-46, /* 1880 */
	36, /* 1882 */
	38, /* 1884 */
	-48, /* 1886 */
	-42, /* 1888 */
	42, /* 1890 */
	34, /* 1892 */
	-50, /* 1894 */
	-36, /* 1896 */
	48, /* 1898 */
	28, /* 1900 */
	-56, /* 1902 */
	-30, /* 1904 */
	50, /* 1906 */
	22, /* 1908 */
	-56, /* 1910 */
	-24, /* 1912 */
	54, /* 1914 */
	16, /* 1916 */
	-58, /* 1918 */
	-16, /* 1920 */
	52, /* 1922 */
	8, /* 1924 */
	-60, /* 1926 */
	-10, /* 1928 */
	56, /* 1930 */
	0, /* 1932 */
	-58, /* 1934 */
	-2, /* 1936 */
	52, /* 1938 */
	-8, /* 1940 */
	-58, /* 1942 */
	6, /* 1944 */
	52, /* 1946 */
	-16, /* 1948 */
	-54, /* 1950 */
	12, /* 1952 */
	48, /* 1954 */
	-22, /* 1956 */
	-52, /* 1958 */
	20, /* 1960 */
	46, /* 1962 */
	-28, /* 1964 */
	-48, /* 1966 */
	28, /* 1968 */
	42, /* 1970 */
	-38, /* 1972 */
	-46, /* 1974 */
	34, /* 1976 */
	38, /* 1978 */
	-42, /* 1980 */
	-40, /* 1982 */
	40, /* 1984 */
	34, /* 1986 */
	-48, /* 1988 */
	-36, /* 1990 */
	44, /* 1992 */
	28, /* 1994 */
	-50, /* 1996 */
	-30, /* 1998 */
	48, /* 2000 */
	22, /* 2002 */
	-54, /* 2004 */
	-24, /* 2006 */
	48, /* 2008 */
	16, /* 2010 */
	-56, /* 2012 */
	-18, /* 2014 */
	54, /* 2016 */
	10, /* 2018 */
	-56, /* 2020 */
	-10, /* 2022 */
	50, /* 2024 */
	2, /* 2026 */
	-56, /* 2028 */
	-4, /* 2030 */
	52, /* 2032 */
	-6, /* 2034 */
	-54, /* 2036 */
	4, /* 2038 */
	48, /* 2040 */
	-14, /* 2042 */
	-54, /* 2044 */
	12, /* 2046 */
	