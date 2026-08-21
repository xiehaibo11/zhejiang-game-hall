
undefined8 mapping_inverse(long *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  byte *pbVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong local_80 [4];
  
  local_80[1] = tpidr_el0;
  local_80[3] = *(long *)(local_80[1] + 0x28);
  lVar17 = *param_1;
  lVar18 = *(long *)(lVar17 + 0x30);
  uVar15 = *(ulong *)(lVar18 + param_1[0xb] * 8);
  uVar5 = (ulong)*(int *)(lVar17 + 4);
  uVar7 = uVar5 * 8 + 0xf & 0xfffffffffffffff0;
  lVar6 = (long)local_80 - uVar7;
  uVar9 = uVar5 * 4 + 0xf & 0xfffffffffffffff0;
  lVar14 = lVar6 - uVar9;
  lVar16 = lVar14 - uVar9;
  local_80[2] = lVar16 - uVar7;
  uVar7 = uVar15;
  if (0 < *(int *)(lVar17 + 4)) {
    lVar13 = 0;
    local_80[0] = uVar15;
    do {
      if (*param_2 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)*(byte *)(*(long *)(param_2 + 2) + lVar13);
      }
      uVar5 = (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar5 * 2);
      if (*(char *)(*(long *)(lVar18 + 0x38) + uVar5) == '\0') {
        floor0_memosize(*(undefined8 *)(*(long *)(lVar18 + 0x40) + uVar5 * 8));
        lVar3 = floor0_inverse1(param_1,*(undefined8 *)(*(long *)(lVar18 + 0x40) + uVar5 * 8));
      }
      else {
        floor1_memosize();
        lVar3 = floor1_inverse1(param_1,*(undefined8 *)(*(long *)(lVar18 + 0x40) + uVar5 * 8));
      }
      *(long *)(local_80[2] + lVar13 * 8) = lVar3;
      *(uint *)(lVar16 + lVar13 * 4) = (uint)(lVar3 != 0);
      memset(*(void **)(param_1[7] + lVar13 * 8),0,(uVar15 & 0x3fffffffffffffff) << 1);
      uVar5 = (ulong)*(int *)(lVar17 + 4);
      lVar13 = lVar13 + 1;
      uVar7 = local_80[0];
    } while (lVar13 < (long)uVar5);
  }
  iVar8 = param_2[6];
  if (0 < iVar8) {
    lVar13 = 0;
    pbVar10 = (byte *)(*(long *)(param_2 + 8) + 1);
    do {
      bVar2 = *pbVar10;
      if ((*(int *)(lVar16 + (ulong)pbVar10[-1] * 4) != 0) ||
         (*(int *)(lVar16 + (ulong)bVar2 * 4) != 0)) {
        *(undefined4 *)(lVar16 + (ulong)pbVar10[-1] * 4) = 1;
        *(undefined4 *)(lVar16 + (ulong)bVar2 * 4) = 1;
      }
      lVar13 = lVar13 + 1;
      pbVar10 = pbVar10 + 2;
    } while (lVar13 < iVar8);
  }
  if (0 < *param_2) {
    uVar9 = 0;
    uVar4 = (uint)uVar5;
    do {
      if (0 < (int)uVar4) {
        lVar3 = *(long *)(param_2 + 2);
        lVar13 = 0;
        iVar8 = 0;
        if (lVar3 != 0) goto LAB_00eba688;
        do {
          *(uint *)(lVar14 + (long)iVar8 * 4) = (uint)(*(int *)(lVar16 + lVar13 * 4) != 0);
          *(undefined8 *)(lVar6 + (long)iVar8 * 8) = *(undefined8 *)(param_1[7] + lVar13 * 8);
          uVar5 = (ulong)*(uint *)(lVar17 + 4);
          iVar8 = iVar8 + 1;
          do {
            lVar13 = lVar13 + 1;
            if ((int)uVar5 <= lVar13) goto LAB_00eba698;
            if (lVar3 == 0) break;
LAB_00eba688:
          } while (uVar9 != *(byte *)(lVar3 + lVar13));
        } while( true );
      }
      iVar8 = 0;
LAB_00eba698:
      res_inverse(param_1,*(long *)(lVar18 + 0x48) +
                          (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar9 * 2 + 1) * 0x30,lVar6,
                  lVar14,iVar8);
      uVar9 = uVar9 + 1;
      if ((long)*param_2 <= (long)uVar9) goto code_r0x00eba6cc;
      uVar4 = *(uint *)(lVar17 + 4);
      uVar5 = (ulong)uVar4;
    } while( true );
  }
LAB_00eba6d4:
  if (0 < iVar8) {
    lVar6 = param_1[7];
    lVar14 = *(long *)(param_2 + 8);
    uVar5 = uVar7;
    if ((long)uVar7 < 0) {
      uVar5 = uVar7 + 1;
    }
    lVar16 = (long)iVar8;
    do {
      lVar16 = lVar16 + -1;
      if (1 < (long)uVar7) {
        pbVar10 = (byte *)(lVar14 + lVar16 * 2);
        piVar11 = *(int **)(lVar6 + (ulong)*pbVar10 * 8);
        piVar12 = *(int **)(lVar6 + (ulong)pbVar10[1] * 8);
        lVar13 = (long)uVar5 >> 1;
        do {
          iVar8 = *piVar11;
          iVar1 = *piVar12;
          if (iVar8 < 1) {
            if (0 < iVar1) goto LAB_00eba72c;
            *piVar12 = iVar8;
            iVar1 = -iVar1;
LAB_00eba77c:
            *piVar11 = iVar1 + iVar8;
          }
          else {
            if (iVar1 < 1) {
              *piVar12 = iVar8;
              goto LAB_00eba77c;
            }
            iVar1 = -iVar1;
LAB_00eba72c:
            *piVar12 = iVar8 + iVar1;
          }
          piVar12 = piVar12 + 1;
          lVar13 = lVar13 + -1;
          piVar11 = piVar11 + 1;
        } while (lVar13 != 0);
      }
    } while (0 < lVar16);
  }
  if (0 < *(int *)(lVar17 + 4)) {
    lVar6 = 0;
    do {
      if (*param_2 < 2) {
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)*(byte *)(*(long *)(param_2 + 2) + lVar6);
      }
      uVar5 = (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar5 * 2);
      if (*(char *)(*(long *)(lVar18 + 0x38) + uVar5) == '\0') {
        floor0_inverse2(param_1,*(undefined8 *)(*(long *)(lVar18 + 0x40) + uVar5 * 8),
                        *(undefined8 *)(local_80[2] + lVar6 * 8),
                        *(undefined8 *)(param_1[7] + lVar6 * 8));
      }
      else {
        floor1_inverse2();
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(lVar17 + 4));
    if (0 < *(int *)(lVar17 + 4)) {
      lVar6 = 0;
      do {
        mdct_backward(uVar7 & 0xffffffff,*(undefined8 *)(param_1[7] + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(lVar17 + 4));
    }
  }
  if (*(long *)(local_80[1] + 0x28) == local_80[3]) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00eba6cc:
  iVar8 = param_2[6];
  goto LAB_00eba6d4;
}

