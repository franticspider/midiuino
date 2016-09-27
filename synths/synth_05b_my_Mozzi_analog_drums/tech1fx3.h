#ifndef tech1fx3wav_H_
#define tech1fx3wav_H_

#include "Arduino.h"
#include <avr/pgmspace.h>

#define tech1fx3wav_NUM_CELLS 1024
#define tech1fx3wav_SAMPLERATE 16384
const int8_t __attribute__((progmem)) tech1fx3wav_DATA [] = {
0, /* 0000 */
-40, /* 0001 */
-58, /* 0002 */
-62, /* 0003 */
-62, /* 0004 */
-63, /* 0005 */
-63, /* 0006 */
-63, /* 0007 */
-63, /* 0008 */
-63, /* 0009 */
-63, /* 0011 */
-63, /* 0012 */
-35, /* 0013 */
-56, /* 0014 */
-61, /* 0015 */
-62, /* 0016 */
-63, /* 0017 */
-63, /* 0018 */
-63, /* 0019 */
-63, /* 0020 */
-63, /* 0022 */
-63, /* 0023 */
-63, /* 0024 */
-63, /* 0025 */
-34, /* 0026 */
-56, /* 0027 */
-61, /* 0028 */
-62, /* 0029 */
-62, /* 0030 */
-62, /* 0031 */
-62, /* 0033 */
-62, /* 0034 */
-62, /* 0035 */
-62, /* 0036 */
-62, /* 0037 */
-62, /* 0038 */
-62, /* 0039 */
-62, /* 0040 */
-62, /* 0041 */
-62, /* 0042 */
-62, /* 0044 */
-62, /* 0045 */
-62, /* 0046 */
-62, /* 0047 */
-62, /* 0048 */
-62, /* 0049 */
-62, /* 0050 */
-62, /* 0051 */
-62, /* 0052 */
-62, /* 0053 */
-58, /* 0055 */
-60, /* 0056 */
-62, /* 0057 */
-62, /* 0058 */
-62, /* 0059 */
-62, /* 0060 */
-62, /* 0061 */
-62, /* 0062 */
-62, /* 0063 */
-62, /* 0064 */
-62, /* 0066 */
-62, /* 0067 */
-62, /* 0068 */
-34, /* 0069 */
-55, /* 0070 */
-60, /* 0071 */
-61, /* 0072 */
-61, /* 0073 */
-62, /* 0074 */
-62, /* 0075 */
-62, /* 0077 */
-62, /* 0078 */
-61, /* 0079 */
-61, /* 0080 */
-61, /* 0081 */
-61, /* 0082 */
-61, /* 0083 */
-61, /* 0084 */
-33, /* 0085 */
-54, /* 0086 */
-61, /* 0088 */
-61, /* 0089 */
-61, /* 0090 */
-61, /* 0091 */
-61, /* 0092 */
-61, /* 0093 */
-61, /* 0094 */
-61, /* 0095 */
-61, /* 0096 */
-61, /* 0097 */
-61, /* 0099 */
-61, /* 0100 */
-61, /* 0101 */
-61, /* 0102 */
-61, /* 0103 */
-61, /* 0104 */
-61, /* 0105 */
-61, /* 0106 */
-61, /* 0107 */
-61, /* 0108 */
-61, /* 0110 */
-61, /* 0111 */
-61, /* 0112 */
-61, /* 0113 */
-61, /* 0114 */
-61, /* 0115 */
-61, /* 0116 */
-61, /* 0117 */
-61, /* 0118 */
-61, /* 0119 */
-54, /* 0121 */
-59, /* 0122 */
-60, /* 0123 */
-60, /* 0124 */
-61, /* 0125 */
-61, /* 0126 */
-61, /* 0127 */
-61, /* 0128 */
-61, /* 0129 */
-61, /* 0130 */
-60, /* 0132 */
-60, /* 0133 */
-60, /* 0134 */
-60, /* 0135 */
-60, /* 0136 */
-60, /* 0137 */
-60, /* 0138 */
-32, /* 0139 */
-49, /* 0140 */
-58, /* 0141 */
-60, /* 0143 */
-60, /* 0144 */
-60, /* 0145 */
-60, /* 0146 */
-60, /* 0147 */
-60, /* 0148 */
-60, /* 0149 */
-60, /* 0150 */
-60, /* 0151 */
-60, /* 0152 */
-60, /* 0154 */
-60, /* 0155 */
-60, /* 0156 */
-60, /* 0157 */
-60, /* 0158 */
-60, /* 0159 */
-32, /* 0160 */
-53, /* 0161 */
-58, /* 0162 */
-59, /* 0163 */
-60, /* 0165 */
-60, /* 0166 */
-60, /* 0167 */
-60, /* 0168 */
-60, /* 0169 */
-60, /* 0170 */
-60, /* 0171 */
-60, /* 0172 */
-60, /* 0173 */
-60, /* 0174 */
-60, /* 0176 */
-60, /* 0177 */
-60, /* 0178 */
-60, /* 0179 */
-60, /* 0180 */
-60, /* 0181 */
-15, /* 0182 */
-48, /* 0183 */
-57, /* 0184 */
-58, /* 0185 */
-59, /* 0187 */
-59, /* 0188 */
-59, /* 0189 */
-59, /* 0190 */
-59, /* 0191 */
-59, /* 0192 */
-59, /* 0193 */
-59, /* 0194 */
-59, /* 0195 */
-59, /* 0196 */
-59, /* 0198 */
-59, /* 0199 */
-59, /* 0200 */
-59, /* 0201 */
-59, /* 0202 */
-59, /* 0203 */
-59, /* 0204 */
-59, /* 0205 */
-16, /* 0206 */
-48, /* 0207 */
-58, /* 0209 */
-59, /* 0210 */
-59, /* 0211 */
-59, /* 0212 */
-59, /* 0213 */
-59, /* 0214 */
-59, /* 0215 */
-59, /* 0216 */
-59, /* 0217 */
-59, /* 0218 */
-59, /* 0220 */
-59, /* 0221 */
-59, /* 0222 */
-59, /* 0223 */
-59, /* 0224 */
-59, /* 0225 */
-59, /* 0226 */
-59, /* 0227 */
-59, /* 0228 */
-59, /* 0229 */
-59, /* 0231 */
-59, /* 0232 */
-59, /* 0233 */
-59, /* 0234 */
-59, /* 0235 */
-59, /* 0236 */
-59, /* 0237 */
-58, /* 0238 */
-58, /* 0239 */
-58, /* 0240 */
-58, /* 0242 */
-58, /* 0243 */
-58, /* 0244 */
-58, /* 0245 */
-58, /* 0246 */
-58, /* 0247 */
-58, /* 0248 */
-58, /* 0249 */
-58, /* 0250 */
-58, /* 0251 */
-58, /* 0253 */
-58, /* 0254 */
-58, /* 0255 */
-58, /* 0256 */
-58, /* 0257 */
-58, /* 0258 */
-58, /* 0259 */
-58, /* 0260 */
-17, /* 0261 */
-47, /* 0262 */
-57, /* 0264 */
-58, /* 0265 */
-58, /* 0266 */
-58, /* 0267 */
-58, /* 0268 */
-58, /* 0269 */
-58, /* 0270 */
-58, /* 0271 */
-58, /* 0272 */
-58, /* 0273 */
-58, /* 0275 */
-58, /* 0276 */
-58, /* 0277 */
-58, /* 0278 */
-58, /* 0279 */
-58, /* 0280 */
-58, /* 0281 */
-58, /* 0282 */
-58, /* 0283 */
-58, /* 0284 */
-58, /* 0286 */
-58, /* 0287 */
-58, /* 0288 */
-58, /* 0289 */
-58, /* 0290 */
-58, /* 0291 */
-58, /* 0292 */
-31, /* 0293 */
-50, /* 0294 */
-55, /* 0295 */
-57, /* 0297 */
-57, /* 0298 */
-57, /* 0299 */
-57, /* 0300 */
-57, /* 0301 */
-57, /* 0302 */
-57, /* 0303 */
-57, /* 0304 */
-57, /* 0305 */
-57, /* 0306 */
-57, /* 0308 */
-57, /* 0309 */
-57, /* 0310 */
-57, /* 0311 */
-57, /* 0312 */
-57, /* 0313 */
-57, /* 0314 */
-57, /* 0315 */
-57, /* 0316 */
-57, /* 0317 */
-57, /* 0319 */
-57, /* 0320 */
-57, /* 0321 */
-57, /* 0322 */
-57, /* 0323 */
-57, /* 0324 */
-57, /* 0325 */
-57, /* 0326 */
-57, /* 0327 */
-18, /* 0328 */
-54, /* 0330 */
-56, /* 0331 */
-56, /* 0332 */
-57, /* 0333 */
-57, /* 0334 */
-57, /* 0335 */
-57, /* 0336 */
-57, /* 0337 */
-57, /* 0338 */
-57, /* 0339 */
-57, /* 0341 */
-57, /* 0342 */
-57, /* 0343 */
-57, /* 0344 */
-57, /* 0345 */
-57, /* 0346 */
-56, /* 0347 */
-56, /* 0348 */
-56, /* 0349 */
-56, /* 0350 */
-56, /* 0352 */
-56, /* 0353 */
-56, /* 0354 */
-56, /* 0355 */
-56, /* 0356 */
-56, /* 0357 */
-56, /* 0358 */
-56, /* 0359 */
-56, /* 0360 */
-56, /* 0361 */
-56, /* 0363 */
-56, /* 0364 */
-56, /* 0365 */
-56, /* 0366 */
-56, /* 0367 */
-30, /* 0368 */
-49, /* 0369 */
-53, /* 0370 */
-55, /* 0371 */
-56, /* 0372 */
-56, /* 0374 */
-56, /* 0375 */
-56, /* 0376 */
-56, /* 0377 */
-56, /* 0378 */
-56, /* 0379 */
-56, /* 0380 */
-53, /* 0381 */
-53, /* 0382 */
-53, /* 0383 */
-53, /* 0385 */
-53, /* 0386 */
-52, /* 0387 */
-52, /* 0388 */
-52, /* 0389 */
-52, /* 0390 */
-52, /* 0391 */
-52, /* 0392 */
-52, /* 0393 */
-52, /* 0394 */
-52, /* 0396 */
-52, /* 0397 */
-52, /* 0398 */
-52, /* 0399 */
-52, /* 0400 */
-52, /* 0401 */
-52, /* 0402 */
-52, /* 0403 */
-52, /* 0404 */
-52, /* 0405 */
-52, /* 0407 */
-52, /* 0408 */
-52, /* 0409 */
-52, /* 0410 */
-52, /* 0411 */
-52, /* 0412 */
-28, /* 0413 */
-45, /* 0414 */
-50, /* 0415 */
-51, /* 0416 */
-52, /* 0418 */
-52, /* 0419 */
-52, /* 0420 */
-52, /* 0421 */
-52, /* 0422 */
-52, /* 0423 */
-52, /* 0424 */
-52, /* 0425 */
-52, /* 0426 */
-52, /* 0427 */
-52, /* 0429 */
-52, /* 0430 */
-52, /* 0431 */
-52, /* 0432 */
-52, /* 0433 */
-52, /* 0434 */
-52, /* 0435 */
-52, /* 0436 */
-52, /* 0437 */
-52, /* 0438 */
-52, /* 0440 */
-52, /* 0441 */
-52, /* 0442 */
-52, /* 0443 */
-52, /* 0444 */
-52, /* 0445 */
-51, /* 0446 */
-51, /* 0447 */
-51, /* 0448 */
-51, /* 0449 */
-51, /* 0451 */
-51, /* 0452 */
-51, /* 0453 */
-51, /* 0454 */
-51, /* 0455 */
-51, /* 0456 */
-51, /* 0457 */
-51, /* 0458 */
-51, /* 0459 */
-51, /* 0460 */
-51, /* 0462 */
-51, /* 0463 */
-51, /* 0464 */
-35, /* 0465 */
-46, /* 0466 */
-50, /* 0467 */
-51, /* 0468 */
-51, /* 0469 */
-51, /* 0470 */
-51, /* 0471 */
-51, /* 0473 */
-51, /* 0474 */
-51, /* 0475 */
-51, /* 0476 */
-51, /* 0477 */
-51, /* 0478 */
-51, /* 0479 */
-51, /* 0480 */
-51, /* 0481 */
-51, /* 0482 */
-51, /* 0484 */
-51, /* 0485 */
-51, /* 0486 */
-51, /* 0487 */
-51, /* 0488 */
-51, /* 0489 */
-51, /* 0490 */
-51, /* 0491 */
-51, /* 0492 */
-51, /* 0493 */
-51, /* 0495 */
-51, /* 0496 */
-51, /* 0497 */
-51, /* 0498 */
-51, /* 0499 */
-51, /* 0500 */
-51, /* 0501 */
-51, /* 0502 */
-51, /* 0503 */
-51, /* 0504 */
-50, /* 0506 */
-50, /* 0507 */
-50, /* 0508 */
-50, /* 0509 */
-50, /* 0510 */
-50, /* 0511 */
-50, /* 0512 */
-50, /* 0513 */
-50, /* 0514 */
-50, /* 0515 */
-50, /* 0517 */
-50, /* 0518 */
-50, /* 0519 */
-50, /* 0520 */
-50, /* 0521 */
-50, /* 0522 */
-50, /* 0523 */
-50, /* 0524 */
1, /* 0525 */
-24, /* 0526 */
-48, /* 0528 */
-49, /* 0529 */
-50, /* 0530 */
-50, /* 0531 */
-50, /* 0532 */
-50, /* 0533 */
-50, /* 0534 */
-50, /* 0535 */
-50, /* 0536 */
-50, /* 0537 */
-50, /* 0539 */
-50, /* 0540 */
-50, /* 0541 */
-50, /* 0542 */
-50, /* 0543 */
-50, /* 0544 */
-50, /* 0545 */
-50, /* 0546 */
-50, /* 0547 */
-50, /* 0548 */
-50, /* 0550 */
-50, /* 0551 */
-50, /* 0552 */
-50, /* 0553 */
-50, /* 0554 */
-50, /* 0555 */
-50, /* 0556 */
-50, /* 0557 */
-50, /* 0558 */
-50, /* 0559 */
-50, /* 0561 */
-50, /* 0562 */
-50, /* 0563 */
-50, /* 0564 */
-50, /* 0565 */
-49, /* 0566 */
-49, /* 0567 */
-49, /* 0568 */
-49, /* 0569 */
-49, /* 0570 */
-49, /* 0572 */
-49, /* 0573 */
-49, /* 0574 */
-49, /* 0575 */
-49, /* 0576 */
-49, /* 0577 */
-49, /* 0578 */
-49, /* 0579 */
-49, /* 0580 */
-49, /* 0581 */
-49, /* 0583 */
-49, /* 0584 */
-49, /* 0585 */
-49, /* 0586 */
-49, /* 0587 */
-49, /* 0588 */
-49, /* 0589 */
-49, /* 0590 */
-49, /* 0591 */
-49, /* 0592 */
-49, /* 0594 */
-49, /* 0595 */
-49, /* 0596 */
-49, /* 0597 */
-11, /* 0598 */
-37, /* 0599 */
-43, /* 0600 */
-47, /* 0601 */
-48, /* 0602 */
-49, /* 0603 */
-49, /* 0605 */
-49, /* 0606 */
-49, /* 0607 */
-49, /* 0608 */
-49, /* 0609 */
-49, /* 0610 */
-49, /* 0611 */
-49, /* 0612 */
-49, /* 0613 */
-49, /* 0614 */
-49, /* 0616 */
-49, /* 0617 */
-49, /* 0618 */
-49, /* 0619 */
-49, /* 0620 */
-49, /* 0621 */
-49, /* 0622 */
-49, /* 0623 */
-49, /* 0624 */
-49, /* 0625 */
-48, /* 0627 */
-48, /* 0628 */
-48, /* 0629 */
-48, /* 0630 */
-48, /* 0631 */
-48, /* 0632 */
-48, /* 0633 */
-48, /* 0634 */
-48, /* 0635 */
-48, /* 0636 */
-48, /* 0638 */
-48, /* 0639 */
-48, /* 0640 */
-48, /* 0641 */
-48, /* 0642 */
-48, /* 0643 */
-48, /* 0644 */
-48, /* 0645 */
-48, /* 0646 */
-48, /* 0647 */
-48, /* 0649 */
-48, /* 0650 */
-48, /* 0651 */
-48, /* 0652 */
-48, /* 0653 */
-48, /* 0654 */
-48, /* 0655 */
-48, /* 0656 */
-48, /* 0657 */
-48, /* 0658 */
-48, /* 0660 */
-48, /* 0661 */
-48, /* 0662 */
-48, /* 0663 */
-48, /* 0664 */
-48, /* 0665 */
-48, /* 0666 */
-48, /* 0667 */
-48, /* 0668 */
-48, /* 0669 */
-48, /* 0671 */
-48, /* 0672 */
-48, /* 0673 */
-48, /* 0674 */
-48, /* 0675 */
-48, /* 0676 */
-48, /* 0677 */
-48, /* 0678 */
-48, /* 0679 */
-48, /* 0680 */
-48, /* 0682 */
-48, /* 0683 */
-48, /* 0684 */
-48, /* 0685 */
-22, /* 0686 */
-1, /* 0687 */
-25, /* 0688 */
-40, /* 0689 */
-45, /* 0690 */
-46, /* 0691 */
-47, /* 0693 */
-47, /* 0694 */
-47, /* 0695 */
-47, /* 0696 */
-47, /* 0697 */
-47, /* 0698 */
-47, /* 0699 */
-47, /* 0700 */
-47, /* 0701 */
-47, /* 0702 */
-47, /* 0704 */
-47, /* 0705 */
-47, /* 0706 */
-47, /* 0707 */
-47, /* 0708 */
-47, /* 0709 */
-47, /* 0710 */
-47, /* 0711 */
-47, /* 0712 */
-47, /* 0713 */
-47, /* 0715 */
-47, /* 0716 */
-47, /* 0717 */
-47, /* 0718 */
-47, /* 0719 */
-47, /* 0720 */
-47, /* 0721 */
-47, /* 0722 */
-47, /* 0723 */
-47, /* 0724 */
-47, /* 0726 */
-47, /* 0727 */
-47, /* 0728 */
-47, /* 0729 */
-47, /* 0730 */
-47, /* 0731 */
-47, /* 0732 */
-47, /* 0733 */
-47, /* 0734 */
-47, /* 0735 */
-47, /* 0737 */
-47, /* 0738 */
-47, /* 0739 */
-47, /* 0740 */
-47, /* 0741 */
-47, /* 0742 */
-47, /* 0743 */
-47, /* 0744 */
-47, /* 0745 */
-47, /* 0746 */
-47, /* 0748 */
-47, /* 0749 */
-46, /* 0750 */
-46, /* 0751 */
-46, /* 0752 */
-46, /* 0753 */
-46, /* 0754 */
-46, /* 0755 */
-46, /* 0756 */
-46, /* 0757 */
-46, /* 0759 */
-46, /* 0760 */
-43, /* 0761 */
-43, /* 0762 */
-43, /* 0763 */
-43, /* 0764 */
-43, /* 0765 */
-43, /* 0766 */
-43, /* 0767 */
-43, /* 0768 */
-43, /* 0770 */
-43, /* 0771 */
-43, /* 0772 */
-43, /* 0773 */
-43, /* 0774 */
-43, /* 0775 */
-43, /* 0776 */
-43, /* 0777 */
-43, /* 0778 */
-43, /* 0779 */
-43, /* 0781 */
-43, /* 0782 */
-43, /* 0783 */
-43, /* 0784 */
-43, /* 0785 */
-43, /* 0786 */
-43, /* 0787 */
-43, /* 0788 */
-43, /* 0789 */
-43, /* 0790 */
-43, /* 0792 */
-43, /* 0793 */
-43, /* 0794 */
-43, /* 0795 */
-43, /* 0796 */
-43, /* 0797 */
-43, /* 0798 */
-3, /* 0799 */
-13, /* 0800 */
-32, /* 0801 */
-41, /* 0803 */
-42, /* 0804 */
-42, /* 0805 */
-43, /* 0806 */
-43, /* 0807 */
-43, /* 0808 */
-43, /* 0809 */
-43, /* 0810 */
-43, /* 0811 */
-43, /* 0812 */
-43, /* 0814 */
-43, /* 0815 */
-43, /* 0816 */
-43, /* 0817 */
-43, /* 0818 */
-43, /* 0819 */
-43, /* 0820 */
-43, /* 0821 */
-43, /* 0822 */
-42, /* 0823 */
-42, /* 0825 */
-42, /* 0826 */
-42, /* 0827 */
-42, /* 0828 */
-42, /* 0829 */
-42, /* 0830 */
-42, /* 0831 */
-42, /* 0832 */
-42, /* 0833 */
-42, /* 0834 */
-42, /* 0836 */
-42, /* 0837 */
-42, /* 0838 */
-42, /* 0839 */
-42, /* 0840 */
-42, /* 0841 */
-42, /* 0842 */
-42, /* 0843 */
-42, /* 0844 */
-42, /* 0845 */
-42, /* 0847 */
-42, /* 0848 */
-42, /* 0849 */
-42, /* 0850 */
-42, /* 0851 */
-42, /* 0852 */
-42, /* 0853 */
-42, /* 0854 */
-42, /* 0855 */
-42, /* 0856 */
-42, /* 0858 */
-42, /* 0859 */
-42, /* 0860 */
-42, /* 0861 */
-42, /* 0862 */
-42, /* 0863 */
-42, /* 0864 */
-42, /* 0865 */
-42, /* 0866 */
-42, /* 0867 */
-42, /* 0869 */
-42, /* 0870 */
-42, /* 0871 */
-42, /* 0872 */
-42, /* 0873 */
-42, /* 0874 */
-42, /* 0875 */
-42, /* 0876 */
-42, /* 0877 */
-42, /* 0878 */
-42, /* 0880 */
-42, /* 0881 */
-42, /* 0882 */
-42, /* 0883 */
-42, /* 0884 */
-42, /* 0885 */
-42, /* 0886 */
-42, /* 0887 */
-42, /* 0888 */
-42, /* 0889 */
-41, /* 0891 */
-41, /* 0892 */
-41, /* 0893 */
-41, /* 0894 */
-41, /* 0895 */
-41, /* 0896 */
-41, /* 0897 */
-41, /* 0898 */
-41, /* 0899 */
-41, /* 0900 */
-41, /* 0902 */
-41, /* 0903 */
-41, /* 0904 */
-41, /* 0905 */
-41, /* 0906 */
-41, /* 0907 */
-41, /* 0908 */
-41, /* 0909 */
-41, /* 0910 */
-41, /* 0911 */
-41, /* 0913 */
-41, /* 0914 */
-41, /* 0915 */
-41, /* 0916 */
-41, /* 0917 */
-41, /* 0918 */
-41, /* 0919 */
-41, /* 0920 */
-41, /* 0921 */
-41, /* 0922 */
-41, /* 0924 */
-41, /* 0925 */
-41, /* 0926 */
-41, /* 0927 */
-41, /* 0928 */
-41, /* 0929 */
-41, /* 0930 */
-41, /* 0931 */
-41, /* 0932 */
-41, /* 0933 */
-41, /* 0935 */
-41, /* 0936 */
-41, /* 0937 */
-41, /* 0938 */
-41, /* 0939 */
-41, /* 0940 */
-41, /* 0941 */
-41, /* 0942 */
-41, /* 0943 */
-41, /* 0944 */
-22, /* 0946 */
7, /* 0947 */
-7, /* 0948 */
-28, /* 0949 */
-36, /* 0950 */
-38, /* 0951 */
-40, /* 0952 */
-40, /* 0953 */
-40, /* 0954 */
-41, /* 0955 */
-41, /* 0957 */
-41, /* 0958 */
-41, /* 0959 */
-40, /* 0960 */
-40, /* 0961 */
-40, /* 0962 */
-40, /* 0963 */
-40, /* 0964 */
-40, /* 0965 */
-40, /* 0966 */
-40, /* 0968 */
-40, /* 0969 */
-40, /* 0970 */
-40, /* 0971 */
-40, /* 0972 */
-40, /* 0973 */
-40, /* 0974 */
-40, /* 0975 */
-40, /* 0976 */
-40, /* 0977 */
-40, /* 0979 */
-40, /* 0980 */
-40, /* 0981 */
-40, /* 0982 */
-40, /* 0983 */
-40, /* 0984 */
-40, /* 0985 */
-40, /* 0986 */
-40, /* 0987 */
-40, /* 0988 */
-40, /* 0990 */
-40, /* 0991 */
-40, /* 0992 */
-40, /* 0993 */
-40, /* 0994 */
-40, /* 0995 */
-40, /* 0996 */
-40, /* 0997 */
-40, /* 0998 */
-40, /* 0999 */
-40, /* 1001 */
-40, /* 1002 */
-40, /* 1003 */
-40, /* 1004 */
-40, /* 1005 */
-40, /* 1006 */
-40, /* 1007 */
-40, /* 1008 */
-40, /* 1009 */
-40, /* 1010 */
-40, /* 1012 */
-40, /* 1013 */
-40, /* 1014 */
-40, /* 1015 */
-40, /* 1016 */
-40, /* 1017 */
-40, /* 1018 */
-40, /* 1019 */
-40, /* 1020 */
-40, /* 1021 */
-40, /* 1023 */
-40, /* 1024 */
-40, /* 1025 */
-40, /* 1026 */
-40, /* 1027 */
-40, /* 1028 */
-39, /* 1029 */
-39, /* 1030 */
-39, /* 1031 */
-39, /* 1032 */
-39, /* 1034 */
-39, /* 1035 */
-39, /* 1036 */
-39, /* 1037 */
-39, /* 1038 */
-39, /* 1039 */
-39, /* 1040 */
-39, /* 1041 */
-39, /* 1042 */
-39, /* 1043 */
-39, /* 1045 */
-39, /* 1046 */
-39, /* 1047 */
-39, /* 1048 */
-39, /* 1049 */
-39, /* 1050 */
-39, /* 1051 */
-39, /* 1052 */
-39, /* 1053 */
-39, /* 1054 */
-39, /* 1056 */
-39, /* 1057 */
-39, /* 1058 */
-39, /* 1059 */
-39, /* 1060 */
-39, /* 1061 */
-39, /* 1062 */
-39, /* 1063 */
-39, /* 1064 */
-39, /* 1065 */
-39, /* 1067 */
-39, /* 1068 */
-39, /* 1069 */
-39, /* 1070 */
-39, /* 1071 */
-39, /* 1072 */
-39, /* 1073 */
-39, /* 1074 */
-39, /* 1075 */
-39, /* 1076 */
-39, /* 1078 */
-39, /* 1079 */
-39, /* 1080 */
-39, /* 1081 */
-39, /* 1082 */
-39, /* 1083 */
-39, /* 1084 */
-39, /* 1085 */
-39, /* 1086 */
-39, /* 1087 */
-39, /* 1089 */
-39, /* 1090 */
-39, /* 1091 */
-39, /* 1092 */
-39, /* 1093 */
-39, /* 1094 */
-39, /* 1095 */
-39, /* 1096 */
-39, /* 1097 */
-39, /* 1098 */
-38, /* 1100 */
-38, /* 1101 */
-38, /* 1102 */
-38, /* 1103 */
-38, /* 1104 */
-38, /* 1105 */
-38, /* 1106 */
-38, /* 1107 */
-38, /* 1108 */
-38, /* 1109 */
-38, /* 1111 */
-38, /* 1112 */
-38, /* 1113 */
-38, /* 1114 */
-38, /* 1115 */
-38, /* 1116 */
-38, /* 1117 */
-38, /* 1118 */
-38, /* 1119 */
-38, /* 1120 */
-38, /* 1122 */
-38, /* 1123 */
-38, /* 1124 */
-38, /* 1125 */
-38, /* 1126 */
-38, /* 1127 */
-38, /* 1128 */
-38, /* 1129 */
-38, /* 1130 */
-38, /* 1131 */
-38, /* 1133 */
-38, /* 1134 */
-38, /* 1135 */
-38, /* 1136 */
-38, /* 1137 */
-38, /* 1138 */
-38, /* 1139 */
-38, /* 1140 */
-38, /* 1141 */
-35, /* 1142 */
-35, /* 1144 */
-35, /* 1145 */
-35, /* 1146 */
-21, /* 1147 */
12, /* 1148 */
22, /* 1149 */
-9, /* 1150 */
-25, /* 1151 */
-30, /* 1152 */
-33, /* 1153 */
-35, /* 1155 */
-35, /* 1156 */
-35, /* 1157 */
-35, /* 1158 */
-35, /* 1159 */
-35, /* 1160 */
-35, /* 1161 */
-35, /* 1162 */
-35, /* 1163 */
-35, /* 1164 */
-35, /* 1166 */
-35, /* 1167 */
-35, /* 1168 */
-35, /* 1169 */
-35, /* 1170 */
-35, /* 1171 */
-35, /* 1172 */
-35, /* 1173 */
-35, /* 1174 */
-35, /* 1175 */
-35, /* 1177 */
-35, /* 1178 */
-35, /* 1179 */
-35, /* 1180 */
-35, /* 1181 */
-35, /* 1182 */
-35, /* 1183 */
-35, /* 1184 */
-35, /* 1185 */
-35, /* 1186 */
-35, /* 1188 */
-35, /* 1189 */
-35, /* 1190 */
-35, /* 1191 */
-35, /* 1192 */
-35, /* 1193 */
-35, /* 1194 */
-35, /* 1195 */
-35, /* 1196 */
-35, /* 1197 */
-35, /* 1199 */
-35, /* 1200 */
-35, /* 1201 */
-35, /* 1202 */
-35, /* 1203 */
-35, /* 1204 */
-35, /* 1205 */
-35, /* 1206 */
-35, /* 1207 */
-35, /* 1208 */
-34, /* 1210 */
-34, /* 1211 */
-34, /* 1212 */
-34, /* 1213 */
-34, /* 1214 */
-34, /* 1215 */
-34, /* 1216 */
-34, /* 1217 */
-34, /* 1218 */
-34, /* 1219 */
-34, /* 1221 */
-34, /* 1222 */
-34, /* 1223 */
-34, /* 1224 */
-34, /* 1225 */
-34, /* 1226 */
-34, /* 1227 */
-34, /* 1228 */
-34, /* 1229 */
-34, /* 1230 */
-34, /* 1232 */
-34, /* 1233 */
-34, /* 1234 */
-34, /* 1235 */
-34, /* 1236 */
-34, /* 1237 */
-34, /* 1238 */
-34, /* 1239 */
-34, /* 1240 */
-34, /* 1241 */
-34, /* 1243 */
-34, /* 1244 */
-34, /* 1245 */
-34, /* 1246 */
-34, /* 1247 */
-34, /* 1248 */
-34, /* 1249 */
-34, /* 1250 */
-34, /* 1251 */
-34, /* 1252 */
-34, /* 1254 */
-34, /* 1255 */
-34, /* 1256 */
-34, /* 1257 */
-34, /* 1258 */
-34, /* 1259 */
-34, /* 1260 */
-34, /* 1261 */
-34, /* 1262 */
-34, /* 1263 */
-34, /* 1265 */
-34, /* 1266 */
-34, /* 1267 */
-34, /* 1268 */
-34, /* 1269 */
-34, /* 1270 */
-34, /* 1271 */
-34, /* 1272 */
-34, /* 1273 */
-34, /* 1274 */
-34, /* 1276 */
-34, /* 1277 */
-34, /* 1278 */
-34, /* 1279 */
-34, /* 1280 */
-34, /* 1281 */
-34, /* 1282 */
-34, /* 1283 */
-34, /* 1284 */
-34, /* 1285 */
-33, /* 1287 */
-33, /* 1288 */
-33, /* 1289 */
-33, /* 1290 */
-33, /* 1291 */
-33, /* 1292 */
-33, /* 1293 */
-33, /* 1294 */
-33, /* 1295 */
-33, /* 1296 */
-33, /* 1298 */
-33, /* 1299 */
-33, /* 1300 */
-33, /* 1301 */
-33, /* 1302 */
-33, /* 1303 */
-33, /* 1304 */
-33, /* 1305 */
-33, /* 1306 */
-33, /* 1307 */
-33, /* 1309 */
-33, /* 1310 */
-33, /* 1311 */
-33, /* 1312 */
-33, /* 1313 */
-33, /* 1314 */
-33, /* 1315 */
-33, /* 1316 */
-33, /* 1317 */
-33, /* 1318 */
-33, /* 1320 */
-33, /* 1321 */
-33, /* 1322 */
-33, /* 1323 */
-33, /* 1324 */
-33, /* 1325 */
-33, /* 1326 */
-33, /* 1327 */
-33, /* 1328 */
-33, /* 1329 */
-33, /* 1331 */
-33, /* 1332 */
-33, /* 1333 */
-33, /* 1334 */
-33, /* 1335 */
-33, /* 1336 */
-33, /* 1337 */
-33, /* 1338 */
-33, /* 1339 */
-33, /* 1340 */
-33, /* 1342 */
-33, /* 1343 */
-33, /* 1344 */
-33, /* 1345 */
-33, /* 1346 */
-33, /* 1347 */
-33, /* 1348 */
-33, /* 1349 */
-33, /* 1350 */
-33, /* 1351 */
-33, /* 1353 */
-33, /* 1354 */
-33, /* 1355 */
-33, /* 1356 */
-33, /* 1357 */
-33, /* 1358 */
-33, /* 1359 */
-33, /* 1360 */
-33, /* 1361 */
-33, /* 1362 */
-33, /* 1364 */
-33, /* 1365 */
-32, /* 1366 */
-32, /* 1367 */
-32, /* 1368 */
-32, /* 1369 */
-32, /* 1370 */
-32, /* 1371 */
-32, /* 1372 */
-32, /* 1373 */
-32, /* 1375 */
-32, /* 1376 */
-32, /* 1377 */
-32, /* 1378 */
-32, /* 1379 */
-32, /* 1380 */
-32, /* 1381 */
-32, /* 1382 */
-32, /* 1383 */
-32, /* 1384 */
-32, /* 1386 */
-32, /* 1387 */
-32, /* 1388 */
-32, /* 1389 */
-32, /* 1390 */
-32, /* 1391 */
-32, /* 1392 */
-32, /* 1393 */
-32, /* 1394 */
-32, /* 1395 */
-32, /* 1397 */
-32, /* 1398 */
-32, /* 1399 */
-32, /* 1400 */
-32, /* 1401 */
-32, /* 1402 */
-32, /* 1403 */
-32, /* 1404 */
-32, /* 1405 */
-32, /* 1406 */
-32, /* 1408 */
-32, /* 1409 */
-32, /* 1410 */
-32, /* 1411 */
-32, /* 1412 */
-32, /* 1413 */
-32, /* 1414 */
-32, /* 1415 */
-32, /* 1416 */
-32, /* 1417 */
-32, /* 1419 */
-32, /* 1420 */
-32, /* 1421 */
-32, /* 1422 */
-32, /* 1423 */
-32, /* 1424 */
-21, /* 1425 */
6, /* 1426 */
16, /* 1427 */
24, /* 1428 */
-19, /* 1430 */
-24, /* 1431 */
-28, /* 1432 */
-30, /* 1433 */
-31, /* 1434 */
-31, /* 1435 */
-31, /* 1436 */
-32, /* 1437 */
-32, /* 1438 */
-32, /* 1439 */
-32, /* 1441 */
-32, /* 1442 */
-32, /* 1443 */
-32, /* 1444 */
-32, /* 1445 */
-31, /* 1446 */
-31, /* 1447 */
-31, /* 1448 */
-31, /* 1449 */
-31, /* 1450 */
-31, /* 1452 */
-31, /* 1453 */
-31, /* 1454 */
-31, /* 1455 */
-31, /* 1456 */
-31, /* 1457 */
-31, /* 1458 */
-31, /* 1459 */
-31, /* 1460 */
-31, /* 1461 */
-31, /* 1463 */
-31, /* 1464 */
-31, /* 1465 */
-31, /* 1466 */
-31, /* 1467 */
-31, /* 1468 */
-31, /* 1469 */
-31, /* 1470 */
-31, /* 1471 */
-31, /* 1472 */
-31, /* 1474 */
-31, /* 1475 */
-31, /* 1476 */
-31, /* 1477 */
-31, /* 1478 */
-31, /* 1479 */
-31, /* 1480 */
-31, /* 1481 */
-31, /* 1482 */
-31, /* 1483 */
-31, /* 1485 */
-31, /* 1486 */
-31, /* 1487 */
-31, /* 1488 */
-31, /* 1489 */
-31, /* 1490 */
-31, /* 1491 */
-31, /* 1492 */
-31, /* 1493 */
-31, /* 1494 */
-31, /* 1496 */
-31, /* 1497 */
-31, /* 1498 */
-31, /* 1499 */
-31, /* 1500 */
-31, /* 1501 */
-31, /* 1502 */
-31, /* 1503 */
-31, /* 1504 */
-31, /* 1505 */
-31, /* 1507 */
-31, /* 1508 */
-31, /* 1509 */
-31, /* 1510 */
-31, /* 1511 */
-31, /* 1512 */
-31, /* 1513 */
-31, /* 1514 */
-31, /* 1515 */
-31, /* 1516 */
-31, /* 1518 */
-31, /* 1519 */
-31, /* 1520 */
-31, /* 1521 */
-28, /* 1522 */
-28, /* 1523 */
-28, /* 1524 */
-28, /* 1525 */
-28, /* 1526 */
-28, /* 1527 */
-28, /* 1529 */
-28, /* 1530 */
-28, /* 1531 */
-28, /* 1532 */
-28, /* 1533 */
-28, /* 1534 */
-28, /* 1535 */
-28, /* 1536 */
-28, /* 1537 */
-28, /* 1538 */
-28, /* 1540 */
-28, /* 1541 */
-28, /* 1542 */
-28, /* 1543 */
-28, /* 1544 */
-28, /* 1545 */
-28, /* 1546 */
-28, /* 1547 */
-28, /* 1548 */
-28, /* 1549 */
-28, /* 1551 */
-28, /* 1552 */
-28, /* 1553 */
-28, /* 1554 */
-28, /* 1555 */
-28, /* 1556 */
-28, /* 1557 */
-28, /* 1558 */
-28, /* 1559 */
-28, /* 1560 */
-28, /* 1562 */
-28, /* 1563 */
-28, /* 1564 */
-28, /* 1565 */
-28, /* 1566 */
-28, /* 1567 */
-28, /* 1568 */
-28, /* 1569 */
-28, /* 1570 */
-28, /* 1571 */
-28, /* 1573 */
-28, /* 1574 */
-28, /* 1575 */
-28, /* 1576 */
-28, /* 1577 */
-28, /* 1578 */
-28, /* 1579 */
-28, /* 1580 */
-28, /* 1581 */
-28, /* 1582 */
-28, /* 1584 */
-28, /* 1585 */
-28, /* 1586 */
-28, /* 1587 */
-28, /* 1588 */
-28, /* 1589 */
-28, /* 1590 */
-28, /* 1591 */
-28, /* 1592 */
-28, /* 1593 */
-28, /* 1595 */
-28, /* 1596 */
-28, /* 1597 */
-28, /* 1598 */
-28, /* 1599 */
-27, /* 1600 */
-27, /* 1601 */
-27, /* 1602 */
-27, /* 1603 */
-27, /* 1604 */
-27, /* 1606 */
-27, /* 1607 */
-27, /* 1608 */
-27, /* 1609 */
-27, /* 1610 */
-27, /* 1611 */
-27, /* 1612 */
-27, /* 1613 */
-27, /* 1614 */
-27, /* 1615 */
-27, /* 1617 */
-27, /* 1618 */
-27, /* 1619 */
-27, /* 1620 */
-27, /* 1621 */
-27, /* 1622 */
-27, /* 1623 */
-27, /* 1624 */
-27, /* 1625 */
-27, /* 1626 */
-27, /* 1628 */
-27, /* 1629 */
-27, /* 1630 */
-27, /* 1631 */
-27, /* 1632 */
-27, /* 1633 */
-27, /* 1634 */
-27, /* 1635 */
-27, /* 1636 */
-27, /* 1637 */
-27, /* 1639 */
-27, /* 1640 */
-27, /* 1641 */
-27, /* 1642 */
-27, /* 1643 */
-27, /* 1644 */
-27, /* 1645 */
-27, /* 1646 */
-27, /* 1647 */
-27, /* 1648 */
-27, /* 1650 */
-27, /* 1651 */
-27, /* 1652 */
-27, /* 1653 */
-27, /* 1654 */
-27, /* 1655 */
-27, /* 1656 */
-27, /* 1657 */
-27, /* 1658 */
-27, /* 1659 */
-27, /* 1661 */
-27, /* 1662 */
-27, /* 1663 */
-27, /* 1664 */
-27, /* 1665 */
-27, /* 1666 */
-27, /* 1667 */
-27, /* 1668 */
-27, /* 1669 */
-27, /* 1670 */
-27, /* 1672 */
-27, /* 1673 */
-27, /* 1674 */
-27, /* 1675 */
-27, /* 1676 */
-27, /* 1677 */
-27, /* 1678 */
-27, /* 1679 */
-27, /* 1680 */
-27, /* 1681 */
-27, /* 1683 */
-27, /* 1684 */
-27, /* 1685 */
-27, /* 1686 */
-27, /* 1687 */
-27, /* 1688 */
-27, /* 1689 */
-27, /* 1690 */
-26, /* 1691 */
-26, /* 1692 */
-26, /* 1694 */
-26, /* 1695 */
-26, /* 1696 */
-26, /* 1697 */
-26, /* 1698 */
-26, /* 1699 */
-26, /* 1700 */
-26, /* 1701 */
-26, /* 1702 */
-26, /* 1703 */
-26, /* 1705 */
-26, /* 1706 */
-26, /* 1707 */
-26, /* 1708 */
-26, /* 1709 */
-26, /* 1710 */
-26, /* 1711 */
-26, /* 1712 */
-26, /* 1713 */
-26, /* 1714 */
-26, /* 1716 */
-26, /* 1717 */
-26, /* 1718 */
-26, /* 1719 */
-26, /* 1720 */
-26, /* 1721 */
-26, /* 1722 */
-26, /* 1723 */
-26, /* 1724 */
-26, /* 1725 */
-26, /* 1727 */
-26, /* 1728 */
-26, /* 1729 */
-26, /* 1730 */
-26, /* 1731 */
-26, /* 1732 */
-26, /* 1733 */
-26, /* 1734 */
-26, /* 1735 */
-26, /* 1736 */
-26, /* 1738 */
-26, /* 1739 */
-26, /* 1740 */
-26, /* 1741 */
-26, /* 1742 */
-26, /* 1743 */
-26, /* 1744 */
-26, /* 1745 */
-26, /* 1746 */
-26, /* 1747 */
-26, /* 1749 */
-26, /* 1750 */
-26, /* 1751 */
-26, /* 1752 */
-26, /* 1753 */
-26, /* 1754 */
-26, /* 1755 */
-26, /* 1756 */
-26, /* 1757 */
-26, /* 1758 */
-26, /* 1760 */
-26, /* 1761 */
-26, /* 1762 */
-26, /* 1763 */
-26, /* 1764 */
-26, /* 1765 */
-26, /* 1766 */
-26, /* 1767 */
-26, /* 1768 */
-26, /* 1769 */
-26, /* 1771 */
-26, /* 1772 */
-26, /* 1773 */
-26, /* 1774 */
-26, /* 1775 */
-26, /* 1776 */
-26, /* 1777 */
-26, /* 1778 */
-26, /* 1779 */
-26, /* 1780 */
1, /* 1782 */
13, /* 1783 */
17, /* 1784 */
6, /* 1785 */
-9, /* 1786 */
-15, /* 1787 */
-20, /* 1788 */
-23, /* 1789 */
-24, /* 1790 */
-25, /* 1791 */
-25, /* 1793 */
-25, /* 1794 */
-25, /* 1795 */
-25, /* 1796 */
-25, /* 1797 */
-25, /* 1798 */
-25, /* 1799 */
-25, /* 1800 */
-25, /* 1801 */
-25, /* 1802 */
-25, /* 1804 */
-25, /* 1805 */
-25, /* 1806 */
-25, /* 1807 */
-25, /* 1808 */
-25, /* 1809 */
-25, /* 1810 */
-25, /* 1811 */
-25, /* 1812 */
-25, /* 1813 */
-25, /* 1815 */
-25, /* 1816 */
-25, /* 1817 */
-25, /* 1818 */
-25, /* 1819 */
-25, /* 1820 */
-25, /* 1821 */
-25, /* 1822 */
-25, /* 1823 */
-25, /* 1824 */
-25, /* 1826 */
-25, /* 1827 */
-25, /* 1828 */
-25, /* 1829 */
-25, /* 1830 */
-25, /* 1831 */
-25, /* 1832 */
-25, /* 1833 */
-25, /* 1834 */
-25, /* 1835 */
-25, /* 1837 */
-25, /* 1838 */
-25, /* 1839 */
-25, /* 1840 */
-25, /* 1841 */
-25, /* 1842 */
-25, /* 1843 */
-25, /* 1844 */
-25, /* 1845 */
-25, /* 1846 */
-25, /* 1848 */
-25, /* 1849 */
-25, /* 1850 */
-25, /* 1851 */
-25, /* 1852 */
-25, /* 1853 */
-25, /* 1854 */
-25, /* 1855 */
-25, /* 1856 */
-25, /* 1857 */
-25, /* 1859 */
-25, /* 1860 */
-25, /* 1861 */
-25, /* 1862 */
-25, /* 1863 */
-25, /* 1864 */
-25, /* 1865 */
-25, /* 1866 */
-25, /* 1867 */
-25, /* 1868 */
-25, /* 1870 */
-25, /* 1871 */
-25, /* 1872 */
-25, /* 1873 */
-25, /* 1874 */
-25, /* 1875 */
-25, /* 1876 */
-24, /* 1877 */
-24, /* 1878 */
-24, /* 1879 */
-24, /* 1881 */
-24, /* 1882 */
-24, /* 1883 */
-24, /* 1884 */
-24, /* 1885 */
-24, /* 1886 */
-24, /* 1887 */
-24, /* 1888 */
-24, /* 1889 */
-24, /* 1890 */
-24, /* 1892 */
-24, /* 1893 */
-24, /* 1894 */
-24, /* 1895 */
-24, /* 1896 */
-24, /* 1897 */
-24, /* 1898 */
-24, /* 1899 */
-24, /* 1900 */
-24, /* 1901 */
-22, /* 1903 */
-22, /* 1904 */
-22, /* 1905 */
-22, /* 1906 */
-22, /* 1907 */
-22, /* 1908 */
-22, /* 1909 */
-22, /* 1910 */
-22, /* 1911 */
-22, /* 1912 */
-22, /* 1914 */
-22, /* 1915 */
-22, /* 1916 */
-22, /* 1917 */
-22, /* 1918 */
-22, /* 1919 */
-22, /* 1920 */
-22, /* 1921 */
-22, /* 1922 */
-22, /* 1923 */
-22, /* 1925 */
-22, /* 1926 */
-22, /* 1927 */
-22, /* 1928 */
-22, /* 1929 */
-22, /* 1930 */
-22, /* 1931 */
-22, /* 1932 */
-22, /* 1933 */
-22, /* 1934 */
-22, /* 1936 */
-22, /* 1937 */
-22, /* 1938 */
-22, /* 1939 */
-22, /* 1940 */
-22, /* 1941 */
-22, /* 1942 */
-22, /* 1943 */
-22, /* 1944 */
-22, /* 1945 */
-22, /* 1947 */
-22, /* 1948 */
-22, /* 1949 */
-22, /* 1950 */
-22, /* 1951 */
-22, /* 1952 */
-22, /* 1953 */
-22, /* 1954 */
-22, /* 1955 */
-22, /* 1956 */
-22, /* 1958 */
-22, /* 1959 */
-22, /* 1960 */
-22, /* 1961 */
-22, /* 1962 */
-22, /* 1963 */
-22, /* 1964 */
-22, /* 1965 */
-22, /* 1966 */
-22, /* 1967 */
-22, /* 1969 */
-22, /* 1970 */
-22, /* 1971 */
-22, /* 1972 */
-22, /* 1973 */
-22, /* 1974 */
-22, /* 1975 */
-22, /* 1976 */
-22, /* 1977 */
-22, /* 1978 */
-22, /* 1980 */
-22, /* 1981 */
-22, /* 1982 */
-22, /* 1983 */
-22, /* 1984 */
-22, /* 1985 */
-22, /* 1986 */
-22, /* 1987 */
-22, /* 1988 */
-22, /* 1989 */
-21, /* 1991 */
-21, /* 1992 */
-21, /* 1993 */
-21, /* 1994 */
-21, /* 1995 */
-21, /* 1996 */
-21, /* 1997 */
-21, /* 1998 */
-21, /* 1999 */
-21, /* 2000 */
-21, /* 2002 */
-21, /* 2003 */
-21, /* 2004 */
-21, /* 2005 */
-21, /* 2006 */
-21, /* 2007 */
-21, /* 2008 */
-21, /* 2009 */
-21, /* 2010 */
-21, /* 2011 */
-21, /* 2013 */
-21, /* 2014 */
-21, /* 2015 */
-21, /* 2016 */
-21, /* 2017 */
-21, /* 2018 */
-21, /* 2019 */
-21, /* 2020 */
-21, /* 2021 */
-21, /* 2022 */
-21, /* 2024 */
-21, /* 2025 */
-21, /* 2026 */
-21, /* 2027 */
-21, /* 2028 */
-21, /* 2029 */
-21, /* 2030 */
-21, /* 2031 */
-21, /* 2032 */
-21, /* 2033 */
-21, /* 2035 */
-21, /* 2036 */
-21, /* 2037 */
-21, /* 2038 */
-21, /* 2039 */
-21, /* 2040 */
-21, /* 2041 */
-21, /* 2042 */
-21, /* 2043 */
-21, /* 2044 */
-21, /* 2046 */
-21, /* 2047 */
-21};

#endif /* mywav_H_ */
