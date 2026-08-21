
/* void cocos2d::volumeMulti<3, 8, float, float, float, int, short>(float*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<3,8,float,float,float,int,short>
               (float *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      *param_1 = *param_1 + *param_3 * *param_5;
                    /* catch() { ... } // from try @ 00a826bc with catch @ 00a82870 */
                    /* catch() { ... } // from try @ 00a826b0 with catch @ 00a82874 */
      param_1[1] = param_1[1] + param_3[1] * *param_5;
                    /* catch() { ... } // from try @ 00a82690 with catch @ 00a82878 */
                    /* catch() { ... } // from try @ 00a826c8 with catch @ 00a82888 */
      param_1[2] = param_1[2] + param_3[2] * *param_5;
      param_1[3] = param_1[3] + param_3[3] * *param_5;
      param_1[4] = param_1[4] + param_3[4] * *param_5;
      param_1[5] = param_1[5] + param_3[5] * *param_5;
                    /* try { // try from 00a828e0 to 00b82937 has its CatchHandler @ 00a828e0
                       catch() { ... } // from try @ 00a828e0 with catch @ 00a828e0
                       catch() { ... } // from try @ 00a82c28 with catch @ 00a828e0 */
      param_1[6] = param_1[6] + param_3[6] * *param_5;
      pfVar1 = param_3 + 7;
      param_3 = param_3 + 8;
      param_1[7] = param_1[7] + *pfVar1 * *param_5;
      param_1 = param_1 + 8;
    } while (param_2 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00a822a0 with catch @ 00a82564 */
                    /* catch() { ... } // from try @ 00a8228c with catch @ 00a8256c */
                    /* catch() { ... } // from try @ 00a82264 with catch @ 00a82570 */
                    /* catch() { ... } // from try @ 00a82248 with catch @ 00a82578 */
    do {
                    /* catch() { ... } // from try @ 00a8226c with catch @ 00a8257c */
      fVar11 = *param_3;
      if (fVar11 <= -16.0) {
        iVar3 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar3 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a8223c with catch @ 00a82594
                       catch() { ... } // from try @ 00a824c8 with catch @ 00a82594 */
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar3 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      *param_1 = fVar11 * *param_5 + *param_1;
                    /* catch() { ... } // from try @ 00a821f0 with catch @ 00a825cc */
      fVar11 = param_3[1];
                    /* catch() { ... } // from try @ 00a821e4 with catch @ 00a825d0 */
                    /* catch() { ... } // from try @ 00a821c4 with catch @ 00a825d4 */
      if (fVar11 <= -16.0) {
        iVar4 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar4 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a821fc with catch @ 00a825e4
                       catch() { ... } // from try @ 00a82334 with catch @ 00a825e4 */
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar4 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      param_1[1] = fVar11 * *param_5 + param_1[1];
      fVar11 = param_3[2];
      if (fVar11 <= -16.0) {
        iVar5 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar5 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8263c to 00b8268f has its CatchHandler @ 00a8263c
                       catch() { ... } // from try @ 00a8263c with catch @ 00a8263c
                       catch() { ... } // from try @ 00a827fc with catch @ 00a8263c */
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar5 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      param_1[2] = fVar11 * *param_5 + param_1[2];
      fVar11 = param_3[3];
      if (fVar11 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
                    /* try { // try from 00a826b0 to 00b826bb has its CatchHandler @ 00a82874 */
        iVar6 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a82690 to 00b826a7 has its CatchHandler @ 00a82878 */
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar6 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
                    /* try { // try from 00a826bc to 00b826c7 has its CatchHandler @ 00a82870 */
      param_1[3] = fVar11 * *param_5 + param_1[3];
                    /* try { // try from 00a826c8 to 00b827fb has its CatchHandler @ 00a82888 */
      fVar11 = param_3[4];
      if (fVar11 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar7 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar7 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      param_1[4] = fVar11 * *param_5 + param_1[4];
      fVar11 = param_3[5];
      if (fVar11 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar8 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      param_1[5] = fVar11 * *param_5 + param_1[5];
      fVar11 = param_3[6];
      if (fVar11 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar11) {
        iVar9 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar9 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      param_1[6] = fVar11 * *param_5 + param_1[6];
      fVar11 = param_3[7];
      if (fVar11 <= -16.0) {
        iVar10 = -0x80000000;
                    /* try { // try from 00a827fc to 00b828df has its CatchHandler @ 00a8263c */
      }
      else if (16.0 <= fVar11) {
        iVar10 = 0x7fffffff;
      }
      else {
        fVar2 = 0.5;
        if (fVar11 * 1.3421773e+08 <= 0.0) {
          fVar2 = -0.5;
        }
        iVar10 = (int)(fVar2 + fVar11 * 1.3421773e+08);
      }
      iVar10 = iVar10 + iVar9 + iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3;
      param_1[7] = fVar11 * *param_5 + param_1[7];
      iVar3 = iVar10 + 7;
      if (-1 < iVar10) {
        iVar3 = iVar10;
      }
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar3 >> 0xf) * (int)param_6;
      param_1 = param_1 + 8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

