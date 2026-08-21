
/* void cocos2d::volumeMulti<4, 5, short, float, float, int, short>(short*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<4,5,short,float,float,int,short>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ushort uVar16;
  ushort uVar17;
  undefined2 uVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  fVar13 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      fVar6 = (float)*(undefined8 *)param_3 * fVar13 + 384.0;
      fVar14 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar13 + 384.0;
      uVar18 = (undefined2)((uint)fVar14 >> 0x10);
      fVar15 = (float)*(undefined8 *)(param_3 + 2) * fVar13 + 384.0;
      fVar19 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar13 + 384.0;
      auVar21._0_4_ = -(uint)(0x43c07fff < (int)fVar6);
      auVar21._4_4_ = -(uint)(0x43c07fff < (int)fVar14);
      auVar21._8_4_ = -(uint)(0x43c07fff < (int)fVar15);
      auVar21._12_4_ = -(uint)(0x43c07fff < (int)fVar19);
      auVar20._0_4_ = -(uint)((int)fVar6 < 0x43bf8000);
      auVar20._4_4_ = -(uint)((int)fVar14 < 0x43bf8000);
      auVar20._8_4_ = -(uint)((int)fVar15 < 0x43bf8000);
      auVar20._12_4_ = -(uint)((int)fVar19 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar14,0);
      auVar5._0_4_ = fVar6;
      auVar5._6_2_ = uVar18;
      auVar5._8_4_ = fVar15;
      auVar5._12_4_ = fVar19;
      auVar22._4_2_ = SUB42(fVar14,0);
      auVar22._0_4_ = fVar6;
      auVar22._6_2_ = uVar18;
      auVar22._8_4_ = fVar15;
      auVar22._12_4_ = fVar19;
      auVar22 = auVar22 ^ (auVar5 ^ auVar3) & auVar21;
      auVar4._8_4_ = 0x8000;
      auVar4._0_8_ = 0x800000008000;
      auVar4._12_4_ = 0x8000;
      auVar22 = auVar22 ^ (auVar22 ^ auVar4) & auVar20;
      *(ulong *)param_1 =
           CONCAT26(auVar22._12_2_,CONCAT24(auVar22._8_2_,CONCAT22(auVar22._4_2_,auVar22._0_2_)));
      pfVar1 = param_3 + 4;
      param_3 = param_3 + 5;
      fVar14 = *pfVar1 * fVar13 + 384.0;
                    /* try { // try from 00a8feb4 to 00b8fef7 has its CatchHandler @ 00a8ff50 */
      fVar6 = 4.59163e-41;
      if ((int)fVar14 < 0x43c08000) {
        fVar6 = fVar14;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar14) {
        sVar2 = SUB42(fVar6,0);
      }
      param_2 = param_2 - 1;
      param_1[4] = sVar2;
      param_1 = param_1 + 5;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a8fc20 to 00b8fd27 has its CatchHandler @ 00a8fb1c */
    fVar6 = 4.59163e-41;
    do {
      fVar14 = *param_3;
      uVar17 = 0x3fe0;
      if (fVar14 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar8 = 0x7fffffff;
      }
      else {
        uVar16 = uVar17;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar16 = 0xbfe0;
        }
        iVar8 = (int)((double)((ulong)uVar16 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
      fVar15 = fVar14 * fVar13 + 384.0;
      fVar14 = fVar6;
      if ((int)fVar15 < 0x43c08000) {
        fVar14 = fVar15;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar15) {
        sVar2 = SUB42(fVar14,0);
      }
                    /* catch() { ... } // from try @ 00a8fbdc with catch @ 00a8fc9c */
      *param_1 = sVar2;
                    /* catch() { ... } // from try @ 00a8fb88 with catch @ 00a8fca0 */
      fVar14 = param_3[1];
                    /* catch() { ... } // from try @ 00a8fb80 with catch @ 00a8fca8 */
      if (fVar14 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else {
                    /* catch() { ... } // from try @ 00a8fb74 with catch @ 00a8fcb0 */
        if (16.0 <= fVar14) {
          iVar9 = 0x7fffffff;
        }
        else {
                    /* catch() { ... } // from try @ 00a8fba0 with catch @ 00a8fcb8 */
          uVar16 = uVar17;
          if (fVar14 * 1.3421773e+08 <= 0.0) {
            uVar16 = 0xbfe0;
          }
                    /* catch() { ... } // from try @ 00a8fbec with catch @ 00a8fcc8 */
          iVar9 = (int)((double)((ulong)uVar16 << 0x30) + (double)(fVar14 * 1.3421773e+08));
        }
      }
      fVar15 = fVar14 * fVar13 + 384.0;
      fVar14 = fVar6;
      if ((int)fVar15 < 0x43c08000) {
        fVar14 = fVar15;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar15) {
        sVar2 = SUB42(fVar14,0);
      }
      param_1[1] = sVar2;
      fVar14 = param_3[2];
      if (fVar14 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar10 = 0x7fffffff;
      }
      else {
        uVar16 = uVar17;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar16 = 0xbfe0;
        }
                    /* try { // try from 00a8fd28 to 00b8fd7f has its CatchHandler @ 00a8fd28
                       catch() { ... } // from try @ 00a8fd28 with catch @ 00a8fd28
                       catch() { ... } // from try @ 00a8fef8 with catch @ 00a8fd28 */
        iVar10 = (int)((double)((ulong)uVar16 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
      fVar15 = fVar14 * fVar13 + 384.0;
      fVar14 = fVar6;
      if ((int)fVar15 < 0x43c08000) {
        fVar14 = fVar15;
      }
      sVar7 = -0x8000;
      sVar2 = sVar7;
      if (0x43bf7fff < (int)fVar15) {
        sVar2 = SUB42(fVar14,0);
      }
      param_1[2] = sVar2;
      fVar14 = param_3[3];
      if (fVar14 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar11 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8fd80 to 00b8fd97 has its CatchHandler @ 00a8ff68 */
        uVar16 = uVar17;
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar16 = 0xbfe0;
        }
        iVar11 = (int)((double)((ulong)uVar16 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
                    /* try { // try from 00a8fda0 to 00b8fdab has its CatchHandler @ 00a8ff4c */
      fVar15 = fVar14 * fVar13 + 384.0;
                    /* try { // try from 00a8fdac to 00b8fdb7 has its CatchHandler @ 00a8ff48 */
      fVar14 = fVar6;
      if ((int)fVar15 < 0x43c08000) {
        fVar14 = fVar15;
      }
      sVar2 = sVar7;
      if (0x43bf7fff < (int)fVar15) {
        sVar2 = SUB42(fVar14,0);
      }
                    /* try { // try from 00a8fdb8 to 00b8fdcf has its CatchHandler @ 00a8ff78 */
      param_1[3] = sVar2;
      fVar14 = param_3[4];
      if (fVar14 <= -16.0) {
                    /* try { // try from 00a8fdf0 to 00b8fe07 has its CatchHandler @ 00a8ff50 */
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar14) {
        iVar12 = 0x7fffffff;
      }
      else {
        if (fVar14 * 1.3421773e+08 <= 0.0) {
          uVar17 = 0xbfe0;
        }
        iVar12 = (int)((double)((ulong)uVar17 << 0x30) + (double)(fVar14 * 1.3421773e+08));
      }
      fVar15 = fVar14 * fVar13 + 384.0;
      fVar14 = fVar6;
      if ((int)fVar15 < 0x43c08000) {
        fVar14 = fVar15;
      }
      if (0x43bf7fff < (int)fVar15) {
        sVar7 = SUB42(fVar14,0);
      }
      param_1[4] = sVar7;
                    /* try { // try from 00a8fe24 to 00b8fe7b has its CatchHandler @ 00a8ff78 */
      param_3 = param_3 + 5;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((iVar12 + iVar11 + iVar10 + iVar9 + iVar8) / 5 >> 0xc) * (int)param_6;
      param_1 = param_1 + 5;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

