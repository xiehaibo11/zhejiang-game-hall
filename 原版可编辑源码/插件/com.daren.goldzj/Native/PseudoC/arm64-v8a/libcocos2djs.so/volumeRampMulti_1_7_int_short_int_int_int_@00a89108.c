
/* void cocos2d::volumeRampMulti<1, 7, int, short, int, int, int>(int*, unsigned long, short const*,
   int*, int*, int const*, int*, int) */

void cocos2d::volumeRampMulti<1,7,int,short,int,int,int>
               (int *param_1,ulong param_2,short *param_3,int *param_4,int *param_5,int *param_6,
               int *param_7,int param_8)

{
  short sVar1;
  int iVar2;
  
  if (param_4 == (int *)0x0) {
    do {
      sVar1 = *param_3;
      param_2 = param_2 - 1;
                    /* try { // try from 00a89234 to 00b892a3 has its CatchHandler @ 00a8910c */
      *param_1 = *param_1 + (*param_5 >> 0x10) * (int)sVar1;
      *param_5 = *param_5 + *param_6;
      param_1[1] = param_1[1] + (param_5[1] >> 0x10) * (int)sVar1;
                    /* catch() { ... } // from try @ 00a8916c with catch @ 00a8926c */
      param_5[1] = param_5[1] + param_6[1];
                    /* catch() { ... } // from try @ 00a89160 with catch @ 00a89270 */
      iVar2 = (int)sVar1;
                    /* catch() { ... } // from try @ 00a89190 with catch @ 00a89278 */
      param_1[2] = param_1[2] + (param_5[2] >> 0x10) * iVar2;
                    /* catch() { ... } // from try @ 00a89174 with catch @ 00a89288
                       catch() { ... } // from try @ 00a891b4 with catch @ 00a89288 */
      param_5[2] = param_5[2] + param_6[2];
      param_1[3] = param_1[3] + (param_5[3] >> 0x10) * iVar2;
                    /* try { // try from 00a892a4 to 00b892fb has its CatchHandler @ 00a892a4
                       catch() { ... } // from try @ 00a892a4 with catch @ 00a892a4
                       catch() { ... } // from try @ 00a89468 with catch @ 00a892a4 */
      param_5[3] = param_5[3] + param_6[3];
      param_1[4] = param_1[4] + (param_5[4] >> 0x10) * iVar2;
      param_5[4] = param_5[4] + param_6[4];
      param_1[5] = param_1[5] + (param_5[5] >> 0x10) * iVar2;
      param_5[5] = param_5[5] + param_6[5];
                    /* try { // try from 00a892fc to 00b89303 has its CatchHandler @ 00a894f8 */
      param_1[6] = param_1[6] + (param_5[6] >> 0x10) * (int)sVar1;
                    /* try { // try from 00a89308 to 00b8930f has its CatchHandler @ 00a894f0 */
      param_1 = param_1 + 7;
                    /* try { // try from 00a89310 to 00b8931f has its CatchHandler @ 00a894e8 */
      param_5[6] = param_5[6] + param_6[6];
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  else {
    do {
                    /* try { // try from 00a8910c to 00b8915f has its CatchHandler @ 00a8910c
                       catch() { ... } // from try @ 00a8910c with catch @ 00a8910c
                       catch() { ... } // from try @ 00a89234 with catch @ 00a8910c */
      sVar1 = *param_3;
      param_2 = param_2 - 1;
      *param_1 = *param_1 + (*param_5 >> 0x10) * (int)sVar1;
      *param_5 = *param_5 + *param_6;
      param_1[1] = param_1[1] + (param_5[1] >> 0x10) * (int)sVar1;
      param_5[1] = param_5[1] + param_6[1];
      iVar2 = (int)sVar1;
                    /* try { // try from 00a89160 to 00b8916b has its CatchHandler @ 00a89270 */
      param_1[2] = param_1[2] + (param_5[2] >> 0x10) * iVar2;
                    /* try { // try from 00a8916c to 00b89173 has its CatchHandler @ 00a8926c */
                    /* try { // try from 00a89174 to 00b8918b has its CatchHandler @ 00a89288 */
      param_5[2] = param_5[2] + param_6[2];
      param_1[3] = param_1[3] + (param_5[3] >> 0x10) * iVar2;
                    /* try { // try from 00a89190 to 00b891a7 has its CatchHandler @ 00a89278 */
      param_5[3] = param_5[3] + param_6[3];
      param_1[4] = param_1[4] + (param_5[4] >> 0x10) * iVar2;
                    /* try { // try from 00a891b4 to 00b89233 has its CatchHandler @ 00a89288 */
      param_5[4] = param_5[4] + param_6[4];
      param_1[5] = param_1[5] + (param_5[5] >> 0x10) * iVar2;
      param_5[5] = param_5[5] + param_6[5];
      param_1[6] = param_1[6] + (param_5[6] >> 0x10) * (int)sVar1;
      param_1 = param_1 + 7;
      param_5[6] = param_5[6] + param_6[6];
      *param_4 = *param_4 + (*param_7 >> 0x10) * (int)sVar1;
      *param_7 = *param_7 + param_8;
      param_3 = param_3 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

