
/* void cocos2d::volumeMulti<4, 7, short, float, float, int, short>(short*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<4,7,short,float,float,int,short>
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
  int iVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ushort uVar18;
  ushort uVar19;
  undefined2 uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  fVar15 = *param_5;
  if (param_4 == (int *)0x0) {
    fVar6 = 4.59163e-41;
    do {
      fVar16 = (float)*(undefined8 *)param_3 * fVar15 + 384.0;
      fVar17 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar15 + 384.0;
      uVar20 = (undefined2)((uint)fVar17 >> 0x10);
      fVar21 = (float)*(undefined8 *)(param_3 + 2) * fVar15 + 384.0;
      fVar22 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar15 + 384.0;
      auVar24._0_4_ = -(uint)(0x43c07fff < (int)fVar16);
      auVar24._4_4_ = -(uint)(0x43c07fff < (int)fVar17);
      auVar24._8_4_ = -(uint)(0x43c07fff < (int)fVar21);
      auVar24._12_4_ = -(uint)(0x43c07fff < (int)fVar22);
      auVar23._0_4_ = -(uint)((int)fVar16 < 0x43bf8000);
      auVar23._4_4_ = -(uint)((int)fVar17 < 0x43bf8000);
      auVar23._8_4_ = -(uint)((int)fVar21 < 0x43bf8000);
      auVar23._12_4_ = -(uint)((int)fVar22 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar17,0);
      auVar5._0_4_ = fVar16;
      auVar5._6_2_ = uVar20;
      auVar5._8_4_ = fVar21;
      auVar5._12_4_ = fVar22;
      auVar25._4_2_ = SUB42(fVar17,0);
      auVar25._0_4_ = fVar16;
      auVar25._6_2_ = uVar20;
      auVar25._8_4_ = fVar21;
      auVar25._12_4_ = fVar22;
      auVar25 = auVar25 ^ (auVar5 ^ auVar3) & auVar24;
      auVar4._8_4_ = 0x8000;
      auVar4._0_8_ = 0x800000008000;
      auVar4._12_4_ = 0x8000;
      auVar25 = auVar25 ^ (auVar25 ^ auVar4) & auVar23;
      *(ulong *)param_1 =
           CONCAT26(auVar25._12_2_,CONCAT24(auVar25._8_2_,CONCAT22(auVar25._4_2_,auVar25._0_2_)));
      fVar17 = param_3[4] * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar16,0);
      }
      param_1[4] = sVar2;
      fVar17 = param_3[5] * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar16,0);
      }
      param_1[5] = sVar2;
      pfVar1 = param_3 + 6;
      param_3 = param_3 + 7;
      fVar17 = *pfVar1 * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar16,0);
      }
      param_2 = param_2 - 1;
      param_1[6] = sVar2;
      param_1 = param_1 + 7;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a90278 to 00b90337 has its CatchHandler @ 00a8ffd0 */
    fVar6 = 4.59163e-41;
                    /* catch() { ... } // from try @ 00a900c8 with catch @ 00a9028c
                       catch() { ... } // from try @ 00a90234 with catch @ 00a9028c */
    do {
                    /* catch() { ... } // from try @ 00a900d4 with catch @ 00a90290 */
      fVar16 = *param_3;
      uVar19 = 0x3fe0;
      if (fVar16 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar16) {
        iVar8 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a90054 with catch @ 00a902b0 */
        uVar18 = uVar19;
        if (fVar16 * 1.3421773e+08 <= 0.0) {
          uVar18 = 0xbfe0;
        }
                    /* catch() { ... } // from try @ 00a90048 with catch @ 00a902b4 */
                    /* catch() { ... } // from try @ 00a90098 with catch @ 00a902b8
                       catch() { ... } // from try @ 00a90128 with catch @ 00a902b8 */
        iVar8 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar16 * 1.3421773e+08));
      }
                    /* catch() { ... } // from try @ 00a90028 with catch @ 00a902d0 */
      fVar17 = fVar16 * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
                    /* catch() { ... } // from try @ 00a90060 with catch @ 00a902e0
                       catch() { ... } // from try @ 00a90104 with catch @ 00a902e0
                       catch() { ... } // from try @ 00a90184 with catch @ 00a902e0 */
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar16,0);
      }
      *param_1 = sVar2;
      fVar16 = param_3[1];
      if (fVar16 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar16) {
        iVar9 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar16 * 1.3421773e+08 <= 0.0) {
          uVar18 = 0xbfe0;
        }
        iVar9 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar16 * 1.3421773e+08));
      }
      fVar17 = fVar16 * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar16,0);
      }
      param_1[1] = sVar2;
      fVar16 = param_3[2];
      if (fVar16 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar16) {
        iVar10 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar16 * 1.3421773e+08 <= 0.0) {
          uVar18 = 0xbfe0;
        }
        iVar10 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar16 * 1.3421773e+08));
      }
      fVar17 = fVar16 * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
      sVar7 = -0x8000;
      sVar2 = sVar7;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar16,0);
      }
      param_1[2] = sVar2;
      fVar16 = param_3[3];
      if (fVar16 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else if (16.0 <= fVar16) {
        iVar11 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar16 * 1.3421773e+08 <= 0.0) {
          uVar18 = 0xbfe0;
        }
        iVar11 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar16 * 1.3421773e+08));
      }
      fVar17 = fVar16 * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
      sVar2 = sVar7;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar16,0);
      }
      param_1[3] = sVar2;
      fVar16 = param_3[4];
      if (fVar16 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar16) {
        iVar12 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar16 * 1.3421773e+08 <= 0.0) {
          uVar18 = 0xbfe0;
        }
        iVar12 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar16 * 1.3421773e+08));
      }
      fVar17 = fVar16 * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
      sVar2 = sVar7;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar16,0);
      }
      param_1[4] = sVar2;
      fVar16 = param_3[5];
      if (fVar16 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar16) {
        iVar13 = 0x7fffffff;
      }
      else {
        uVar18 = uVar19;
        if (fVar16 * 1.3421773e+08 <= 0.0) {
          uVar18 = 0xbfe0;
        }
        iVar13 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar16 * 1.3421773e+08));
      }
      fVar17 = fVar16 * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
      if (0x43bf7fff < (int)fVar17) {
        sVar7 = SUB42(fVar16,0);
      }
      param_1[5] = sVar7;
      fVar16 = param_3[6];
      if (fVar16 <= -16.0) {
        iVar14 = -0x80000000;
      }
      else if (16.0 <= fVar16) {
        iVar14 = 0x7fffffff;
      }
      else {
        if (fVar16 * 1.3421773e+08 <= 0.0) {
          uVar19 = 0xbfe0;
        }
        iVar14 = (int)((double)((ulong)uVar19 << 0x30) + (double)(fVar16 * 1.3421773e+08));
      }
      fVar17 = fVar16 * fVar15 + 384.0;
      fVar16 = fVar6;
      if ((int)fVar17 < 0x43c08000) {
        fVar16 = fVar17;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar17) {
        sVar2 = SUB42(fVar16,0);
      }
      param_1[6] = sVar2;
      param_3 = param_3 + 7;
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((iVar14 + iVar13 + iVar12 + iVar11 + iVar10 + iVar9 + iVar8) / 7 >> 0xc) *
                 (int)param_6;
      param_1 = param_1 + 7;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

