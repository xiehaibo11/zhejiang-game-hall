
/* void cocos2d::experimental::volumeMulti<4, 3, short, float, float, int, short>(short*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<4,3,short,float,float,int,short>
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
  float fVar10;
  float fVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  bool bVar16;
  float *pfVar17;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
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
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  
  fVar33 = *param_5;
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      uVar28 = param_2 & 0xfffffffffffffffc;
      pfVar1 = param_3 + uVar28 * 3;
      psVar2 = param_1 + uVar28 * 3;
      uVar29 = uVar28;
      do {
        fVar34 = *param_3;
        pfVar17 = param_3 + 1;
        pfVar18 = param_3 + 2;
        pfVar19 = param_3 + 3;
        pfVar20 = param_3 + 4;
        pfVar21 = param_3 + 5;
        pfVar22 = param_3 + 6;
        pfVar23 = param_3 + 7;
        pfVar24 = param_3 + 8;
        pfVar25 = param_3 + 9;
        pfVar26 = param_3 + 10;
        pfVar27 = param_3 + 0xb;
        param_3 = param_3 + 0xc;
        uVar29 = uVar29 - 4;
        fVar37 = fVar34 * fVar33 + 384.0;
        fVar38 = *pfVar19 * fVar33 + 384.0;
        fVar39 = *pfVar22 * fVar33 + 384.0;
        fVar40 = *pfVar25 * fVar33 + 384.0;
        fVar10 = *pfVar17 * fVar33 + 384.0;
        fVar11 = *pfVar20 * fVar33 + 384.0;
        uVar44 = (undefined2)((uint)fVar11 >> 0x10);
        fVar45 = *pfVar23 * fVar33 + 384.0;
        fVar46 = *pfVar26 * fVar33 + 384.0;
        fVar34 = *pfVar18 * fVar33 + 384.0;
        fVar35 = *pfVar21 * fVar33 + 384.0;
        uVar41 = (undefined2)((uint)fVar35 >> 0x10);
        fVar42 = *pfVar24 * fVar33 + 384.0;
        fVar43 = *pfVar27 * fVar33 + 384.0;
        auVar48._0_4_ = -(uint)(0x43c07fff < (int)fVar10);
        auVar48._4_4_ = -(uint)(0x43c07fff < (int)fVar11);
        auVar48._8_4_ = -(uint)(0x43c07fff < (int)fVar45);
        auVar48._12_4_ = -(uint)(0x43c07fff < (int)fVar46);
        uVar12 = SUB42(fVar37,0) ^ (SUB42(fVar37,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar37);
        uVar13 = SUB42(fVar38,0) ^ (SUB42(fVar38,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar38);
        uVar14 = SUB42(fVar39,0) ^ (SUB42(fVar39,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar39);
        uVar15 = SUB42(fVar40,0) ^ (SUB42(fVar40,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar40);
        auVar47._0_4_ = -(uint)((int)fVar10 < 0x43bf8000);
        auVar47._4_4_ = -(uint)((int)fVar11 < 0x43bf8000);
        auVar47._8_4_ = -(uint)((int)fVar45 < 0x43bf8000);
        auVar47._12_4_ = -(uint)((int)fVar46 < 0x43bf8000);
        auVar51._0_4_ = -(uint)(0x43c07fff < (int)fVar34);
        auVar51._4_4_ = -(uint)(0x43c07fff < (int)fVar35);
        auVar51._8_4_ = -(uint)(0x43c07fff < (int)fVar42);
        auVar51._12_4_ = -(uint)(0x43c07fff < (int)fVar43);
        auVar4._8_4_ = 0x7fff;
        auVar4._0_8_ = 0x7fff00007fff;
        auVar4._12_4_ = 0x7fff;
        auVar9._4_2_ = SUB42(fVar11,0);
        auVar9._0_4_ = fVar10;
        auVar9._6_2_ = uVar44;
        auVar9._8_4_ = fVar45;
        auVar9._12_4_ = fVar46;
        auVar49._4_2_ = SUB42(fVar11,0);
        auVar49._0_4_ = fVar10;
        auVar49._6_2_ = uVar44;
        auVar49._8_4_ = fVar45;
        auVar49._12_4_ = fVar46;
        auVar49 = auVar49 ^ (auVar9 ^ auVar4) & auVar48;
        auVar50._0_4_ = -(uint)((int)fVar34 < 0x43bf8000);
        auVar50._4_4_ = -(uint)((int)fVar35 < 0x43bf8000);
        auVar50._8_4_ = -(uint)((int)fVar42 < 0x43bf8000);
        auVar50._12_4_ = -(uint)((int)fVar43 < 0x43bf8000);
        auVar5._8_4_ = 0x7fff;
        auVar5._0_8_ = 0x7fff00007fff;
        auVar5._12_4_ = 0x7fff;
        auVar8._4_2_ = SUB42(fVar35,0);
        auVar8._0_4_ = fVar34;
        auVar8._6_2_ = uVar41;
        auVar8._8_4_ = fVar42;
        auVar8._12_4_ = fVar43;
        auVar52._4_2_ = SUB42(fVar35,0);
        auVar52._0_4_ = fVar34;
        auVar52._6_2_ = uVar41;
        auVar52._8_4_ = fVar42;
        auVar52._12_4_ = fVar43;
        auVar52 = auVar52 ^ (auVar8 ^ auVar5) & auVar51;
        auVar6._8_4_ = 0x8000;
        auVar6._0_8_ = 0x800000008000;
        auVar6._12_4_ = 0x8000;
        auVar49 = auVar49 ^ (auVar49 ^ auVar6) & auVar47;
        auVar7._8_4_ = 0x8000;
        auVar7._0_8_ = 0x800000008000;
        auVar7._12_4_ = 0x8000;
        auVar52 = auVar52 ^ (auVar52 ^ auVar7) & auVar50;
        *param_1 = uVar12 ^ (uVar12 ^ 0x8000) & -(ushort)((int)fVar37 < 0x43bf8000);
        param_1[1] = auVar49._0_2_;
        param_1[2] = auVar52._0_2_;
        param_1[3] = uVar13 ^ (uVar13 ^ 0x8000) & -(ushort)((int)fVar38 < 0x43bf8000);
        param_1[4] = auVar49._4_2_;
        param_1[5] = auVar52._4_2_;
        param_1[6] = uVar14 ^ (uVar14 ^ 0x8000) & -(ushort)((int)fVar39 < 0x43bf8000);
        param_1[7] = auVar49._8_2_;
        param_1[8] = auVar52._8_2_;
        param_1[9] = uVar15 ^ (uVar15 ^ 0x8000) & -(ushort)((int)fVar40 < 0x43bf8000);
        param_1[10] = auVar49._12_2_;
        param_1[0xb] = auVar52._12_2_;
        param_1 = param_1 + 0xc;
      } while (uVar29 != 0);
      bVar16 = uVar28 == param_2;
      param_2 = param_2 - uVar28;
      param_3 = pfVar1;
      param_1 = psVar2;
      if (bVar16) {
        return;
      }
    }
    do {
      fVar35 = *param_3 * fVar33 + 384.0;
      fVar34 = 4.59163e-41;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      *param_1 = sVar3;
      fVar35 = param_3[1] * fVar33 + 384.0;
      fVar34 = 4.59163e-41;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      param_1[1] = sVar3;
      fVar35 = param_3[2] * fVar33 + 384.0;
      fVar34 = 4.59163e-41;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      param_2 = param_2 - 1;
      param_1[2] = sVar3;
      param_3 = param_3 + 3;
      param_1 = param_1 + 3;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar34 = *param_3;
      if (fVar34 <= -16.0) {
        iVar30 = -0x80000000;
      }
      else if (16.0 <= fVar34) {
        iVar30 = 0x7fffffff;
      }
      else {
        uVar36 = 0x3fe00000;
        if (fVar34 * 1.3421773e+08 <= 0.0) {
          uVar36 = 0xbfe00000;
        }
        iVar30 = (int)((double)((ulong)uVar36 << 0x20) + (double)(fVar34 * 1.3421773e+08));
      }
      fVar35 = fVar34 * fVar33 + 384.0;
      fVar34 = 4.59163e-41;
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
        uVar36 = 0x3fe00000;
        if (fVar34 * 1.3421773e+08 <= 0.0) {
          uVar36 = 0xbfe00000;
        }
        iVar31 = (int)((double)((ulong)uVar36 << 0x20) + (double)(fVar34 * 1.3421773e+08));
      }
      fVar35 = fVar34 * fVar33 + 384.0;
      fVar34 = 4.59163e-41;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      param_1[1] = sVar3;
      fVar34 = param_3[2];
      if (fVar34 <= -16.0) {
        iVar32 = -0x80000000;
      }
      else if (16.0 <= fVar34) {
        iVar32 = 0x7fffffff;
      }
      else {
        uVar36 = 0x3fe00000;
        if (fVar34 * 1.3421773e+08 <= 0.0) {
          uVar36 = 0xbfe00000;
        }
        iVar32 = (int)((double)((ulong)uVar36 << 0x20) + (double)(fVar34 * 1.3421773e+08));
      }
      fVar35 = fVar34 * fVar33 + 384.0;
      fVar34 = 4.59163e-41;
      if ((int)fVar35 < 0x43c08000) {
        fVar34 = fVar35;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar35) {
        sVar3 = SUB42(fVar34,0);
      }
      param_1[2] = sVar3;
      param_3 = param_3 + 3;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + ((iVar32 + iVar31 + iVar30) / 3 >> 0xc) * (int)param_6;
      param_1 = param_1 + 3;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

