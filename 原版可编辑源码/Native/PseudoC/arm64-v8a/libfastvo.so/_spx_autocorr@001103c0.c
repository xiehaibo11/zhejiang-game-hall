
void _spx_autocorr(undefined8 *param_1,long param_2,uint param_3,uint param_4)

{
  bool bVar1;
  short *psVar2;
  ulong uVar3;
  short *psVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  short sVar22;
  int iVar21;
  short sVar23;
  short sVar25;
  int iVar24;
  int iVar26;
  int iVar27;
  short sVar31;
  short sVar32;
  short sVar33;
  undefined8 uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined8 uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined8 uVar37;
  undefined8 uVar38;
  
  if ((int)param_4 < 1) {
    iVar17 = 1;
  }
  else {
    uVar7 = (ulong)param_4;
    if (param_4 < 8) {
      uVar9 = 0;
      iVar17 = 1;
    }
    else {
      iVar19 = 0;
      iVar20 = 0;
      iVar17 = 1;
      iVar18 = 0;
      uVar9 = uVar7 & 0xfffffff8;
      puVar5 = param_1 + 1;
      iVar21 = 0;
      iVar24 = 0;
      iVar26 = 0;
      iVar27 = 0;
      uVar13 = uVar9;
      do {
        uVar28 = puVar5[-1];
        uVar34 = *puVar5;
        uVar13 = uVar13 - 8;
        puVar5 = puVar5 + 2;
        sVar22 = (short)((ulong)uVar28 >> 0x10);
        sVar23 = (short)((ulong)uVar28 >> 0x20);
        sVar25 = (short)((ulong)uVar28 >> 0x30);
        sVar31 = (short)((ulong)uVar34 >> 0x10);
        sVar32 = (short)((ulong)uVar34 >> 0x20);
        sVar33 = (short)((ulong)uVar34 >> 0x30);
        iVar17 = iVar17 + ((uint)((int)(short)uVar28 * (int)(short)uVar28) >> 8);
        iVar18 = iVar18 + ((uint)((int)sVar22 * (int)sVar22) >> 8);
        iVar19 = iVar19 + ((uint)((int)sVar23 * (int)sVar23) >> 8);
        iVar20 = iVar20 + ((uint)((int)sVar25 * (int)sVar25) >> 8);
        iVar21 = iVar21 + ((uint)((int)(short)uVar34 * (int)(short)uVar34) >> 8);
        iVar24 = iVar24 + ((uint)((int)sVar31 * (int)sVar31) >> 8);
        iVar26 = iVar26 + ((uint)((int)sVar32 * (int)sVar32) >> 8);
        iVar27 = iVar27 + ((uint)((int)sVar33 * (int)sVar33) >> 8);
      } while (uVar13 != 0);
      iVar17 = iVar21 + iVar17 + iVar24 + iVar18 + iVar26 + iVar19 + iVar27 + iVar20;
      if (uVar9 == uVar7) goto LAB_00110450;
    }
    lVar8 = uVar7 - uVar9;
    psVar2 = (short *)((long)param_1 + uVar9 * 2);
    do {
      lVar8 = lVar8 + -1;
      iVar17 = iVar17 + ((uint)((int)*psVar2 * (int)*psVar2) >> 8);
      psVar2 = psVar2 + 1;
    } while (lVar8 != 0);
  }
LAB_00110450:
  iVar17 = iVar17 + param_4;
  if (iVar17 < 0x40000000) {
    uVar11 = 8;
    do {
      iVar17 = iVar17 * 2;
      uVar6 = uVar11 - 1;
      if (0x3fffffff < iVar17) break;
      bVar1 = uVar11 != 1;
      uVar11 = uVar6;
    } while (bVar1);
    if (iVar17 < 0x40000000) {
      uVar12 = 0x12;
      do {
        iVar17 = iVar17 * 2;
        uVar11 = uVar12 - 1;
        if (0x3fffffff < iVar17) break;
        bVar1 = uVar12 != 1;
        uVar12 = uVar11;
      } while (bVar1);
    }
    else {
      uVar11 = 0x12;
    }
  }
  else {
    uVar11 = 0x12;
    uVar6 = 8;
  }
  if (0 < (int)param_3) {
    uVar9 = (ulong)param_4;
    lVar10 = 0;
    lVar8 = 0;
    uVar7 = 0;
    uVar13 = uVar9;
    do {
      if ((long)uVar7 < (long)(int)param_4) {
        uVar14 = uVar9 - uVar7;
        if (uVar14 < 8) {
          iVar17 = 0;
          uVar15 = uVar7;
        }
        else {
          uVar3 = uVar13 & 0xfffffffffffffff8;
          iVar17 = 0;
          iVar18 = 0;
          iVar19 = 0;
          iVar20 = 0;
          uVar15 = uVar7 + (uVar14 & 0xfffffffffffffff8);
          iVar21 = 0;
          iVar24 = 0;
          iVar26 = 0;
          iVar27 = 0;
          puVar5 = param_1;
          do {
            uVar28 = *puVar5;
            uVar34 = puVar5[1];
            uVar37 = *(undefined8 *)((long)puVar5 + lVar8);
            uVar38 = ((undefined8 *)((long)puVar5 + lVar8))[1];
            uVar3 = uVar3 - 8;
            auVar29._0_4_ = (int)(short)uVar28 * (int)(short)uVar37;
            auVar29._4_4_ =
                 (int)(short)((ulong)uVar28 >> 0x10) * (int)(short)((ulong)uVar37 >> 0x10);
            auVar29._8_4_ =
                 (int)(short)((ulong)uVar28 >> 0x20) * (int)(short)((ulong)uVar37 >> 0x20);
            auVar29._12_4_ =
                 (int)(short)((ulong)uVar28 >> 0x30) * (int)(short)((ulong)uVar37 >> 0x30);
            auVar35._0_4_ = (int)(short)uVar34 * (int)(short)uVar38;
            auVar35._4_4_ =
                 (int)(short)((ulong)uVar34 >> 0x10) * (int)(short)((ulong)uVar38 >> 0x10);
            auVar35._8_4_ =
                 (int)(short)((ulong)uVar34 >> 0x20) * (int)(short)((ulong)uVar38 >> 0x20);
            auVar35._12_4_ =
                 (int)(short)((ulong)uVar34 >> 0x30) * (int)(short)((ulong)uVar38 >> 0x30);
            auVar30._4_4_ = -uVar6;
            auVar30._0_4_ = -uVar6;
            auVar30._8_4_ = -uVar6;
            auVar30._12_4_ = -uVar6;
            auVar30 = NEON_sshl(auVar29,auVar30,4);
            auVar36._4_4_ = -uVar6;
            auVar36._0_4_ = -uVar6;
            auVar36._8_4_ = -uVar6;
            auVar36._12_4_ = -uVar6;
            auVar36 = NEON_sshl(auVar35,auVar36,4);
            iVar17 = auVar30._0_4_ + iVar17;
            iVar18 = auVar30._4_4_ + iVar18;
            iVar19 = auVar30._8_4_ + iVar19;
            iVar20 = auVar30._12_4_ + iVar20;
            iVar21 = auVar36._0_4_ + iVar21;
            iVar24 = auVar36._4_4_ + iVar24;
            iVar26 = auVar36._8_4_ + iVar26;
            iVar27 = auVar36._12_4_ + iVar27;
            puVar5 = puVar5 + 2;
          } while (uVar3 != 0);
          iVar17 = iVar21 + iVar17 + iVar24 + iVar18 + iVar26 + iVar19 + iVar27 + iVar20;
          if (uVar14 == (uVar14 & 0xfffffffffffffff8)) goto LAB_001105a0;
        }
        lVar16 = uVar9 - uVar15;
        psVar2 = (short *)((long)param_1 + uVar15 * 2);
        psVar4 = (short *)((long)param_1 + (uVar15 + lVar10) * 2);
        do {
          lVar16 = lVar16 + -1;
          iVar17 = ((int)*psVar4 * (int)*psVar2 >> (uVar6 & 0x1f)) + iVar17;
          psVar2 = psVar2 + 1;
          psVar4 = psVar4 + 1;
        } while (lVar16 != 0);
      }
      else {
        iVar17 = 0;
      }
LAB_001105a0:
      *(short *)(param_2 + uVar7 * 2) = (short)(iVar17 >> (uVar11 & 0x1f));
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 2;
      uVar13 = uVar13 - 1;
      lVar10 = lVar10 + -1;
    } while (uVar7 != param_3);
  }
  return;
}

