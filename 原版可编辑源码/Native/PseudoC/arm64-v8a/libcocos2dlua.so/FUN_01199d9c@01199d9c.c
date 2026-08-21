
void FUN_01199d9c(short *param_1,short *param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  short *psVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_18;
  
  lVar5 = tpidr_el0;
  local_18 = *(long *)(lVar5 + 0x28);
  if (*param_1 == -1) {
    iVar6 = 0;
  }
  else if (param_1[1] == -1) {
    iVar6 = 1;
  }
  else if (param_1[2] == -1) {
    iVar6 = 2;
  }
  else if (param_1[3] == -1) {
    iVar6 = 3;
  }
  else if (param_1[4] == -1) {
    iVar6 = 4;
  }
  else {
    iVar6 = 5;
    if (param_1[5] != -1) {
      iVar6 = 6;
    }
  }
  if (*param_2 == -1) {
    iVar7 = 0;
  }
  else if (param_2[1] == -1) {
    iVar7 = 1;
  }
  else if (param_2[2] == -1) {
    iVar7 = 2;
  }
  else if (param_2[3] == -1) {
    iVar7 = 3;
  }
  else if (param_2[4] == -1) {
    iVar7 = 4;
  }
  else {
    iVar7 = 5;
    if (param_2[5] != -1) {
      iVar7 = 6;
    }
  }
  uVar4 = iVar6 - 1;
  local_28 = 0xffffffffffffffff;
  uStack_20 = 0xffffffffffffffff;
  local_30 = 0xffffffffffffffff;
  if ((int)uVar4 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ulong)uVar4;
    if (uVar4 == 1) {
      uVar11 = 0;
      iVar12 = 0;
    }
    else {
      uVar11 = uVar9 & 0xfffffffe;
      iVar12 = (int)uVar11;
      iVar14 = param_3 + 1;
      psVar10 = (short *)((ulong)&local_30 | 2);
      uVar15 = uVar11;
      do {
        iVar2 = 0;
        if (iVar6 != 0) {
          iVar2 = iVar14 / iVar6;
        }
        iVar3 = 0;
        if (iVar6 != 0) {
          iVar3 = (iVar14 + 1) / iVar6;
        }
        iVar2 = iVar14 - iVar2 * iVar6;
        sVar1 = param_1[(iVar14 + 1) - iVar3 * iVar6];
        uVar15 = uVar15 - 2;
        iVar14 = iVar14 + 2;
        psVar10[-1] = param_1[iVar2];
        *psVar10 = sVar1;
        psVar10 = psVar10 + 2;
      } while (uVar15 != 0);
      if (uVar11 == uVar9) goto LAB_01199f54;
    }
    iVar12 = iVar12 + param_3;
    lVar13 = uVar9 - uVar11;
    psVar10 = (short *)((long)&local_30 + uVar11 * 2);
    do {
      iVar12 = iVar12 + 1;
      iVar14 = 0;
      if (iVar6 != 0) {
        iVar14 = iVar12 / iVar6;
      }
      lVar13 = lVar13 + -1;
      *psVar10 = param_1[iVar12 - iVar14 * iVar6];
      psVar10 = psVar10 + 1;
    } while (lVar13 != 0);
  }
LAB_01199f54:
  if (0 < iVar7 + -1) {
    uVar15 = (ulong)(iVar7 - 2) + 1;
    if (uVar15 < 2) {
      uVar8 = 0;
      uVar11 = uVar9;
    }
    else {
      uVar8 = uVar15 & 0x1fffffffe;
      uVar11 = uVar9 + uVar8;
      iVar6 = param_4 + 1;
      psVar10 = (short *)((long)&local_30 + uVar9 * 2 + 2);
      uVar9 = uVar8;
      do {
        iVar14 = 0;
        if (iVar7 != 0) {
          iVar14 = iVar6 / iVar7;
        }
        iVar12 = 0;
        if (iVar7 != 0) {
          iVar12 = (iVar6 + 1) / iVar7;
        }
        iVar14 = iVar6 - iVar14 * iVar7;
        sVar1 = param_2[(iVar6 + 1) - iVar12 * iVar7];
        uVar9 = uVar9 - 2;
        iVar6 = iVar6 + 2;
        psVar10[-1] = param_2[iVar14];
        *psVar10 = sVar1;
        psVar10 = psVar10 + 2;
      } while (uVar9 != 0);
      if (uVar15 == uVar8) goto LAB_01199ffc;
    }
    iVar6 = (int)uVar8 + 1;
    psVar10 = (short *)((long)&local_30 + uVar11 * 2);
    do {
      iVar14 = param_4 + iVar6;
      iVar12 = 0;
      if (iVar7 != 0) {
        iVar12 = iVar14 / iVar7;
      }
      iVar6 = iVar6 + 1;
      *psVar10 = param_2[iVar14 - iVar12 * iVar7];
      psVar10 = psVar10 + 1;
    } while (iVar7 != iVar6);
  }
LAB_01199ffc:
  *(undefined4 *)(param_1 + 4) = (undefined4)local_28;
  *(undefined8 *)param_1 = local_30;
  if (*(long *)(lVar5 + 0x28) != local_18) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

