
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void cocos2d::experimental::volumeMulti<4, 6, float, short, short, int, short>(float*, unsigned
   long, short const*, int*, short const*, short) */

void cocos2d::experimental::volumeMulti<4,6,float,short,short,int,short>
               (float *param_1,ulong param_2,short *param_3,int *param_4,short *param_5,
               short param_6)

{
  short *psVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  undefined1 (*pauVar10) [16];
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  short sVar19;
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  int iVar24;
  short sVar25;
  short sVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar43 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar75 [16];
  undefined1 auVar80 [16];
  undefined1 auVar76 [16];
  undefined1 auVar81 [16];
  undefined1 auVar77 [16];
  undefined1 auVar82 [16];
  
  auVar8 = _DAT_01428010;
  auVar7 = _DAT_01427ff0;
  auVar6 = _DAT_01427fe0;
  auVar21 = _DAT_01427fd0;
  auVar22 = _DAT_01427fc0;
  fVar4 = (float)(int)*param_5;
  if (param_4 == (int *)0x0) {
    do {
      uVar20 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      auVar22._0_4_ = (int)(short)uVar20;
      auVar22._4_4_ = (int)(short)((ulong)uVar20 >> 0x10);
      auVar22._8_4_ = (int)(short)((ulong)uVar20 >> 0x20);
      auVar22._12_4_ = (int)(short)((ulong)uVar20 >> 0x30);
      auVar22 = NEON_scvtf(auVar22,4);
      param_1[2] = fVar4 * auVar22._8_4_ * 7.450581e-09;
      param_1[3] = fVar4 * auVar22._12_4_ * 7.450581e-09;
      *param_1 = fVar4 * auVar22._0_4_ * 7.450581e-09;
      param_1[1] = fVar4 * auVar22._4_4_ * 7.450581e-09;
      param_1[4] = (float)(int)param_3[4] * fVar4 * 7.450581e-09;
      psVar1 = param_3 + 5;
      param_3 = param_3 + 6;
      param_1[5] = (float)(int)*psVar1 * fVar4 * 7.450581e-09;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
  else {
    iVar3 = (int)param_6;
    if (3 < param_2) {
      uVar12 = param_2 & 0xfffffffffffffffc;
      pfVar2 = param_1 + uVar12 * 6;
      pauVar10 = (undefined1 (*) [16])param_3;
      piVar11 = param_4;
      uVar13 = uVar12;
      do {
        auVar78 = pauVar10[1];
        auVar5 = pauVar10[2];
        auVar28 = *pauVar10;
        uVar13 = uVar13 - 4;
        sVar25 = auVar5._4_2_;
        auVar45 = a64_TBL(ZEXT816(0),auVar28,auVar78,auVar22);
        auVar53 = a64_TBL(ZEXT816(0),auVar28,auVar78,auVar21);
        auVar61 = a64_TBL(ZEXT816(0),auVar28,auVar78,auVar6);
        auVar68 = a64_TBL(ZEXT816(0),auVar28,auVar78,auVar7);
        auVar29._8_8_ = 0xfffefffefffefffe;
        auVar29._0_8_ = 0xfffefffe15140908;
        auVar73 = a64_TBL(ZEXT816(0),auVar28,auVar78,auVar29);
        auVar28 = a64_TBL(ZEXT816(0),auVar28,auVar78,auVar8);
        auVar29 = NEON_ext(auVar5,auVar5,8,1);
        auVar31._0_6_ =
             (undefined6)
             CONCAT44(CONCAT22(sVar25,auVar29._4_2_),CONCAT22(auVar5._0_2_,auVar29._0_2_));
        auVar31._6_2_ = sVar25;
        auVar31._8_8_ = 0;
        sVar26 = auVar5._10_2_;
        auVar37._6_10_ = auVar29._6_10_;
        auVar37._0_4_ = auVar29._0_4_;
        auVar37._4_2_ = auVar5._2_2_;
        auVar29 = NEON_ext(auVar5,auVar31,0xe,1);
        auVar78._2_8_ = auVar68._8_8_;
        auVar78._0_2_ = sVar26;
        auVar78._10_6_ = 0;
        uVar27 = NEON_ext(auVar37._0_8_,auVar28._0_8_,4,1);
        uVar20 = NEON_ext(auVar29._0_8_,auVar73._0_8_,4,1);
        uVar27 = NEON_ext(uVar27,uVar27,4,1);
        auVar67._0_4_ = (int)auVar45._0_2_;
        auVar67._4_4_ = (int)auVar45._2_2_;
        auVar67._8_4_ = (int)auVar45._4_2_;
        auVar67._12_4_ = (int)sVar25;
        auVar32._0_4_ = (int)auVar53._0_2_;
        auVar32._4_4_ = (int)auVar53._2_2_;
        auVar32._8_4_ = (int)auVar53._4_2_;
        auVar32._12_4_ = (int)auVar5._6_2_;
        auVar41._0_4_ = (int)auVar61._0_2_;
        auVar41._4_4_ = (int)auVar61._2_2_;
        auVar41._8_4_ = (int)auVar61._4_2_;
        auVar41._12_4_ = (int)auVar5._8_2_;
        auVar46._0_4_ = (int)auVar68._0_2_;
        auVar46._4_4_ = (int)auVar68._2_2_;
        auVar46._8_4_ = (int)auVar68._4_2_;
        auVar46._12_4_ = (int)sVar26;
        uVar20 = NEON_ext(uVar20,uVar20,4,1);
        auVar29 = NEON_scvtf(auVar67,4);
        auVar28 = NEON_scvtf(auVar32,4);
        auVar42 = NEON_scvtf(auVar41,4);
        auVar47 = NEON_scvtf(auVar46,4);
        auVar54._0_4_ = (int)(short)uVar27;
        sVar14 = (short)((ulong)uVar27 >> 0x10);
        auVar54._4_4_ = (int)sVar14;
        sVar16 = (short)((ulong)uVar27 >> 0x20);
        auVar54._8_4_ = (int)sVar16;
        sVar19 = (short)((ulong)uVar27 >> 0x30);
        auVar54._12_4_ = (int)sVar19;
        auVar62._0_4_ = (int)(short)uVar20;
        sVar15 = (short)((ulong)uVar20 >> 0x10);
        auVar62._4_4_ = (int)sVar15;
        sVar17 = (short)((ulong)uVar20 >> 0x20);
        auVar62._8_4_ = (int)sVar17;
        sVar18 = (short)((ulong)uVar20 >> 0x30);
        auVar62._12_4_ = (int)sVar18;
        auVar55 = NEON_scvtf(auVar54,4);
        auVar38 = NEON_scvtf(auVar62,4);
        auVar30._0_4_ = fVar4 * auVar29._0_4_ * 7.450581e-09;
        auVar30._4_4_ = fVar4 * auVar29._4_4_ * 7.450581e-09;
        auVar30._8_4_ = fVar4 * auVar29._8_4_ * 7.450581e-09;
        auVar30._12_4_ = fVar4 * auVar29._12_4_ * 7.450581e-09;
        auVar33._0_4_ = fVar4 * auVar28._0_4_ * 7.450581e-09;
        auVar33._4_4_ = fVar4 * auVar28._4_4_ * 7.450581e-09;
        auVar33._8_4_ = fVar4 * auVar28._8_4_ * 7.450581e-09;
        auVar33._12_4_ = fVar4 * auVar28._12_4_ * 7.450581e-09;
        auVar40._0_4_ = fVar4 * auVar42._0_4_ * 7.450581e-09;
        auVar40._4_4_ = fVar4 * auVar42._4_4_ * 7.450581e-09;
        auVar40._8_4_ = fVar4 * auVar42._8_4_ * 7.450581e-09;
        auVar43._12_4_ = fVar4 * auVar42._12_4_ * 7.450581e-09;
        auVar43._0_12_ = auVar40;
        auVar48._0_4_ = fVar4 * auVar47._0_4_ * 7.450581e-09;
        auVar48._4_4_ = fVar4 * auVar47._4_4_ * 7.450581e-09;
        auVar48._8_4_ = fVar4 * auVar47._8_4_ * 7.450581e-09;
        auVar48._12_4_ = fVar4 * auVar47._12_4_ * 7.450581e-09;
        auVar56._0_4_ = fVar4 * auVar55._0_4_;
        auVar56._4_4_ = fVar4 * auVar55._4_4_;
        auVar56._8_4_ = fVar4 * auVar55._8_4_;
        auVar56._12_4_ = fVar4 * auVar55._12_4_;
        uVar23 = (int)auVar53._0_2_ + (int)auVar45._0_2_ + (int)auVar61._0_2_ + (int)auVar68._0_2_ +
                 (int)(short)uVar20 + (int)(short)uVar27;
        auVar28._0_4_ = auVar56._0_4_ * 7.450581e-09;
        auVar28._4_4_ = auVar56._4_4_ * 7.450581e-09;
        auVar28._8_4_ = auVar56._8_4_ * 7.450581e-09;
        auVar28._12_4_ = auVar56._12_4_ * 7.450581e-09;
        auVar57._4_12_ = auVar56._4_12_;
        auVar57._0_4_ = auVar40._4_4_;
        auVar59._0_8_ = auVar57._0_8_;
        auVar59._8_4_ = auVar43._12_4_;
        auVar59._12_4_ = auVar56._12_4_;
        auVar58._8_8_ = auVar59._8_8_;
        auVar58._4_4_ = auVar48._4_4_;
        auVar58._0_4_ = auVar40._4_4_;
        auVar60._0_12_ = auVar58._0_12_;
        auVar60._12_4_ = auVar48._12_4_;
        auVar63._4_12_ = auVar62._4_12_;
        auVar63._0_4_ = auVar30._4_4_;
        auVar65._0_8_ = auVar63._0_8_;
        auVar65._8_4_ = auVar30._12_4_;
        auVar65._12_4_ = auVar62._12_4_;
        auVar64._8_8_ = auVar65._8_8_;
        auVar64._4_4_ = auVar33._4_4_;
        auVar64._0_4_ = auVar30._4_4_;
        auVar66._0_12_ = auVar64._0_12_;
        auVar66._12_4_ = auVar33._12_4_;
        auVar74._4_12_ = auVar73._4_12_;
        auVar74._0_4_ = auVar40._0_4_;
        auVar76._12_4_ = auVar73._12_4_;
        auVar76._0_8_ = auVar74._0_8_;
        auVar76._8_4_ = auVar40._4_4_;
        auVar75._8_8_ = auVar76._8_8_;
        auVar75._4_4_ = auVar48._0_4_;
        auVar75._0_4_ = auVar40._0_4_;
        auVar77._0_12_ = auVar75._0_12_;
        auVar77._12_4_ = auVar48._4_4_;
        auVar39._0_4_ = fVar4 * auVar38._0_4_ * 7.450581e-09;
        auVar39._4_4_ = fVar4 * auVar38._4_4_ * 7.450581e-09;
        auVar39._8_4_ = fVar4 * auVar38._8_4_ * 7.450581e-09;
        auVar39._12_4_ = fVar4 * auVar38._12_4_ * 7.450581e-09;
        auVar69._4_12_ = SUB1612(auVar78 << 0x30,4);
        auVar69._0_4_ = auVar30._8_4_;
        auVar71._12_4_ = auVar68._12_4_;
        auVar71._0_8_ = auVar69._0_8_;
        auVar71._8_4_ = auVar30._12_4_;
        auVar70._8_8_ = auVar71._8_8_;
        auVar70._4_4_ = auVar33._8_4_;
        auVar70._0_4_ = auVar30._8_4_;
        auVar72._0_12_ = auVar70._0_12_;
        auVar72._12_4_ = auVar33._12_4_;
        auVar34._4_12_ = auVar33._4_12_;
        auVar34._0_4_ = auVar30._0_4_;
        auVar36._0_8_ = auVar34._0_8_;
        auVar36._8_4_ = auVar30._4_4_;
        auVar36._12_4_ = auVar33._12_4_;
        auVar35._8_8_ = auVar36._8_8_;
        auVar35._4_4_ = auVar33._0_4_;
        auVar35._0_4_ = auVar30._0_4_;
        auVar73._0_12_ = auVar35._0_12_;
        auVar73._12_4_ = auVar33._4_4_;
        auVar29 = NEON_ext(auVar30,auVar66,8,1);
        auVar67 = NEON_ext(auVar60,auVar43,8,1);
        auVar78 = NEON_ext(auVar43,auVar77,8,1);
        auVar44._12_4_ = auVar48._8_4_;
        auVar44._0_12_ = auVar40;
        auVar49._4_12_ = auVar48._4_12_;
        auVar49._0_4_ = auVar39._4_4_;
        auVar51._0_8_ = auVar49._0_8_;
        auVar51._8_4_ = auVar39._12_4_;
        auVar51._12_4_ = auVar48._12_4_;
        auVar50._8_8_ = auVar51._8_8_;
        auVar50._4_4_ = auVar28._4_4_;
        auVar50._0_4_ = auVar39._4_4_;
        auVar52._0_12_ = auVar50._0_12_;
        auVar52._12_4_ = auVar28._12_4_;
        iVar24 = uVar23 * 0x1000;
        auVar37 = NEON_ext(auVar78,auVar73,8,1);
        auVar79._4_12_ = auVar78._4_12_;
        auVar79._0_4_ = auVar39._0_4_;
        auVar81._12_4_ = auVar78._12_4_;
        auVar81._0_8_ = auVar79._0_8_;
        auVar81._8_4_ = auVar39._4_4_;
        auVar80._8_8_ = auVar81._8_8_;
        auVar80._4_4_ = auVar28._0_4_;
        auVar80._0_4_ = auVar39._0_4_;
        auVar82._0_12_ = auVar80._0_12_;
        auVar82._12_4_ = auVar28._4_4_;
        auVar42._4_12_ = auVar28._4_12_;
        auVar42._0_4_ = auVar39._8_4_;
        auVar55._0_8_ = auVar42._0_8_;
        auVar55._8_4_ = auVar39._12_4_;
        auVar55._12_4_ = auVar28._12_4_;
        auVar47._8_8_ = auVar55._8_8_;
        auVar47._4_4_ = auVar28._8_4_;
        auVar47._0_4_ = auVar39._8_4_;
        auVar38._0_12_ = auVar47._0_12_;
        auVar38._12_4_ = auVar28._12_4_;
        auVar28 = NEON_ext(auVar39,auVar52,8,1);
        auVar42 = NEON_ext(auVar44,auVar72,8,1);
        auVar78 = NEON_ext(auVar29,auVar82,8,1);
        auVar47 = NEON_ext(auVar72,auVar38,8,1);
        auVar29 = NEON_ext(auVar38,auVar67,8,1);
        auVar38 = NEON_ext(auVar28,auVar60,8,1);
        auVar28 = NEON_ext(auVar37,auVar37,8,1);
        auVar42 = NEON_ext(auVar42,auVar42,8,1);
        auVar78 = NEON_ext(auVar78,auVar78,8,1);
        auVar47 = NEON_ext(auVar47,auVar47,8,1);
        auVar29 = NEON_ext(auVar29,auVar29,8,1);
        auVar38 = NEON_ext(auVar38,auVar38,8,1);
        *(long *)(param_1 + 0x12) = auVar47._8_8_;
        *(long *)(param_1 + 0x10) = auVar47._0_8_;
        *(long *)(param_1 + 0x16) = auVar29._8_8_;
        *(long *)(param_1 + 0x14) = auVar29._0_8_;
        *(long *)(param_1 + 2) = auVar28._8_8_;
        *(long *)param_1 = auVar28._0_8_;
        *(long *)(param_1 + 6) = auVar78._8_8_;
        *(long *)(param_1 + 4) = auVar78._0_8_;
        *(long *)(param_1 + 10) = auVar38._8_8_;
        *(long *)(param_1 + 8) = auVar38._0_8_;
        *(long *)(param_1 + 0xe) = auVar42._8_8_;
        *(long *)(param_1 + 0xc) = auVar42._0_8_;
        param_1 = param_1 + 0x18;
        piVar11[2] = piVar11[2] +
                     ((((int)auVar53._4_2_ + (int)auVar45._4_2_ + (int)auVar61._4_2_ +
                        (int)auVar68._4_2_ + (int)sVar17 + (int)sVar16) * 0x1000) / 6 >> 0xc) *
                     iVar3;
        piVar11[3] = piVar11[3] +
                     ((((int)auVar5._6_2_ + (int)sVar25 + (int)auVar5._8_2_ + (int)sVar26 +
                        (int)sVar18 + (int)sVar19) * 0x1000) / 6 >> 0xc) * iVar3;
        *piVar11 = *piVar11 +
                   ((int)(iVar24 / 6 + (iVar24 >> 0x1f) + ((uVar23 & 0xfffff) >> 0x13)) >> 0xc) *
                   iVar3;
        piVar11[1] = piVar11[1] +
                     ((((int)auVar53._2_2_ + (int)auVar45._2_2_ + (int)auVar61._2_2_ +
                        (int)auVar68._2_2_ + (int)sVar15 + (int)sVar14) * 0x1000) / 6 >> 0xc) *
                     iVar3;
        pauVar10 = pauVar10 + 3;
        piVar11 = piVar11 + 4;
      } while (uVar13 != 0);
      bVar9 = uVar12 == param_2;
      param_4 = param_4 + uVar12;
      param_3 = param_3 + uVar12 * 6;
      param_2 = param_2 - uVar12;
      param_1 = pfVar2;
      if (bVar9) {
        return;
      }
    }
    do {
      uVar20 = *(undefined8 *)param_3;
      param_2 = param_2 - 1;
      auVar21._0_4_ = (int)(short)uVar20;
      sVar16 = (short)((ulong)uVar20 >> 0x10);
      auVar21._4_4_ = (int)sVar16;
      sVar17 = (short)((ulong)uVar20 >> 0x20);
      auVar21._8_4_ = (int)sVar17;
      sVar19 = (short)((ulong)uVar20 >> 0x30);
      auVar21._12_4_ = (int)sVar19;
      auVar22 = NEON_scvtf(auVar21,4);
      param_1[2] = fVar4 * auVar22._8_4_ * 7.450581e-09;
      param_1[3] = fVar4 * auVar22._12_4_ * 7.450581e-09;
      *param_1 = fVar4 * auVar22._0_4_ * 7.450581e-09;
      param_1[1] = fVar4 * auVar22._4_4_ * 7.450581e-09;
      sVar14 = param_3[4];
      param_1[4] = (float)(int)sVar14 * fVar4 * 7.450581e-09;
      sVar15 = param_3[5];
      param_1[5] = (float)(int)sVar15 * fVar4 * 7.450581e-09;
      *param_4 = *param_4 +
                 ((((int)sVar16 + (int)(short)uVar20 + (int)sVar17 + (int)sVar19 + (int)sVar14 +
                   (int)sVar15) * 0x1000) / 6 >> 0xc) * iVar3;
      param_4 = param_4 + 1;
      param_3 = param_3 + 6;
      param_1 = param_1 + 6;
    } while (param_2 != 0);
  }
                    /* WARNING: Read-only address (ram,0x01427fc0) is written */
                    /* WARNING: Read-only address (ram,0x01427fd0) is written */
                    /* WARNING: Read-only address (ram,0x01427fe0) is written */
                    /* WARNING: Read-only address (ram,0x01427ff0) is written */
                    /* WARNING: Read-only address (ram,0x01428010) is written */
  return;
}

