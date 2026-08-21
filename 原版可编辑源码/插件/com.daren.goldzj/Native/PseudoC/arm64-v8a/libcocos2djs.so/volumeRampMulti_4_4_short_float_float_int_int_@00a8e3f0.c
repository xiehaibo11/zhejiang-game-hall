
/* void cocos2d::volumeRampMulti<4, 4, short, float, float, int, int>(short*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,4,short,float,float,int,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  short sVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  undefined2 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  
  fVar10 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      param_2 = param_2 - 1;
      fVar5 = (float)*(undefined8 *)param_3 * fVar10 + 384.0;
      fVar13 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar10 + 384.0;
      uVar11 = (undefined2)((uint)fVar13 >> 0x10);
      fVar14 = (float)*(undefined8 *)(param_3 + 2) * fVar10 + 384.0;
      fVar12 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar10 + 384.0;
      auVar16._0_4_ = -(uint)(0x43c07fff < (int)fVar5);
      auVar16._4_4_ = -(uint)(0x43c07fff < (int)fVar13);
      auVar16._8_4_ = -(uint)(0x43c07fff < (int)fVar14);
      auVar16._12_4_ = -(uint)(0x43c07fff < (int)fVar12);
      auVar15._0_4_ = -(uint)((int)fVar5 < 0x43bf8000);
      auVar15._4_4_ = -(uint)((int)fVar13 < 0x43bf8000);
      auVar15._8_4_ = -(uint)((int)fVar14 < 0x43bf8000);
      auVar15._12_4_ = -(uint)((int)fVar12 < 0x43bf8000);
      auVar2._8_4_ = 0x7fff;
      auVar2._0_8_ = 0x7fff00007fff;
      auVar2._12_4_ = 0x7fff;
      auVar4._4_2_ = SUB42(fVar13,0);
      auVar4._0_4_ = fVar5;
      auVar4._6_2_ = uVar11;
      auVar4._8_4_ = fVar14;
      auVar4._12_4_ = fVar12;
      auVar17._4_2_ = SUB42(fVar13,0);
      auVar17._0_4_ = fVar5;
      auVar17._6_2_ = uVar11;
      auVar17._8_4_ = fVar14;
      auVar17._12_4_ = fVar12;
      auVar17 = auVar17 ^ (auVar4 ^ auVar2) & auVar16;
      auVar3._8_4_ = 0x8000;
      auVar3._0_8_ = 0x800000008000;
      auVar3._12_4_ = 0x8000;
      auVar17 = auVar17 ^ (auVar17 ^ auVar3) & auVar15;
      *(ulong *)param_1 =
           CONCAT26(auVar17._12_2_,CONCAT24(auVar17._8_2_,CONCAT22(auVar17._4_2_,auVar17._0_2_)));
      fVar10 = *param_6 + fVar10;
      *param_5 = fVar10;
      param_1 = param_1 + 4;
      param_3 = param_3 + 4;
    } while (param_2 != 0);
  }
  else {
                    /* catch() { ... } // from try @ 00a8e154 with catch @ 00a8e3fc */
                    /* catch() { ... } // from try @ 00a8e148 with catch @ 00a8e414 */
                    /* catch() { ... } // from try @ 00a8e134 with catch @ 00a8e41c */
                    /* catch() { ... } // from try @ 00a8e120 with catch @ 00a8e420 */
                    /* catch() { ... } // from try @ 00a8e128 with catch @ 00a8e428 */
    fVar5 = 4.59163e-41;
    do {
      fVar13 = *param_3;
      if (fVar13 <= -16.0) {
        iVar6 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a8e100 with catch @ 00a8e440 */
        if (16.0 <= fVar13) {
          iVar6 = 0x7fffffff;
        }
        else {
                    /* catch() { ... } // from try @ 00a8e0d0 with catch @ 00a8e444 */
                    /* catch() { ... } // from try @ 00a8e09c with catch @ 00a8e448 */
                    /* catch() { ... } // from try @ 00a8e090 with catch @ 00a8e44c */
                    /* catch() { ... } // from try @ 00a8e0f4 with catch @ 00a8e450
                       catch() { ... } // from try @ 00a8e234 with catch @ 00a8e450
                       catch() { ... } // from try @ 00a8e288 with catch @ 00a8e450 */
          fVar14 = 0.5;
          if (fVar13 * 1.3421773e+08 <= 0.0) {
            fVar14 = -0.5;
          }
          iVar6 = (int)(fVar14 + fVar13 * 1.3421773e+08);
        }
      }
      fVar14 = fVar13 * fVar10 + 384.0;
      fVar13 = fVar5;
      if ((int)fVar14 < 0x43c08000) {
        fVar13 = fVar14;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar14) {
        sVar1 = SUB42(fVar13,0);
      }
                    /* catch() { ... } // from try @ 00a8e070 with catch @ 00a8e488 */
      *param_1 = sVar1;
      fVar13 = param_3[1];
      if (fVar13 <= -16.0) {
        iVar7 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a8e0a8 with catch @ 00a8e498
                       catch() { ... } // from try @ 00a8e1e0 with catch @ 00a8e498
                       catch() { ... } // from try @ 00a8e300 with catch @ 00a8e498 */
        if (16.0 <= fVar13) {
          iVar7 = 0x7fffffff;
        }
        else {
          fVar14 = 0.5;
          if (fVar13 * 1.3421773e+08 <= 0.0) {
            fVar14 = -0.5;
          }
          iVar7 = (int)(fVar14 + fVar13 * 1.3421773e+08);
        }
      }
      fVar14 = fVar13 * fVar10 + 384.0;
      fVar13 = fVar5;
      if ((int)fVar14 < 0x43c08000) {
        fVar13 = fVar14;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar14) {
        sVar1 = SUB42(fVar13,0);
      }
      param_1[1] = sVar1;
      fVar13 = param_3[2];
                    /* try { // try from 00a8e4f0 to 00b8e547 has its CatchHandler @ 00a8e4f0
                       catch() { ... } // from try @ 00a8e4f0 with catch @ 00a8e4f0
                       catch() { ... } // from try @ 00a8e7a4 with catch @ 00a8e4f0 */
      if (fVar13 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar13) {
        iVar8 = 0x7fffffff;
      }
      else {
        fVar14 = 0.5;
        if (fVar13 * 1.3421773e+08 <= 0.0) {
          fVar14 = -0.5;
        }
        iVar8 = (int)(fVar14 + fVar13 * 1.3421773e+08);
      }
      fVar14 = fVar13 * fVar10 + 384.0;
      fVar13 = fVar5;
      if ((int)fVar14 < 0x43c08000) {
        fVar13 = fVar14;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar14) {
        sVar1 = SUB42(fVar13,0);
      }
      param_1[2] = sVar1;
                    /* try { // try from 00a8e548 to 00b8e55f has its CatchHandler @ 00a8e7e0 */
      fVar13 = param_3[3];
      if (fVar13 <= -16.0) {
        iVar9 = -0x80000000;
                    /* try { // try from 00a8e580 to 00b8e587 has its CatchHandler @ 00a8e7f0 */
      }
      else if (16.0 <= fVar13) {
        iVar9 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8e568 to 00b8e573 has its CatchHandler @ 00a8e7dc */
        fVar14 = 0.5;
        if (fVar13 * 1.3421773e+08 <= 0.0) {
          fVar14 = -0.5;
        }
                    /* try { // try from 00a8e574 to 00b8e57f has its CatchHandler @ 00a8e7d8 */
        iVar9 = (int)(fVar14 + fVar13 * 1.3421773e+08);
      }
      fVar14 = fVar13 * fVar10 + 384.0;
      fVar13 = fVar5;
      if ((int)fVar14 < 0x43c08000) {
        fVar13 = fVar14;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar14) {
        sVar1 = SUB42(fVar13,0);
      }
      param_1[3] = sVar1;
                    /* try { // try from 00a8e5a8 to 00b8e5af has its CatchHandler @ 00a8e7bc */
      iVar9 = iVar9 + iVar8 + iVar7 + iVar6;
                    /* try { // try from 00a8e5b4 to 00b8e5d7 has its CatchHandler @ 00a8e7c0 */
      fVar10 = *param_6 + fVar10;
      *param_5 = fVar10;
      iVar6 = iVar9 + 3;
      if (-1 < iVar9) {
        iVar6 = iVar9;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar6 >> 0xe);
      param_3 = param_3 + 4;
      param_2 = param_2 - 1;
      param_1 = param_1 + 4;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

