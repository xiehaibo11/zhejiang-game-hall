
/* void cocos2d::volumeRampMulti<4, 3, short, float, float, int, int>(short*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,3,short,float,float,int,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *param_5;
                    /* try { // try from 00a8e1a4 to 00b8e1ab has its CatchHandler @ 00a8e3bc */
  if (param_4 == (int *)0x0) {
    fVar3 = 4.59163e-41;
    do {
      fVar9 = *param_3 * fVar7 + 384.0;
      fVar8 = fVar3;
      if ((int)fVar9 < 0x43c08000) {
        fVar8 = fVar9;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar9) {
        sVar2 = SUB42(fVar8,0);
      }
      *param_1 = sVar2;
      fVar9 = param_3[1] * fVar7 + 384.0;
      fVar8 = fVar3;
      if ((int)fVar9 < 0x43c08000) {
        fVar8 = fVar9;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar9) {
        sVar2 = SUB42(fVar8,0);
      }
      param_1[1] = sVar2;
      pfVar1 = param_3 + 2;
      param_3 = param_3 + 3;
      fVar9 = *pfVar1 * fVar7 + 384.0;
                    /* catch() { ... } // from try @ 00a8e1a4 with catch @ 00a8e3bc */
      fVar8 = fVar3;
      if ((int)fVar9 < 0x43c08000) {
        fVar8 = fVar9;
      }
                    /* catch() { ... } // from try @ 00a8e194 with catch @ 00a8e3cc */
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar9) {
        sVar2 = SUB42(fVar8,0);
      }
      param_1[2] = sVar2;
      param_2 = param_2 - 1;
                    /* catch() { ... } // from try @ 00a8e178 with catch @ 00a8e3dc */
      param_1 = param_1 + 3;
      fVar7 = *param_6 + fVar7;
      *param_5 = fVar7;
    } while (param_2 != 0);
  }
  else {
    fVar3 = 4.59163e-41;
                    /* try { // try from 00a8e1e0 to 00b8e1fb has its CatchHandler @ 00a8e498 */
    do {
      fVar8 = *param_3;
      if (fVar8 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar4 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8e1fc to 00b8e233 has its CatchHandler @ 00a8e010 */
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
        iVar4 = (int)(fVar9 + fVar8 * 1.3421773e+08);
      }
      fVar9 = fVar8 * fVar7 + 384.0;
      fVar8 = fVar3;
      if ((int)fVar9 < 0x43c08000) {
        fVar8 = fVar9;
      }
                    /* try { // try from 00a8e234 to 00b8e23f has its CatchHandler @ 00a8e450 */
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar9) {
        sVar2 = SUB42(fVar8,0);
      }
      *param_1 = sVar2;
                    /* try { // try from 00a8e240 to 00b8e287 has its CatchHandler @ 00a8e010 */
      fVar8 = param_3[1];
      if (fVar8 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
        iVar5 = (int)(fVar9 + fVar8 * 1.3421773e+08);
      }
      fVar9 = fVar8 * fVar7 + 384.0;
                    /* try { // try from 00a8e288 to 00b8e2cb has its CatchHandler @ 00a8e450 */
      fVar8 = fVar3;
      if ((int)fVar9 < 0x43c08000) {
        fVar8 = fVar9;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar9) {
        sVar2 = SUB42(fVar8,0);
      }
      param_1[1] = sVar2;
      fVar8 = param_3[2];
      if (fVar8 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar6 = 0x7fffffff;
      }
      else {
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
        iVar6 = (int)(fVar9 + fVar8 * 1.3421773e+08);
                    /* try { // try from 00a8e2cc to 00b8e2ff has its CatchHandler @ 00a8e010 */
      }
      fVar9 = fVar8 * fVar7 + 384.0;
      fVar8 = fVar3;
      if ((int)fVar9 < 0x43c08000) {
        fVar8 = fVar9;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar9) {
        sVar2 = SUB42(fVar8,0);
      }
      param_1[2] = sVar2;
                    /* try { // try from 00a8e300 to 00b8e33b has its CatchHandler @ 00a8e498 */
      fVar7 = *param_6 + fVar7;
      *param_5 = fVar7;
      *param_4 = *param_4 + (*param_7 >> 0x10) * ((iVar6 + iVar5 + iVar4) / 3 >> 0xc);
      param_3 = param_3 + 3;
                    /* try { // try from 00a8e33c to 00b8e4ef has its CatchHandler @ 00a8e010 */
      param_2 = param_2 - 1;
      param_1 = param_1 + 3;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
                    /* catch() { ... } // from try @ 00a8e168 with catch @ 00a8e3ec */
  return;
}

