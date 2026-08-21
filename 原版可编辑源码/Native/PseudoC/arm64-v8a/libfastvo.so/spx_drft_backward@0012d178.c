
void spx_drft_backward(uint *param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar4 = *param_1;
  if (uVar4 != 1) {
    uVar2 = *(uint *)(*(long *)(param_1 + 4) + 4);
    uVar18 = (ulong)uVar2;
    if (0 < (int)uVar2) {
      uVar12 = (ulong)uVar4;
      uVar16 = *(ulong *)(param_1 + 2);
      piVar20 = (int *)(*(long *)(param_1 + 4) + 8);
      iVar19 = 0;
      lVar17 = uVar16 + (long)(int)uVar4 * 4 + -4;
      iVar21 = 1;
      iVar8 = 1;
      do {
        iVar3 = *piVar20;
        iVar5 = iVar3 * iVar8;
        iVar6 = 0;
        if (iVar5 != 0) {
          iVar6 = (int)uVar4 / iVar5;
        }
        if (iVar3 == 2) {
          lVar1 = lVar17 + (long)iVar21 * 4;
          if (iVar19 == 0) {
            FUN_001300c4(iVar6,iVar8,param_2,uVar16,lVar1);
          }
          else {
            FUN_001300c4(iVar6,iVar8,uVar16,param_2,lVar1);
          }
LAB_0012d2cc:
          iVar8 = 1 - iVar19;
        }
        else {
          if (iVar3 == 3) {
            uVar9 = param_2;
            uVar10 = uVar16;
            if (iVar19 != 0) {
              uVar9 = uVar16;
              uVar10 = param_2;
            }
            FUN_0013028c(iVar6,iVar8,uVar9,uVar10,lVar17 + (long)iVar21 * 4,
                         lVar17 + (long)(iVar6 + iVar21) * 4);
            goto LAB_0012d2cc;
          }
          if (iVar3 == 4) {
            uVar9 = param_2;
            uVar10 = uVar16;
            if (iVar19 != 0) {
              uVar9 = uVar16;
              uVar10 = param_2;
            }
            FUN_0012ed84(iVar6,iVar8,uVar9,uVar10,lVar17 + (long)iVar21 * 4,
                         lVar17 + (long)(iVar6 + iVar21) * 4,
                         lVar17 + (long)(iVar6 + iVar21 + iVar6) * 4);
            goto LAB_0012d2cc;
          }
          uVar9 = param_2;
          uVar10 = uVar16;
          if (iVar19 != 0) {
            uVar9 = uVar16;
            uVar10 = param_2;
          }
          FUN_001304a0(iVar6,iVar3,iVar8,iVar6 * iVar8,uVar9,uVar9,uVar9,uVar10,uVar10,
                       lVar17 + (long)iVar21 * 4);
          iVar8 = 1 - iVar19;
          if (iVar6 != 1) {
            iVar8 = iVar19;
          }
        }
        iVar19 = iVar8;
        uVar18 = uVar18 - 1;
        iVar21 = iVar21 + (iVar3 + -1) * iVar6;
        piVar20 = piVar20 + 1;
        iVar8 = iVar5;
      } while (uVar18 != 0);
      if ((0 < (int)uVar4) && (iVar19 != 0)) {
        if ((uVar4 < 8) || ((param_2 < uVar16 + uVar12 * 4 && (uVar16 < param_2 + uVar12 * 4)))) {
          uVar18 = 0;
        }
        else {
          puVar13 = (undefined8 *)(uVar16 + 0x10);
          puVar15 = (undefined8 *)(param_2 + 0x10);
          uVar18 = uVar12 & 0xfffffff8;
          uVar9 = uVar18;
          do {
            puVar7 = puVar13 + -1;
            uVar22 = puVar13[-2];
            uVar24 = puVar13[1];
            uVar23 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar9 = uVar9 - 8;
            puVar15[-1] = *puVar7;
            puVar15[-2] = uVar22;
            puVar15[1] = uVar24;
            *puVar15 = uVar23;
            puVar15 = puVar15 + 4;
          } while (uVar9 != 0);
          if (uVar18 == uVar12) {
            return;
          }
        }
        lVar17 = uVar12 - uVar18;
        puVar11 = (undefined4 *)(param_2 + uVar18 * 4);
        puVar14 = (undefined4 *)(uVar16 + uVar18 * 4);
        do {
          lVar17 = lVar17 + -1;
          *puVar11 = *puVar14;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar17 != 0);
      }
    }
  }
  return;
}

