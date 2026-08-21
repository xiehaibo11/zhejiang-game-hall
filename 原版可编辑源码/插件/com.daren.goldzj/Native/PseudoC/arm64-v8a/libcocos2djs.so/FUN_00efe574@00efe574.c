
void FUN_00efe574(long *param_1,long *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined4 local_20;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)((long)param_2 + 0xc);
  if (iVar2 == *(int *)((long)param_1 + 0xc)) {
    if ((int)param_2[2] == (int)param_1[2]) {
      if ((*(uint *)(*param_2 + 0x1b) >> 0x1c & 1) ==
          (*(uint *)(*param_1 + 0x1b) & 0x10000000) >> 0x1c) {
        uVar5 = (uint)(*(uint *)(param_1 + 1) < *(uint *)(param_2 + 1));
      }
      else {
        uVar5 = *(uint *)(*param_2 + 0x1b) >> 0x1c & 1;
      }
    }
    else {
      uVar5 = (uint)((int)param_1[2] < (int)param_2[2]);
    }
  }
  else {
    uVar5 = (uint)(iVar2 < *(int *)((long)param_1 + 0xc));
  }
  if (*(int *)((long)param_3 + 0xc) == iVar2) {
    if ((int)param_3[2] != (int)param_2[2]) {
      bVar1 = (int)param_2[2] < (int)param_3[2];
      goto joined_r0x00efe648;
    }
    if ((*(uint *)(*param_3 + 0x1b) >> 0x1c & 1) ==
        (*(uint *)(*param_2 + 0x1b) & 0x10000000) >> 0x1c) {
      bVar1 = *(uint *)(param_2 + 1) < *(uint *)(param_3 + 1);
      goto joined_r0x00efe648;
    }
    uVar8 = *(uint *)(*param_3 + 0x1b) >> 0x1c & 1;
    if (uVar5 == 0) goto LAB_00efe690;
LAB_00efe64c:
    lVar10 = param_1[1];
    lVar7 = *param_1;
    local_20 = (undefined4)param_1[2];
    if (uVar8 != 0) {
      lVar11 = param_3[1];
      lVar9 = *param_3;
      *(int *)(param_1 + 2) = (int)param_3[2];
      param_1[1] = lVar11;
      *param_1 = lVar9;
      uVar4 = 1;
      *(undefined4 *)(param_3 + 2) = local_20;
      param_3[1] = lVar10;
      *param_3 = lVar7;
      goto LAB_00efe84c;
    }
    lVar11 = param_2[1];
    lVar9 = *param_2;
    *(int *)(param_1 + 2) = (int)param_2[2];
    param_1[1] = lVar11;
    *param_1 = lVar9;
    *(undefined4 *)(param_2 + 2) = local_20;
    param_2[1] = lVar10;
    *param_2 = lVar7;
    if (*(int *)((long)param_3 + 0xc) == *(int *)((long)param_2 + 0xc)) {
      if ((int)param_3[2] == (int)param_2[2]) {
        if ((*(uint *)(*param_3 + 0x1b) >> 0x1c & 1) ==
            (*(uint *)(*param_2 + 0x1b) & 0x10000000) >> 0x1c) {
          if (*(uint *)(param_3 + 1) <= *(uint *)(param_2 + 1)) goto LAB_00efe848;
        }
        else if ((*(uint *)(*param_3 + 0x1b) >> 0x1c & 1) == 0) {
LAB_00efe848:
          uVar4 = 1;
          goto LAB_00efe84c;
        }
      }
      else if ((int)param_3[2] <= (int)param_2[2]) goto LAB_00efe848;
    }
    else if (*(int *)((long)param_2 + 0xc) <= *(int *)((long)param_3 + 0xc)) goto LAB_00efe848;
    lVar7 = param_2[2];
    lVar11 = param_2[1];
    lVar10 = *param_2;
    lVar12 = param_3[1];
    lVar9 = *param_3;
    *(int *)(param_2 + 2) = (int)param_3[2];
    param_2[1] = lVar12;
    *param_2 = lVar9;
    local_20 = (undefined4)lVar7;
    *(undefined4 *)(param_3 + 2) = local_20;
    param_3[1] = lVar11;
    *param_3 = lVar10;
  }
  else {
    bVar1 = *(int *)((long)param_3 + 0xc) < iVar2;
joined_r0x00efe648:
    uVar8 = (uint)bVar1;
    if (uVar5 != 0) goto LAB_00efe64c;
LAB_00efe690:
    if (uVar8 == 0) {
      uVar4 = 0;
      goto LAB_00efe84c;
    }
    lVar7 = param_2[2];
    lVar11 = param_2[1];
    lVar10 = *param_2;
    lVar12 = param_3[1];
    lVar9 = *param_3;
    *(int *)(param_2 + 2) = (int)param_3[2];
    param_2[1] = lVar12;
    *param_2 = lVar9;
    local_20 = (undefined4)lVar7;
    *(undefined4 *)(param_3 + 2) = local_20;
    param_3[1] = lVar11;
    *param_3 = lVar10;
    if (*(int *)((long)param_2 + 0xc) != *(int *)((long)param_1 + 0xc)) {
      if (*(int *)((long)param_2 + 0xc) < *(int *)((long)param_1 + 0xc)) goto LAB_00efe7cc;
      goto LAB_00efe848;
    }
    if ((int)param_2[2] != (int)param_1[2]) {
      if ((int)param_1[2] < (int)param_2[2]) goto LAB_00efe7cc;
      goto LAB_00efe848;
    }
    if ((*(uint *)(*param_2 + 0x1b) >> 0x1c & 1) ==
        (*(uint *)(*param_1 + 0x1b) & 0x10000000) >> 0x1c) {
      if (*(uint *)(param_1 + 1) < *(uint *)(param_2 + 1)) goto LAB_00efe7cc;
      goto LAB_00efe848;
    }
    if ((*(uint *)(*param_2 + 0x1b) >> 0x1c & 1) == 0) goto LAB_00efe848;
LAB_00efe7cc:
    lVar7 = param_1[2];
    lVar11 = param_1[1];
    lVar10 = *param_1;
    lVar12 = param_2[1];
    lVar9 = *param_2;
    *(int *)(param_1 + 2) = (int)param_2[2];
    param_1[1] = lVar12;
    *param_1 = lVar9;
    local_20 = (undefined4)lVar7;
    *(undefined4 *)(param_2 + 2) = local_20;
    param_2[1] = lVar11;
    *param_2 = lVar10;
  }
  uVar4 = 2;
LAB_00efe84c:
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

