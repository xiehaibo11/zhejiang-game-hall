
/* void cocos2d::volumeMulti<4, 6, short, float, float, int, short>(short*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<4,6,short,float,float,int,short>
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
  float fVar14;
  float fVar15;
  float fVar16;
  ushort uVar17;
  ushort uVar18;
  undefined2 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  fVar14 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
      fVar6 = (float)*(undefined8 *)param_3 * fVar14 + 384.0;
      fVar15 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar14 + 384.0;
      uVar19 = (undefined2)((uint)fVar15 >> 0x10);
      fVar16 = (float)*(undefined8 *)(param_3 + 2) * fVar14 + 384.0;
      fVar20 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar14 + 384.0;
      auVar22._0_4_ = -(uint)(0x43c07fff < (int)fVar6);
      auVar22._4_4_ = -(uint)(0x43c07fff < (int)fVar15);
      auVar22._8_4_ = -(uint)(0x43c07fff < (int)fVar16);
      auVar22._12_4_ = -(uint)(0x43c07fff < (int)fVar20);
      auVar21._0_4_ = -(uint)((int)fVar6 < 0x43bf8000);
      auVar21._4_4_ = -(uint)((int)fVar15 < 0x43bf8000);
      auVar21._8_4_ = -(uint)((int)fVar16 < 0x43bf8000);
      auVar21._12_4_ = -(uint)((int)fVar20 < 0x43bf8000);
      auVar3._8_4_ = 0x7fff;
      auVar3._0_8_ = 0x7fff00007fff;
      auVar3._12_4_ = 0x7fff;
      auVar5._4_2_ = SUB42(fVar15,0);
      auVar5._0_4_ = fVar6;
      auVar5._6_2_ = uVar19;
      auVar5._8_4_ = fVar16;
      auVar5._12_4_ = fVar20;
      auVar23._4_2_ = SUB42(fVar15,0);
      auVar23._0_4_ = fVar6;
      auVar23._6_2_ = uVar19;
      auVar23._8_4_ = fVar16;
      auVar23._12_4_ = fVar20;
      auVar23 = auVar23 ^ (auVar5 ^ auVar3) & auVar22;
      auVar4._8_4_ = 0x8000;
      auVar4._0_8_ = 0x800000008000;
      auVar4._12_4_ = 0x8000;
      auVar23 = auVar23 ^ (auVar23 ^ auVar4) & auVar21;
      *(ulong *)param_1 =
           CONCAT26(auVar23._12_2_,CONCAT24(auVar23._8_2_,CONCAT22(auVar23._4_2_,auVar23._0_2_)));
      fVar15 = param_3[4] * fVar14 + 384.0;
      fVar6 = 4.59163e-41;
      if ((int)fVar15 < 0x43c08000) {
        fVar6 = fVar15;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar15) {
        sVar2 = SUB42(fVar6,0);
      }
      param_1[4] = sVar2;
      pfVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      fVar15 = *pfVar1 * fVar14 + 384.0;
      fVar6 = 4.59163e-41;
      if ((int)fVar15 < 0x43c08000) {
        fVar6 = fVar15;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar15) {
        sVar2 = SUB42(fVar6,0);
      }
      param_2 = param_2 - 1;
                    /* try { // try from 00a90234 to 00b90277 has its CatchHandler @ 00a9028c */
      param_1[5] = sVar2;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a8fef8 to 00b8ffcf has its CatchHandler @ 00a8fd28 */
    fVar6 = 4.59163e-41;
    do {
      fVar15 = *param_3;
      uVar18 = 0x3fe0;
      if (fVar15 <= -16.0) {
        iVar8 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar8 = 0x7fffffff;
      }
      else {
                    /* catch() { ... } // from try @ 00a8fdac with catch @ 00a8ff48 */
        uVar17 = uVar18;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar17 = 0xbfe0;
        }
                    /* catch() { ... } // from try @ 00a8fda0 with catch @ 00a8ff4c */
                    /* catch() { ... } // from try @ 00a8fdf0 with catch @ 00a8ff50
                       catch() { ... } // from try @ 00a8feb4 with catch @ 00a8ff50 */
        iVar8 = (int)((double)((ulong)uVar17 << 0x30) + (double)(fVar15 * 1.3421773e+08));
      }
                    /* catch() { ... } // from try @ 00a8fd80 with catch @ 00a8ff68 */
      fVar16 = fVar15 * fVar14 + 384.0;
      fVar15 = fVar6;
      if ((int)fVar16 < 0x43c08000) {
        fVar15 = fVar16;
      }
                    /* catch() { ... } // from try @ 00a8fdb8 with catch @ 00a8ff78
                       catch() { ... } // from try @ 00a8fe24 with catch @ 00a8ff78 */
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar15,0);
      }
      *param_1 = sVar2;
      fVar15 = param_3[1];
      if (fVar15 <= -16.0) {
        iVar9 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar9 = 0x7fffffff;
      }
      else {
        uVar17 = uVar18;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar17 = 0xbfe0;
        }
        iVar9 = (int)((double)((ulong)uVar17 << 0x30) + (double)(fVar15 * 1.3421773e+08));
      }
      fVar16 = fVar15 * fVar14 + 384.0;
                    /* try { // try from 00a8ffd0 to 00b90027 has its CatchHandler @ 00a8ffd0
                       catch() { ... } // from try @ 00a8ffd0 with catch @ 00a8ffd0
                       catch() { ... } // from try @ 00a90278 with catch @ 00a8ffd0 */
      fVar15 = fVar6;
      if ((int)fVar16 < 0x43c08000) {
        fVar15 = fVar16;
      }
      sVar2 = -0x8000;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[1] = sVar2;
      fVar15 = param_3[2];
      if (fVar15 <= -16.0) {
        iVar10 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar10 = 0x7fffffff;
      }
      else {
        uVar17 = uVar18;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar17 = 0xbfe0;
        }
        iVar10 = (int)((double)((ulong)uVar17 << 0x30) + (double)(fVar15 * 1.3421773e+08));
      }
      fVar16 = fVar15 * fVar14 + 384.0;
                    /* try { // try from 00a90028 to 00b9003f has its CatchHandler @ 00a902d0 */
      fVar15 = fVar6;
      if ((int)fVar16 < 0x43c08000) {
        fVar15 = fVar16;
      }
      sVar7 = -0x8000;
      sVar2 = sVar7;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[2] = sVar2;
      fVar15 = param_3[3];
                    /* try { // try from 00a90048 to 00b90053 has its CatchHandler @ 00a902b4 */
      if (fVar15 <= -16.0) {
        iVar11 = -0x80000000;
      }
      else {
                    /* try { // try from 00a90054 to 00b9005f has its CatchHandler @ 00a902b0 */
        if (16.0 <= fVar15) {
          iVar11 = 0x7fffffff;
        }
        else {
                    /* try { // try from 00a90060 to 00b90077 has its CatchHandler @ 00a902e0 */
          uVar17 = uVar18;
          if (fVar15 * 1.3421773e+08 <= 0.0) {
            uVar17 = 0xbfe0;
          }
          iVar11 = (int)((double)((ulong)uVar17 << 0x30) + (double)(fVar15 * 1.3421773e+08));
        }
      }
      fVar16 = fVar15 * fVar14 + 384.0;
      fVar15 = fVar6;
      if ((int)fVar16 < 0x43c08000) {
        fVar15 = fVar16;
      }
                    /* try { // try from 00a90098 to 00b9009f has its CatchHandler @ 00a902b8 */
      sVar2 = sVar7;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[3] = sVar2;
      fVar15 = param_3[4];
      if (fVar15 <= -16.0) {
                    /* try { // try from 00a900d4 to 00b900e3 has its CatchHandler @ 00a90290 */
        iVar12 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar12 = 0x7fffffff;
      }
      else {
        uVar17 = uVar18;
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar17 = 0xbfe0;
        }
                    /* try { // try from 00a900c8 to 00b900cf has its CatchHandler @ 00a9028c */
        iVar12 = (int)((double)((ulong)uVar17 << 0x30) + (double)(fVar15 * 1.3421773e+08));
      }
      fVar16 = fVar15 * fVar14 + 384.0;
      fVar15 = fVar6;
      if ((int)fVar16 < 0x43c08000) {
        fVar15 = fVar16;
      }
      sVar2 = sVar7;
      if (0x43bf7fff < (int)fVar16) {
        sVar2 = SUB42(fVar15,0);
      }
      param_1[4] = sVar2;
      fVar15 = param_3[5];
                    /* try { // try from 00a90104 to 00b90123 has its CatchHandler @ 00a902e0 */
      if (fVar15 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar15) {
        iVar13 = 0x7fffffff;
      }
      else {
        if (fVar15 * 1.3421773e+08 <= 0.0) {
          uVar18 = 0xbfe0;
        }
                    /* try { // try from 00a90128 to 00b9016b has its CatchHandler @ 00a902b8 */
        iVar13 = (int)((double)((ulong)uVar18 << 0x30) + (double)(fVar15 * 1.3421773e+08));
      }
      fVar16 = fVar15 * fVar14 + 384.0;
      fVar15 = fVar6;
      if ((int)fVar16 < 0x43c08000) {
        fVar15 = fVar16;
      }
      if (0x43bf7fff < (int)fVar16) {
        sVar7 = SUB42(fVar15,0);
      }
      param_1[5] = sVar7;
      param_3 = param_3 + 6;
                    /* try { // try from 00a90184 to 00b901bf has its CatchHandler @ 00a902e0 */
      param_2 = param_2 - 1;
      *param_4 = *param_4 +
                 ((iVar13 + iVar12 + iVar11 + iVar10 + iVar9 + iVar8) / 6 >> 0xc) * (int)param_6;
      param_1 = param_1 + 6;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

