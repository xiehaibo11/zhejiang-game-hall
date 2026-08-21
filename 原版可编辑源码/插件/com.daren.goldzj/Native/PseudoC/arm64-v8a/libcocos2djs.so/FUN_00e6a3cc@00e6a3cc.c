
int FUN_00e6a3cc(undefined8 param_1,long param_2,undefined8 *param_3)

{
  ulong uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  short *psVar15;
  short *psVar30;
  undefined8 *puVar45;
  long lVar46;
  ulong uVar47;
  int *piVar48;
  ulong uVar49;
  short *psVar50;
  ulong uVar51;
  ulong uVar52;
  int *piVar53;
  long lVar54;
  short *psVar55;
  short sVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  short sVar66;
  int local_34;
  short *psVar16;
  short *psVar17;
  short *psVar18;
  short *psVar19;
  short *psVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  short *psVar24;
  short *psVar25;
  short *psVar26;
  short *psVar27;
  short *psVar28;
  short *psVar29;
  short *psVar31;
  short *psVar32;
  short *psVar33;
  short *psVar34;
  short *psVar35;
  short *psVar36;
  short *psVar37;
  short *psVar38;
  short *psVar39;
  short *psVar40;
  short *psVar41;
  short *psVar42;
  short *psVar43;
  short *psVar44;
  
  puVar45 = (undefined8 *)FUN_00e1388c(param_1,0xf70,&local_34);
  if (local_34 != 0) goto LAB_00e6a844;
  *puVar45 = param_1;
  *(uint *)(puVar45 + 0x35) = (uint)*(ushort *)(param_2 + 0x80);
  bVar5 = *(byte *)(param_2 + 0x84);
  uVar47 = (ulong)bVar5;
  if (bVar5 != 0) {
    uVar1 = (ulong)(bVar5 - 1) + 1;
    psVar50 = (short *)(param_2 + 0x88);
    piVar48 = (int *)(puVar45 + 0x38);
    if (3 < uVar1) {
      uVar49 = uVar47 & 3;
      lVar54 = uVar1 - uVar49;
      uVar47 = (ulong)((uint)bVar5 - (int)lVar54);
      psVar25 = psVar50 + lVar54;
      lVar46 = lVar54 * 6;
      piVar53 = piVar48;
      do {
        uVar57 = *(undefined8 *)psVar50;
        lVar54 = lVar54 + -4;
        *piVar53 = (int)(short)uVar57;
        piVar53[6] = (int)(short)((ulong)uVar57 >> 0x10);
        piVar53[0xc] = (int)(short)((ulong)uVar57 >> 0x20);
        piVar53[0x12] = (int)(short)((ulong)uVar57 >> 0x30);
        psVar50 = psVar50 + 4;
        piVar53 = piVar53 + 0x18;
      } while (lVar54 != 0);
      piVar48 = piVar48 + lVar46;
      psVar50 = psVar25;
      if ((int)uVar49 == 0) goto LAB_00e6a498;
    }
    do {
      uVar6 = (int)uVar47 - 1;
      uVar47 = (ulong)uVar6;
      *piVar48 = (int)*psVar50;
      piVar48 = piVar48 + 6;
      psVar50 = psVar50 + 1;
    } while (uVar6 != 0);
  }
LAB_00e6a498:
  *(uint *)(puVar45 + 0x34) = bVar5 + 1;
  *(uint *)(puVar45 + 2) = (uint)*(ushort *)(param_2 + 0x82);
  bVar5 = *(byte *)(param_2 + 0x85);
  uVar47 = (ulong)bVar5;
  if (bVar5 != 0) {
    uVar1 = (ulong)(bVar5 - 1) + 1;
    psVar50 = (short *)(param_2 + 0xa2);
    piVar48 = (int *)(puVar45 + 5);
    if (3 < uVar1) {
      uVar49 = uVar47 & 3;
      lVar54 = uVar1 - uVar49;
      uVar47 = (ulong)((uint)bVar5 - (int)lVar54);
      piVar48 = piVar48 + lVar54 * 6;
      psVar25 = psVar50 + lVar54;
      piVar53 = (int *)(puVar45 + 8);
      do {
        uVar57 = *(undefined8 *)psVar50;
        piVar2 = piVar53 + 6;
        piVar3 = piVar53 + 0xc;
        lVar54 = lVar54 + -4;
        piVar53[-6] = (int)(short)uVar57;
        *piVar53 = (int)(short)((ulong)uVar57 >> 0x10);
        piVar53 = piVar53 + 0x18;
        *piVar2 = (int)(short)((ulong)uVar57 >> 0x20);
        *piVar3 = (int)(short)((ulong)uVar57 >> 0x30);
        psVar50 = psVar50 + 4;
      } while (lVar54 != 0);
      psVar50 = psVar25;
      if ((int)uVar49 == 0) goto LAB_00e6a530;
    }
    do {
      uVar6 = (int)uVar47 - 1;
      uVar47 = (ulong)uVar6;
      *piVar48 = (int)*psVar50;
      piVar48 = piVar48 + 6;
      psVar50 = psVar50 + 1;
    } while (uVar6 != 0);
  }
LAB_00e6a530:
  *(uint *)(puVar45 + 1) = bVar5 + 1;
  FUN_00e6a88c(puVar45 + 0x67,*(undefined1 *)(param_2 + 8),param_2 + 0xc,
               *(undefined1 *)(param_2 + 9),param_2 + 0x28,*(undefined4 *)(param_2 + 0x7c),0);
  sVar66 = 1;
  FUN_00e6a88c(puVar45 + 0x67,*(undefined1 *)(param_2 + 10),param_2 + 0x3c,
               *(undefined1 *)(param_2 + 0xb),param_2 + 0x58,*(undefined4 *)(param_2 + 0x7c),1);
  uVar47 = (ulong)*(byte *)(param_2 + 8);
  if (uVar47 != 0) {
    uVar1 = (uVar47 - 1 >> 1) + 1;
    if (uVar1 < 0x10) {
      uVar49 = 0;
      sVar56 = 1;
    }
    else {
      uVar51 = uVar1 & 0xfffffffffffffff0;
      psVar50 = (short *)(param_2 + 0x2c);
      auVar61._8_2_ = 1;
      auVar61._0_8_ = 0x1000100010001;
      auVar61._10_2_ = 1;
      auVar61._12_2_ = 1;
      auVar61._14_2_ = 1;
      uVar49 = uVar51 << 1;
      auVar62._8_2_ = 1;
      auVar62._0_8_ = 0x1000100010001;
      auVar62._10_2_ = 1;
      auVar62._12_2_ = 1;
      auVar62._14_2_ = 1;
      uVar52 = uVar51;
      do {
        psVar55 = psVar50 + -0x10;
        sVar66 = *psVar50;
        psVar15 = psVar50 + 1;
        psVar16 = psVar50 + 2;
        psVar17 = psVar50 + 3;
        psVar18 = psVar50 + 4;
        psVar19 = psVar50 + 5;
        psVar20 = psVar50 + 6;
        psVar21 = psVar50 + 7;
        psVar22 = psVar50 + 8;
        psVar23 = psVar50 + 9;
        psVar24 = psVar50 + 10;
        psVar25 = psVar50 + 0xb;
        psVar26 = psVar50 + 0xc;
        psVar27 = psVar50 + 0xd;
        psVar28 = psVar50 + 0xe;
        psVar29 = psVar50 + 0xf;
        psVar30 = psVar50 + -0xf;
        psVar31 = psVar50 + -0xe;
        psVar32 = psVar50 + -0xd;
        psVar33 = psVar50 + -0xc;
        psVar34 = psVar50 + -0xb;
        psVar35 = psVar50 + -10;
        psVar36 = psVar50 + -9;
        psVar37 = psVar50 + -8;
        psVar38 = psVar50 + -7;
        psVar39 = psVar50 + -6;
        psVar40 = psVar50 + -5;
        psVar41 = psVar50 + -4;
        psVar42 = psVar50 + -3;
        psVar43 = psVar50 + -2;
        psVar44 = psVar50 + -1;
        uVar52 = uVar52 - 0x10;
        psVar50 = psVar50 + 0x20;
        auVar10._2_2_ = *psVar17 - *psVar16;
        auVar10._0_2_ = *psVar15 - sVar66;
        auVar10._4_2_ = *psVar19 - *psVar18;
        auVar10._6_2_ = *psVar21 - *psVar20;
        auVar10._8_2_ = *psVar23 - *psVar22;
        auVar10._10_2_ = *psVar25 - *psVar24;
        auVar10._12_2_ = *psVar27 - *psVar26;
        auVar10._14_2_ = *psVar29 - *psVar28;
        auVar62 = NEON_smax(auVar10,auVar62,2);
        auVar14._2_2_ = *psVar32 - *psVar31;
        auVar14._0_2_ = *psVar30 - *psVar55;
        auVar14._4_2_ = *psVar34 - *psVar33;
        auVar14._6_2_ = *psVar36 - *psVar35;
        auVar14._8_2_ = *psVar38 - *psVar37;
        auVar14._10_2_ = *psVar40 - *psVar39;
        auVar14._12_2_ = *psVar42 - *psVar41;
        auVar14._14_2_ = *psVar44 - *psVar43;
        auVar61 = NEON_smax(auVar14,auVar61,2);
      } while (uVar52 != 0);
      auVar61 = NEON_smax(auVar61,auVar62,2);
      sVar66 = NEON_smaxv(auVar61,2);
      sVar56 = sVar66;
      if (uVar1 == uVar51) goto LAB_00e6a624;
    }
    do {
      lVar54 = param_2 + uVar49 * 2;
      uVar49 = uVar49 + 2;
      sVar66 = *(short *)(lVar54 + 0xe) - *(short *)(lVar54 + 0xc);
      if (sVar66 <= sVar56) {
        sVar66 = sVar56;
      }
      sVar56 = sVar66;
    } while (uVar49 < uVar47);
  }
LAB_00e6a624:
  uVar47 = (ulong)*(byte *)(param_2 + 9);
  if (uVar47 != 0) {
    uVar1 = (uVar47 - 1 >> 1) + 1;
    if (uVar1 < 0x10) {
      uVar49 = 0;
    }
    else {
      uVar51 = uVar1 & 0xfffffffffffffff0;
      auVar58._0_8_ = CONCAT26(sVar66,CONCAT24(sVar66,CONCAT22(sVar66,sVar66)));
      auVar58._8_2_ = sVar66;
      auVar58._10_2_ = sVar66;
      auVar58._12_2_ = sVar66;
      auVar58._14_2_ = sVar66;
      uVar49 = uVar51 << 1;
      psVar50 = (short *)(param_2 + 0x48);
      auVar63._8_8_ = auVar58._8_8_;
      auVar63._0_8_ = auVar58._0_8_;
      uVar52 = uVar51;
      do {
        psVar55 = psVar50 + -0x10;
        sVar66 = *psVar50;
        psVar26 = psVar50 + 1;
        psVar17 = psVar50 + 2;
        psVar18 = psVar50 + 3;
        psVar29 = psVar50 + 4;
        psVar28 = psVar50 + 5;
        psVar27 = psVar50 + 6;
        psVar19 = psVar50 + 7;
        psVar20 = psVar50 + 8;
        psVar21 = psVar50 + 9;
        psVar22 = psVar50 + 10;
        psVar23 = psVar50 + 0xb;
        psVar24 = psVar50 + 0xc;
        psVar15 = psVar50 + 0xd;
        psVar16 = psVar50 + 0xe;
        psVar25 = psVar50 + 0xf;
        psVar30 = psVar50 + -0xf;
        psVar31 = psVar50 + -0xe;
        psVar32 = psVar50 + -0xd;
        psVar33 = psVar50 + -0xc;
        psVar34 = psVar50 + -0xb;
        psVar35 = psVar50 + -10;
        psVar36 = psVar50 + -9;
        psVar37 = psVar50 + -8;
        psVar38 = psVar50 + -7;
        psVar39 = psVar50 + -6;
        psVar40 = psVar50 + -5;
        psVar41 = psVar50 + -4;
        psVar42 = psVar50 + -3;
        psVar44 = psVar50 + -2;
        psVar43 = psVar50 + -1;
        uVar52 = uVar52 - 0x10;
        psVar50 = psVar50 + 0x20;
        auVar9._2_2_ = *psVar18 - *psVar17;
        auVar9._0_2_ = *psVar26 - sVar66;
        auVar9._4_2_ = *psVar28 - *psVar29;
        auVar9._6_2_ = *psVar19 - *psVar27;
        auVar9._8_2_ = *psVar21 - *psVar20;
        auVar9._10_2_ = *psVar23 - *psVar22;
        auVar9._12_2_ = *psVar15 - *psVar24;
        auVar9._14_2_ = *psVar25 - *psVar16;
        auVar63 = NEON_smax(auVar9,auVar63,2);
        auVar13._2_2_ = *psVar32 - *psVar31;
        auVar13._0_2_ = *psVar30 - *psVar55;
        auVar13._4_2_ = *psVar34 - *psVar33;
        auVar13._6_2_ = *psVar36 - *psVar35;
        auVar13._8_2_ = *psVar38 - *psVar37;
        auVar13._10_2_ = *psVar40 - *psVar39;
        auVar13._12_2_ = *psVar42 - *psVar41;
        auVar13._14_2_ = *psVar43 - *psVar44;
        auVar58 = NEON_smax(auVar13,auVar58,2);
      } while (uVar52 != 0);
      auVar61 = NEON_smax(auVar58,auVar63,2);
      sVar66 = NEON_smaxv(auVar61,2);
      if (uVar1 == uVar51) goto LAB_00e6a6c4;
    }
    do {
      lVar54 = param_2 + uVar49 * 2;
      uVar49 = uVar49 + 2;
      sVar56 = *(short *)(lVar54 + 0x2a) - *(short *)(lVar54 + 0x28);
      if (sVar56 <= sVar66) {
        sVar56 = sVar66;
      }
      sVar66 = sVar56;
    } while (uVar49 < uVar47);
  }
LAB_00e6a6c4:
  uVar47 = (ulong)*(byte *)(param_2 + 10);
  if (uVar47 != 0) {
    uVar1 = (uVar47 - 1 >> 1) + 1;
    if (uVar1 < 0x10) {
      uVar49 = 0;
    }
    else {
      uVar51 = uVar1 & 0xfffffffffffffff0;
      auVar59._0_8_ = CONCAT26(sVar66,CONCAT24(sVar66,CONCAT22(sVar66,sVar66)));
      auVar59._8_2_ = sVar66;
      auVar59._10_2_ = sVar66;
      auVar59._12_2_ = sVar66;
      auVar59._14_2_ = sVar66;
      uVar49 = uVar51 << 1;
      psVar50 = (short *)(param_2 + 0x5c);
      auVar64._8_8_ = auVar59._8_8_;
      auVar64._0_8_ = auVar59._0_8_;
      uVar52 = uVar51;
      do {
        psVar55 = psVar50 + -0x10;
        sVar66 = *psVar50;
        psVar16 = psVar50 + 1;
        psVar25 = psVar50 + 2;
        psVar26 = psVar50 + 3;
        psVar17 = psVar50 + 4;
        psVar18 = psVar50 + 5;
        psVar29 = psVar50 + 6;
        psVar28 = psVar50 + 7;
        psVar27 = psVar50 + 8;
        psVar19 = psVar50 + 9;
        psVar20 = psVar50 + 10;
        psVar21 = psVar50 + 0xb;
        psVar22 = psVar50 + 0xc;
        psVar23 = psVar50 + 0xd;
        psVar24 = psVar50 + 0xe;
        psVar15 = psVar50 + 0xf;
        psVar43 = psVar50 + -0xf;
        psVar37 = psVar50 + -0xe;
        psVar30 = psVar50 + -0xd;
        psVar31 = psVar50 + -0xc;
        psVar32 = psVar50 + -0xb;
        psVar33 = psVar50 + -10;
        psVar34 = psVar50 + -9;
        psVar35 = psVar50 + -8;
        psVar36 = psVar50 + -7;
        psVar44 = psVar50 + -6;
        psVar38 = psVar50 + -5;
        psVar39 = psVar50 + -4;
        psVar40 = psVar50 + -3;
        psVar41 = psVar50 + -2;
        psVar42 = psVar50 + -1;
        uVar52 = uVar52 - 0x10;
        psVar50 = psVar50 + 0x20;
        auVar8._2_2_ = *psVar26 - *psVar25;
        auVar8._0_2_ = *psVar16 - sVar66;
        auVar8._4_2_ = *psVar18 - *psVar17;
        auVar8._6_2_ = *psVar28 - *psVar29;
        auVar8._8_2_ = *psVar19 - *psVar27;
        auVar8._10_2_ = *psVar21 - *psVar20;
        auVar8._12_2_ = *psVar23 - *psVar22;
        auVar8._14_2_ = *psVar15 - *psVar24;
        auVar64 = NEON_smax(auVar8,auVar64,2);
        auVar12._2_2_ = *psVar30 - *psVar37;
        auVar12._0_2_ = *psVar43 - *psVar55;
        auVar12._4_2_ = *psVar32 - *psVar31;
        auVar12._6_2_ = *psVar34 - *psVar33;
        auVar12._8_2_ = *psVar36 - *psVar35;
        auVar12._10_2_ = *psVar38 - *psVar44;
        auVar12._12_2_ = *psVar40 - *psVar39;
        auVar12._14_2_ = *psVar42 - *psVar41;
        auVar59 = NEON_smax(auVar12,auVar59,2);
      } while (uVar52 != 0);
      auVar61 = NEON_smax(auVar59,auVar64,2);
      sVar66 = NEON_smaxv(auVar61,2);
      if (uVar1 == uVar51) goto LAB_00e6a764;
    }
    do {
      lVar54 = param_2 + uVar49 * 2;
      uVar49 = uVar49 + 2;
      sVar56 = *(short *)(lVar54 + 0x3e) - *(short *)(lVar54 + 0x3c);
      if (sVar56 <= sVar66) {
        sVar56 = sVar66;
      }
      sVar66 = sVar56;
    } while (uVar49 < uVar47);
  }
LAB_00e6a764:
  uVar47 = (ulong)*(byte *)(param_2 + 0xb);
  if (uVar47 != 0) {
    uVar1 = (uVar47 - 1 >> 1) + 1;
    if (uVar1 < 0x10) {
      uVar49 = 0;
    }
    else {
      uVar51 = uVar1 & 0xfffffffffffffff0;
      auVar60._0_8_ = CONCAT26(sVar66,CONCAT24(sVar66,CONCAT22(sVar66,sVar66)));
      auVar60._8_2_ = sVar66;
      auVar60._10_2_ = sVar66;
      auVar60._12_2_ = sVar66;
      auVar60._14_2_ = sVar66;
      uVar49 = uVar51 << 1;
      psVar50 = (short *)(param_2 + 0x78);
      auVar65._8_8_ = auVar60._8_8_;
      auVar65._0_8_ = auVar60._0_8_;
      uVar52 = uVar51;
      do {
        psVar55 = psVar50 + -0x10;
        sVar66 = *psVar50;
        psVar24 = psVar50 + 1;
        psVar15 = psVar50 + 2;
        psVar16 = psVar50 + 3;
        psVar19 = psVar50 + 4;
        psVar26 = psVar50 + 5;
        psVar17 = psVar50 + 6;
        psVar18 = psVar50 + 7;
        psVar29 = psVar50 + 8;
        psVar28 = psVar50 + 9;
        psVar27 = psVar50 + 10;
        psVar25 = psVar50 + 0xb;
        psVar20 = psVar50 + 0xc;
        psVar21 = psVar50 + 0xd;
        psVar22 = psVar50 + 0xe;
        psVar23 = psVar50 + 0xf;
        psVar43 = psVar50 + -0xf;
        psVar42 = psVar50 + -0xe;
        psVar41 = psVar50 + -0xd;
        psVar30 = psVar50 + -0xc;
        psVar44 = psVar50 + -0xb;
        psVar31 = psVar50 + -10;
        psVar32 = psVar50 + -9;
        psVar33 = psVar50 + -8;
        psVar34 = psVar50 + -7;
        psVar35 = psVar50 + -6;
        psVar36 = psVar50 + -5;
        psVar37 = psVar50 + -4;
        psVar38 = psVar50 + -3;
        psVar39 = psVar50 + -2;
        psVar40 = psVar50 + -1;
        uVar52 = uVar52 - 0x10;
        psVar50 = psVar50 + 0x20;
        auVar7._2_2_ = *psVar16 - *psVar15;
        auVar7._0_2_ = *psVar24 - sVar66;
        auVar7._4_2_ = *psVar26 - *psVar19;
        auVar7._6_2_ = *psVar18 - *psVar17;
        auVar7._8_2_ = *psVar28 - *psVar29;
        auVar7._10_2_ = *psVar25 - *psVar27;
        auVar7._12_2_ = *psVar21 - *psVar20;
        auVar7._14_2_ = *psVar23 - *psVar22;
        auVar65 = NEON_smax(auVar7,auVar65,2);
        auVar11._2_2_ = *psVar41 - *psVar42;
        auVar11._0_2_ = *psVar43 - *psVar55;
        auVar11._4_2_ = *psVar44 - *psVar30;
        auVar11._6_2_ = *psVar32 - *psVar31;
        auVar11._8_2_ = *psVar34 - *psVar33;
        auVar11._10_2_ = *psVar36 - *psVar35;
        auVar11._12_2_ = *psVar38 - *psVar37;
        auVar11._14_2_ = *psVar40 - *psVar39;
        auVar60 = NEON_smax(auVar11,auVar60,2);
      } while (uVar52 != 0);
      auVar61 = NEON_smax(auVar60,auVar65,2);
      sVar66 = NEON_smaxv(auVar61,2);
      if (uVar1 == uVar51) goto LAB_00e6a804;
    }
    do {
      lVar54 = param_2 + uVar49 * 2;
      uVar49 = uVar49 + 2;
      sVar56 = *(short *)(lVar54 + 0x5a) - *(short *)(lVar54 + 0x58);
      if (sVar56 <= sVar66) {
        sVar56 = sVar66;
      }
      sVar66 = sVar56;
    } while (uVar49 < uVar47);
  }
LAB_00e6a804:
  lVar46 = FT_DivFix(1000,(long)sVar66);
  lVar54 = *(long *)(param_2 + 0x70);
  if (lVar46 <= *(long *)(param_2 + 0x70)) {
    lVar54 = lVar46;
  }
  puVar45[0x1eb] = lVar54;
  *(undefined4 *)(puVar45 + 0x1ec) = *(undefined4 *)(param_2 + 0x78);
  uVar4 = *(undefined4 *)(param_2 + 0x7c);
  puVar45[0x33] = 0;
  puVar45[0x32] = 0;
  *(undefined4 *)(puVar45 + 0x1ed) = uVar4;
  puVar45[0x66] = 0;
  puVar45[0x65] = 0;
LAB_00e6a844:
  *param_3 = puVar45;
  return local_34;
}

