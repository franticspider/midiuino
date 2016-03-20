#ifndef mywav_H_
#define mywav_H_

#include "Arduino.h"
#include <avr/pgmspace.h>

#define mywav_NUM_CELLS 1024
#define mywav_SAMPLERATE 16384
const int8_t __attribute__((progmem)) mywav_DATA [] = {
0, /* 0000 */
0, /* 0001 */
2, /* 0002 */
4, /* 0003 */
5, /* 0004 */
8, /* 0005 */
10, /* 0006 */
11, /* 0007 */
14, /* 0008 */
16, /* 0009 */
20, /* 0011 */
22, /* 0012 */
23, /* 0013 */
26, /* 0014 */
28, /* 0015 */
30, /* 0016 */
31, /* 0017 */
34, /* 0018 */
36, /* 0019 */
37, /* 0020 */
42, /* 0022 */
43, /* 0023 */
45, /* 0024 */
48, /* 0025 */
49, /* 0026 */
51, /* 0027 */
53, /* 0028 */
56, /* 0029 */
57, /* 0030 */
59, /* 0031 */
59, /* 0033 */
58, /* 0034 */
55, /* 0035 */
54, /* 0036 */
52, /* 0037 */
50, /* 0038 */
48, /* 0039 */
46, /* 0040 */
44, /* 0041 */
42, /* 0042 */
38, /* 0044 */
36, /* 0045 */
34, /* 0046 */
32, /* 0047 */
30, /* 0048 */
28, /* 0049 */
26, /* 0050 */
24, /* 0051 */
22, /* 0052 */
20, /* 0053 */
16, /* 0055 */
14, /* 0056 */
12, /* 0057 */
10, /* 0058 */
8, /* 0059 */
6, /* 0060 */
-4, /* 0061 */
-34, /* 0062 */
-10, /* 0063 */
32, /* 0064 */
-32, /* 0066 */
-1, /* 0067 */
29, /* 0068 */
5, /* 0069 */
-32, /* 0070 */
6, /* 0071 */
31, /* 0072 */
-2, /* 0073 */
-29, /* 0074 */
-3, /* 0075 */
-11, /* 0077 */
-33, /* 0078 */
4, /* 0079 */
26, /* 0080 */
-19, /* 0081 */
-29, /* 0082 */
13, /* 0083 */
22, /* 0084 */
-8, /* 0085 */
-26, /* 0086 */
27, /* 0088 */
-17, /* 0089 */
-21, /* 0090 */
11, /* 0091 */
23, /* 0092 */
-26, /* 0093 */
-15, /* 0094 */
20, /* 0095 */
17, /* 0096 */
-30, /* 0097 */
28, /* 0099 */
11, /* 0100 */
-24, /* 0101 */
-16, /* 0102 */
30, /* 0103 */
18, /* 0104 */
-30, /* 0105 */
-9, /* 0106 */
31, /* 0107 */
12, /* 0108 */
-1, /* 0110 */
29, /* 0111 */
5, /* 0112 */
-31, /* 0113 */
-10, /* 0114 */
31, /* 0115 */
-2, /* 0116 */
-31, /* 0117 */
-3, /* 0118 */
29, /* 0119 */
-32, /* 0121 */
4, /* 0122 */
26, /* 0123 */
-1, /* 0124 */
-29, /* 0125 */
13, /* 0126 */
30, /* 0127 */
-9, /* 0128 */
-26, /* 0129 */
3, /* 0130 */
-17, /* 0132 */
-29, /* 0133 */
10, /* 0134 */
23, /* 0135 */
-25, /* 0136 */
-26, /* 0137 */
19, /* 0138 */
17, /* 0139 */
-15, /* 0140 */
-21, /* 0141 */
24, /* 0143 */
-24, /* 0144 */
-15, /* 0145 */
17, /* 0146 */
18, /* 0147 */
-29, /* 0148 */
-9, /* 0149 */
26, /* 0150 */
12, /* 0151 */
-30, /* 0152 */
28, /* 0154 */
5, /* 0155 */
-28, /* 0156 */
-10, /* 0157 */
30, /* 0158 */
13, /* 0159 */
-30, /* 0160 */
-3, /* 0161 */
28, /* 0162 */
6, /* 0163 */
4, /* 0165 */
29, /* 0166 */
0, /* 0167 */
-28, /* 0168 */
-4, /* 0169 */
29, /* 0170 */
-8, /* 0171 */
-31, /* 0172 */
2, /* 0173 */
26, /* 0174 */
-28, /* 0176 */
11, /* 0177 */
22, /* 0178 */
-7, /* 0179 */
-25, /* 0180 */
19, /* 0181 */
26, /* 0182 */
-15, /* 0183 */
-21, /* 0184 */
8, /* 0185 */
-23, /* 0187 */
-15, /* 0188 */
17, /* 0189 */
17, /* 0190 */
-28, /* 0191 */
-22, /* 0192 */
25, /* 0193 */
12, /* 0194 */
-21, /* 0195 */
-16, /* 0196 */
18, /* 0198 */
-27, /* 0199 */
-10, /* 0200 */
29, /* 0201 */
13, /* 0202 */
-29, /* 0203 */
-3, /* 0204 */
27, /* 0205 */
6, /* 0206 */
-30, /* 0207 */
29, /* 0209 */
0, /* 0210 */
-29, /* 0211 */
-4, /* 0212 */
28, /* 0213 */
-8, /* 0214 */
-30, /* 0215 */
2, /* 0216 */
25, /* 0217 */
0, /* 0218 */
10, /* 0220 */
28, /* 0221 */
-7, /* 0222 */
-25, /* 0223 */
1, /* 0224 */
25, /* 0225 */
-15, /* 0226 */
-20, /* 0227 */
9, /* 0228 */
22, /* 0229 */
-25, /* 0231 */
17, /* 0232 */
17, /* 0233 */
-13, /* 0234 */
-21, /* 0235 */
25, /* 0236 */
23, /* 0237 */
-21, /* 0238 */
-16, /* 0239 */
15, /* 0240 */
-26, /* 0242 */
-10, /* 0243 */
23, /* 0244 */
13, /* 0245 */
-28, /* 0246 */
-17, /* 0247 */
26, /* 0248 */
6, /* 0249 */
-26, /* 0250 */
-11, /* 0251 */
14, /* 0253 */
-28, /* 0254 */
-4, /* 0255 */
27, /* 0256 */
7, /* 0257 */
-29, /* 0258 */
2, /* 0259 */
27, /* 0260 */
0, /* 0261 */
-27, /* 0262 */
27, /* 0264 */
-6, /* 0265 */
-29, /* 0266 */
1, /* 0267 */
25, /* 0268 */
-14, /* 0269 */
-27, /* 0270 */
9, /* 0271 */
22, /* 0272 */
-5, /* 0273 */
16, /* 0275 */
25, /* 0276 */
-13, /* 0277 */
-20, /* 0278 */
7, /* 0279 */
23, /* 0280 */
-21, /* 0281 */
-15, /* 0282 */
15, /* 0283 */
17, /* 0284 */
-21, /* 0286 */
23, /* 0287 */
12, /* 0288 */
-19, /* 0289 */
-16, /* 0290 */
25, /* 0291 */
18, /* 0292 */
-25, /* 0293 */
-11, /* 0294 */
27, /* 0295 */
-27, /* 0297 */
-4, /* 0298 */
25, /* 0299 */
7, /* 0300 */
-28, /* 0301 */
-12, /* 0302 */
26, /* 0303 */
0, /* 0304 */
-26, /* 0305 */
-5, /* 0306 */
-6, /* 0308 */
-28, /* 0309 */
0, /* 0310 */
24, /* 0311 */
1, /* 0312 */
-26, /* 0313 */
8, /* 0314 */
27, /* 0315 */
-5, /* 0316 */
-24, /* 0317 */
24, /* 0319 */
-12, /* 0320 */
-20, /* 0321 */
7, /* 0322 */
22, /* 0323 */
-20, /* 0324 */
-24, /* 0325 */
14, /* 0326 */
17, /* 0327 */
-11, /* 0328 */
23, /* 0330 */
23, /* 0331 */
-19, /* 0332 */
-16, /* 0333 */
25, /* 0334 */
18, /* 0335 */
-25, /* 0336 */
-10, /* 0337 */
21, /* 0338 */
13, /* 0339 */
-17, /* 0341 */
24, /* 0342 */
7, /* 0343 */
-24, /* 0344 */
-12, /* 0345 */
26, /* 0346 */
0, /* 0347 */
-25, /* 0348 */
-5, /* 0349 */
25, /* 0350 */
-28, /* 0352 */
0, /* 0353 */
25, /* 0354 */
2, /* 0355 */
-26, /* 0356 */
-6, /* 0357 */
26, /* 0358 */
-4, /* 0359 */
-27, /* 0360 */
0, /* 0361 */
-12, /* 0363 */
-26, /* 0364 */
6, /* 0365 */
21, /* 0366 */
-3, /* 0367 */
-24, /* 0368 */
14, /* 0369 */
24, /* 0370 */
-10, /* 0371 */
-20, /* 0372 */
22, /* 0374 */
-18, /* 0375 */
-15, /* 0376 */
13, /* 0377 */
17, /* 0378 */
-24, /* 0379 */
-21, /* 0380 */
18, /* 0381 */
11, /* 0382 */
-15, /* 0383 */
21, /* 0385 */
16, /* 0386 */
-21, /* 0387 */
-10, /* 0388 */
23, /* 0389 */
12, /* 0390 */
-23, /* 0391 */
-4, /* 0392 */
21, /* 0393 */
7, /* 0394 */
-11, /* 0396 */
22, /* 0397 */
1, /* 0398 */
-22, /* 0399 */
-6, /* 0400 */
22, /* 0401 */
-4, /* 0402 */
-24, /* 0403 */
0, /* 0404 */
21, /* 0405 */
-23, /* 0407 */
5, /* 0408 */
23, /* 0409 */
-2, /* 0410 */
-21, /* 0411 */
-1, /* 0412 */
21, /* 0413 */
-9, /* 0414 */
-18, /* 0415 */
4, /* 0416 */
-16, /* 0418 */
-21, /* 0419 */
11, /* 0420 */
15, /* 0421 */
-8, /* 0422 */
-18, /* 0423 */
18, /* 0424 */
20, /* 0425 */
-14, /* 0426 */
-14, /* 0427 */
16, /* 0429 */
-20, /* 0430 */
-10, /* 0431 */
16, /* 0432 */
12, /* 0433 */
-22, /* 0434 */
-15, /* 0435 */
20, /* 0436 */
7, /* 0437 */
-20, /* 0438 */
22, /* 0440 */
1, /* 0441 */
-21, /* 0442 */
-5, /* 0443 */
22, /* 0444 */
8, /* 0445 */
-23, /* 0446 */
0, /* 0447 */
21, /* 0448 */
2, /* 0449 */
-6, /* 0451 */
22, /* 0452 */
-3, /* 0453 */
-21, /* 0454 */
-1, /* 0455 */
20, /* 0456 */
-9, /* 0457 */
-22, /* 0458 */
4, /* 0459 */
19, /* 0460 */
-21, /* 0462 */
10, /* 0463 */
20, /* 0464 */
-8, /* 0465 */
-18, /* 0466 */
17, /* 0467 */
19, /* 0468 */
-14, /* 0469 */
-14, /* 0470 */
9, /* 0471 */
-19, /* 0473 */
-19, /* 0474 */
16, /* 0475 */
11, /* 0476 */
-13, /* 0477 */
-15, /* 0478 */
19, /* 0479 */
16, /* 0480 */
-19, /* 0481 */
-11, /* 0482 */
12, /* 0484 */
-21, /* 0485 */
-5, /* 0486 */
19, /* 0487 */
8, /* 0488 */
-23, /* 0489 */
-12, /* 0490 */
20, /* 0491 */
2, /* 0492 */
-20, /* 0493 */
21, /* 0495 */
-3, /* 0496 */
-22, /* 0497 */
-1, /* 0498 */
20, /* 0499 */
3, /* 0500 */
-22, /* 0501 */
4, /* 0502 */
22, /* 0503 */
-1, /* 0504 */
-2, /* 0506 */
20, /* 0507 */
-8, /* 0508 */
-17, /* 0509 */
3, /* 0510 */
19, /* 0511 */
-13, /* 0512 */
-20, /* 0513 */
9, /* 0514 */
15, /* 0515 */
-18, /* 0517 */
15, /* 0518 */
19, /* 0519 */
-12, /* 0520 */
-14, /* 0521 */
18, /* 0522 */
16, /* 0523 */
-18, /* 0524 */
-10, /* 0525 */
14, /* 0526 */
-20, /* 0528 */
-15, /* 0529 */
18, /* 0530 */
7, /* 0531 */
-18, /* 0532 */
-11, /* 0533 */
20, /* 0534 */
2, /* 0535 */
-20, /* 0536 */
-6, /* 0537 */
8, /* 0539 */
-22, /* 0540 */
-1, /* 0541 */
19, /* 0542 */
3, /* 0543 */
-21, /* 0544 */
-7, /* 0545 */
21, /* 0546 */
-1, /* 0547 */
-20, /* 0548 */
19, /* 0550 */
-7, /* 0551 */
-21, /* 0552 */
3, /* 0553 */
18, /* 0554 */
0, /* 0555 */
-20, /* 0556 */
9, /* 0557 */
20, /* 0558 */
-6, /* 0559 */
15, /* 0561 */
18, /* 0562 */
-12, /* 0563 */
-14, /* 0564 */
8, /* 0565 */
15, /* 0566 */
-17, /* 0567 */
-18, /* 0568 */
13, /* 0569 */
12, /* 0570 */
-14, /* 0572 */
17, /* 0573 */
7, /* 0574 */
-17, /* 0575 */
-11, /* 0576 */
19, /* 0577 */
12, /* 0578 */
-19, /* 0579 */
-6, /* 0580 */
17, /* 0581 */
-21, /* 0583 */
-12, /* 0584 */
19, /* 0585 */
3, /* 0586 */
-18, /* 0587 */
-7, /* 0588 */
20, /* 0589 */
-1, /* 0590 */
-20, /* 0591 */
-2, /* 0592 */
4, /* 0594 */
-20, /* 0595 */
3, /* 0596 */
20, /* 0597 */
0, /* 0598 */
-19, /* 0599 */
-3, /* 0600 */
19, /* 0601 */
-6, /* 0602 */
-17, /* 0603 */
18, /* 0605 */
-12, /* 0606 */
-19, /* 0607 */
8, /* 0608 */
15, /* 0609 */
-5, /* 0610 */
-18, /* 0611 */
14, /* 0612 */
18, /* 0613 */
-11, /* 0614 */
17, /* 0616 */
15, /* 0617 */
-17, /* 0618 */
-11, /* 0619 */
12, /* 0620 */
12, /* 0621 */
-19, /* 0622 */
-15, /* 0623 */
16, /* 0624 */
8, /* 0625 */
-11, /* 0627 */
18, /* 0628 */
3, /* 0629 */
-18, /* 0630 */
-7, /* 0631 */
19, /* 0632 */
9, /* 0633 */
-20, /* 0634 */
-2, /* 0635 */
17, /* 0636 */
-20, /* 0638 */
-8, /* 0639 */
19, /* 0640 */
0, /* 0641 */
-19, /* 0642 */
-3, /* 0643 */
18, /* 0644 */
-6, /* 0645 */
-20, /* 0646 */
1, /* 0647 */
0, /* 0649 */
-19, /* 0650 */
7, /* 0651 */
18, /* 0652 */
-5, /* 0653 */
-17, /* 0654 */
13, /* 0655 */
17, /* 0656 */
-10, /* 0657 */
-14, /* 0658 */
15, /* 0660 */
-16, /* 0661 */
-18, /* 0662 */
12, /* 0663 */
11, /* 0664 */
-9, /* 0665 */
-14, /* 0666 */
16, /* 0667 */
7, /* 0668 */
-15, /* 0669 */
18, /* 0671 */
12, /* 0672 */
-17, /* 0673 */
-6, /* 0674 */
15, /* 0675 */
8, /* 0676 */
-20, /* 0677 */
-12, /* 0678 */
17, /* 0679 */
4, /* 0680 */
-8, /* 0682 */
18, /* 0683 */
0, /* 0684 */
-19, /* 0685 */
-3, /* 0686 */
18, /* 0687 */
5, /* 0688 */
-19, /* 0689 */
1, /* 0690 */
19, /* 0691 */
-18, /* 0693 */
7, /* 0694 */
18, /* 0695 */
-4, /* 0696 */
-16, /* 0697 */
0, /* 0698 */
17, /* 0699 */
-10, /* 0700 */
-18, /* 0701 */
6, /* 0702 */
-3, /* 0704 */
-17, /* 0705 */
11, /* 0706 */
17, /* 0707 */
-9, /* 0708 */
-14, /* 0709 */
15, /* 0710 */
15, /* 0711 */
-15, /* 0712 */
-11, /* 0713 */
12, /* 0715 */
-17, /* 0716 */
-14, /* 0717 */
15, /* 0718 */
8, /* 0719 */
-14, /* 0720 */
-11, /* 0721 */
17, /* 0722 */
4, /* 0723 */
-16, /* 0724 */
18, /* 0726 */
9, /* 0727 */
-18, /* 0728 */
-3, /* 0729 */
16, /* 0730 */
4, /* 0731 */
-19, /* 0732 */
-8, /* 0733 */
18, /* 0734 */
0, /* 0735 */
-3, /* 0737 */
17, /* 0738 */
-4, /* 0739 */
-18, /* 0740 */
0, /* 0741 */
16, /* 0742 */
1, /* 0743 */
-18, /* 0744 */
5, /* 0745 */
17, /* 0746 */
-16, /* 0748 */
11, /* 0749 */
16, /* 0750 */
-9, /* 0751 */
-13, /* 0752 */
4, /* 0753 */
14, /* 0754 */
-14, /* 0755 */
-17, /* 0756 */
10, /* 0757 */
-8, /* 0759 */
-14, /* 0760 */
12, /* 0761 */
7, /* 0762 */
-12, /* 0763 */
-10, /* 0764 */
14, /* 0765 */
11, /* 0766 */
-14, /* 0767 */
-6, /* 0768 */
8, /* 0770 */
-16, /* 0771 */
-10, /* 0772 */
14, /* 0773 */
4, /* 0774 */
-16, /* 0775 */
-7, /* 0776 */
16, /* 0777 */
0, /* 0778 */
-15, /* 0779 */
15, /* 0781 */
4, /* 0782 */
-16, /* 0783 */
0, /* 0784 */
15, /* 0785 */
1, /* 0786 */
-15, /* 0787 */
5, /* 0788 */
15, /* 0789 */
-3, /* 0790 */
0, /* 0792 */
14, /* 0793 */
-8, /* 0794 */
-15, /* 0795 */
4, /* 0796 */
12, /* 0797 */
-2, /* 0798 */
-14, /* 0799 */
8, /* 0800 */
10, /* 0801 */
-12, /* 0803 */
12, /* 0804 */
13, /* 0805 */
-11, /* 0806 */
-10, /* 0807 */
7, /* 0808 */
10, /* 0809 */
-13, /* 0810 */
-12, /* 0811 */
11, /* 0812 */
-15, /* 0814 */
-10, /* 0815 */
13, /* 0816 */
4, /* 0817 */
-13, /* 0818 */
-7, /* 0819 */
15, /* 0820 */
8, /* 0821 */
-15, /* 0822 */
-3, /* 0823 */
4, /* 0825 */
-15, /* 0826 */
-7, /* 0827 */
15, /* 0828 */
1, /* 0829 */
-15, /* 0830 */
-4, /* 0831 */
14, /* 0832 */
-3, /* 0833 */
-15, /* 0834 */
14, /* 0836 */
1, /* 0837 */
-15, /* 0838 */
4, /* 0839 */
14, /* 0840 */
-2, /* 0841 */
-14, /* 0842 */
8, /* 0843 */
14, /* 0844 */
-7, /* 0845 */
3, /* 0847 */
12, /* 0848 */
-11, /* 0849 */
-14, /* 0850 */
7, /* 0851 */
10, /* 0852 */
-6, /* 0853 */
-12, /* 0854 */
11, /* 0855 */
7, /* 0856 */
-10, /* 0858 */
13, /* 0859 */
10, /* 0860 */
-12, /* 0861 */
-7, /* 0862 */
10, /* 0863 */
8, /* 0864 */
-14, /* 0865 */
-10, /* 0866 */
12, /* 0867 */
-15, /* 0869 */
-7, /* 0870 */
14, /* 0871 */
1, /* 0872 */
-14, /* 0873 */
-4, /* 0874 */
14, /* 0875 */
5, /* 0876 */
-15, /* 0877 */
0, /* 0878 */
1, /* 0880 */
-14, /* 0881 */
4, /* 0882 */
14, /* 0883 */
-2, /* 0884 */
-14, /* 0885 */
-1, /* 0886 */
13, /* 0887 */
-6, /* 0888 */
-14, /* 0889 */
12, /* 0891 */
-1, /* 0892 */
-14, /* 0893 */
7, /* 0894 */
10, /* 0895 */
-5, /* 0896 */
-12, /* 0897 */
11, /* 0898 */
12, /* 0899 */
-10, /* 0900 */
6, /* 0902 */
10, /* 0903 */
-12, /* 0904 */
-12, /* 0905 */
10, /* 0906 */
7, /* 0907 */
-14, /* 0908 */
-10, /* 0909 */
12, /* 0910 */
4, /* 0911 */
-7, /* 0913 */
14, /* 0914 */
8, /* 0915 */
-13, /* 0916 */
-4, /* 0917 */
11, /* 0918 */
5, /* 0919 */
-14, /* 0920 */
0, /* 0921 */
13, /* 0922 */
-14, /* 0924 */
-4, /* 0925 */
13, /* 0926 */
-2, /* 0927 */
-14, /* 0928 */
-1, /* 0929 */
13, /* 0930 */
2, /* 0931 */
-14, /* 0932 */
3, /* 0933 */
-1, /* 0935 */
-13, /* 0936 */
7, /* 0937 */
13, /* 0938 */
-5, /* 0939 */
-11, /* 0940 */
2, /* 0941 */
12, /* 0942 */
-10, /* 0943 */
-14, /* 0944 */
10, /* 0946 */
-4, /* 0947 */
-12, /* 0948 */
10, /* 0949 */
7, /* 0950 */
-9, /* 0951 */
-10, /* 0952 */
12, /* 0953 */
10, /* 0954 */
-11, /* 0955 */
9, /* 0957 */
8, /* 0958 */
-13, /* 0959 */
-10, /* 0960 */
11, /* 0961 */
4, /* 0962 */
-14, /* 0963 */
-7, /* 0964 */
13, /* 0965 */
1, /* 0966 */
-4, /* 0968 */
13, /* 0969 */
5, /* 0970 */
-14, /* 0971 */
0, /* 0972 */
13, /* 0973 */
2, /* 0974 */
-14, /* 0975 */
2, /* 0976 */
13, /* 0977 */
-13, /* 0979 */
-1, /* 0980 */
12, /* 0981 */
-5, /* 0982 */
-13, /* 0983 */
2, /* 0984 */
11, /* 0985 */
0, /* 0986 */
-13, /* 0987 */
6, /* 0988 */
-4, /* 0990 */
-11, /* 0991 */
9, /* 0992 */
12, /* 0993 */
-8, /* 0994 */
-9, /* 0995 */
5, /* 0996 */
10, /* 0997 */
-11, /* 0998 */
-12, /* 0999 */
8, /* 1001 */
-13, /* 1002 */
-10, /* 1003 */
11, /* 1004 */
4, /* 1005 */
-10, /* 1006 */
-7, /* 1007 */
13, /* 1008 */
8, /* 1009 */
-12, /* 1010 */
10, /* 1012 */
5, /* 1013 */
-13, /* 1014 */
0, /* 1015 */
12, /* 1016 */
2, /* 1017 */
-13, /* 1018 */
-4, /* 1019 */
12, /* 1020 */
-1, /* 1021 */
-1, /* 1023 */
12, /* 1024 */
2, /* 1025 */
-13, /* 1026 */
2, /* 1027 */
11, /* 1028 */
0, /* 1029 */
-13, /* 1030 */
6, /* 1031 */
12, /* 1032 */
-11, /* 1034 */
1, /* 1035 */
11, /* 1036 */
-8, /* 1037 */
-13, /* 1038 */
5, /* 1039 */
9, /* 1040 */
-10, /* 1041 */
-11, /* 1042 */
8, /* 1043 */
-7, /* 1045 */
-9, /* 1046 */
10, /* 1047 */
10, /* 1048 */
-10, /* 1049 */
-7, /* 1050 */
8, /* 1051 */
8, /* 1052 */
-12, /* 1053 */
-10, /* 1054 */
5, /* 1056 */
-13, /* 1057 */
-7, /* 1058 */
12, /* 1059 */
2, /* 1060 */
-11, /* 1061 */
-4, /* 1062 */
12, /* 1063 */
5, /* 1064 */
-13, /* 1065 */
11, /* 1067 */
2, /* 1068 */
-13, /* 1069 */
2, /* 1070 */
12, /* 1071 */
0, /* 1072 */
-12, /* 1073 */
-2, /* 1074 */
12, /* 1075 */
-4, /* 1076 */
1, /* 1078 */
11, /* 1079 */
0, /* 1080 */
-13, /* 1081 */
5, /* 1082 */
9, /* 1083 */
-3, /* 1084 */
-11, /* 1085 */
8, /* 1086 */
11, /* 1087 */
-9, /* 1089 */
4, /* 1090 */
9, /* 1091 */
-10, /* 1092 */
-11, /* 1093 */
8, /* 1094 */
7, /* 1095 */
-12, /* 1096 */
-9, /* 1097 */
9, /* 1098 */
-9, /* 1100 */
-7, /* 1101 */
11, /* 1102 */
8, /* 1103 */
-11, /* 1104 */
-4, /* 1105 */
9, /* 1106 */
5, /* 1107 */
-12, /* 1108 */
-1, /* 1109 */
2, /* 1111 */
-12, /* 1112 */
-5, /* 1113 */
11, /* 1114 */
0, /* 1115 */
-12, /* 1116 */
-2, /* 1117 */
11, /* 1118 */
3, /* 1119 */
-12, /* 1120 */
10, /* 1122 */
0, /* 1123 */
-12, /* 1124 */
4, /* 1125 */
11, /* 1126 */
-3, /* 1127 */
-10, /* 1128 */
0, /* 1129 */
11, /* 1130 */
-7, /* 1131 */
4, /* 1133 */
9, /* 1134 */
-9, /* 1135 */
-11, /* 1136 */
7, /* 1137 */
7, /* 1138 */
-6, /* 1139 */
-9, /* 1140 */
9, /* 1141 */
8, /* 1142 */
-6, /* 1144 */
6, /* 1145 */
7, /* 1146 */
-9, /* 1147 */
-3, /* 1148 */
8, /* 1149 */
4, /* 1150 */
-10, /* 1151 */
-6, /* 1152 */
9, /* 1153 */
-9, /* 1155 */
-4, /* 1156 */
10, /* 1157 */
5, /* 1158 */
-10, /* 1159 */
-1, /* 1160 */
9, /* 1161 */
2, /* 1162 */
-10, /* 1163 */
1, /* 1164 */
0, /* 1166 */
-10, /* 1167 */
-2, /* 1168 */
9, /* 1169 */
-3, /* 1170 */
-10, /* 1171 */
0, /* 1172 */
9, /* 1173 */
0, /* 1174 */
-10, /* 1175 */
7, /* 1177 */
-2, /* 1178 */
-9, /* 1179 */
6, /* 1180 */
9, /* 1181 */
-5, /* 1182 */
-8, /* 1183 */
2, /* 1184 */
8, /* 1185 */
-7, /* 1186 */
6, /* 1188 */
6, /* 1189 */
-9, /* 1190 */
-8, /* 1191 */
7, /* 1192 */
4, /* 1193 */
-7, /* 1194 */
-6, /* 1195 */
9, /* 1196 */
7, /* 1197 */
-4, /* 1199 */
7, /* 1200 */
4, /* 1201 */
-10, /* 1202 */
-1, /* 1203 */
9, /* 1204 */
2, /* 1205 */
-10, /* 1206 */
-4, /* 1207 */
9, /* 1208 */
-10, /* 1210 */
-2, /* 1211 */
9, /* 1212 */
3, /* 1213 */
-10, /* 1214 */
0, /* 1215 */
9, /* 1216 */
0, /* 1217 */
-10, /* 1218 */
3, /* 1219 */
-2, /* 1221 */
-9, /* 1222 */
0, /* 1223 */
9, /* 1224 */
-5, /* 1225 */
-10, /* 1226 */
2, /* 1227 */
7, /* 1228 */
-7, /* 1229 */
-9, /* 1230 */
6, /* 1232 */
-4, /* 1233 */
-8, /* 1234 */
7, /* 1235 */
8, /* 1236 */
-7, /* 1237 */
-6, /* 1238 */
5, /* 1239 */
6, /* 1240 */
-8, /* 1241 */
7, /* 1243 */
4, /* 1244 */
-9, /* 1245 */
-6, /* 1246 */
8, /* 1247 */
2, /* 1248 */
-8, /* 1249 */
-4, /* 1250 */
9, /* 1251 */
5, /* 1252 */
-2, /* 1254 */
9, /* 1255 */
3, /* 1256 */
-9, /* 1257 */
0, /* 1258 */
9, /* 1259 */
0, /* 1260 */
-10, /* 1261 */
-2, /* 1262 */
9, /* 1263 */
-9, /* 1265 */
0, /* 1266 */
8, /* 1267 */
-5, /* 1268 */
-9, /* 1269 */
2, /* 1270 */
7, /* 1271 */
-1, /* 1272 */
-9, /* 1273 */
5, /* 1274 */
-4, /* 1276 */
-7, /* 1277 */
2, /* 1278 */
7, /* 1279 */
-7, /* 1280 */
-6, /* 1281 */
5, /* 1282 */
6, /* 1283 */
-8, /* 1284 */
-8, /* 1285 */
4, /* 1287 */
-6, /* 1288 */
-6, /* 1289 */
8, /* 1290 */
6, /* 1291 */
-7, /* 1292 */
-4, /* 1293 */
6, /* 1294 */
5, /* 1295 */
-9, /* 1296 */
7, /* 1298 */
2, /* 1299 */
-9, /* 1300 */
-4, /* 1301 */
8, /* 1302 */
0, /* 1303 */
-9, /* 1304 */
-2, /* 1305 */
8, /* 1306 */
3, /* 1307 */
0, /* 1309 */
8, /* 1310 */
1, /* 1311 */
-9, /* 1312 */
2, /* 1313 */
8, /* 1314 */
-1, /* 1315 */
-8, /* 1316 */
0, /* 1317 */
8, /* 1318 */
-9, /* 1320 */
2, /* 1321 */
7, /* 1322 */
-6, /* 1323 */
-8, /* 1324 */
5, /* 1325 */
6, /* 1326 */
-3, /* 1327 */
-7, /* 1328 */
6, /* 1329 */
-6, /* 1331 */
-6, /* 1332 */
4, /* 1333 */
6, /* 1334 */
-7, /* 1335 */
-4, /* 1336 */
6, /* 1337 */
4, /* 1338 */
-9, /* 1339 */
-6, /* 1340 */
2, /* 1342 */
-7, /* 1343 */
-4, /* 1344 */
8, /* 1345 */
5, /* 1346 */
-9, /* 1347 */
-2, /* 1348 */
8, /* 1349 */
3, /* 1350 */
-9, /* 1351 */
8, /* 1353 */
1, /* 1354 */
-9, /* 1355 */
-3, /* 1356 */
8, /* 1357 */
-1, /* 1358 */
-8, /* 1359 */
0, /* 1360 */
8, /* 1361 */
-4, /* 1362 */
1, /* 1364 */
7, /* 1365 */
-1, /* 1366 */
-8, /* 1367 */
4, /* 1368 */
8, /* 1369 */
-3, /* 1370 */
-7, /* 1371 */
1, /* 1372 */
7, /* 1373 */
-6, /* 1375 */
4, /* 1376 */
6, /* 1377 */
-7, /* 1378 */
-7, /* 1379 */
5, /* 1380 */
4, /* 1381 */
-5, /* 1382 */
-6, /* 1383 */
7, /* 1384 */
-7, /* 1386 */
-4, /* 1387 */
8, /* 1388 */
4, /* 1389 */
-8, /* 1390 */
-2, /* 1391 */
7, /* 1392 */
3, /* 1393 */
-8, /* 1394 */
-4, /* 1395 */
0, /* 1397 */
-8, /* 1398 */
-3, /* 1399 */
8, /* 1400 */
-1, /* 1401 */
-8, /* 1402 */
0, /* 1403 */
8, /* 1404 */
1, /* 1405 */
-9, /* 1406 */
8, /* 1408 */
-1, /* 1409 */
-8, /* 1410 */
0, /* 1411 */
8, /* 1412 */
-3, /* 1413 */
-8, /* 1414 */
1, /* 1415 */
7, /* 1416 */
-6, /* 1417 */
4, /* 1419 */
6, /* 1420 */
-3, /* 1421 */
-7, /* 1422 */
5, /* 1423 */
7, /* 1424 */
-5, /* 1425 */
-6, /* 1426 */
3, /* 1427 */
6, /* 1428 */
-4, /* 1430 */
5, /* 1431 */
4, /* 1432 */
-8, /* 1433 */
-6, /* 1434 */
6, /* 1435 */
2, /* 1436 */
-6, /* 1437 */
-4, /* 1438 */
7, /* 1439 */
-8, /* 1441 */
-3, /* 1442 */
7, /* 1443 */
3, /* 1444 */
-8, /* 1445 */
0, /* 1446 */
7, /* 1447 */
1, /* 1448 */
-8, /* 1449 */
-3, /* 1450 */
-1, /* 1452 */
-8, /* 1453 */
0, /* 1454 */
7, /* 1455 */
-3, /* 1456 */
-8, /* 1457 */
1, /* 1458 */
6, /* 1459 */
0, /* 1460 */
-8, /* 1461 */
7, /* 1463 */
-3, /* 1464 */
-7, /* 1465 */
1, /* 1466 */
7, /* 1467 */
-5, /* 1468 */
-6, /* 1469 */
3, /* 1470 */
6, /* 1471 */
-6, /* 1472 */
5, /* 1474 */
4, /* 1475 */
-5, /* 1476 */
-6, /* 1477 */
6, /* 1478 */
6, /* 1479 */
-6, /* 1480 */
-4, /* 1481 */
7, /* 1482 */
4, /* 1483 */
-2, /* 1485 */
6, /* 1486 */
3, /* 1487 */
-8, /* 1488 */
-4, /* 1489 */
7, /* 1490 */
1, /* 1491 */
-7, /* 1492 */
-3, /* 1493 */
7, /* 1494 */
-7, /* 1496 */
-1, /* 1497 */
7, /* 1498 */
1, /* 1499 */
-8, /* 1500 */
1, /* 1501 */
7, /* 1502 */
0, /* 1503 */
-7, /* 1504 */
-1, /* 1505 */
-2, /* 1507 */
-6, /* 1508 */
0, /* 1509 */
6, /* 1510 */
-5, /* 1511 */
-7, /* 1512 */
3, /* 1513 */
5, /* 1514 */
-2, /* 1515 */
-7, /* 1516 */
6, /* 1518 */
-4, /* 1519 */
-6, /* 1520 */
6, /* 1521 */
5, /* 1522 */
-5, /* 1523 */
-3, /* 1524 */
4, /* 1525 */
4, /* 1526 */
-6, /* 1527 */
5, /* 1529 */
2, /* 1530 */
-5, /* 1531 */
-4, /* 1532 */
6, /* 1533 */
4, /* 1534 */
-6, /* 1535 */
-2, /* 1536 */
6, /* 1537 */
2, /* 1538 */
0, /* 1540 */
5, /* 1541 */
1, /* 1542 */
-6, /* 1543 */
-2, /* 1544 */
6, /* 1545 */
0, /* 1546 */
-6, /* 1547 */
-1, /* 1548 */
6, /* 1549 */
-6, /* 1551 */
0, /* 1552 */
5, /* 1553 */
0, /* 1554 */
-6, /* 1555 */
2, /* 1556 */
6, /* 1557 */
-2, /* 1558 */
-5, /* 1559 */
0, /* 1560 */
-3, /* 1562 */
-5, /* 1563 */
2, /* 1564 */
5, /* 1565 */
-5, /* 1566 */
-5, /* 1567 */
3, /* 1568 */
3, /* 1569 */
-3, /* 1570 */
-5, /* 1571 */
5, /* 1573 */
-4, /* 1574 */
-3, /* 1575 */
5, /* 1576 */
4, /* 1577 */
-6, /* 1578 */
-2, /* 1579 */
4, /* 1580 */
2, /* 1581 */
-6, /* 1582 */
5, /* 1584 */
1, /* 1585 */
-5, /* 1586 */
-2, /* 1587 */
5, /* 1588 */
0, /* 1589 */
-6, /* 1590 */
-1, /* 1591 */
6, /* 1592 */
1, /* 1593 */
0, /* 1595 */
5, /* 1596 */
0, /* 1597 */
-6, /* 1598 */
-1, /* 1599 */
6, /* 1600 */
-2, /* 1601 */
-5, /* 1602 */
0, /* 1603 */
5, /* 1604 */
-6, /* 1606 */
2, /* 1607 */
4, /* 1608 */
-1, /* 1609 */
-5, /* 1610 */
3, /* 1611 */
5, /* 1612 */
-3, /* 1613 */
-5, /* 1614 */
4, /* 1615 */
-4, /* 1617 */
-3, /* 1618 */
3, /* 1619 */
3, /* 1620 */
-5, /* 1621 */
-5, /* 1622 */
4, /* 1623 */
2, /* 1624 */
-4, /* 1625 */
-4, /* 1626 */
1, /* 1628 */
-5, /* 1629 */
-2, /* 1630 */
5, /* 1631 */
2, /* 1632 */
-6, /* 1633 */
-1, /* 1634 */
5, /* 1635 */
1, /* 1636 */
-6, /* 1637 */
5, /* 1639 */
0, /* 1640 */
-5, /* 1641 */
-1, /* 1642 */
5, /* 1643 */
-2, /* 1644 */
-6, /* 1645 */
0, /* 1646 */
5, /* 1647 */
0, /* 1648 */
2, /* 1650 */
5, /* 1651 */
-1, /* 1652 */
-5, /* 1653 */
0, /* 1654 */
5, /* 1655 */
-3, /* 1656 */
-4, /* 1657 */
1, /* 1658 */
4, /* 1659 */
-5, /* 1661 */
3, /* 1662 */
3, /* 1663 */
-3, /* 1664 */
-5, /* 1665 */
4, /* 1666 */
4, /* 1667 */
-4, /* 1668 */
-3, /* 1669 */
5, /* 1670 */
-5, /* 1672 */
-2, /* 1673 */
4, /* 1674 */
2, /* 1675 */
-5, /* 1676 */
-4, /* 1677 */
5, /* 1678 */
1, /* 1679 */
-5, /* 1680 */
-2, /* 1681 */
0, /* 1683 */
-5, /* 1684 */
-1, /* 1685 */
5, /* 1686 */
1, /* 1687 */
-6, /* 1688 */
0, /* 1689 */
5, /* 1690 */
0, /* 1691 */
-5, /* 1692 */
5, /* 1694 */
-1, /* 1695 */
-5, /* 1696 */
0, /* 1697 */
5, /* 1698 */
-3, /* 1699 */
-5, /* 1700 */
1, /* 1701 */
4, /* 1702 */
-1, /* 1703 */
3, /* 1705 */
5, /* 1706 */
-3, /* 1707 */
-4, /* 1708 */
4, /* 1709 */
4, /* 1710 */
-4, /* 1711 */
-3, /* 1712 */
2, /* 1713 */
3, /* 1714 */
-5, /* 1716 */
3, /* 1717 */
2, /* 1718 */
-3, /* 1719 */
-3, /* 1720 */
4, /* 1721 */
1, /* 1722 */
-5, /* 1723 */
-2, /* 1724 */
5, /* 1725 */
-5, /* 1727 */
-1, /* 1728 */
4, /* 1729 */
1, /* 1730 */
-5, /* 1731 */
-2, /* 1732 */
5, /* 1733 */
0, /* 1734 */
-5, /* 1735 */
-1, /* 1736 */
-1, /* 1738 */
-5, /* 1739 */
0, /* 1740 */
4, /* 1741 */
0, /* 1742 */
-5, /* 1743 */
1, /* 1744 */
5, /* 1745 */
-1, /* 1746 */
-5, /* 1747 */
4, /* 1749 */
-3, /* 1750 */
-4, /* 1751 */
1, /* 1752 */
4, /* 1753 */
-4, /* 1754 */
-5, /* 1755 */
2, /* 1756 */
3, /* 1757 */
-2, /* 1758 */
3, /* 1760 */
4, /* 1761 */
-3, /* 1762 */
-3, /* 1763 */
4, /* 1764 */
3, /* 1765 */
-4, /* 1766 */
-2, /* 1767 */
3, /* 1768 */
2, /* 1769 */
-3, /* 1771 */
4, /* 1772 */
1, /* 1773 */
-4, /* 1774 */
-2, /* 1775 */
4, /* 1776 */
0, /* 1777 */
-5, /* 1778 */
-1, /* 1779 */
5, /* 1780 */
-5, /* 1782 */
0, /* 1783 */
4, /* 1784 */
0, /* 1785 */
-5, /* 1786 */
-1, /* 1787 */
5, /* 1788 */
-1, /* 1789 */
-5, /* 1790 */
0, /* 1791 */
-2, /* 1793 */
-5, /* 1794 */
1, /* 1795 */
4, /* 1796 */
0, /* 1797 */
-5, /* 1798 */
2, /* 1799 */
4, /* 1800 */
-2, /* 1801 */
-4, /* 1802 */
4, /* 1804 */
-3, /* 1805 */
-3, /* 1806 */
2, /* 1807 */
3, /* 1808 */
-4, /* 1809 */
-4, /* 1810 */
3, /* 1811 */
2, /* 1812 */
-3, /* 1813 */
4, /* 1815 */
1, /* 1816 */
-4, /* 1817 */
-2, /* 1818 */
4, /* 1819 */
2, /* 1820 */
-5, /* 1821 */
-1, /* 1822 */
4, /* 1823 */
1, /* 1824 */
-2, /* 1826 */
4, /* 1827 */
0, /* 1828 */
-5, /* 1829 */
-1, /* 1830 */
4, /* 1831 */
-1, /* 1832 */
-5, /* 1833 */
0, /* 1834 */
4, /* 1835 */
-5, /* 1837 */
1, /* 1838 */
4, /* 1839 */
0, /* 1840 */
-4, /* 1841 */
2, /* 1842 */
4, /* 1843 */
-2, /* 1844 */
-4, /* 1845 */
0, /* 1846 */
-3, /* 1848 */
-4, /* 1849 */
2, /* 1850 */
3, /* 1851 */
-2, /* 1852 */
-4, /* 1853 */
3, /* 1854 */
2, /* 1855 */
-3, /* 1856 */
-3, /* 1857 */
3, /* 1859 */
-4, /* 1860 */
-2, /* 1861 */
3, /* 1862 */
2, /* 1863 */
-4, /* 1864 */
-3, /* 1865 */
4, /* 1866 */
1, /* 1867 */
-5, /* 1868 */
4, /* 1870 */
0, /* 1871 */
-4, /* 1872 */
-1, /* 1873 */
4, /* 1874 */
1, /* 1875 */
-5, /* 1876 */
0, /* 1877 */
4, /* 1878 */
0, /* 1879 */
-1, /* 1881 */
4, /* 1882 */
0, /* 1883 */
-4, /* 1884 */
0, /* 1885 */
4, /* 1886 */
-2, /* 1887 */
-5, /* 1888 */
0, /* 1889 */
4, /* 1890 */
-4, /* 1892 */
2, /* 1893 */
4, /* 1894 */
-2, /* 1895 */
-4, /* 1896 */
3, /* 1897 */
4, /* 1898 */
-3, /* 1899 */
-3, /* 1900 */
2, /* 1901 */
-3, /* 1903 */
-3, /* 1904 */
2, /* 1905 */
2, /* 1906 */
-2, /* 1907 */
-3, /* 1908 */
3, /* 1909 */
1, /* 1910 */
-3, /* 1911 */
-2, /* 1912 */
2, /* 1914 */
-3, /* 1915 */
-1, /* 1916 */
3, /* 1917 */
1, /* 1918 */
-3, /* 1919 */
-2, /* 1920 */
3, /* 1921 */
0, /* 1922 */
-4, /* 1923 */
3, /* 1925 */
0, /* 1926 */
-3, /* 1927 */
0, /* 1928 */
3, /* 1929 */
0, /* 1930 */
-4, /* 1931 */
0, /* 1932 */
3, /* 1933 */
0, /* 1934 */
1, /* 1936 */
3, /* 1937 */
-1, /* 1938 */
-3, /* 1939 */
0, /* 1940 */
3, /* 1941 */
-2, /* 1942 */
-3, /* 1943 */
1, /* 1944 */
2, /* 1945 */
-3, /* 1947 */
2, /* 1948 */
2, /* 1949 */
-2, /* 1950 */
-2, /* 1951 */
3, /* 1952 */
2, /* 1953 */
-3, /* 1954 */
-2, /* 1955 */
2, /* 1956 */
-3, /* 1958 */
-3, /* 1959 */
3, /* 1960 */
1, /* 1961 */
-3, /* 1962 */
-2, /* 1963 */
3, /* 1964 */
0, /* 1965 */
-3, /* 1966 */
-1, /* 1967 */
1, /* 1969 */
-3, /* 1970 */
0, /* 1971 */
3, /* 1972 */
0, /* 1973 */
-4, /* 1974 */
0, /* 1975 */
3, /* 1976 */
0, /* 1977 */
-3, /* 1978 */
3, /* 1980 */
-1, /* 1981 */
-3, /* 1982 */
0, /* 1983 */
3, /* 1984 */
0, /* 1985 */
-3, /* 1986 */
1, /* 1987 */
2, /* 1988 */
-1, /* 1989 */
2, /* 1991 */
3, /* 1992 */
-2, /* 1993 */
-2, /* 1994 */
1, /* 1995 */
2, /* 1996 */
-3, /* 1997 */
-3, /* 1998 */
2, /* 1999 */
2, /* 2000 */
-2, /* 2002 */
2, /* 2003 */
1, /* 2004 */
-2, /* 2005 */
-2, /* 2006 */
3, /* 2007 */
2, /* 2008 */
-3, /* 2009 */
-1, /* 2010 */
2, /* 2011 */
-3, /* 2013 */
-2, /* 2014 */
3, /* 2015 */
0, /* 2016 */
-3, /* 2017 */
-1, /* 2018 */
3, /* 2019 */
0, /* 2020 */
-3, /* 2021 */
0, /* 2022 */
0, /* 2024 */
-3, /* 2025 */
0, /* 2026 */
3, /* 2027 */
0, /* 2028 */
-3, /* 2029 */
1, /* 2030 */
3, /* 2031 */
-1, /* 2032 */
-3, /* 2033 */
2, /* 2035 */
-2, /* 2036 */
-3, /* 2037 */
1, /* 2038 */
2, /* 2039 */
-1, /* 2040 */
-3, /* 2041 */
2, /* 2042 */
1, /* 2043 */
-2, /* 2044 */
2, /* 2046 */
2, /* 2047 */
-2};

#endif /* mywav_H_ */