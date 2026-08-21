
void FUN_01100620(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  
  lVar16 = param_1[0x49];
  if (param_2 == 2) {
    *(code **)(lVar16 + 8) = FUN_01100d78;
    return;
  }
  if (param_2 != 0) {
    param_1 = (undefined8 *)*param_1;
    *(undefined4 *)(param_1 + 5) = 3;
                    /* WARNING: Could not recover jumptable at 0x011006ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*param_1)();
    return;
  }
  if (*(int *)(param_1[0x50] + 0x10) == 0) {
    *(code **)(lVar16 + 8) = FUN_01100cc4;
    *(undefined8 *)(lVar16 + 0x60) = 0;
    return;
  }
  *(code **)(lVar16 + 8) = FUN_011009c4;
  iVar4 = *(int *)(param_1 + 7);
  if (0 < iVar4) {
    iVar5 = *(int *)((long)param_1 + 0x1ac);
    lVar18 = param_1[0x26];
    lVar17 = 0;
    do {
      lVar21 = lVar17 * 8;
      puVar20 = *(undefined8 **)(*(long *)(lVar16 + 0x68) + lVar21);
      puVar23 = *(undefined8 **)(*(long *)(lVar16 + 0x70) + lVar21);
      puVar22 = *(undefined8 **)(lVar16 + lVar21 + 0x10);
      uVar7 = 0;
      if (iVar5 != 0) {
        uVar7 = (*(int *)(lVar18 + 0x28) * *(int *)(lVar18 + 0xc)) / iVar5;
      }
      uVar6 = uVar7 * (iVar5 + 2);
      if (0 < (int)uVar6) {
        uVar8 = (ulong)uVar6;
        if (uVar6 < 4) {
LAB_011007a4:
          lVar10 = 0;
        }
        else {
          lVar21 = uVar8 - (uVar6 & 3);
          if (lVar21 == 0) goto LAB_011007a4;
          lVar10 = 0;
          if (((puVar20 + uVar8 <= puVar23 || puVar23 + uVar8 <= puVar20) &&
              (puVar22 + uVar8 <= puVar23 || puVar23 + uVar8 <= puVar22)) &&
             (puVar22 + uVar8 <= puVar20 || puVar20 + uVar8 <= puVar22)) {
            puVar11 = puVar22 + 2;
            puVar12 = puVar23 + 2;
            puVar14 = puVar20 + 2;
            lVar10 = lVar21;
            do {
              uVar26 = puVar11[-1];
              uVar19 = puVar11[-2];
              uVar28 = puVar11[1];
              uVar27 = *puVar11;
              puVar11 = puVar11 + 4;
              lVar10 = lVar10 + -4;
              puVar12[-1] = uVar26;
              puVar12[-2] = uVar19;
              puVar12[1] = uVar28;
              *puVar12 = uVar27;
              puVar14[-1] = uVar26;
              puVar14[-2] = uVar19;
              puVar14[1] = uVar28;
              *puVar14 = uVar27;
              puVar12 = puVar12 + 4;
              puVar14 = puVar14 + 4;
            } while (lVar10 != 0);
            lVar10 = lVar21;
            if ((uVar6 & 3) == 0) goto LAB_011007d0;
          }
        }
        lVar21 = uVar8 - lVar10;
        puVar11 = puVar20 + lVar10;
        puVar12 = puVar23 + lVar10;
        puVar14 = puVar22 + lVar10;
        do {
          uVar19 = *puVar14;
          lVar21 = lVar21 + -1;
          *puVar12 = uVar19;
          *puVar11 = uVar19;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar21 != 0);
      }
LAB_011007d0:
      if (0 < (int)uVar7) {
        uVar9 = (ulong)(int)(uVar7 << 1);
        uVar8 = uVar9;
        if ((long)uVar9 < 2) {
          uVar8 = 1;
        }
        lVar21 = (long)(int)uVar7 * (long)iVar5;
        lVar10 = (long)(int)uVar7 * ((long)iVar5 + -2);
        if ((uVar8 < 4) || (uVar15 = uVar8 & 0x7ffffffffffffffc, uVar15 == 0)) {
          uVar13 = 0;
LAB_0110093c:
          do {
            uVar8 = uVar13 + 1;
            puVar23[lVar10 + uVar13] = puVar22[lVar21 + uVar13];
            puVar23[lVar21 + uVar13] = puVar22[lVar10 + uVar13];
            uVar13 = uVar8;
          } while ((long)uVar8 < (long)uVar9);
        }
        else {
          uVar3 = uVar9;
          if ((long)uVar9 < 2) {
            uVar3 = 1;
          }
          puVar11 = puVar23 + lVar10;
          puVar12 = puVar23 + uVar3 + lVar21;
          puVar14 = puVar23 + lVar21;
          puVar24 = puVar23 + uVar3 + lVar10;
          uVar13 = 0;
          if (((puVar11 < puVar12 && puVar14 < puVar24) ||
              (puVar11 < puVar22 + uVar3 + lVar21 && puVar22 + lVar21 < puVar24)) ||
             ((puVar11 < puVar22 + uVar3 + lVar10 && puVar22 + lVar10 < puVar24 ||
              ((puVar14 < puVar22 + uVar3 + lVar21 && puVar22 + lVar21 < puVar12 ||
               (puVar11 = puVar22, puVar24 = puVar23, uVar25 = uVar15,
               puVar14 < puVar22 + uVar3 + lVar10 && puVar22 + lVar10 < puVar12))))))
          goto LAB_0110093c;
          do {
            puVar12 = puVar11 + lVar21;
            uVar19 = *puVar12;
            uVar27 = puVar12[3];
            uVar26 = puVar12[2];
            puVar14 = puVar24 + lVar10;
            puVar1 = puVar11 + lVar10;
            puVar2 = puVar24 + lVar21;
            puVar14[1] = puVar12[1];
            *puVar14 = uVar19;
            puVar14[3] = uVar27;
            puVar14[2] = uVar26;
            uVar19 = *puVar1;
            uVar27 = puVar1[3];
            uVar26 = puVar1[2];
            uVar25 = uVar25 - 4;
            puVar2[1] = puVar1[1];
            *puVar2 = uVar19;
            puVar2[3] = uVar27;
            puVar2[2] = uVar26;
            puVar11 = puVar11 + 4;
            puVar24 = puVar24 + 4;
          } while (uVar25 != 0);
          uVar13 = uVar15;
          if (uVar8 != uVar15) goto LAB_0110093c;
        }
        uVar8 = (ulong)uVar7;
        puVar22 = puVar20 + -(long)(int)uVar7;
        do {
          uVar8 = uVar8 - 1;
          *puVar22 = *puVar20;
          puVar22 = puVar22 + 1;
        } while (uVar8 != 0);
      }
      lVar17 = lVar17 + 1;
      lVar18 = lVar18 + 0x60;
    } while (lVar17 != iVar4);
  }
  *(undefined8 *)(lVar16 + 0x78) = 0;
  *(undefined4 *)(lVar16 + 0x84) = 0;
  *(undefined8 *)(lVar16 + 0x60) = 0;
  return;
}

