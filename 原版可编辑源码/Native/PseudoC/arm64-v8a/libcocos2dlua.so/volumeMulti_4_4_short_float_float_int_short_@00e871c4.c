
/* void cocos2d::experimental::volumeMulti<4, 4, short, float, float, int, short>(short*, unsigned
   long, float const*, int*, float const*, short) */

void cocos2d::experimental::volumeMulti<4,4,short,float,float,int,short>
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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  bool bVar20;
  float *pfVar21;
  ulong uVar36;
  ulong uVar37;
  short sVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  ushort uVar47;
  undefined2 uVar48;
  float fVar49;
  float fVar50;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar51 [16];
  float fVar55;
  float fVar58;
  float fVar59;
  float fVar60;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar61;
  float fVar62;
  undefined2 uVar63;
  float fVar64;
  float fVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  float *pfVar27;
  float *pfVar28;
  float *pfVar29;
  float *pfVar30;
  float *pfVar31;
  float *pfVar32;
  float *pfVar33;
  float *pfVar34;
  float *pfVar35;
  
  fVar43 = *param_5;
  if (param_4 == (int *)0x0) {
    if (3 < param_2) {
      uVar36 = param_2 & 0xfffffffffffffffc;
      pfVar1 = param_3 + uVar36 * 4;
      psVar2 = param_1 + uVar36 * 4;
      uVar37 = uVar36;
      do {
        fVar44 = *param_3;
        pfVar21 = param_3 + 1;
        pfVar22 = param_3 + 2;
        pfVar23 = param_3 + 3;
        pfVar24 = param_3 + 4;
        pfVar25 = param_3 + 5;
        pfVar26 = param_3 + 6;
        pfVar27 = param_3 + 7;
        pfVar28 = param_3 + 8;
        pfVar29 = param_3 + 9;
        pfVar30 = param_3 + 10;
        pfVar31 = param_3 + 0xb;
        pfVar32 = param_3 + 0xc;
        pfVar33 = param_3 + 0xd;
        pfVar34 = param_3 + 0xe;
        pfVar35 = param_3 + 0xf;
        param_3 = param_3 + 0x10;
        uVar37 = uVar37 - 4;
        fVar50 = fVar44 * fVar43 + 384.0;
        fVar52 = *pfVar24 * fVar43 + 384.0;
        fVar53 = *pfVar28 * fVar43 + 384.0;
        fVar54 = *pfVar32 * fVar43 + 384.0;
        fVar44 = *pfVar21 * fVar43 + 384.0;
        fVar46 = *pfVar25 * fVar43 + 384.0;
        uVar48 = (undefined2)((uint)fVar46 >> 0x10);
        fVar61 = *pfVar29 * fVar43 + 384.0;
        fVar62 = *pfVar33 * fVar43 + 384.0;
        fVar45 = *pfVar22 * fVar43 + 384.0;
        fVar49 = *pfVar26 * fVar43 + 384.0;
        uVar63 = (undefined2)((uint)fVar49 >> 0x10);
        fVar64 = *pfVar30 * fVar43 + 384.0;
        fVar65 = *pfVar34 * fVar43 + 384.0;
        fVar55 = *pfVar23 * fVar43 + 384.0;
        fVar58 = *pfVar27 * fVar43 + 384.0;
        fVar59 = *pfVar31 * fVar43 + 384.0;
        fVar60 = *pfVar35 * fVar43 + 384.0;
        auVar67._0_4_ = -(uint)(0x43c07fff < (int)fVar44);
        auVar67._4_4_ = -(uint)(0x43c07fff < (int)fVar46);
        auVar67._8_4_ = -(uint)(0x43c07fff < (int)fVar61);
        auVar67._12_4_ = -(uint)(0x43c07fff < (int)fVar62);
        uVar47 = SUB42(fVar50,0) ^ (SUB42(fVar50,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar50);
        uVar13 = SUB42(fVar52,0) ^ (SUB42(fVar52,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar52);
        uVar14 = SUB42(fVar53,0) ^ (SUB42(fVar53,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar53);
        uVar15 = SUB42(fVar54,0) ^ (SUB42(fVar54,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar54);
        auVar66._0_4_ = -(uint)((int)fVar44 < 0x43bf8000);
        auVar66._4_4_ = -(uint)((int)fVar46 < 0x43bf8000);
        auVar66._8_4_ = -(uint)((int)fVar61 < 0x43bf8000);
        auVar66._12_4_ = -(uint)((int)fVar62 < 0x43bf8000);
        auVar70._0_4_ = -(uint)(0x43c07fff < (int)fVar45);
        auVar70._4_4_ = -(uint)(0x43c07fff < (int)fVar49);
        auVar70._8_4_ = -(uint)(0x43c07fff < (int)fVar64);
        auVar70._12_4_ = -(uint)(0x43c07fff < (int)fVar65);
        auVar5._8_4_ = 0x7fff;
        auVar5._0_8_ = 0x7fff00007fff;
        auVar5._12_4_ = 0x7fff;
        auVar11._4_2_ = SUB42(fVar46,0);
        auVar11._0_4_ = fVar44;
        auVar11._6_2_ = uVar48;
        auVar11._8_4_ = fVar61;
        auVar11._12_4_ = fVar62;
        auVar68._4_2_ = SUB42(fVar46,0);
        auVar68._0_4_ = fVar44;
        auVar68._6_2_ = uVar48;
        auVar68._8_4_ = fVar61;
        auVar68._12_4_ = fVar62;
        auVar68 = auVar68 ^ (auVar11 ^ auVar5) & auVar67;
        auVar69._0_4_ = -(uint)((int)fVar45 < 0x43bf8000);
        auVar69._4_4_ = -(uint)((int)fVar49 < 0x43bf8000);
        auVar69._8_4_ = -(uint)((int)fVar64 < 0x43bf8000);
        auVar69._12_4_ = -(uint)((int)fVar65 < 0x43bf8000);
        auVar6._8_4_ = 0x7fff;
        auVar6._0_8_ = 0x7fff00007fff;
        auVar6._12_4_ = 0x7fff;
        auVar12._4_2_ = SUB42(fVar49,0);
        auVar12._0_4_ = fVar45;
        auVar12._6_2_ = uVar63;
        auVar12._8_4_ = fVar64;
        auVar12._12_4_ = fVar65;
        auVar71._4_2_ = SUB42(fVar49,0);
        auVar71._0_4_ = fVar45;
        auVar71._6_2_ = uVar63;
        auVar71._8_4_ = fVar64;
        auVar71._12_4_ = fVar65;
        auVar71 = auVar71 ^ (auVar12 ^ auVar6) & auVar70;
        uVar16 = SUB42(fVar55,0) ^ (SUB42(fVar55,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar55);
        uVar17 = SUB42(fVar58,0) ^ (SUB42(fVar58,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar58);
        uVar18 = SUB42(fVar59,0) ^ (SUB42(fVar59,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar59);
        uVar19 = SUB42(fVar60,0) ^ (SUB42(fVar60,0) ^ 0x7fff) & -(ushort)(0x43c07fff < (int)fVar60);
        auVar9._8_4_ = 0x8000;
        auVar9._0_8_ = 0x800000008000;
        auVar9._12_4_ = 0x8000;
        auVar68 = auVar68 ^ (auVar68 ^ auVar9) & auVar66;
        auVar10._8_4_ = 0x8000;
        auVar10._0_8_ = 0x800000008000;
        auVar10._12_4_ = 0x8000;
        auVar71 = auVar71 ^ (auVar71 ^ auVar10) & auVar69;
        *param_1 = uVar47 ^ (uVar47 ^ 0x8000) & -(ushort)((int)fVar50 < 0x43bf8000);
        param_1[1] = auVar68._0_2_;
        param_1[2] = auVar71._0_2_;
        param_1[3] = uVar16 ^ (uVar16 ^ 0x8000) & -(ushort)((int)fVar55 < 0x43bf8000);
        param_1[4] = uVar13 ^ (uVar13 ^ 0x8000) & -(ushort)((int)fVar52 < 0x43bf8000);
        param_1[5] = auVar68._4_2_;
        param_1[6] = auVar71._4_2_;
        param_1[7] = uVar17 ^ (uVar17 ^ 0x8000) & -(ushort)((int)fVar58 < 0x43bf8000);
        param_1[8] = uVar14 ^ (uVar14 ^ 0x8000) & -(ushort)((int)fVar53 < 0x43bf8000);
        param_1[9] = auVar68._8_2_;
        param_1[10] = auVar71._8_2_;
        param_1[0xb] = uVar18 ^ (uVar18 ^ 0x8000) & -(ushort)((int)fVar59 < 0x43bf8000);
        param_1[0xc] = uVar15 ^ (uVar15 ^ 0x8000) & -(ushort)((int)fVar54 < 0x43bf8000);
        param_1[0xd] = auVar68._12_2_;
        param_1[0xe] = auVar71._12_2_;
        param_1[0xf] = uVar19 ^ (uVar19 ^ 0x8000) & -(ushort)((int)fVar60 < 0x43bf8000);
        param_1 = param_1 + 0x10;
      } while (uVar37 != 0);
      bVar20 = uVar36 == param_2;
      param_3 = pfVar1;
      param_2 = param_2 - uVar36;
      param_1 = psVar2;
      if (bVar20) {
        return;
      }
    }
    do {
      param_2 = param_2 - 1;
      fVar44 = (float)*(undefined8 *)param_3 * fVar43 + 384.0;
      fVar46 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar43 + 384.0;
      uVar48 = (undefined2)((uint)fVar46 >> 0x10);
      fVar45 = (float)*(undefined8 *)(param_3 + 2) * fVar43 + 384.0;
      fVar49 = (float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar43 + 384.0;
      auVar56._0_4_ = -(uint)(0x43c07fff < (int)fVar44);
      auVar56._4_4_ = -(uint)(0x43c07fff < (int)fVar46);
      auVar56._8_4_ = -(uint)(0x43c07fff < (int)fVar45);
      auVar56._12_4_ = -(uint)(0x43c07fff < (int)fVar49);
      auVar51._0_4_ = -(uint)((int)fVar44 < 0x43bf8000);
      auVar51._4_4_ = -(uint)((int)fVar46 < 0x43bf8000);
      auVar51._8_4_ = -(uint)((int)fVar45 < 0x43bf8000);
      auVar51._12_4_ = -(uint)((int)fVar49 < 0x43bf8000);
      auVar4._8_4_ = 0x7fff;
      auVar4._0_8_ = 0x7fff00007fff;
      auVar4._12_4_ = 0x7fff;
      auVar8._4_2_ = SUB42(fVar46,0);
      auVar8._0_4_ = fVar44;
      auVar8._6_2_ = uVar48;
      auVar8._8_4_ = fVar45;
      auVar8._12_4_ = fVar49;
      auVar57._4_2_ = SUB42(fVar46,0);
      auVar57._0_4_ = fVar44;
      auVar57._6_2_ = uVar48;
      auVar57._8_4_ = fVar45;
      auVar57._12_4_ = fVar49;
      auVar57 = auVar57 ^ (auVar8 ^ auVar4) & auVar56;
      auVar7._8_4_ = 0x8000;
      auVar7._0_8_ = 0x800000008000;
      auVar7._12_4_ = 0x8000;
      auVar57 = auVar57 ^ (auVar57 ^ auVar7) & auVar51;
      *(ulong *)param_1 =
           CONCAT26(auVar57._12_2_,CONCAT24(auVar57._8_2_,CONCAT22(auVar57._4_2_,auVar57._0_2_)));
      param_3 = param_3 + 4;
      param_1 = param_1 + 4;
    } while (param_2 != 0);
  }
  else {
    do {
      fVar44 = *param_3;
      if (fVar44 <= -16.0) {
        iVar39 = -0x80000000;
      }
      else if (16.0 <= fVar44) {
        iVar39 = 0x7fffffff;
      }
      else {
        uVar47 = 0x3fe0;
        if (fVar44 * 1.3421773e+08 <= 0.0) {
          uVar47 = 0xbfe0;
        }
        iVar39 = (int)((double)((ulong)uVar47 << 0x30) + (double)(fVar44 * 1.3421773e+08));
      }
      fVar45 = fVar44 * fVar43 + 384.0;
      fVar44 = 4.59163e-41;
      fVar46 = fVar44;
      if ((int)fVar45 < 0x43c08000) {
        fVar46 = fVar45;
      }
      sVar38 = -0x8000;
      sVar3 = sVar38;
      if (0x43bf7fff < (int)fVar45) {
        sVar3 = SUB42(fVar46,0);
      }
      *param_1 = sVar3;
      fVar46 = param_3[1];
      if (fVar46 <= -16.0) {
        iVar40 = -0x80000000;
      }
      else if (16.0 <= fVar46) {
        iVar40 = 0x7fffffff;
      }
      else {
        uVar47 = 0x3fe0;
        if (fVar46 * 1.3421773e+08 <= 0.0) {
          uVar47 = 0xbfe0;
        }
        iVar40 = (int)((double)((ulong)uVar47 << 0x30) + (double)(fVar46 * 1.3421773e+08));
      }
      fVar45 = fVar46 * fVar43 + 384.0;
      fVar46 = fVar44;
      if ((int)fVar45 < 0x43c08000) {
        fVar46 = fVar45;
      }
      sVar3 = sVar38;
      if (0x43bf7fff < (int)fVar45) {
        sVar3 = SUB42(fVar46,0);
      }
      param_1[1] = sVar3;
      fVar46 = param_3[2];
      if (fVar46 <= -16.0) {
        iVar41 = -0x80000000;
      }
      else if (16.0 <= fVar46) {
        iVar41 = 0x7fffffff;
      }
      else {
        uVar47 = 0x3fe0;
        if (fVar46 * 1.3421773e+08 <= 0.0) {
          uVar47 = 0xbfe0;
        }
        iVar41 = (int)((double)((ulong)uVar47 << 0x30) + (double)(fVar46 * 1.3421773e+08));
      }
      fVar45 = fVar46 * fVar43 + 384.0;
      fVar46 = fVar44;
      if ((int)fVar45 < 0x43c08000) {
        fVar46 = fVar45;
      }
      if (0x43bf7fff < (int)fVar45) {
        sVar38 = SUB42(fVar46,0);
      }
      param_1[2] = sVar38;
      fVar46 = param_3[3];
      if (fVar46 <= -16.0) {
        iVar42 = -0x80000000;
      }
      else if (16.0 <= fVar46) {
        iVar42 = 0x7fffffff;
      }
      else {
        uVar47 = 0x3fe0;
        if (fVar46 * 1.3421773e+08 <= 0.0) {
          uVar47 = 0xbfe0;
        }
        iVar42 = (int)((double)((ulong)uVar47 << 0x30) + (double)(fVar46 * 1.3421773e+08));
      }
      fVar46 = fVar46 * fVar43 + 384.0;
      iVar42 = iVar42 + iVar41 + iVar40 + iVar39;
      if ((int)fVar46 < 0x43c08000) {
        fVar44 = fVar46;
      }
      sVar3 = -0x8000;
      if (0x43bf7fff < (int)fVar46) {
        sVar3 = SUB42(fVar44,0);
      }
      param_1[3] = sVar3;
      iVar39 = iVar42 + 3;
      if (-1 < iVar42) {
        iVar39 = iVar42;
      }
      param_3 = param_3 + 4;
      param_2 = param_2 - 1;
      *param_4 = *param_4 + (iVar39 >> 0xe) * (int)param_6;
      param_1 = param_1 + 4;
      param_4 = param_4 + 1;
    } while (param_2 != 0);
  }
  return;
}

