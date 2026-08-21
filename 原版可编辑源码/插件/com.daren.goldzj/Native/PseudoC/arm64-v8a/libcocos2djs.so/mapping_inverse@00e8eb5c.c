
undefined8 mapping_inverse(long *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  int *piVar10;
  int *piVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong local_80 [4];
  
  local_80[1] = tpidr_el0;
  local_80[3] = *(long *)(local_80[1] + 0x28);
  lVar16 = *param_1;
  lVar17 = *(long *)(lVar16 + 0x30);
  uVar14 = *(ulong *)(lVar17 + param_1[0xb] * 8);
  uVar4 = (ulong)*(int *)(lVar16 + 4);
  uVar6 = uVar4 * 8 + 0xf & 0xfffffffffffffff0;
  lVar5 = (long)local_80 - uVar6;
  uVar8 = uVar4 * 4 + 0xf & 0xfffffffffffffff0;
  lVar13 = lVar5 - uVar8;
  lVar15 = lVar13 - uVar8;
  local_80[2] = lVar15 - uVar6;
  uVar6 = uVar14;
  if (0 < *(int *)(lVar16 + 4)) {
    lVar12 = 0;
    local_80[0] = uVar14;
    do {
      if (*param_2 < 2) {
        uVar6 = 0;
      }
      else {
        uVar6 = (ulong)*(byte *)(*(long *)(param_2 + 2) + lVar12);
      }
      uVar6 = (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar6 * 2);
      if (*(char *)(*(long *)(lVar17 + 0x38) + uVar6) == '\0') {
        floor0_memosize(*(undefined8 *)(*(long *)(lVar17 + 0x40) + uVar6 * 8));
        lVar3 = floor0_inverse1(param_1,*(undefined8 *)(*(long *)(lVar17 + 0x40) + uVar6 * 8));
      }
      else {
        floor1_memosize();
        lVar3 = floor1_inverse1(param_1,*(undefined8 *)(*(long *)(lVar17 + 0x40) + uVar6 * 8));
      }
      *(long *)(local_80[2] + lVar12 * 8) = lVar3;
      *(uint *)(lVar15 + lVar12 * 4) = (uint)(lVar3 != 0);
      memset(*(void **)(param_1[7] + lVar12 * 8),0,(uVar14 & 0x3fffffffffffffff) << 1);
      uVar4 = (ulong)*(int *)(lVar16 + 4);
      lVar12 = lVar12 + 1;
      uVar6 = local_80[0];
    } while (lVar12 < (long)uVar4);
  }
  iVar7 = param_2[6];
  if (0 < iVar7) {
    lVar12 = 0;
    pbVar9 = (byte *)(*(long *)(param_2 + 8) + 1);
    do {
      bVar2 = *pbVar9;
      if ((*(int *)(lVar15 + (ulong)pbVar9[-1] * 4) != 0) ||
         (*(int *)(lVar15 + (ulong)bVar2 * 4) != 0)) {
        *(undefined4 *)(lVar15 + (ulong)pbVar9[-1] * 4) = 1;
        *(undefined4 *)(lVar15 + (ulong)bVar2 * 4) = 1;
      }
      lVar12 = lVar12 + 1;
      pbVar9 = pbVar9 + 2;
    } while (lVar12 < iVar7);
  }
  if (0 < *param_2) {
    uVar8 = 0;
    if (0 < (int)uVar4) goto LAB_00e8ed58;
    do {
      iVar7 = 0;
      while( true ) {
        res_inverse(param_1,*(long *)(lVar17 + 0x48) +
                            (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar8 * 2 + 1) * 0x30,lVar5,
                    lVar13,iVar7);
        uVar8 = uVar8 + 1;
        if ((long)*param_2 <= (long)uVar8) {
          iVar7 = param_2[6];
          goto LAB_00e8ede8;
        }
        uVar4 = (ulong)*(uint *)(lVar16 + 4);
        if ((int)*(uint *)(lVar16 + 4) < 1) break;
LAB_00e8ed58:
        lVar3 = *(long *)(param_2 + 2);
        lVar12 = 0;
        iVar7 = 0;
        do {
          if ((lVar3 == 0) || (uVar8 == *(byte *)(lVar3 + lVar12))) {
            *(uint *)(lVar13 + (long)iVar7 * 4) = (uint)(*(int *)(lVar15 + lVar12 * 4) != 0);
            *(undefined8 *)(lVar5 + (long)iVar7 * 8) = *(undefined8 *)(param_1[7] + lVar12 * 8);
            uVar4 = (ulong)*(uint *)(lVar16 + 4);
            iVar7 = iVar7 + 1;
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 < (int)uVar4);
      }
    } while( true );
  }
LAB_00e8ede8:
  if (0 < iVar7) {
    lVar5 = param_1[7];
    lVar13 = *(long *)(param_2 + 8);
    uVar4 = uVar6;
    if ((long)uVar6 < 0) {
      uVar4 = uVar6 + 1;
    }
    lVar15 = (long)iVar7;
    do {
      lVar15 = lVar15 + -1;
      if (1 < (long)uVar6) {
        pbVar9 = (byte *)(lVar13 + lVar15 * 2);
        piVar10 = *(int **)(lVar5 + (ulong)*pbVar9 * 8);
        piVar11 = *(int **)(lVar5 + (ulong)pbVar9[1] * 8);
        lVar12 = (long)uVar4 >> 1;
        do {
          iVar7 = *piVar10;
          iVar1 = *piVar11;
          if (iVar7 < 1) {
            if (iVar1 < 1) {
              *piVar11 = iVar7;
              iVar1 = -iVar1;
              goto LAB_00e8ee78;
            }
            *piVar11 = iVar1 + iVar7;
          }
          else if (iVar1 < 1) {
            *piVar11 = iVar7;
LAB_00e8ee78:
            *piVar10 = iVar1 + iVar7;
          }
          else {
            *piVar11 = iVar7 - iVar1;
          }
          piVar11 = piVar11 + 1;
          lVar12 = lVar12 + -1;
          piVar10 = piVar10 + 1;
        } while (lVar12 != 0);
      }
    } while (0 < lVar15);
  }
  if (0 < *(int *)(lVar16 + 4)) {
    lVar5 = 0;
    do {
      if (*param_2 < 2) {
        uVar4 = 0;
      }
      else {
        uVar4 = (ulong)*(byte *)(*(long *)(param_2 + 2) + lVar5);
      }
      uVar4 = (ulong)*(byte *)(*(long *)(param_2 + 4) + uVar4 * 2);
      if (*(char *)(*(long *)(lVar17 + 0x38) + uVar4) == '\0') {
        floor0_inverse2(param_1,*(undefined8 *)(*(long *)(lVar17 + 0x40) + uVar4 * 8),
                        *(undefined8 *)(local_80[2] + lVar5 * 8),
                        *(undefined8 *)(param_1[7] + lVar5 * 8));
      }
      else {
        floor1_inverse2();
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < *(int *)(lVar16 + 4));
    if (0 < *(int *)(lVar16 + 4)) {
      lVar5 = 0;
      do {
        mdct_backward(uVar6 & 0xffffffff,*(undefined8 *)(param_1[7] + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar16 + 4));
    }
  }
  if (*(long *)(local_80[1] + 0x28) != local_80[3]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 0;
}

