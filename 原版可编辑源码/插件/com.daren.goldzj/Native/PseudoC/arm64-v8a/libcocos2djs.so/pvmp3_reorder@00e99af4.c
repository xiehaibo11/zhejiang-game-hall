
void pvmp3_reorder(long param_1,long param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  short *psVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  undefined4 *puVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined4 *puVar27;
  long lVar28;
  int iVar29;
  long lVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  
  if ((*(int *)(param_2 + 0x10) != 0) && (*(int *)(param_2 + 0x14) == 2)) {
    lVar24 = param_1 + 4;
    bVar12 = *(int *)(param_2 + 0x18) != 0;
    iVar23 = 0;
    if (bVar12) {
      iVar23 = 0x24;
    }
    uVar14 = 0;
    if (bVar12) {
      uVar14 = 3;
    }
    lVar22 = (long)(*param_4 * 3 + param_4[4]) * 0x4a + 0x1995ca0;
    iVar29 = iVar23;
    do {
      lVar28 = 3;
      psVar1 = (short *)(lVar22 + (ulong)(uVar14 + 1) * 2);
      sVar6 = *psVar1;
      sVar7 = *(short *)(lVar22 + (ulong)uVar14 * 2);
      iVar19 = (int)sVar6;
      iVar8 = iVar19 - sVar7;
      iVar10 = iVar8 * 3;
      iVar18 = (int)sVar7;
      if (*param_3 <= sVar6 * 3) {
        if (iVar8 < 1) goto LAB_00e99f34;
        lVar22 = (long)iVar10;
        lVar24 = lVar22;
        if (lVar22 < 4) {
          lVar24 = 3;
        }
        uVar2 = (lVar24 - 1U) / 3 + 1;
        lVar28 = (long)iVar29;
        lVar21 = (long)(iVar8 * 2);
        lVar24 = 0;
        if (uVar2 < 4) goto LAB_00e99ee8;
        lVar30 = lVar22;
        if (lVar22 < 4) {
          lVar30 = 3;
        }
        uVar15 = (lVar30 - 1U) / 3;
        lVar30 = uVar15 + lVar28;
        puVar17 = param_5 + uVar15 * 3 + 3;
        if (((param_5 < (undefined4 *)(param_1 + (lVar30 + lVar21) * 4 + 4U) &&
              (undefined4 *)(param_1 + (lVar28 + lVar21) * 4) < puVar17) ||
            (param_5 < (undefined4 *)(param_1 + (lVar30 + iVar8) * 4 + 4U) &&
             (undefined4 *)(param_1 + (lVar28 + iVar8) * 4) < puVar17)) ||
           (param_5 < (undefined4 *)(param_1 + lVar30 * 4 + 4U) &&
            (undefined4 *)(param_1 + lVar28 * 4) < puVar17)) goto LAB_00e99ee8;
        uVar31 = uVar2 & 0xfffffffffffffffc;
        lVar26 = lVar28 + lVar21;
        iVar8 = iVar29 + iVar19;
        lVar30 = lVar28 * 4;
        lVar28 = uVar31 + lVar28;
        lVar24 = uVar31 * 3;
        iVar29 = iVar29 + (int)uVar31;
        uVar14 = iVar8 - sVar7;
        puVar13 = (undefined8 *)(param_1 + lVar26 * 4);
        uVar15 = uVar31;
        puVar17 = param_5;
        puVar16 = (undefined8 *)(param_1 + lVar30);
        do {
          uVar33 = puVar16[1];
          uVar32 = *puVar16;
          puVar11 = (undefined8 *)
                    (param_1 + (-(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2))
          ;
          uVar35 = puVar11[1];
          uVar34 = *puVar11;
          uVar37 = puVar13[1];
          uVar36 = *puVar13;
          uVar15 = uVar15 - 4;
          uVar14 = uVar14 + 4;
          *puVar17 = (int)uVar32;
          puVar17[1] = (int)uVar34;
          puVar17[2] = (int)uVar36;
          puVar17[3] = (int)((ulong)uVar32 >> 0x20);
          puVar17[4] = (int)((ulong)uVar34 >> 0x20);
          puVar17[5] = (int)((ulong)uVar36 >> 0x20);
          puVar17[6] = (int)uVar33;
          puVar17[7] = (int)uVar35;
          puVar17[8] = (int)uVar37;
          puVar17[9] = (int)((ulong)uVar33 >> 0x20);
          puVar17[10] = (int)((ulong)uVar35 >> 0x20);
          puVar17[0xb] = (int)((ulong)uVar37 >> 0x20);
          puVar17 = puVar17 + 0xc;
          puVar13 = puVar13 + 2;
          puVar16 = puVar16 + 2;
        } while (uVar15 != 0);
        if (uVar2 != uVar31) {
LAB_00e99ee8:
          iVar18 = (iVar29 + iVar19) - iVar18;
          puVar17 = param_5 + lVar24 + 1;
          puVar20 = (undefined4 *)(param_1 + (lVar28 + lVar21) * 4);
          puVar27 = (undefined4 *)(param_1 + lVar28 * 4);
          do {
            uVar5 = *(undefined4 *)(param_1 + (long)iVar18 * 4);
            uVar4 = *puVar20;
            lVar24 = lVar24 + 3;
            iVar18 = iVar18 + 1;
            puVar17[-1] = *puVar27;
            *puVar17 = uVar5;
            puVar17[1] = uVar4;
            puVar17 = puVar17 + 3;
            puVar20 = puVar20 + 1;
            puVar27 = puVar27 + 1;
          } while (lVar24 < lVar22);
        }
LAB_00e99f34:
        memcpy((void *)(param_1 + (long)(short)iVar23 * 4),param_5,(long)iVar10 << 2);
        *param_3 = *psVar1 * 3;
        return;
      }
      lVar21 = (long)iVar10;
      if (0 < iVar8) {
        lVar30 = lVar21;
        if (lVar21 < 4) {
          lVar30 = lVar28;
        }
        uVar2 = (lVar30 - 1U) / 3 + 1;
        lVar30 = (long)iVar29;
        lVar26 = (long)(iVar8 * 2);
        if (uVar2 < 4) {
          lVar25 = 0;
LAB_00e99d20:
          iVar18 = (iVar29 + sVar6) - iVar18;
          puVar17 = param_5 + lVar25 + 1;
          do {
            lVar28 = lVar30 * 4;
            uVar4 = *(undefined4 *)(param_1 + (long)iVar18 * 4);
            uVar5 = *(undefined4 *)(param_1 + lVar26 * 4 + lVar28);
            lVar25 = lVar25 + 3;
            lVar30 = lVar30 + 1;
            iVar18 = iVar18 + 1;
            puVar17[-1] = *(undefined4 *)(param_1 + lVar28);
            *puVar17 = uVar4;
            puVar17[1] = uVar5;
            puVar17 = puVar17 + 3;
          } while (lVar25 < lVar21);
        }
        else {
          lVar3 = lVar21;
          if (lVar21 < 4) {
            lVar3 = lVar28;
          }
          uVar9 = (iVar29 + iVar19) - iVar18;
          lVar25 = 0;
          if (((int)(uVar9 + (int)((lVar3 - 1U) / 3)) < (int)uVar9) || (2 < lVar3 - 1U >> 0x20))
          goto LAB_00e99d20;
          lVar3 = lVar21;
          if (lVar21 < 4) {
            lVar3 = lVar28;
          }
          iVar10 = (iVar29 + sVar6) - iVar18;
          uVar15 = (lVar3 - 1U) / 3;
          puVar17 = param_5 + uVar15 * 3 + 3;
          lVar25 = 0;
          if (((param_5 < (undefined4 *)(lVar24 + (uVar15 + lVar30 + lVar26) * 4) &&
                (undefined4 *)(param_1 + (lVar30 + lVar26) * 4) < puVar17) ||
              (param_5 < (undefined4 *)(lVar24 + (uVar15 + (long)iVar10) * 4) &&
               (undefined4 *)(param_1 + (long)iVar10 * 4) < puVar17)) ||
             (param_5 < (undefined4 *)(lVar24 + (uVar15 + lVar30) * 4) &&
              (undefined4 *)(param_1 + lVar30 * 4) < puVar17)) goto LAB_00e99d20;
          uVar31 = uVar2 & 0xfffffffffffffffc;
          lVar3 = lVar30 + lVar26;
          lVar28 = lVar30 * 4;
          lVar30 = uVar31 + lVar30;
          lVar25 = uVar31 * 3;
          iVar29 = iVar29 + (int)uVar31;
          puVar13 = (undefined8 *)(param_1 + lVar28);
          puVar16 = (undefined8 *)(param_1 + lVar3 * 4);
          uVar15 = uVar31;
          puVar17 = param_5;
          do {
            uVar33 = puVar13[1];
            uVar32 = *puVar13;
            puVar11 = (undefined8 *)
                      (param_1 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar9 << 2))
            ;
            uVar35 = puVar11[1];
            uVar34 = *puVar11;
            uVar37 = puVar16[1];
            uVar36 = *puVar16;
            uVar15 = uVar15 - 4;
            uVar9 = uVar9 + 4;
            *puVar17 = (int)uVar32;
            puVar17[1] = (int)uVar34;
            puVar17[2] = (int)uVar36;
            puVar17[3] = (int)((ulong)uVar32 >> 0x20);
            puVar17[4] = (int)((ulong)uVar34 >> 0x20);
            puVar17[5] = (int)((ulong)uVar36 >> 0x20);
            puVar17[6] = (int)uVar33;
            puVar17[7] = (int)uVar35;
            puVar17[8] = (int)uVar37;
            puVar17[9] = (int)((ulong)uVar33 >> 0x20);
            puVar17[10] = (int)((ulong)uVar35 >> 0x20);
            puVar17[0xb] = (int)((ulong)uVar37 >> 0x20);
            puVar17 = puVar17 + 0xc;
            puVar13 = puVar13 + 2;
            puVar16 = puVar16 + 2;
          } while (uVar15 != 0);
          if (uVar2 != uVar31) goto LAB_00e99d20;
        }
        iVar29 = (int)lVar30;
      }
      iVar29 = iVar29 + iVar8 * 2;
      memcpy((void *)(param_1 + (long)(short)iVar23 * 4),param_5,lVar21 << 2);
      uVar14 = uVar14 + 1;
      iVar23 = iVar8 * 3 + iVar23;
    } while (uVar14 < 0xd);
  }
  return;
}

