
void FUN_00e645bc(ulong *param_1,long param_2,ulong *param_3,ulong *param_4)

{
  bool bVar1;
  short *psVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  short *psVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 *puVar28;
  ulong uVar29;
  ulong uVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  int local_170 [4];
  undefined8 auStack_160 [30];
  undefined4 local_70;
  
  uVar4 = *(ulong *)(param_2 + 8);
  uVar14 = *(ulong *)(param_2 + 0x10);
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar14;
  param_1[0xd] = 0x80000000;
  lVar13 = *(long *)(param_2 + 0x50);
  lVar21 = *(long *)(param_2 + 0x30);
  uVar5 = *(uint *)(param_2 + 0x2c);
  uVar6 = *(uint *)(param_2 + 0x48);
  *param_3 = uVar4;
  *param_4 = uVar14;
  if ((int)uVar6 < 1) {
    return;
  }
  if ((int)uVar5 < 2) {
    return;
  }
  iVar11 = (int)*(short *)(lVar21 + 0x18);
  uVar25 = (ulong)uVar5 - 1;
  if (uVar25 < 2) {
    lVar26 = 1;
    iVar8 = iVar11;
  }
  else {
    lVar19 = uVar25 - (~uVar5 & 1);
    lVar26 = lVar19 + 1;
    psVar22 = (short *)(lVar21 + 0x68);
    iVar31 = iVar11;
    iVar12 = iVar11;
    iVar17 = iVar11;
    do {
      sVar7 = *psVar22;
      psVar2 = psVar22 + 0x28;
      psVar22 = psVar22 + 0x50;
      iVar8 = (int)sVar7;
      iVar18 = iVar8;
      if (iVar11 <= sVar7) {
        iVar18 = iVar11;
      }
      iVar10 = (int)*psVar2;
      iVar3 = iVar10;
      if (iVar17 <= *psVar2) {
        iVar3 = iVar17;
      }
      if (iVar8 <= iVar12) {
        iVar8 = iVar12;
      }
      if (iVar10 <= iVar31) {
        iVar10 = iVar31;
      }
      lVar19 = lVar19 + -2;
      iVar11 = iVar18;
      iVar31 = iVar10;
      iVar12 = iVar8;
      iVar17 = iVar3;
    } while (lVar19 != 0);
    if (iVar8 <= iVar10) {
      iVar8 = iVar10;
    }
    if (iVar3 <= iVar18) {
      iVar11 = iVar3;
    }
    if ((~uVar5 & 1) == 0) goto LAB_00e646d4;
  }
  lVar19 = (ulong)uVar5 - lVar26;
  psVar22 = (short *)(lVar21 + lVar26 * 0x50 + 0x18);
  iVar31 = iVar8;
  iVar12 = iVar11;
  do {
    iVar8 = (int)*psVar22;
    iVar11 = iVar8;
    if (iVar12 <= *psVar22) {
      iVar11 = iVar12;
    }
    if (iVar8 <= iVar31) {
      iVar8 = iVar31;
    }
    lVar19 = lVar19 + -1;
    psVar22 = psVar22 + 0x28;
    iVar31 = iVar8;
    iVar12 = iVar11;
  } while (lVar19 != 0);
LAB_00e646d4:
  if (iVar8 - iVar11 == 0 || iVar8 < iVar11) {
    return;
  }
  lVar26 = (long)iVar11;
  lVar21 = FT_MulFix(lVar26,uVar4);
  *param_1 = lVar21 + uVar14;
  lVar21 = FT_MulFix((long)iVar8,uVar4);
  uVar23 = *param_1;
  uVar14 = lVar21 + uVar14;
  uVar27 = uVar14 & 0xffffffffffffffe0;
  param_1[1] = uVar14;
  param_1[2] = uVar23 & 0xffffffffffffffc0;
  uVar30 = uVar23 & 0xffffffffffffffe0;
  uVar25 = uVar30 + 0x20;
  uVar29 = uVar27 + 0x20;
  param_1[3] = uVar14 + 0x3f & 0xffffffffffffffc0;
  param_1[4] = uVar30;
  param_1[5] = uVar25;
  param_1[6] = uVar27;
  param_1[7] = uVar29;
  if ((long)uVar14 < (long)uVar25) {
    param_1[5] = uVar14;
    uVar25 = uVar14;
  }
  if ((long)uVar27 < (long)uVar23) {
    param_1[6] = uVar23;
    uVar20 = uVar14 - uVar23;
    param_1[8] = uVar20;
    uVar27 = uVar23;
  }
  else {
    uVar20 = uVar14 - uVar23;
    param_1[8] = uVar20;
  }
  if ((long)uVar20 < 0x41) {
    param_1[5] = uVar23;
    param_1[6] = uVar14;
    uVar27 = uVar20;
  }
  else {
    uVar27 = uVar27 - uVar25;
  }
  uVar29 = uVar29 - uVar30;
  lVar21 = 4;
  if (0x60 < (long)uVar20) {
    lVar21 = 8;
  }
  if (0x80 < (long)uVar20) {
    lVar21 = 0x10;
  }
  uVar25 = uVar20 - lVar21;
  param_1[9] = uVar27;
  param_1[10] = uVar29;
  if ((long)uVar27 < (long)uVar25) {
    param_1[9] = uVar25;
    uVar27 = uVar25;
  }
  uVar25 = lVar21 + uVar20;
  if ((long)uVar25 < (long)uVar29) {
    param_1[10] = uVar25;
    uVar29 = uVar25;
  }
  lVar19 = uVar20 * 3;
  lVar21 = lVar19 + 3;
  if (-1 < lVar19) {
    lVar21 = lVar19;
  }
  uVar25 = lVar21 >> 2;
  if ((long)uVar27 < (long)uVar25) {
    param_1[9] = uVar25;
    uVar27 = uVar25;
  }
  lVar19 = uVar20 * 5;
  lVar21 = lVar19 + 3;
  if (-1 < lVar19) {
    lVar21 = lVar19;
  }
  uVar25 = lVar21 >> 2;
  if ((long)uVar25 < (long)uVar29) {
    param_1[10] = uVar25;
    uVar29 = uVar25;
  }
  if ((long)uVar29 < (long)(int)uVar27) {
LAB_00e64b38:
    uVar14 = param_1[0xb];
    uVar25 = param_1[0xc];
    lVar21 = uVar14 - uVar4;
    lVar13 = FT_MulFix(lVar26,lVar21);
    *(ulong *)(param_2 + 0x1428) = lVar13 + uVar25;
    lVar13 = FT_MulFix((long)iVar8,lVar21);
    *(ulong *)(param_2 + 0x1430) = lVar13 + uVar25;
    *param_3 = uVar14;
    *param_4 = uVar25;
    return;
  }
  lVar21 = (long)(int)uVar27;
  uVar29 = uVar20 - lVar21;
  uVar25 = uVar29 + uVar23;
  if (uVar29 != 0 && lVar21 <= (long)uVar20) goto LAB_00e64878;
LAB_00e64898:
  uVar27 = param_1[4];
  if ((long)uVar27 <= (long)uVar25) goto LAB_00e64884;
LAB_00e648a4:
  lVar19 = uVar27 - uVar25;
  uVar30 = lVar19 + uVar14;
  uVar24 = uVar23 - uVar27;
  if ((long)uVar23 <= (long)uVar27) {
    uVar24 = uVar27 - uVar23;
  }
  uVar25 = uVar27;
  if ((long)uVar14 <= (long)uVar30) goto LAB_00e648cc;
  lVar19 = (int)uVar24 - lVar19;
  do {
    lVar9 = FT_DivFix(lVar21 - uVar20,(long)(iVar8 - iVar11));
    uVar14 = lVar9 + uVar4;
    lVar9 = FT_MulFix(lVar26,uVar14);
    local_70 = 0;
    auStack_160[0x1b] = 0;
    auStack_160[0x1a] = 0;
    auStack_160[0x1d] = 0;
    auStack_160[0x1c] = 0;
    auStack_160[0x17] = 0;
    auStack_160[0x16] = 0;
    auStack_160[0x19] = 0;
    auStack_160[0x18] = 0;
    auStack_160[0x13] = 0;
    auStack_160[0x12] = 0;
    auStack_160[0x15] = 0;
    auStack_160[0x14] = 0;
    auStack_160[0xf] = 0;
    auStack_160[0xe] = 0;
    auStack_160[0x11] = 0;
    auStack_160[0x10] = 0;
    auStack_160[0xb] = 0;
    auStack_160[10] = 0;
    auStack_160[0xd] = 0;
    auStack_160[0xc] = 0;
    auStack_160[7] = 0;
    auStack_160[6] = 0;
    auStack_160[9] = 0;
    auStack_160[8] = 0;
    auStack_160[3] = 0;
    auStack_160[2] = 0;
    auStack_160[5] = 0;
    auStack_160[4] = 0;
    local_170[2] = 0;
    local_170[3] = 0;
    local_170[0] = 0;
    local_170[1] = 0;
    auStack_160[1] = 0;
    auStack_160[0] = 0;
    lVar15 = uVar30 - uVar25;
    uVar29 = param_1[6] - lVar15;
    if ((long)param_1[6] <= (long)(param_1[4] + lVar15)) {
      uVar29 = param_1[4];
    }
    iVar31 = (int)param_1[2];
    iVar12 = (int)uVar29 - iVar31;
    uVar29 = param_1[7] - lVar15;
    if ((long)(param_1[5] + lVar15) <= (long)param_1[7]) {
      uVar29 = param_1[5];
    }
    if (((-1 < iVar12) && (iVar17 = (int)uVar29 - iVar31, iVar12 <= iVar17)) && (iVar17 < 0x41)) {
      if (0 < (int)uVar6) {
        lVar32 = (long)iVar12;
        lVar33 = (long)iVar17;
        lVar15 = lVar33;
        if (lVar33 <= lVar32) {
          lVar15 = lVar32;
        }
        uVar27 = (lVar15 + 1) - lVar32;
        uVar23 = uVar27 & 0xfffffffffffffff8;
        uVar29 = 0;
        do {
          lVar16 = lVar13 + uVar29 * 0x50;
          iVar18 = (int)*(short *)(lVar16 + 8) - (int)*(short *)(lVar16 + 6);
          lVar16 = FT_MulFix((long)*(short *)(lVar16 + 2),uVar14);
          uVar30 = (uVar25 - lVar9) + (long)(iVar12 - ((int)uVar25 - iVar31)) + lVar16;
          lVar16 = lVar32;
          if (((uVar27 < 8) || ((~(uint)uVar30 & 0x3f) < ((uint)(lVar15 - lVar32) & 0x3f))) ||
             (0x3f < (ulong)(lVar15 - lVar32))) {
LAB_00e64a74:
            do {
              uVar20 = uVar30 & 0x3f;
              uVar30 = uVar30 + 1;
              local_170[lVar16] = local_170[lVar16] + *(int *)(&DAT_0197b1bc + uVar20 * 4) * iVar18;
              bVar1 = lVar16 < lVar33;
              lVar16 = lVar16 + 1;
            } while (bVar1);
          }
          else {
            uVar20 = uVar30 + uVar23;
            uVar24 = uVar23;
            puVar28 = (undefined8 *)((long)auStack_160 + (long)iVar12 * 4);
            do {
              lVar16 = (uVar30 & 0x3f) * 4;
              uVar34 = *(undefined8 *)(&DAT_0197b1bc + lVar16);
              uVar36 = *(undefined8 *)(&UNK_0197b1d4 + lVar16);
              uVar35 = *(undefined8 *)(&DAT_0197b1cc + lVar16);
              uVar30 = uVar30 + 8;
              uVar24 = uVar24 - 8;
              puVar28[-1] = CONCAT44((int)((ulong)puVar28[-1] >> 0x20) +
                                     (int)((ulong)*(undefined8 *)(&UNK_0197b1c4 + lVar16) >> 0x20) *
                                     iVar18,(int)puVar28[-1] +
                                            (int)*(undefined8 *)(&UNK_0197b1c4 + lVar16) * iVar18);
              puVar28[-2] = CONCAT44((int)((ulong)puVar28[-2] >> 0x20) +
                                     (int)((ulong)uVar34 >> 0x20) * iVar18,
                                     (int)puVar28[-2] + (int)uVar34 * iVar18);
              puVar28[1] = CONCAT44((int)((ulong)puVar28[1] >> 0x20) +
                                    (int)((ulong)uVar36 >> 0x20) * iVar18,
                                    (int)puVar28[1] + (int)uVar36 * iVar18);
              *puVar28 = CONCAT44((int)((ulong)*puVar28 >> 0x20) +
                                  (int)((ulong)uVar35 >> 0x20) * iVar18,
                                  (int)*puVar28 + (int)uVar35 * iVar18);
              puVar28 = puVar28 + 4;
            } while (uVar24 != 0);
            uVar30 = uVar20;
            lVar16 = lVar32 + uVar23;
            if (uVar27 != uVar23) goto LAB_00e64a74;
          }
          uVar29 = uVar29 + 1;
        } while (uVar29 != uVar6);
      }
      iVar18 = (int)param_1[0xd];
      lVar32 = (long)((int)uVar25 - iVar31);
      lVar19 = ((long)iVar12 + ((long)((ulong)(uint)((int)lVar19 * 5) << 0x21) >> 0x20)) - lVar32;
      lVar15 = (long)iVar12;
      do {
        iVar31 = local_170[lVar15];
        if ((iVar18 < iVar31) || ((iVar31 == iVar18 && (lVar19 < *(int *)((long)param_1 + 0x6c)))))
        {
          param_1[0xb] = uVar14;
          param_1[0xc] = ((uVar25 - lVar9) - lVar32) + lVar15;
          *(int *)(param_1 + 0xd) = iVar31;
          *(int *)((long)param_1 + 0x6c) = (int)lVar19;
          iVar18 = iVar31;
        }
        lVar19 = lVar19 + 1;
        bVar1 = lVar15 < iVar17;
        lVar15 = lVar15 + 1;
      } while (bVar1);
    }
    lVar21 = lVar21 + 1;
    if ((long)param_1[10] < lVar21) goto LAB_00e64b38;
    uVar23 = *param_1;
    uVar14 = param_1[1];
    uVar20 = param_1[8];
    uVar29 = uVar20 - lVar21;
    uVar25 = uVar29 + uVar23;
    if (uVar29 == 0 || (long)uVar20 < lVar21) goto LAB_00e64898;
LAB_00e64878:
    uVar27 = param_1[5];
    if ((long)uVar27 < (long)uVar25) goto LAB_00e648a4;
LAB_00e64884:
    uVar24 = -uVar29;
    uVar30 = uVar14;
    if ((long)uVar23 <= (long)uVar25) {
      uVar24 = uVar29;
    }
LAB_00e648cc:
    lVar19 = (uVar30 - uVar14) + (uVar24 & 0xffffffff);
  } while( true );
}

