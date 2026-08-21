
/* void cocos2d::volumeMulti<4, 3, short, float, float, int, short>(short*, unsigned long, float
   const*, int*, float const*, short) */

void cocos2d::volumeMulti<4,3,short,float,float,int,short>
               (short *param_1,ulong param_2,float *param_3,int *param_4,float *param_5,
               short param_6)

{
  float *pfVar1;
  short *psVar2;
  short sVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  bool bVar15;
  float *pfVar16;
  ulong uVar27;
  float fVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  ushort uVar40;
  undefined2 uVar41;
  float fVar42;
  float fVar43;
  undefined2 uVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  
  fVar33 = *param_5;
                    /* try { // try from 00a8f51c to 00b8f53f has its CatchHandler @ 00a8f5a0 */
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
                    /* try { // try from 00a8f768 to 00b8f7b3 has its CatchHandler @ 00a8f768
                       catch() { ... } // from try @ 00a8f768 with catch @ 00a8f768
                       catch() { ... } // from try @ 00a8f828 with catch @ 00a8f768 */
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_2 - 1;
      uVar27 = (param_2 - 1) * 6;
                    /* try { // try from 00a8f7b4 to 00b8f7db has its CatchHandler @ 00a8f8c0 */
      if ((((uVar27 < ~(ulong)(param_1 + 1) || uVar27 - ~(ulong)(param_1 + 1) == 0) &&
           (SUB168(auVar4 * ZEXT816(6),8) == 0)) &&
          (uVar27 < ~(ulong)(param_1 + 2) || uVar27 - ~(ulong)(param_1 + 2) == 0)) &&
         (uVar27 < ~(ulong)param_1 || uVar27 - ~(ulong)param_1 == 0)) {
        uVar29 = param_2 & 0xfffffffffffffffc;
                    /* try { // try from 00a8f7dc to 00b8f7e3 has its CatchHandler @ 00a8f8a4 */
        pfVar1 = param_3 + uVar29 * 3;
                    /* try { // try from 00a8f7f4 to 00b8f7f7 has its CatchHandler @ 00a8f89c */
        psVar2 = param_1 + uVar29 * 3;
        uVar27 = uVar29;
        do {
          fVar28 = *param_3;
          pfVar16 = param_3 + 1;
          pfVar17 = param_3 + 2;
          pfVar18 = param_3 + 3;
          pfVar19 = param_3 + 4;
          pfVar20 = param_3 + 5;
          pfVar21 = param_3 + 6;
          pfVar22 = param_3 + 7;
          pfVar23 = param_3 + 8;
          pfVar24 = param_3 + 9;
          pfVar25 = param_3 + 10;
          pfVar26 = param_3 + 0xb;
          param_3 = param_3 + 0xc;
          uVar27 = uVar27 - 4;
                    /* try { // try from 00a8f808 to 00b8f80b has its CatchHandler @ 00a8f8a0 */
                    /* try { // try from 00a8f80c to 00b8f827 has its CatchHandler @ 00a8f8a8 */
          fVar36 = fVar28 * fVar33 + 384.0;
          fVar37 = *pfVar18 * fVar33 + 384.0;
          fVar38 = *pfVar21 * fVar33 + 384.0;
          fVar39 = *pfVar24 * fVar33 + 384.0;
          fVar35 = *pfVar16 * fVar33 + 384.0;
          fVar11 = *pfVar19 * fVar33 + 384.0;
          uVar44 = (undefined2)((uint)fVar11 >> 0x10);
          fVar45 = *pfVar22 * fVar33 + 384.0;
          fVar46 = *pfVar25 * fVar33 + 384.0;
          fVar28 = *pfVar17 * fVar33 + 384.0;
          fVar34 = *pfVar20 * fVar33 + 384.0;
          uVar41 = (undefined2)((uint)fVar34 >> 0x10);
          fVar42 = *pfVar23 * fVar33 + 384.0;
          fVar43 = *pfVar26 * fVar33 + 384.0;
                    /* try { // try from 00a8f828 to 00b8f90f has its CatchHandler @ 00a8f768 */
          auVar48._0_4_ = -(uint)(0x43c07fff < (int)fVar35);
          auVar48._4_4_ = -(uint)(0x43c07fff < (int)fVar11);
          auVar48._8_4_ = -(uint)(0x43c07fff < (int)fVar45);
          auVar48._12_4_ = -(uint)(0x43c07fff < (int)fVar46);
          uVar40 = SUB42(fVar36,0) ^
                   (SUB42(fVar36,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar36);
          uVar12 = SUB42(fVar37,0) ^
                   (SUB42(fVar37,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar37);
          uVar13 = SUB42(fVar38,0) ^
                   (SUB42(fVar38,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar38);
          uVar14 = SUB42(fVar39,0) ^
                   (SUB42(fVar39,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar39);
          auVar47._0_4_ = -(uint)((int)fVar35 < 0x43bf8000);
          auVar47._4_4_ = -(uint)((int)fVar11 < 0x43bf8000);
          auVar47._8_4_ = -(uint)((int)fVar45 < 0x43bf8000);
          auVar47._12_4_ = -(uint)((int)fVar46 < 0x43bf8000);
          auVar51._0_4_ = -(uint)(0x43c07fff < (int)fVar28);
          auVar51._4_4_ = -(uint)(0x43c07fff < (int)fVar34);
          auVar51._8_4_ = -(uint)(0x43c07fff < (int)fVar42);
          auVar51._12_4_ = -(uint)(0x43c07fff < (int)fVar43);
          auVar5._8_4_ = 0x7fff;
          auVar5._0_8_ = 0x7fff00007fff;
          auVar5._12_4_ = 0x7fff;
          auVar10._4_2_ = SUB42(fVar11,0);
          auVar10._0_4_ = fVar35;
          auVar10._6_2_ = uVar44;
          auVar10._8_4_ = fVar45;
          auVar10._12_4_ = fVar46;
          auVar49._4_2_ = SUB42(fVar11,0);
          auVar49._0_4_ = fVar35;
          auVar49._6_2_ = uVar44;
          auVar49._8_4_ = fVar45;
          auVar49._12_4_ = fVar46;
          auVar49 = auVar49 ^ (auVar10 ^ auVar5) & auVar48;
          auVar50._0_4_ = -(uint)((int)fVar28 < 0x43bf8000);
          auVar50._4_4_ = -(uint)((int)fVar34 < 0x43bf8000);
          auVar50._8_4_ = -(uint)((int)fVar42 < 0x43bf8000);
          auVar50._12_4_ = -(uint)((int)fVar43 < 0x43bf8000);
          auVar6._8_4_ = 0x7fff;
          auVar6._0_8_ = 0x7fff00007fff;
          auVar6._12_4_ = 0x7fff;
          auVar9._4_2_ = SUB42(fVar34,0);
          auVar9._0_4_ = fVar28;
          auVar9._6_2_ = uVar41;
          auVar9._8_4_ = fVar42;
          auVar9._12_4_ = fVar43;
          auVar52._4_2_ = SUB42(fVar34,0);
          auVar52._0_4_ = fVar28;
          auVar52._6_2_ = uVar41;
          auVar52._8_4_ = fVar42;
          auVar52._12_4_ = fVar43;
          auVar52 = auVar52 ^ (auVar9 ^ auVar6) & auVar51;
          auVar7._8_4_ = 0x8000;
          auVar7._0_8_ = 0x800000008000;
          auVar7._12_4_ = 0x8000;
          auVar49 = auVar49 ^ (auVar49 ^ auVar7) & auVar47;
          auVar8._8_4_ = 0x8000;
          auVar8._0_8_ = 0x800000008000;
          auVar8._12_4_ = 0x8000;
          auVar52 = auVar52 ^ (auVar52 ^ auVar8) & auVar50;
          *param_1 = uVar40 ^ (uVar40 ^ 0x8000) & -(ushort)((int)fVar36 < 0x43bf8000);
          param_1[1] = auVar49._0_2_;
          param_1[2] = auVar52._0_2_;
          param_1[3] = uVar12 ^ (uVar12 ^ 0x8000) & -(ushort)((int)fVar37 < 0x43bf8000);
          param_1[4] = auVar49._4_2_;
          param_1[5] = auVar52._4_2_;
          param_1[6] = uVar13 ^ (uVar13 ^ 0x8000) & -(ushort)((int)fVar38 < 0x43bf8000);
          param_1[7] = auVar49._8_2_;
          param_1[8] = auVar52._8_2_;
          param_1[9] = uVar14 ^ (uVar14 ^ 0x8000) & -(ushort)((int)fVar39 < 0x43bf8000);
          param_1[10] = auVar49._12_2_;
          param_1[0xb] = auVar52._12_2_;
          param_1 = param_1 + 0xc;
        } while (uVar27 != 0);
        bVar15 = uVar29 == param_2;
        param_3 = pfVar1;
        param_2 = param_2 - uVar29;
        param_1 = psVar2;
        if (bVar15) {
          return;
        }
      }
    }
                    /* try { // try from 00a8f6e0 to 00b8f6e7 has its CatchHandler @ 00a8f6f8 */
    fVar28 = 4.59163e-41;
    do {
                    /* try { // try from 00a8f6e8 to 00b8f70b has its CatchHandler @ 00a8f6a8 */
      fVar35 = *param_3 * fVar33 + 384.0;
                    /* catch() { ... } // from try @ 00a8f6e0 with catch @ 00a8f6f8 */
      fVar34 = fVar28;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      *param_1 = sVar3;
      fVar35 = param_3[1] * fVar33 + 384.0;
      fVar34 = fVar28;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      param_1[1] = sVar3;
      pfVar1 = param_3 + 2;
      param_3 = param_3 + 3;
      fVar35 = *pfVar1 * fVar33 + 384.0;
      fVar34 = fVar28;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      param_2 = param_2 - 1;
      param_1[2] = sVar3;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  else {
                    /* try { // try from 00a8f544 to 00b8f54b has its CatchHandler @ 00a8f59c */
                    /* try { // try from 00a8f54c to 00b8f5bb has its CatchHandler @ 00a8f4c0 */
    fVar28 = 4.59163e-41;
    do {
      fVar34 = *param_3;
      if (fVar34 <= -16.0) {
        iVar30 = -0x80000000;
      }
      else if (16.0 <= fVar34) {
                    /* catch() { ... } // from try @ 00a8f544 with catch @ 00a8f59c */
        iVar30 = 0x7fffffff;
      }
      else {
        uVar40 = 0x3fe0;
        if (fVar34 * 1.3421773e+08 <= 0.0) {
          uVar40 = 0xbfe0;
        }
        iVar30 = (int)((double)((ulong)uVar40 << 0x30) + (double)(fVar34 * 1.3421773e+08));
      }
                    /* catch() { ... } // from try @ 00a8f51c with catch @ 00a8f5a0 */
      fVar35 = fVar34 * fVar33 + 384.0;
      fVar34 = fVar28;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      *param_1 = sVar3;
      fVar34 = param_3[1];
      if (fVar34 <= -16.0) {
        iVar31 = -0x80000000;
      }
      else if (16.0 <= fVar34) {
        iVar31 = 0x7fffffff;
      }
      else {
        uVar40 = 0x3fe0;
        if (fVar34 * 1.3421773e+08 <= 0.0) {
          uVar40 = 0xbfe0;
        }
        iVar31 = (int)((double)((ulong)uVar40 << 0x30) + (double)(fVar34 * 1.3421773e+08));
      }
      fVar35 = fVar34 * fVar33 + 384.0;
      fVar34 = fVar28;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      param_1[1] = sVar3;
      fVar34 = param_3[2];
                    /* try { // try from 00a8f628 to 00b8f65b has its CatchHandler @ 00a8f628
                       catch() { ... } // from try @ 00a8f628 with catch @ 00a8f628
                       catch() { ... } // from try @ 00a8f670 with catch @ 00a8f628 */
      if (fVar34 <= -16.0) {
        iVar32 = -0x80000000;
      }
      else if (16.0 <= fVar34) {
        iVar32 = 0x7fffffff;
      }
      else {
        uVar40 = 0x3fe0;
        if (fVar34 * 1.3421773e+08 <= 0.0) {
          uVar40 = 0xbfe0;
        }
        iVar32 = (int)((double)((ulong)uVar40 << 0x30) + (double)(fVar34 * 1.3421773e+08));
      }
                    /* try { // try from 00a8f65c to 00b8f663 has its CatchHandler @ 00a8f694 */
      fVar35 = fVar34 * fVar33 + 384.0;
                    /* try { // try from 00a8f66c to 00b8f66f has its CatchHandler @ 00a8f684 */
                    /* try { // try from 00a8f670 to 00b8f6a7 has its CatchHandler @ 00a8f628 */
      fVar34 = fVar28;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      param_1[2] = sVar3;
                    /* catch() { ... } // from try @ 00a8f66c with catch @ 00a8f684 */
                    /* catch() { ... } // from try @ 00a8f65c with catch @ 00a8f694 */
      param_3 = param_3 + 3;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((iVar32 + iVar31 + iVar30) / 3 >> 0xc) * (int)param_6;
                    /* try { // try from 00a8f6a8 to 00b8f6df has its CatchHandler @ 00a8f6a8
                       catch() { ... } // from try @ 00a8f6a8 with catch @ 00a8f6a8
                       catch() { ... } // from try @ 00a8f6e8 with catch @ 00a8f6a8 */
      param_1 = param_1 + 3;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

