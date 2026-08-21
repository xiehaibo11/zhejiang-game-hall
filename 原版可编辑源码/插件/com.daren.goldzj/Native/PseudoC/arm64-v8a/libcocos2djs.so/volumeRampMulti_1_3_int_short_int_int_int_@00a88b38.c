
/* void cocos2d::volumeRampMulti<1, 3, int, short, int, int, int>(int*, unsigned long, short const*,
   int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<1,3,int,short,int,int,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short sVar1;
  
  if (param_4 == (int *)0x0) {
    do {
      sVar1 = *param_3;
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (int)sVar1;
      *param_5 = *param_5 + *param_6;
                    /* catch() { ... } // from try @ 00a88a34 with catch @ 00a88c04 */
                    /* catch() { ... } // from try @ 00a889e0 with catch @ 00a88c08 */
      param_1[1] = param_1[1] + (param_5[1] >> 0x10) * (int)sVar1;
                    /* catch() { ... } // from try @ 00a889d8 with catch @ 00a88c10 */
                    /* catch() { ... } // from try @ 00a889cc with catch @ 00a88c18 */
      param_5[1] = param_5[1] + param_6[1];
                    /* catch() { ... } // from try @ 00a88a6c with catch @ 00a88c20
                       catch() { ... } // from try @ 00a88b6c with catch @ 00a88c20 */
      param_1[2] = param_1[2] + (param_5[2] >> 0x10) * (int)sVar1;
                    /* catch() { ... } // from try @ 00a889f8 with catch @ 00a88c38 */
      param_1 = param_1 + 3;
      param_5[2] = param_5[2] + param_6[2];
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
      sVar1 = *param_3;
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (int)sVar1;
      *param_5 = *param_5 + *param_6;
                    /* try { // try from 00a88b6c to 00b88baf has its CatchHandler @ 00a88c20 */
      param_1[1] = param_1[1] + (param_5[1] >> 0x10) * (int)sVar1;
      param_5[1] = param_5[1] + param_6[1];
      param_1[2] = param_1[2] + (param_5[2] >> 0x10) * (int)sVar1;
      param_1 = param_1 + 3;
      param_5[2] = param_5[2] + param_6[2];
                    /* try { // try from 00a88bb0 to 00b88ca7 has its CatchHandler @ 00a88974 */
      *param_4 = *param_4 + (*param_7 >> 0x10) * (int)sVar1;
      *param_7 = *param_7 + param_8;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
                    /* catch() { ... } // from try @ 00a88a44 with catch @ 00a88c48
                       catch() { ... } // from try @ 00a88ac4 with catch @ 00a88c48 */
  return;
}

