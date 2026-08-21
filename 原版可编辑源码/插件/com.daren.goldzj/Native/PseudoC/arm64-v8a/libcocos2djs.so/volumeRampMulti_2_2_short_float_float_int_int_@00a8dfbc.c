
/* void cocos2d::volumeRampMulti<2, 2, short, float, float, int, int>(short*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<2,2,short,float,float,int,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = *param_5;
  if (param_4 == (int *)0x0) {
    fVar6 = param_5[1];
                    /* try { // try from 00a8e120 to 00b8e127 has its CatchHandler @ 00a8e420 */
    do {
                    /* try { // try from 00a8e128 to 00b8e133 has its CatchHandler @ 00a8e428 */
      fVar8 = *param_3 * fVar5 + 384.0;
                    /* try { // try from 00a8e134 to 00b8e143 has its CatchHandler @ 00a8e41c */
      fVar7 = 4.59163e-41;
      if ((int)fVar8 < 0x43c08000) {
        fVar7 = fVar8;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar8) {
        sVar2 = SUB42(fVar7,0);
      }
                    /* try { // try from 00a8e148 to 00b8e153 has its CatchHandler @ 00a8e414 */
      *param_1 = sVar2;
      fVar5 = fVar5 + *param_6;
                    /* try { // try from 00a8e154 to 00b8e163 has its CatchHandler @ 00a8e3fc */
      *param_5 = fVar5;
      pfVar1 = param_3 + 1;
      param_3 = param_3 + 2;
      fVar8 = *pfVar1 * fVar6 + 384.0;
                    /* try { // try from 00a8e168 to 00b8e173 has its CatchHandler @ 00a8e3ec */
      fVar7 = 4.59163e-41;
      if ((int)fVar8 < 0x43c08000) {
        fVar7 = fVar8;
      }
                    /* try { // try from 00a8e178 to 00b8e17f has its CatchHandler @ 00a8e3dc */
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar8) {
        sVar2 = SUB42(fVar7,0);
      }
      param_1[1] = sVar2;
      param_2 = param_2 - 1;
      param_1 = param_1 + 2;
      fVar6 = fVar6 + param_6[1];
      param_5[1] = fVar6;
                    /* try { // try from 00a8e194 to 00b8e19f has its CatchHandler @ 00a8e3cc */
    } while (param_2 != 0);
  }
  else {
    do {
      fVar6 = *param_3;
      if (fVar6 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar6) {
        iVar3 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8e010 to 00b8e06f has its CatchHandler @ 00a8e010
                       catch() { ... } // from try @ 00a8e010 with catch @ 00a8e010
                       catch() { ... } // from try @ 00a8e1fc with catch @ 00a8e010
                       catch() { ... } // from try @ 00a8e240 with catch @ 00a8e010
                       catch() { ... } // from try @ 00a8e2cc with catch @ 00a8e010
                       catch() { ... } // from try @ 00a8e33c with catch @ 00a8e010 */
        fVar7 = 0.5;
        if (fVar6 * 1.3421773e+08 <= 0.0) {
          fVar7 = -0.5;
        }
        iVar3 = (int)(fVar7 + fVar6 * 1.3421773e+08);
      }
      fVar7 = fVar6 * fVar5 + 384.0;
      fVar6 = 4.59163e-41;
      if ((int)fVar7 < 0x43c08000) {
        fVar6 = fVar7;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar7) {
        sVar2 = SUB42(fVar6,0);
      }
      *param_1 = sVar2;
      fVar5 = fVar5 + *param_6;
      *param_5 = fVar5;
      fVar7 = param_3[1];
      fVar6 = param_5[1];
                    /* try { // try from 00a8e070 to 00b8e087 has its CatchHandler @ 00a8e488 */
      if (fVar7 <= -16.0) {
        iVar4 = -0x80000000;
                    /* try { // try from 00a8e09c to 00b8e0a7 has its CatchHandler @ 00a8e448 */
      }
      else if (16.0 <= fVar7) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar8 = 0.5;
        if (fVar7 * 1.3421773e+08 <= 0.0) {
          fVar8 = -0.5;
        }
                    /* try { // try from 00a8e090 to 00b8e09b has its CatchHandler @ 00a8e44c */
        iVar4 = (int)(fVar8 + fVar7 * 1.3421773e+08);
      }
                    /* try { // try from 00a8e0a8 to 00b8e0af has its CatchHandler @ 00a8e498 */
      fVar8 = fVar7 * fVar6 + 384.0;
      fVar7 = 4.59163e-41;
      if ((int)fVar8 < 0x43c08000) {
        fVar7 = fVar8;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar8) {
        sVar2 = SUB42(fVar7,0);
      }
      param_1[1] = sVar2;
      iVar4 = iVar4 + iVar3;
                    /* try { // try from 00a8e0d0 to 00b8e0d7 has its CatchHandler @ 00a8e444 */
      if (iVar4 < 0) {
        iVar4 = iVar4 + 1;
      }
      param_5[1] = fVar6 + param_6[1];
      param_3 = param_3 + 2;
                    /* try { // try from 00a8e0f4 to 00b8e0fb has its CatchHandler @ 00a8e450 */
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar4 >> 0xd);
      param_2 = param_2 - 1;
                    /* try { // try from 00a8e100 to 00b8e117 has its CatchHandler @ 00a8e440 */
      param_1 = param_1 + 2;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

