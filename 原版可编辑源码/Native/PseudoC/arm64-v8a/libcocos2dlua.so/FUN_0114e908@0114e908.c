
void FUN_0114e908(undefined8 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint3 uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  short sVar20;
  ushort uVar21;
  short sVar22;
  short sVar23;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar29;
  short sVar30;
  short sVar31;
  short sVar32;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  
  bVar5 = *(byte *)((long)param_1 + -0x21);
  bVar1 = *(byte *)((long)param_1 + -1);
  uVar7 = param_1[-3];
  uVar21 = (ushort)((ulong)uVar7 >> 0x30);
  uVar6 = param_1[-4];
  bVar2 = *(byte *)((long)param_1 + 0x1f);
  bVar3 = *(byte *)((long)param_1 + 0x3f);
  bVar4 = *(byte *)((long)param_1 + 0x5f);
  sVar23 = (ushort)(byte)uVar6 - (ushort)bVar5;
  sVar26 = (ushort)(byte)((ulong)uVar6 >> 8) - (ushort)bVar5;
  sVar27 = (ushort)(byte)((ulong)uVar6 >> 0x10) - (ushort)bVar5;
  sVar28 = (ushort)(byte)((ulong)uVar6 >> 0x18) - (ushort)bVar5;
  sVar29 = (ushort)(byte)((ulong)uVar6 >> 0x20) - (ushort)bVar5;
  sVar30 = (ushort)(byte)((ulong)uVar6 >> 0x28) - (ushort)bVar5;
  sVar31 = (ushort)(byte)((ulong)uVar6 >> 0x30) - (ushort)bVar5;
  sVar32 = (ushort)(byte)((ulong)uVar6 >> 0x38) - (ushort)bVar5;
  sVar14 = (ushort)(byte)uVar7 - (ushort)bVar5;
  sVar15 = (ushort)(byte)((ulong)uVar7 >> 8) - (ushort)bVar5;
  sVar16 = (ushort)(byte)((ulong)uVar7 >> 0x10) - (ushort)bVar5;
  sVar17 = (ushort)(byte)((ulong)uVar7 >> 0x18) - (ushort)bVar5;
  sVar18 = (ushort)(byte)((ulong)uVar7 >> 0x20) - (ushort)bVar5;
  sVar19 = (ushort)(byte)((ulong)uVar7 >> 0x28) - (ushort)bVar5;
  sVar20 = (uVar21 & 0xff) - (ushort)bVar5;
  sVar22 = (uVar21 >> 8) - (ushort)bVar5;
  auVar33._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar1,
                CONCAT24(sVar27 + (ushort)bVar1,
                         CONCAT22(sVar26 + (ushort)bVar1,sVar23 + (ushort)bVar1)));
  auVar33._8_2_ = sVar29 + (ushort)bVar1;
  auVar33._10_2_ = sVar30 + (ushort)bVar1;
  auVar33._12_2_ = sVar31 + (ushort)bVar1;
  auVar33._14_2_ = sVar32 + (ushort)bVar1;
  auVar50._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar2,
                CONCAT24(sVar27 + (ushort)bVar2,
                         CONCAT22(sVar26 + (ushort)bVar2,sVar23 + (ushort)bVar2)));
  auVar50._8_2_ = sVar29 + (ushort)bVar2;
  auVar50._10_2_ = sVar30 + (ushort)bVar2;
  auVar50._12_2_ = sVar31 + (ushort)bVar2;
  auVar50._14_2_ = sVar32 + (ushort)bVar2;
  auVar59._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar3,
                CONCAT24(sVar27 + (ushort)bVar3,
                         CONCAT22(sVar26 + (ushort)bVar3,sVar23 + (ushort)bVar3)));
  auVar59._8_2_ = sVar29 + (ushort)bVar3;
  auVar59._10_2_ = sVar30 + (ushort)bVar3;
  auVar59._12_2_ = sVar31 + (ushort)bVar3;
  auVar59._14_2_ = sVar32 + (ushort)bVar3;
  auVar67._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar4,
                CONCAT24(sVar27 + (ushort)bVar4,
                         CONCAT22(sVar26 + (ushort)bVar4,sVar23 + (ushort)bVar4)));
  auVar67._8_2_ = sVar29 + (ushort)bVar4;
  auVar67._10_2_ = sVar30 + (ushort)bVar4;
  auVar67._12_2_ = sVar31 + (ushort)bVar4;
  auVar67._14_2_ = sVar32 + (ushort)bVar4;
  uVar13 = CONCAT12(bVar3,CONCAT11(bVar3,bVar3)) & 0xff00ff;
  auVar39._0_2_ = sVar14 + (short)uVar13;
  auVar39._2_2_ = sVar15 + (ushort)(byte)(uVar13 >> 0x10);
  auVar39._4_2_ = sVar16 + (ushort)bVar3;
  auVar39._6_2_ = sVar17 + (ushort)bVar3;
  auVar39._8_2_ = sVar18 + (ushort)bVar3;
  auVar39._10_2_ = sVar19 + (ushort)bVar3;
  auVar39._12_2_ = sVar20 + (ushort)bVar3;
  auVar39._14_2_ = sVar22 + (ushort)bVar3;
  uVar13 = CONCAT12(bVar4,CONCAT11(bVar4,bVar4)) & 0xff00ff;
  auVar43._0_2_ = sVar14 + (short)uVar13;
  auVar43._2_2_ = sVar15 + (ushort)(byte)(uVar13 >> 0x10);
  auVar43._4_2_ = sVar16 + (ushort)bVar4;
  auVar43._6_2_ = sVar17 + (ushort)bVar4;
  auVar43._8_2_ = sVar18 + (ushort)bVar4;
  auVar43._10_2_ = sVar19 + (ushort)bVar4;
  auVar43._12_2_ = sVar20 + (ushort)bVar4;
  auVar43._14_2_ = sVar22 + (ushort)bVar4;
  auVar34._8_8_ = auVar33._8_8_;
  auVar34._0_8_ = NEON_sqxtun(auVar33._0_8_,auVar33,2);
  auVar51._8_8_ = auVar50._8_8_;
  auVar51._0_8_ = NEON_sqxtun(auVar50._0_8_,auVar50,2);
  auVar60._8_8_ = auVar59._8_8_;
  auVar60._0_8_ = NEON_sqxtun(auVar59._0_8_,auVar59,2);
  auVar68._8_8_ = auVar67._8_8_;
  auVar68._0_8_ = NEON_sqxtun(auVar67._0_8_,auVar67,2);
  auVar52[2] = (char)(sVar15 + (ushort)bVar1);
  auVar52._0_2_ = sVar14 + (ushort)bVar1;
  auVar52[3] = (char)((ushort)(sVar15 + (ushort)bVar1) >> 8);
  auVar52[4] = (char)(sVar16 + (ushort)bVar1);
  auVar52[5] = (char)((ushort)(sVar16 + (ushort)bVar1) >> 8);
  auVar52[6] = (char)(sVar17 + (ushort)bVar1);
  auVar52[7] = (char)((ushort)(sVar17 + (ushort)bVar1) >> 8);
  auVar52._8_2_ = sVar18 + (ushort)bVar1;
  auVar52._10_2_ = sVar19 + (ushort)bVar1;
  auVar52._12_2_ = sVar20 + (ushort)bVar1;
  auVar52._14_2_ = sVar22 + (ushort)bVar1;
  auVar35 = NEON_sqxtun2(auVar34,auVar52,2);
  auVar9[2] = (char)(sVar15 + (ushort)bVar2);
  auVar9._0_2_ = sVar14 + (ushort)bVar2;
  auVar9[3] = (char)((ushort)(sVar15 + (ushort)bVar2) >> 8);
  auVar9[4] = (char)(sVar16 + (ushort)bVar2);
  auVar9[5] = (char)((ushort)(sVar16 + (ushort)bVar2) >> 8);
  auVar9[6] = (char)(sVar17 + (ushort)bVar2);
  auVar9[7] = (char)((ushort)(sVar17 + (ushort)bVar2) >> 8);
  auVar9._8_2_ = sVar18 + (ushort)bVar2;
  auVar9._10_2_ = sVar19 + (ushort)bVar2;
  auVar9._12_2_ = sVar20 + (ushort)bVar2;
  auVar9._14_2_ = sVar22 + (ushort)bVar2;
  auVar52 = NEON_sqxtun2(auVar51,auVar9,2);
  auVar61 = NEON_sqxtun2(auVar60,auVar39,2);
  auVar69 = NEON_sqxtun2(auVar68,auVar43,2);
  param_1[1] = auVar35._8_8_;
  *param_1 = auVar35._0_8_;
  param_1[5] = auVar52._8_8_;
  param_1[4] = auVar52._0_8_;
  param_1[9] = auVar61._8_8_;
  param_1[8] = auVar61._0_8_;
  param_1[0xd] = auVar69._8_8_;
  param_1[0xc] = auVar69._0_8_;
  bVar1 = *(byte *)((long)param_1 + 0x7f);
  bVar2 = *(byte *)((long)param_1 + 0x9f);
  bVar3 = *(byte *)((long)param_1 + 0xbf);
  bVar4 = *(byte *)((long)param_1 + 0xdf);
  auVar44._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar1,
                CONCAT24(sVar27 + (ushort)bVar1,
                         CONCAT22(sVar26 + (ushort)bVar1,sVar23 + (ushort)bVar1)));
  auVar44._8_2_ = sVar29 + (ushort)bVar1;
  auVar44._10_2_ = sVar30 + (ushort)bVar1;
  auVar44._12_2_ = sVar31 + (ushort)bVar1;
  auVar44._14_2_ = sVar32 + (ushort)bVar1;
  auVar53._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar2,
                CONCAT24(sVar27 + (ushort)bVar2,
                         CONCAT22(sVar26 + (ushort)bVar2,sVar23 + (ushort)bVar2)));
  auVar53._8_2_ = sVar29 + (ushort)bVar2;
  auVar53._10_2_ = sVar30 + (ushort)bVar2;
  auVar53._12_2_ = sVar31 + (ushort)bVar2;
  auVar53._14_2_ = sVar32 + (ushort)bVar2;
  auVar62._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar3,
                CONCAT24(sVar27 + (ushort)bVar3,
                         CONCAT22(sVar26 + (ushort)bVar3,sVar23 + (ushort)bVar3)));
  auVar62._8_2_ = sVar29 + (ushort)bVar3;
  auVar62._10_2_ = sVar30 + (ushort)bVar3;
  auVar62._12_2_ = sVar31 + (ushort)bVar3;
  auVar62._14_2_ = sVar32 + (ushort)bVar3;
  auVar70._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar4,
                CONCAT24(sVar27 + (ushort)bVar4,
                         CONCAT22(sVar26 + (ushort)bVar4,sVar23 + (ushort)bVar4)));
  auVar70._8_2_ = sVar29 + (ushort)bVar4;
  auVar70._10_2_ = sVar30 + (ushort)bVar4;
  auVar70._12_2_ = sVar31 + (ushort)bVar4;
  auVar70._14_2_ = sVar32 + (ushort)bVar4;
  uVar13 = CONCAT12(bVar1,CONCAT11(bVar1,bVar1)) & 0xff00ff;
  auVar36._0_2_ = sVar14 + (short)uVar13;
  auVar36._2_2_ = sVar15 + (ushort)(byte)(uVar13 >> 0x10);
  auVar36._4_2_ = sVar16 + (ushort)bVar1;
  auVar36._6_2_ = sVar17 + (ushort)bVar1;
  auVar36._8_2_ = sVar18 + (ushort)bVar1;
  auVar36._10_2_ = sVar19 + (ushort)bVar1;
  auVar36._12_2_ = sVar20 + (ushort)bVar1;
  auVar36._14_2_ = sVar22 + (ushort)bVar1;
  uVar13 = CONCAT12(bVar4,CONCAT11(bVar4,bVar4)) & 0xff00ff;
  auVar40._0_2_ = sVar14 + (short)uVar13;
  auVar40._2_2_ = sVar15 + (ushort)(byte)(uVar13 >> 0x10);
  auVar40._4_2_ = sVar16 + (ushort)bVar4;
  auVar40._6_2_ = sVar17 + (ushort)bVar4;
  auVar40._8_2_ = sVar18 + (ushort)bVar4;
  auVar40._10_2_ = sVar19 + (ushort)bVar4;
  auVar40._12_2_ = sVar20 + (ushort)bVar4;
  auVar40._14_2_ = sVar22 + (ushort)bVar4;
  auVar45._8_8_ = auVar44._8_8_;
  auVar45._0_8_ = NEON_sqxtun(auVar44._0_8_,auVar44,2);
  auVar54._8_8_ = auVar53._8_8_;
  auVar54._0_8_ = NEON_sqxtun(auVar53._0_8_,auVar53,2);
  auVar63._8_8_ = auVar62._8_8_;
  auVar63._0_8_ = NEON_sqxtun(auVar62._0_8_,auVar62,2);
  auVar71._8_8_ = auVar70._8_8_;
  auVar71._0_8_ = NEON_sqxtun(auVar70._0_8_,auVar70,2);
  auVar35 = NEON_sqxtun2(auVar45,auVar36,2);
  auVar61[2] = (char)(sVar15 + (ushort)bVar2);
  auVar61._0_2_ = sVar14 + (ushort)bVar2;
  auVar61[3] = (char)((ushort)(sVar15 + (ushort)bVar2) >> 8);
  auVar61[4] = (char)(sVar16 + (ushort)bVar2);
  auVar61[5] = (char)((ushort)(sVar16 + (ushort)bVar2) >> 8);
  auVar61[6] = (char)(sVar17 + (ushort)bVar2);
  auVar61[7] = (char)((ushort)(sVar17 + (ushort)bVar2) >> 8);
  auVar61._8_2_ = sVar18 + (ushort)bVar2;
  auVar61._10_2_ = sVar19 + (ushort)bVar2;
  auVar61._12_2_ = sVar20 + (ushort)bVar2;
  auVar61._14_2_ = sVar22 + (ushort)bVar2;
  auVar52 = NEON_sqxtun2(auVar54,auVar61,2);
  auVar10[2] = (char)(sVar15 + (ushort)bVar3);
  auVar10._0_2_ = sVar14 + (ushort)bVar3;
  auVar10[3] = (char)((ushort)(sVar15 + (ushort)bVar3) >> 8);
  auVar10[4] = (char)(sVar16 + (ushort)bVar3);
  auVar10[5] = (char)((ushort)(sVar16 + (ushort)bVar3) >> 8);
  auVar10[6] = (char)(sVar17 + (ushort)bVar3);
  auVar10[7] = (char)((ushort)(sVar17 + (ushort)bVar3) >> 8);
  auVar10._8_2_ = sVar18 + (ushort)bVar3;
  auVar10._10_2_ = sVar19 + (ushort)bVar3;
  auVar10._12_2_ = sVar20 + (ushort)bVar3;
  auVar10._14_2_ = sVar22 + (ushort)bVar3;
  auVar61 = NEON_sqxtun2(auVar63,auVar10,2);
  auVar69 = NEON_sqxtun2(auVar71,auVar40,2);
  param_1[0x11] = auVar35._8_8_;
  param_1[0x10] = auVar35._0_8_;
  param_1[0x15] = auVar52._8_8_;
  param_1[0x14] = auVar52._0_8_;
  param_1[0x19] = auVar61._8_8_;
  param_1[0x18] = auVar61._0_8_;
  param_1[0x1d] = auVar69._8_8_;
  param_1[0x1c] = auVar69._0_8_;
  bVar1 = *(byte *)((long)param_1 + 0xff);
  bVar2 = *(byte *)((long)param_1 + 0x11f);
  bVar3 = *(byte *)((long)param_1 + 0x13f);
  bVar4 = *(byte *)((long)param_1 + 0x15f);
  auVar46._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar1,
                CONCAT24(sVar27 + (ushort)bVar1,
                         CONCAT22(sVar26 + (ushort)bVar1,sVar23 + (ushort)bVar1)));
  auVar46._8_2_ = sVar29 + (ushort)bVar1;
  auVar46._10_2_ = sVar30 + (ushort)bVar1;
  auVar46._12_2_ = sVar31 + (ushort)bVar1;
  auVar46._14_2_ = sVar32 + (ushort)bVar1;
  auVar55._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar2,
                CONCAT24(sVar27 + (ushort)bVar2,
                         CONCAT22(sVar26 + (ushort)bVar2,sVar23 + (ushort)bVar2)));
  auVar55._8_2_ = sVar29 + (ushort)bVar2;
  auVar55._10_2_ = sVar30 + (ushort)bVar2;
  auVar55._12_2_ = sVar31 + (ushort)bVar2;
  auVar55._14_2_ = sVar32 + (ushort)bVar2;
  auVar64._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar3,
                CONCAT24(sVar27 + (ushort)bVar3,
                         CONCAT22(sVar26 + (ushort)bVar3,sVar23 + (ushort)bVar3)));
  auVar64._8_2_ = sVar29 + (ushort)bVar3;
  auVar64._10_2_ = sVar30 + (ushort)bVar3;
  auVar64._12_2_ = sVar31 + (ushort)bVar3;
  auVar64._14_2_ = sVar32 + (ushort)bVar3;
  auVar72._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar4,
                CONCAT24(sVar27 + (ushort)bVar4,
                         CONCAT22(sVar26 + (ushort)bVar4,sVar23 + (ushort)bVar4)));
  auVar72._8_2_ = sVar29 + (ushort)bVar4;
  auVar72._10_2_ = sVar30 + (ushort)bVar4;
  auVar72._12_2_ = sVar31 + (ushort)bVar4;
  auVar72._14_2_ = sVar32 + (ushort)bVar4;
  uVar13 = CONCAT12(bVar1,CONCAT11(bVar1,bVar1)) & 0xff00ff;
  auVar37._0_2_ = sVar14 + (short)uVar13;
  auVar37._2_2_ = sVar15 + (ushort)(byte)(uVar13 >> 0x10);
  auVar37._4_2_ = sVar16 + (ushort)bVar1;
  auVar37._6_2_ = sVar17 + (ushort)bVar1;
  auVar37._8_2_ = sVar18 + (ushort)bVar1;
  auVar37._10_2_ = sVar19 + (ushort)bVar1;
  auVar37._12_2_ = sVar20 + (ushort)bVar1;
  auVar37._14_2_ = sVar22 + (ushort)bVar1;
  uVar13 = CONCAT12(bVar4,CONCAT11(bVar4,bVar4)) & 0xff00ff;
  auVar41._0_2_ = sVar14 + (short)uVar13;
  auVar41._2_2_ = sVar15 + (ushort)(byte)(uVar13 >> 0x10);
  auVar41._4_2_ = sVar16 + (ushort)bVar4;
  auVar41._6_2_ = sVar17 + (ushort)bVar4;
  auVar41._8_2_ = sVar18 + (ushort)bVar4;
  auVar41._10_2_ = sVar19 + (ushort)bVar4;
  auVar41._12_2_ = sVar20 + (ushort)bVar4;
  auVar41._14_2_ = sVar22 + (ushort)bVar4;
  auVar47._8_8_ = auVar46._8_8_;
  auVar47._0_8_ = NEON_sqxtun(auVar46._0_8_,auVar46,2);
  auVar56._8_8_ = auVar55._8_8_;
  auVar56._0_8_ = NEON_sqxtun(auVar55._0_8_,auVar55,2);
  auVar65._8_8_ = auVar64._8_8_;
  auVar65._0_8_ = NEON_sqxtun(auVar64._0_8_,auVar64,2);
  auVar73._8_8_ = auVar72._8_8_;
  auVar73._0_8_ = NEON_sqxtun(auVar72._0_8_,auVar72,2);
  auVar35 = NEON_sqxtun2(auVar47,auVar37,2);
  auVar69[2] = (char)(sVar15 + (ushort)bVar2);
  auVar69._0_2_ = sVar14 + (ushort)bVar2;
  auVar69[3] = (char)((ushort)(sVar15 + (ushort)bVar2) >> 8);
  auVar69[4] = (char)(sVar16 + (ushort)bVar2);
  auVar69[5] = (char)((ushort)(sVar16 + (ushort)bVar2) >> 8);
  auVar69[6] = (char)(sVar17 + (ushort)bVar2);
  auVar69[7] = (char)((ushort)(sVar17 + (ushort)bVar2) >> 8);
  auVar69._8_2_ = sVar18 + (ushort)bVar2;
  auVar69._10_2_ = sVar19 + (ushort)bVar2;
  auVar69._12_2_ = sVar20 + (ushort)bVar2;
  auVar69._14_2_ = sVar22 + (ushort)bVar2;
  auVar52 = NEON_sqxtun2(auVar56,auVar69,2);
  auVar11[2] = (char)(sVar15 + (ushort)bVar3);
  auVar11._0_2_ = sVar14 + (ushort)bVar3;
  auVar11[3] = (char)((ushort)(sVar15 + (ushort)bVar3) >> 8);
  auVar11[4] = (char)(sVar16 + (ushort)bVar3);
  auVar11[5] = (char)((ushort)(sVar16 + (ushort)bVar3) >> 8);
  auVar11[6] = (char)(sVar17 + (ushort)bVar3);
  auVar11[7] = (char)((ushort)(sVar17 + (ushort)bVar3) >> 8);
  auVar11._8_2_ = sVar18 + (ushort)bVar3;
  auVar11._10_2_ = sVar19 + (ushort)bVar3;
  auVar11._12_2_ = sVar20 + (ushort)bVar3;
  auVar11._14_2_ = sVar22 + (ushort)bVar3;
  auVar61 = NEON_sqxtun2(auVar65,auVar11,2);
  auVar69 = NEON_sqxtun2(auVar73,auVar41,2);
  param_1[0x21] = auVar35._8_8_;
  param_1[0x20] = auVar35._0_8_;
  param_1[0x25] = auVar52._8_8_;
  param_1[0x24] = auVar52._0_8_;
  param_1[0x29] = auVar61._8_8_;
  param_1[0x28] = auVar61._0_8_;
  param_1[0x2d] = auVar69._8_8_;
  param_1[0x2c] = auVar69._0_8_;
  bVar1 = *(byte *)((long)param_1 + 0x17f);
  bVar2 = *(byte *)((long)param_1 + 0x19f);
  bVar3 = *(byte *)((long)param_1 + 0x1bf);
  bVar4 = *(byte *)((long)param_1 + 0x1df);
  auVar42._8_8_ = auVar41._8_8_;
  auVar48._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar1,
                CONCAT24(sVar27 + (ushort)bVar1,
                         CONCAT22(sVar26 + (ushort)bVar1,sVar23 + (ushort)bVar1)));
  auVar48._8_2_ = sVar29 + (ushort)bVar1;
  auVar48._10_2_ = sVar30 + (ushort)bVar1;
  auVar48._12_2_ = sVar31 + (ushort)bVar1;
  auVar48._14_2_ = sVar32 + (ushort)bVar1;
  auVar57._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar2,
                CONCAT24(sVar27 + (ushort)bVar2,
                         CONCAT22(sVar26 + (ushort)bVar2,sVar23 + (ushort)bVar2)));
  auVar57._8_2_ = sVar29 + (ushort)bVar2;
  auVar57._10_2_ = sVar30 + (ushort)bVar2;
  auVar57._12_2_ = sVar31 + (ushort)bVar2;
  auVar57._14_2_ = sVar32 + (ushort)bVar2;
  auVar66._0_2_ = sVar23 + (ushort)bVar3;
  auVar66._2_2_ = sVar26 + (ushort)bVar3;
  auVar66._4_2_ = sVar27 + (ushort)bVar3;
  auVar66._6_2_ = sVar28 + (ushort)bVar3;
  auVar66._8_2_ = sVar29 + (ushort)bVar3;
  auVar66._10_2_ = sVar30 + (ushort)bVar3;
  auVar66._12_2_ = sVar31 + (ushort)bVar3;
  auVar66._14_2_ = sVar32 + (ushort)bVar3;
  auVar24._0_8_ =
       CONCAT26(sVar28 + (ushort)bVar4,
                CONCAT24(sVar27 + (ushort)bVar4,
                         CONCAT22(sVar26 + (ushort)bVar4,sVar23 + (ushort)bVar4)));
  auVar24._8_2_ = sVar29 + (ushort)bVar4;
  auVar24._10_2_ = sVar30 + (ushort)bVar4;
  auVar24._12_2_ = sVar31 + (ushort)bVar4;
  auVar24._14_2_ = sVar32 + (ushort)bVar4;
  uVar13 = CONCAT12(bVar1,CONCAT11(bVar1,bVar1)) & 0xff00ff;
  auVar38._0_2_ = sVar14 + (short)uVar13;
  auVar38._2_2_ = sVar15 + (ushort)(byte)(uVar13 >> 0x10);
  auVar38._4_2_ = sVar16 + (ushort)bVar1;
  auVar38._6_2_ = sVar17 + (ushort)bVar1;
  auVar38._8_2_ = sVar18 + (ushort)bVar1;
  auVar38._10_2_ = sVar19 + (ushort)bVar1;
  auVar38._12_2_ = sVar20 + (ushort)bVar1;
  auVar38._14_2_ = sVar22 + (ushort)bVar1;
  uVar13 = CONCAT12(bVar4,CONCAT11(bVar4,bVar4)) & 0xff00ff;
  auVar42._0_8_ =
       NEON_sqxtun(CONCAT17(bVar4,CONCAT16(bVar4,CONCAT15(bVar4,CONCAT14(bVar4,CONCAT13(bVar4,
                                                  CONCAT12(bVar4,CONCAT11(bVar4,bVar4))))))),auVar48
                   ,2);
  auVar49._8_8_ = auVar48._8_8_;
  auVar49._0_8_ = NEON_sqxtun(auVar48._0_8_,auVar57,2);
  auVar58._8_8_ = auVar57._8_8_;
  auVar58._0_8_ = NEON_sqxtun(auVar57._0_8_,auVar66,2);
  auVar25._8_8_ = auVar24._8_8_;
  auVar25._0_8_ = NEON_sqxtun(auVar24._0_8_,auVar24,2);
  auVar52 = NEON_sqxtun2(auVar42,auVar38,2);
  auVar8[2] = (char)(sVar15 + (ushort)bVar2);
  auVar8._0_2_ = sVar14 + (ushort)bVar2;
  auVar8[3] = (char)((ushort)(sVar15 + (ushort)bVar2) >> 8);
  auVar8[4] = (char)(sVar16 + (ushort)bVar2);
  auVar8[5] = (char)((ushort)(sVar16 + (ushort)bVar2) >> 8);
  auVar8[6] = (char)(sVar17 + (ushort)bVar2);
  auVar8[7] = (char)((ushort)(sVar17 + (ushort)bVar2) >> 8);
  auVar8._8_2_ = sVar18 + (ushort)bVar2;
  auVar8._10_2_ = sVar19 + (ushort)bVar2;
  auVar8._12_2_ = sVar20 + (ushort)bVar2;
  auVar8._14_2_ = sVar22 + (ushort)bVar2;
  auVar61 = NEON_sqxtun2(auVar49,auVar8,2);
  auVar12[2] = (char)(sVar15 + (ushort)bVar3);
  auVar12._0_2_ = sVar14 + (ushort)bVar3;
  auVar12[3] = (char)((ushort)(sVar15 + (ushort)bVar3) >> 8);
  auVar12[4] = (char)(sVar16 + (ushort)bVar3);
  auVar12[5] = (char)((ushort)(sVar16 + (ushort)bVar3) >> 8);
  auVar12[6] = (char)(sVar17 + (ushort)bVar3);
  auVar12[7] = (char)((ushort)(sVar17 + (ushort)bVar3) >> 8);
  auVar12._8_2_ = sVar18 + (ushort)bVar3;
  auVar12._10_2_ = sVar19 + (ushort)bVar3;
  auVar12._12_2_ = sVar20 + (ushort)bVar3;
  auVar12._14_2_ = sVar22 + (ushort)bVar3;
  auVar69 = NEON_sqxtun2(auVar58,auVar12,2);
  auVar35._2_2_ = sVar15 + (ushort)(byte)(uVar13 >> 0x10);
  auVar35._0_2_ = sVar14 + (short)uVar13;
  auVar35._4_2_ = sVar16 + (ushort)bVar4;
  auVar35._6_2_ = sVar17 + (ushort)bVar4;
  auVar35._8_2_ = sVar18 + (ushort)bVar4;
  auVar35._10_2_ = sVar19 + (ushort)bVar4;
  auVar35._12_2_ = sVar20 + (ushort)bVar4;
  auVar35._14_2_ = sVar22 + (ushort)bVar4;
  auVar35 = NEON_sqxtun2(auVar25,auVar35,2);
  param_1[0x31] = auVar52._8_8_;
  param_1[0x30] = auVar52._0_8_;
  param_1[0x35] = auVar61._8_8_;
  param_1[0x34] = auVar61._0_8_;
  param_1[0x39] = auVar69._8_8_;
  param_1[0x38] = auVar69._0_8_;
  param_1[0x3d] = auVar35._8_8_;
  param_1[0x3c] = auVar35._0_8_;
  return;
}

