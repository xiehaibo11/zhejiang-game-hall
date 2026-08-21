
void spx_drft_forward(uint *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar4 = *param_1;
  uVar18 = (ulong)uVar4;
  if (uVar4 != 1) {
    lVar19 = *(long *)(param_1 + 4);
    uVar22 = *(uint *)(lVar19 + 4);
    uVar20 = (ulong)uVar22;
    if (0 < (int)uVar22) {
      uVar15 = *(ulong *)(param_1 + 2);
      lVar21 = uVar15 + (long)(int)uVar4 * 4 + -4;
      iVar10 = 1;
      uVar17 = uVar18;
      uVar22 = uVar4;
      do {
        while( true ) {
          iVar5 = *(int *)(lVar19 + (long)((int)uVar20 + 1) * 4);
          iVar6 = 0;
          iVar16 = (int)uVar17;
          if (iVar16 != 0) {
            iVar6 = (int)uVar4 / iVar16;
          }
          iVar8 = 1 - iVar10;
          uVar7 = 0;
          if (iVar5 != 0) {
            uVar7 = iVar16 / iVar5;
          }
          uVar17 = (ulong)uVar7;
          uVar22 = uVar22 - iVar6 * (iVar5 + -1);
          if (iVar5 != 2) break;
          lVar1 = lVar21 + (long)(int)uVar22 * 4;
          if (iVar8 == 0) {
            FUN_0012d990(iVar6,uVar17,param_2,uVar15,lVar1);
            goto LAB_0012d094;
          }
          FUN_0012d990(iVar6,uVar17,uVar15,param_2,lVar1);
          iVar10 = iVar8;
joined_r0x0012d014:
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) goto LAB_0012d0cc;
        }
        if (iVar5 == 4) {
          lVar1 = lVar21 + (long)(int)uVar22 * 4;
          lVar2 = lVar21 + (long)(int)(uVar22 + iVar6) * 4;
          lVar3 = lVar21 + (long)(int)(uVar22 + iVar6 + iVar6) * 4;
          if (iVar8 != 0) {
            FUN_0012d674(iVar6,uVar17,uVar15,param_2,lVar1,lVar2,lVar3);
            iVar10 = iVar8;
            goto joined_r0x0012d014;
          }
          FUN_0012d674(iVar6,uVar17,param_2,uVar15,lVar1,lVar2,lVar3);
LAB_0012d094:
          iVar10 = 0;
          goto joined_r0x0012d014;
        }
        if (iVar6 != 1) {
          iVar10 = iVar8;
        }
        lVar1 = lVar21 + (long)(int)uVar22 * 4;
        if (iVar10 != 0) {
          FUN_0012db38(iVar6,iVar5,uVar17,iVar6 * uVar7,uVar15,uVar15,uVar15,param_2,param_2,lVar1);
          goto LAB_0012d094;
        }
        FUN_0012db38(iVar6,iVar5,uVar7,iVar6 * uVar7,param_2,param_2,param_2,uVar15,uVar15,lVar1);
        iVar10 = 1;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
LAB_0012d0cc:
      if ((0 < (int)uVar4) && (iVar10 != 1)) {
        if ((uVar4 < 8) || ((param_2 < uVar15 + uVar18 * 4 && (uVar15 < param_2 + uVar18 * 4)))) {
          uVar20 = 0;
        }
        else {
          uVar20 = uVar18 & 0xfffffff8;
          puVar12 = (undefined8 *)(uVar15 + 0x10);
          puVar14 = (undefined8 *)(param_2 + 0x10);
          uVar17 = uVar20;
          do {
            puVar9 = puVar12 + -1;
            uVar23 = puVar12[-2];
            uVar25 = puVar12[1];
            uVar24 = *puVar12;
            puVar12 = puVar12 + 4;
            uVar17 = uVar17 - 8;
            puVar14[-1] = *puVar9;
            puVar14[-2] = uVar23;
            puVar14[1] = uVar25;
            *puVar14 = uVar24;
            puVar14 = puVar14 + 4;
          } while (uVar17 != 0);
          if (uVar20 == uVar18) {
            return;
          }
        }
        lVar19 = uVar18 - uVar20;
        puVar11 = (undefined4 *)(param_2 + uVar20 * 4);
        puVar13 = (undefined4 *)(uVar15 + uVar20 * 4);
        do {
          lVar19 = lVar19 + -1;
          *puVar11 = *puVar13;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar19 != 0);
      }
    }
  }
  return;
}

