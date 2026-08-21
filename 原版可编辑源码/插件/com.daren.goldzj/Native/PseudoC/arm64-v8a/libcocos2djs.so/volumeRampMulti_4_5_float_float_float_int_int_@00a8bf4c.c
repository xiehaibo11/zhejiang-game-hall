
/* void cocos2d::volumeRampMulti<4, 5, float, float, float, int, int>(float*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,5,float,float,float,int,int>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
                    /* catch() { ... } // from try @ 00a8be54 with catch @ 00a8bf4c */
  fVar8 = *param_5;
                    /* catch() { ... } // from try @ 00a8be48 with catch @ 00a8bf50 */
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
                    /* try { // try from 00a8c148 to 00b8c22b has its CatchHandler @ 00a8bfbc */
      *param_1 = *param_3 * fVar8;
      param_1[1] = param_3[1] * *param_5;
      param_1[2] = param_3[2] * *param_5;
      param_1[3] = param_3[3] * *param_5;
      pfVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      param_1[4] = *pfVar1 * *param_5;
      param_1 = param_1 + 5;
      fVar8 = *param_6 + *param_5;
      *param_5 = fVar8;
    } while (param_2 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00a8be28 with catch @ 00a8bf54 */
                    /* catch() { ... } // from try @ 00a8be60 with catch @ 00a8bf64 */
    do {
      fVar9 = *param_3;
      if (fVar9 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar9) {
        iVar3 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar9 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar9 * 1.3421773e+08);
      }
      *param_1 = fVar9 * fVar8;
      fVar8 = param_3[1];
                    /* try { // try from 00a8bfbc to 00b8c00f has its CatchHandler @ 00a8bfbc
                       catch() { ... } // from try @ 00a8bfbc with catch @ 00a8bfbc
                       catch() { ... } // from try @ 00a8c148 with catch @ 00a8bfbc */
      if (fVar8 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar4 = 0x7fffffff;
      }
      else {
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
        iVar4 = (int)(fVar9 + fVar8 * 1.3421773e+08);
      }
      param_1[1] = fVar8 * *param_5;
      fVar8 = param_3[2];
                    /* try { // try from 00a8c010 to 00b8c027 has its CatchHandler @ 00a8c1c4 */
      if (fVar8 <= -16.0) {
        iVar5 = -0x80000000;
                    /* try { // try from 00a8c03c to 00b8c047 has its CatchHandler @ 00a8c1bc */
      }
      else if (16.0 <= fVar8) {
        iVar5 = 0x7fffffff;
      }
      else {
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
                    /* try { // try from 00a8c030 to 00b8c03b has its CatchHandler @ 00a8c1c0 */
        iVar5 = (int)(fVar9 + fVar8 * 1.3421773e+08);
      }
                    /* try { // try from 00a8c048 to 00b8c147 has its CatchHandler @ 00a8c1d4 */
      param_1[2] = fVar8 * *param_5;
      fVar8 = param_3[3];
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
      }
      param_1[3] = fVar8 * *param_5;
      fVar8 = param_3[4];
      if (fVar8 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar8) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar9 = 0.5;
        if (fVar8 * 1.3421773e+08 <= 0.0) {
          fVar9 = -0.5;
        }
        iVar7 = (int)(fVar9 + fVar8 * 1.3421773e+08);
      }
      param_1[4] = fVar8 * *param_5;
      fVar8 = *param_6 + *param_5;
      *param_5 = fVar8;
      *param_4 = *param_4 +
                 (*param_7 >> 0x10) * ((iVar7 + iVar6 + iVar5 + iVar4 + iVar3) / 5 >> 0xc);
      param_2 = param_2 - 1;
      param_3 = param_3 + 5;
      param_1 = param_1 + 5;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

