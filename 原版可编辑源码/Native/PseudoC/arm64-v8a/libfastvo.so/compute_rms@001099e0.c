
uint compute_rms(long param_1,uint param_2)

{
  undefined8 *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  bool bVar13;
  undefined4 *puVar14;
  undefined4 *puVar18;
  uint uVar30;
  ulong uVar31;
  long lVar32;
  uint uVar33;
  undefined8 *puVar34;
  ulong uVar35;
  ulong uVar36;
  uint *puVar37;
  int *piVar38;
  undefined4 *puVar39;
  int iVar40;
  undefined8 uVar41;
  undefined4 uVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  undefined4 uVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  undefined4 uVar51;
  int iVar52;
  undefined4 uVar53;
  int iVar54;
  int iVar55;
  int iVar56;
  undefined4 uVar57;
  undefined8 uVar58;
  undefined4 uVar60;
  undefined1 auVar59 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  undefined4 *puVar29;
  
  if ((int)param_2 < 1) {
    uVar30 = 0;
  }
  else {
    uVar31 = (ulong)param_2;
    if (param_2 < 4) {
      uVar35 = 0;
      uVar33 = 1;
LAB_00109a54:
      lVar32 = uVar31 - uVar35;
      puVar37 = (uint *)(param_1 + uVar35 * 4);
      uVar30 = uVar33;
      do {
        uVar5 = *puVar37;
        uVar33 = -uVar5;
        if (-1 < (int)uVar5) {
          uVar33 = uVar5;
        }
        if ((int)uVar33 <= (int)uVar30) {
          uVar33 = uVar30;
        }
        lVar32 = lVar32 + -1;
        puVar37 = puVar37 + 1;
        uVar30 = uVar33;
      } while (lVar32 != 0);
    }
    else {
      uVar35 = uVar31 & 0xfffffffc;
      puVar34 = (undefined8 *)(param_1 + 8);
      uVar41 = 0x100000001;
      uVar42 = 1;
      uVar47 = 1;
      uVar36 = uVar35;
      do {
        puVar1 = puVar34 + -1;
        uVar58 = *puVar34;
        uVar36 = uVar36 - 4;
        puVar34 = puVar34 + 2;
        uVar51 = MP_INT_ABS((int)*puVar1);
        uVar53 = MP_INT_ABS((int)((ulong)*puVar1 >> 0x20));
        uVar57 = MP_INT_ABS((int)uVar58);
        uVar60 = MP_INT_ABS((int)((ulong)uVar58 >> 0x20));
        uVar41 = NEON_smax(CONCAT44(uVar53,uVar51),uVar41,4);
        uVar58 = NEON_smax(CONCAT44(uVar60,uVar57),CONCAT44(uVar47,uVar42),4);
        uVar42 = (undefined4)uVar58;
        uVar47 = (undefined4)((ulong)uVar58 >> 0x20);
      } while (uVar36 != 0);
      uVar41 = NEON_smax(uVar41,uVar58,4);
      uVar42 = (undefined4)((ulong)uVar41 >> 0x20);
      uVar41 = NEON_smax(uVar41,CONCAT44(uVar42,uVar42),4);
      uVar33 = (uint)uVar41;
      if (uVar35 != uVar31) goto LAB_00109a54;
    }
    if ((int)uVar33 < 0x4000) {
      uVar30 = 0;
    }
    else {
      uVar30 = 0;
      do {
        uVar5 = uVar33 >> 0xf;
        uVar33 = uVar33 >> 1;
        uVar30 = uVar30 + 1;
      } while (uVar5 != 0);
    }
    if (0 < (int)param_2) {
      uVar31 = ((long)(int)param_2 - 1U >> 2) + 1;
      if (uVar31 < 8) {
        lVar32 = 0;
        iVar40 = 0;
      }
      else {
        uVar35 = uVar31 & 0x7ffffffffffffff8;
        puVar39 = (undefined4 *)(param_1 + 0x40);
        iVar40 = 0;
        iVar43 = 0;
        iVar44 = 0;
        iVar45 = 0;
        lVar32 = uVar35 << 2;
        iVar46 = -uVar30;
        iVar48 = -uVar30;
        iVar49 = -uVar30;
        iVar50 = -uVar30;
        iVar52 = 0;
        iVar54 = 0;
        iVar55 = 0;
        iVar56 = 0;
        uVar36 = uVar35;
        do {
          auVar64._0_4_ = *puVar39;
          auVar67._0_4_ = puVar39[1];
          puVar14 = puVar39 + 2;
          auVar62._0_4_ = puVar39[3];
          auVar64._4_4_ = puVar39[4];
          auVar67._4_4_ = puVar39[5];
          puVar15 = puVar39 + 6;
          auVar62._4_4_ = puVar39[7];
          auVar64._8_4_ = puVar39[8];
          auVar67._8_4_ = puVar39[9];
          puVar16 = puVar39 + 10;
          auVar62._8_4_ = puVar39[0xb];
          auVar64._12_4_ = puVar39[0xc];
          auVar67._12_4_ = puVar39[0xd];
          puVar17 = puVar39 + 0xe;
          auVar62._12_4_ = puVar39[0xf];
          auVar65._0_4_ = puVar39[-0x10];
          puVar18 = puVar39 + -0xf;
          puVar19 = puVar39 + -0xe;
          puVar20 = puVar39 + -0xd;
          auVar65._4_4_ = puVar39[-0xc];
          puVar21 = puVar39 + -0xb;
          puVar22 = puVar39 + -10;
          puVar23 = puVar39 + -9;
          auVar65._8_4_ = puVar39[-8];
          puVar24 = puVar39 + -7;
          puVar25 = puVar39 + -6;
          puVar26 = puVar39 + -5;
          auVar65._12_4_ = puVar39[-4];
          puVar27 = puVar39 + -3;
          puVar28 = puVar39 + -2;
          puVar29 = puVar39 + -1;
          uVar36 = uVar36 - 8;
          puVar39 = puVar39 + 0x20;
          auVar59._4_4_ = iVar48;
          auVar59._0_4_ = iVar46;
          auVar59._8_4_ = iVar49;
          auVar59._12_4_ = iVar50;
          auVar64 = NEON_sshl(auVar64,auVar59,4);
          auVar61._4_4_ = iVar48;
          auVar61._0_4_ = iVar46;
          auVar61._8_4_ = iVar49;
          auVar61._12_4_ = iVar50;
          auVar67 = NEON_sshl(auVar67,auVar61,4);
          auVar63._4_4_ = iVar48;
          auVar63._0_4_ = iVar46;
          auVar63._8_4_ = iVar49;
          auVar63._12_4_ = iVar50;
          auVar59 = NEON_sshl(auVar62,auVar63,4);
          auVar66._4_4_ = iVar48;
          auVar66._0_4_ = iVar46;
          auVar66._8_4_ = iVar49;
          auVar66._12_4_ = iVar50;
          auVar10._4_4_ = *puVar21;
          auVar10._0_4_ = *puVar18;
          auVar10._8_4_ = *puVar24;
          auVar10._12_4_ = *puVar27;
          auVar63 = NEON_sshl(auVar10,auVar66,4);
          auVar68._4_4_ = iVar48;
          auVar68._0_4_ = iVar46;
          auVar68._8_4_ = iVar49;
          auVar68._12_4_ = iVar50;
          auVar69._4_4_ = *puVar15;
          auVar69._0_4_ = *puVar14;
          auVar69._8_4_ = *puVar16;
          auVar69._12_4_ = *puVar17;
          auVar69 = NEON_sshl(auVar69,auVar68,4);
          auVar7._4_4_ = iVar48;
          auVar7._0_4_ = iVar46;
          auVar7._8_4_ = iVar49;
          auVar7._12_4_ = iVar50;
          auVar61 = NEON_sshl(auVar65,auVar7,4);
          auVar8._4_4_ = iVar48;
          auVar8._0_4_ = iVar46;
          auVar8._8_4_ = iVar49;
          auVar8._12_4_ = iVar50;
          auVar11._4_4_ = *puVar22;
          auVar11._0_4_ = *puVar19;
          auVar11._8_4_ = *puVar25;
          auVar11._12_4_ = *puVar28;
          auVar68 = NEON_sshl(auVar11,auVar8,4);
          auVar9._4_4_ = iVar48;
          auVar9._0_4_ = iVar46;
          auVar9._8_4_ = iVar49;
          auVar9._12_4_ = iVar50;
          auVar12._4_4_ = *puVar23;
          auVar12._0_4_ = *puVar20;
          auVar12._8_4_ = *puVar26;
          auVar12._12_4_ = *puVar29;
          auVar66 = NEON_sshl(auVar12,auVar9,4);
          iVar52 = iVar52 + ((uint)((int)auVar67._0_2_ * (int)auVar67._0_2_ +
                                    (int)auVar64._0_2_ * (int)auVar64._0_2_ +
                                    (int)auVar69._0_2_ * (int)auVar69._0_2_ +
                                   (int)auVar59._0_2_ * (int)auVar59._0_2_) >> 6);
          iVar54 = iVar54 + ((uint)((int)auVar67._4_2_ * (int)auVar67._4_2_ +
                                    (int)auVar64._4_2_ * (int)auVar64._4_2_ +
                                    (int)auVar69._4_2_ * (int)auVar69._4_2_ +
                                   (int)auVar59._4_2_ * (int)auVar59._4_2_) >> 6);
          iVar55 = iVar55 + ((uint)((int)auVar67._8_2_ * (int)auVar67._8_2_ +
                                    (int)auVar64._8_2_ * (int)auVar64._8_2_ +
                                    (int)auVar69._8_2_ * (int)auVar69._8_2_ +
                                   (int)auVar59._8_2_ * (int)auVar59._8_2_) >> 6);
          iVar56 = iVar56 + ((uint)((int)auVar67._12_2_ * (int)auVar67._12_2_ +
                                    (int)auVar64._12_2_ * (int)auVar64._12_2_ +
                                    (int)auVar69._12_2_ * (int)auVar69._12_2_ +
                                   (int)auVar59._12_2_ * (int)auVar59._12_2_) >> 6);
          iVar40 = iVar40 + ((uint)((int)auVar63._0_2_ * (int)auVar63._0_2_ +
                                    (int)auVar61._0_2_ * (int)auVar61._0_2_ +
                                    (int)auVar68._0_2_ * (int)auVar68._0_2_ +
                                   (int)auVar66._0_2_ * (int)auVar66._0_2_) >> 6);
          iVar43 = iVar43 + ((uint)((int)auVar63._4_2_ * (int)auVar63._4_2_ +
                                    (int)auVar61._4_2_ * (int)auVar61._4_2_ +
                                    (int)auVar68._4_2_ * (int)auVar68._4_2_ +
                                   (int)auVar66._4_2_ * (int)auVar66._4_2_) >> 6);
          iVar44 = iVar44 + ((uint)((int)auVar63._8_2_ * (int)auVar63._8_2_ +
                                    (int)auVar61._8_2_ * (int)auVar61._8_2_ +
                                    (int)auVar68._8_2_ * (int)auVar68._8_2_ +
                                   (int)auVar66._8_2_ * (int)auVar66._8_2_) >> 6);
          iVar45 = iVar45 + ((uint)((int)auVar63._12_2_ * (int)auVar63._12_2_ +
                                    (int)auVar61._12_2_ * (int)auVar61._12_2_ +
                                    (int)auVar68._12_2_ * (int)auVar68._12_2_ +
                                   (int)auVar66._12_2_ * (int)auVar66._12_2_) >> 6);
        } while (uVar36 != 0);
        iVar40 = iVar52 + iVar40 + iVar54 + iVar43 + iVar55 + iVar44 + iVar56 + iVar45;
        if (uVar31 == uVar35) goto LAB_00109bf8;
      }
      piVar38 = (int *)(param_1 + lVar32 * 4 + 8);
      do {
        lVar32 = lVar32 + 4;
        iVar43 = (int)(short)(piVar38[-2] >> (uVar30 & 0x1f));
        iVar44 = (int)(short)(piVar38[-1] >> (uVar30 & 0x1f));
        iVar45 = (int)(short)(*piVar38 >> (uVar30 & 0x1f));
        iVar46 = (int)(short)(piVar38[1] >> (uVar30 & 0x1f));
        iVar40 = iVar40 + ((uint)(iVar43 * iVar43 + iVar44 * iVar44 + iVar45 * iVar45 +
                                 iVar46 * iVar46) >> 6);
        piVar38 = piVar38 + 4;
      } while (lVar32 < (int)param_2);
      goto LAB_00109bf8;
    }
  }
  iVar40 = 0;
LAB_00109bf8:
  uVar33 = 0;
  if (param_2 != 0) {
    uVar33 = iVar40 / (int)param_2;
  }
  bVar13 = uVar33 >> 0x10 != 0;
  uVar5 = uVar33 >> 0x10;
  if (!bVar13) {
    uVar5 = uVar33;
  }
  uVar3 = uVar5 >> 8;
  if (uVar5 < 0x100) {
    uVar3 = uVar5;
  }
  uVar4 = (uint)bVar13 << 3 | 4;
  if (uVar5 < 0x100) {
    uVar4 = (uint)bVar13 << 3;
  }
  uVar5 = uVar3 >> 4;
  if (uVar3 < 0x10) {
    uVar5 = uVar3;
  }
  uVar6 = uVar4 | 2;
  if (uVar3 < 0x10) {
    uVar6 = uVar4;
  }
  uVar6 = uVar6 | 3 < uVar5;
  uVar5 = 0xd - uVar6;
  sVar2 = (short)((int)uVar33 >> (uVar6 * 2 - 0xc & 0x1f));
  if ((ushort)uVar6 < 7) {
    sVar2 = (short)(uVar33 << (ulong)(uVar6 * -2 + 0xc & 0x1f));
  }
  iVar40 = (int)sVar2;
  iVar40 = (int)((((int)(((iVar40 * 0x41b0 + -0x31530000 >> 0x10) * iVar40 * 4 & 0xffff0000U) +
                        0x52b50000) >> 0x10) * iVar40 * 4 & 0xffff0000U) + 0xe320000) >> 0x10;
  sVar2 = (short)(iVar40 >> (uVar5 & 0x1f));
  if ((int)uVar5 < 1) {
    sVar2 = (short)(iVar40 << (ulong)(-uVar5 & 0x1f));
  }
  return ((int)sVar2 << (ulong)(uVar30 + 3 & 0x1f)) + 0x2000U >> 0xe;
}

