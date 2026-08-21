
/* void cocos2d::volumeRampMulti<4, 8, short, float, float, int, int>(short*, unsigned long, float
   const*, int*, float*, float const*, int*, int) */

void cocos2d::volumeRampMulti<4,8,short,float,float,int,int>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               float *param_6,int *param_7,int param_8)

{
  short sVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  float fVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined2 uVar20;
  undefined2 uVar21;
  undefined2 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  fVar3 = *param_5;
  if (param_4 == (int *)0x0) {
    do {
                    /* try { // try from 00a8f4c0 to 00b8f51b has its CatchHandler @ 00a8f4c0
                       catch() { ... } // from try @ 00a8f4c0 with catch @ 00a8f4c0
                       catch() { ... } // from try @ 00a8f54c with catch @ 00a8f4c0 */
      param_2 = param_2 - 1;
      fVar23 = (float)*(undefined8 *)param_3 * fVar3 + 384.0;
      fVar24 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar3 + 384.0;
      fVar25 = (float)*(undefined8 *)(param_3 + 2) * fVar3 + 384.0;
      fVar26 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar3 + 384.0;
      fVar10 = param_3[4] * fVar3 + 384.0;
      fVar27 = param_3[5] * fVar3 + 384.0;
      uVar20 = (undefined2)((uint)fVar27 >> 0x10);
      fVar28 = param_3[6] * fVar3 + 384.0;
      uVar21 = (undefined2)((uint)fVar28 >> 0x10);
      fVar3 = param_3[7] * fVar3 + 384.0;
      uVar22 = (undefined2)((uint)fVar3 >> 0x10);
      auVar30._0_4_ = -(uint)(0x43c07fff < (int)fVar10);
      auVar30._4_4_ = -(uint)(0x43c07fff < (int)fVar27);
      auVar30._8_4_ = -(uint)(0x43c07fff < (int)fVar28);
      auVar30._12_4_ = -(uint)(0x43c07fff < (int)fVar3);
      uVar6 = SUB42(fVar23,0) ^ (SUB42(fVar23,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar23);
      uVar7 = SUB42(fVar24,0) ^ (SUB42(fVar24,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar24);
      uVar8 = SUB42(fVar25,0) ^ (SUB42(fVar25,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar25);
      uVar9 = SUB42(fVar26,0) ^ (SUB42(fVar26,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar26);
      auVar29._0_4_ = -(uint)((int)fVar10 < 0x43bf8000);
      auVar29._4_4_ = -(uint)((int)fVar27 < 0x43bf8000);
      auVar29._8_4_ = -(uint)((int)fVar28 < 0x43bf8000);
      auVar29._12_4_ = -(uint)((int)fVar3 < 0x43bf8000);
      auVar2._4_2_ = SUB42(fVar27,0);
      auVar2._0_4_ = fVar10;
      auVar2._6_2_ = uVar20;
      auVar2._8_2_ = SUB42(fVar28,0);
      auVar2._10_2_ = uVar21;
      auVar2._12_2_ = SUB42(fVar3,0);
      auVar2._14_2_ = uVar22;
      auVar4._8_4_ = 0x7fff;
      auVar4._0_8_ = 0x7fff00007fff;
      auVar4._12_4_ = 0x7fff;
      auVar31._4_2_ = SUB42(fVar27,0);
      auVar31._0_4_ = fVar10;
      auVar31._6_2_ = uVar20;
      auVar31._8_2_ = SUB42(fVar28,0);
      auVar31._10_2_ = uVar21;
      auVar31._12_2_ = SUB42(fVar3,0);
      auVar31._14_2_ = uVar22;
      auVar31 = auVar31 ^ (auVar2 ^ auVar4) & auVar30;
      auVar5._8_4_ = 0x8000;
      auVar5._0_8_ = 0x800000008000;
      auVar5._12_4_ = 0x8000;
      auVar31 = auVar31 ^ (auVar31 ^ auVar5) & auVar29;
      *(ulong *)(param_1 + 4) =
           CONCAT26(auVar31._12_2_,CONCAT24(auVar31._8_2_,CONCAT22(auVar31._4_2_,auVar31._0_2_)));
      *(ulong *)param_1 =
           CONCAT26(uVar9 ^ (uVar9 ^ 0x8000) & -(ushort)((int)fVar26 < 0x43bf8000),
                    CONCAT24(uVar8 ^ (uVar8 ^ 0x8000) & -(ushort)((int)fVar25 < 0x43bf8000),
                             CONCAT22(uVar7 ^ (uVar7 ^ 0x8000) & -(ushort)((int)fVar24 < 0x43bf8000)
                                      ,uVar6 ^ (uVar6 ^ 0x8000) &
                                               -(ushort)((int)fVar23 < 0x43bf8000))));
      fVar3 = *param_6 + *param_5;
      *param_5 = fVar3;
      param_1 = param_1 + 8;
      param_3 = param_3 + 8;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a8f138 to 00b8f153 has its CatchHandler @ 00a8f238 */
    fVar10 = 4.59163e-41;
    do {
      fVar27 = *param_3;
      if (fVar27 <= -16.0) {
        iVar12 = -0x80000000;
      }
      else {
                    /* try { // try from 00a8f154 to 00b8f15b has its CatchHandler @ 00a8f21c */
        if (16.0 <= fVar27) {
                    /* try { // try from 00a8f180 to 00b8f183 has its CatchHandler @ 00a8f218 */
          iVar12 = 0x7fffffff;
        }
        else {
          fVar28 = 0.5;
          if (fVar27 * 1.3421773e+08 <= 0.0) {
            fVar28 = -0.5;
          }
                    /* try { // try from 00a8f16c to 00b8f16f has its CatchHandler @ 00a8f214 */
          iVar12 = (int)(fVar28 + fVar27 * 1.3421773e+08);
        }
      }
                    /* try { // try from 00a8f184 to 00b8f19f has its CatchHandler @ 00a8f220 */
      fVar28 = fVar27 * fVar3 + 384.0;
      fVar27 = fVar10;
      if ((int)fVar28 < 0x43c08000) {
        fVar27 = fVar28;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar28) {
        sVar1 = SUB42(fVar27,0);
      }
                    /* try { // try from 00a8f1a0 to 00b8f287 has its CatchHandler @ 00a8f0f0 */
      *param_1 = sVar1;
      fVar27 = param_3[1];
      if (fVar27 <= -16.0) {
        iVar13 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar13 = 0x7fffffff;
      }
      else {
        fVar28 = 0.5;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar28 = -0.5;
        }
        iVar13 = (int)(fVar28 + fVar27 * 1.3421773e+08);
      }
      fVar28 = fVar27 * fVar3 + 384.0;
      fVar27 = fVar10;
      if ((int)fVar28 < 0x43c08000) {
        fVar27 = fVar28;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar28) {
        sVar1 = SUB42(fVar27,0);
      }
      param_1[1] = sVar1;
      fVar27 = param_3[2];
      if (fVar27 <= -16.0) {
        iVar14 = -0x80000000;
                    /* catch() { ... } // from try @ 00a8f138 with catch @ 00a8f238 */
      }
      else {
                    /* catch() { ... } // from try @ 00a8f16c with catch @ 00a8f214 */
        if (16.0 <= fVar27) {
          iVar14 = 0x7fffffff;
        }
        else {
                    /* catch() { ... } // from try @ 00a8f180 with catch @ 00a8f218 */
                    /* catch() { ... } // from try @ 00a8f154 with catch @ 00a8f21c */
                    /* catch() { ... } // from try @ 00a8f184 with catch @ 00a8f220 */
          fVar28 = 0.5;
          if (fVar27 * 1.3421773e+08 <= 0.0) {
            fVar28 = -0.5;
          }
          iVar14 = (int)(fVar28 + fVar27 * 1.3421773e+08);
        }
      }
      fVar28 = fVar27 * fVar3 + 384.0;
      fVar27 = fVar10;
      if ((int)fVar28 < 0x43c08000) {
        fVar27 = fVar28;
      }
      sVar11 = -0x8000;
      sVar1 = sVar11;
      if (0x43bf7fff < (int)fVar28) {
        sVar1 = SUB42(fVar27,0);
      }
      param_1[2] = sVar1;
      fVar27 = param_3[3];
      if (fVar27 <= -16.0) {
        iVar15 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar15 = 0x7fffffff;
      }
      else {
        fVar28 = 0.5;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar28 = -0.5;
        }
        iVar15 = (int)(fVar28 + fVar27 * 1.3421773e+08);
      }
      fVar28 = fVar27 * fVar3 + 384.0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a8f320 with catch @ 00a8f2b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a8f350 with catch @ 00a8f2b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a8f380 with catch @ 00a8f2b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a8f3a8 with catch @ 00a8f2b0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a8f3d4 with catch @ 00a8f2b0
                        */
      fVar27 = fVar10;
      if ((int)fVar28 < 0x43c08000) {
        fVar27 = fVar28;
      }
      sVar1 = sVar11;
      if (0x43bf7fff < (int)fVar28) {
        sVar1 = SUB42(fVar27,0);
      }
      param_1[3] = sVar1;
      fVar27 = param_3[4];
      if (fVar27 <= -16.0) {
        iVar16 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar16 = 0x7fffffff;
      }
      else {
        fVar28 = 0.5;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar28 = -0.5;
        }
        iVar16 = (int)(fVar28 + fVar27 * 1.3421773e+08);
      }
      fVar28 = fVar27 * fVar3 + 384.0;
      fVar27 = fVar10;
      if ((int)fVar28 < 0x43c08000) {
        fVar27 = fVar28;
      }
                    /* try { // try from 00a8f318 to 00b8f31f has its CatchHandler @ 00a8f414 */
      sVar1 = sVar11;
      if (0x43bf7fff < (int)fVar28) {
        sVar1 = SUB42(fVar27,0);
      }
      param_1[4] = sVar1;
                    /* try { // try from 00a8f320 to 00b8f343 has its CatchHandler @ 00a8f2b0 */
      fVar27 = param_3[5];
      if (fVar27 <= -16.0) {
        iVar17 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar17 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8f344 to 00b8f34f has its CatchHandler @ 00a8f414 */
        fVar28 = 0.5;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar28 = -0.5;
        }
        iVar17 = (int)(fVar28 + fVar27 * 1.3421773e+08);
                    /* try { // try from 00a8f350 to 00b8f377 has its CatchHandler @ 00a8f2b0 */
      }
      fVar28 = fVar27 * fVar3 + 384.0;
      fVar27 = fVar10;
      if ((int)fVar28 < 0x43c08000) {
        fVar27 = fVar28;
      }
                    /* try { // try from 00a8f378 to 00b8f37f has its CatchHandler @ 00a8f410 */
      if (0x43bf7fff < (int)fVar28) {
        sVar11 = SUB42(fVar27,0);
      }
      param_1[5] = sVar11;
                    /* try { // try from 00a8f380 to 00b8f39f has its CatchHandler @ 00a8f2b0 */
      fVar27 = param_3[6];
      if (fVar27 <= -16.0) {
        iVar18 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar18 = 0x7fffffff;
      }
      else {
                    /* try { // try from 00a8f3a0 to 00b8f3a7 has its CatchHandler @ 00a8f410 */
        fVar28 = 0.5;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar28 = -0.5;
        }
                    /* try { // try from 00a8f3a8 to 00b8f3c7 has its CatchHandler @ 00a8f2b0 */
        iVar18 = (int)(fVar28 + fVar27 * 1.3421773e+08);
      }
      fVar28 = fVar27 * fVar3 + 384.0;
                    /* try { // try from 00a8f3c8 to 00b8f3d3 has its CatchHandler @ 00a8f410 */
      fVar27 = fVar10;
      if ((int)fVar28 < 0x43c08000) {
        fVar27 = fVar28;
      }
                    /* try { // try from 00a8f3d4 to 00b8f417 has its CatchHandler @ 00a8f2b0 */
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar28) {
        sVar1 = SUB42(fVar27,0);
      }
      param_1[6] = sVar1;
      fVar27 = param_3[7];
      if (fVar27 <= -16.0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a8f318 with catch @ 00a8f414
                       catch(type#1 @ 00000000) { ... } // from try @ 00a8f344 with catch @ 00a8f414
                        */
        iVar19 = -0x80000000;
      }
      else if (16.0 <= fVar27) {
        iVar19 = 0x7fffffff;
      }
      else {
        fVar28 = 0.5;
        if (fVar27 * 1.3421773e+08 <= 0.0) {
          fVar28 = -0.5;
        }
        iVar19 = (int)(fVar28 + fVar27 * 1.3421773e+08);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a8f378 with catch @ 00a8f410
                       catch(type#1 @ 00000000) { ... } // from try @ 00a8f3a0 with catch @ 00a8f410
                       catch(type#1 @ 00000000) { ... } // from try @ 00a8f3c8 with catch @ 00a8f410
                        */
      }
      fVar28 = fVar27 * fVar3 + 384.0;
      fVar27 = fVar10;
      if ((int)fVar28 < 0x43c08000) {
        fVar27 = fVar28;
      }
      sVar1 = -0x8000;
      if (0x43bf7fff < (int)fVar28) {
        sVar1 = SUB42(fVar27,0);
      }
      param_1[7] = sVar1;
      iVar19 = iVar19 + iVar18 + iVar17 + iVar16 + iVar15 + iVar14 + iVar13 + iVar12;
      fVar3 = *param_6 + fVar3;
      *param_5 = fVar3;
      iVar12 = iVar19 + 7;
      if (-1 < iVar19) {
        iVar12 = iVar19;
      }
      *param_4 = *param_4 + (*param_7 >> 0x10) * (iVar12 >> 0xf);
      param_3 = param_3 + 8;
      param_2 = param_2 - 1;
      param_1 = param_1 + 8;
      *param_7 = *param_7 + param_8;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

