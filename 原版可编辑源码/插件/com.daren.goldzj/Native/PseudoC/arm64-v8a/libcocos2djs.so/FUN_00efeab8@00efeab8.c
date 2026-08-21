
int FUN_00efeab8(long *param_1,long *param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 local_50;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00efe86c();
  iVar3 = iVar2;
  if (*(int *)((long)param_5 + 0xc) == *(int *)((long)param_4 + 0xc)) {
    if ((int)param_5[2] == (int)param_4[2]) {
      if ((*(uint *)(*param_5 + 0x1b) >> 0x1c & 1) ==
          (*(uint *)(*param_4 + 0x1b) & 0x10000000) >> 0x1c) {
        if (*(uint *)(param_5 + 1) <= *(uint *)(param_4 + 1)) goto LAB_00efed5c;
      }
      else if ((*(uint *)(*param_5 + 0x1b) >> 0x1c & 1) == 0) goto LAB_00efed5c;
    }
    else if ((int)param_5[2] <= (int)param_4[2]) goto LAB_00efed5c;
  }
  else if (*(int *)((long)param_4 + 0xc) <= *(int *)((long)param_5 + 0xc)) goto LAB_00efed5c;
  lVar5 = param_4[2];
  lVar8 = param_4[1];
  lVar6 = *param_4;
  lVar9 = param_5[1];
  lVar7 = *param_5;
  *(int *)(param_4 + 2) = (int)param_5[2];
  param_4[1] = lVar9;
  *param_4 = lVar7;
  local_50 = (undefined4)lVar5;
  *(undefined4 *)(param_5 + 2) = local_50;
  param_5[1] = lVar8;
  *param_5 = lVar6;
  iVar3 = iVar2 + 1;
  if (*(int *)((long)param_4 + 0xc) == *(int *)((long)param_3 + 0xc)) {
    if ((int)param_4[2] == (int)param_3[2]) {
      if ((*(uint *)(*param_4 + 0x1b) >> 0x1c & 1) ==
          (*(uint *)(*param_3 + 0x1b) & 0x10000000) >> 0x1c) {
        if (*(uint *)(param_4 + 1) <= *(uint *)(param_3 + 1)) goto LAB_00efed5c;
      }
      else if ((*(uint *)(*param_4 + 0x1b) >> 0x1c & 1) == 0) goto LAB_00efed5c;
    }
    else if ((int)param_4[2] <= (int)param_3[2]) goto LAB_00efed5c;
  }
  else if (*(int *)((long)param_3 + 0xc) <= *(int *)((long)param_4 + 0xc)) goto LAB_00efed5c;
  lVar5 = param_3[2];
  lVar8 = param_3[1];
  lVar6 = *param_3;
  lVar9 = param_4[1];
  lVar7 = *param_4;
  *(int *)(param_3 + 2) = (int)param_4[2];
  param_3[1] = lVar9;
  *param_3 = lVar7;
  local_50 = (undefined4)lVar5;
  *(undefined4 *)(param_4 + 2) = local_50;
  param_4[1] = lVar8;
  *param_4 = lVar6;
  iVar3 = iVar2 + 2;
  if (*(int *)((long)param_3 + 0xc) == *(int *)((long)param_2 + 0xc)) {
    if ((int)param_3[2] == (int)param_2[2]) {
      if ((*(uint *)(*param_3 + 0x1b) >> 0x1c & 1) ==
          (*(uint *)(*param_2 + 0x1b) & 0x10000000) >> 0x1c) {
        if (*(uint *)(param_3 + 1) <= *(uint *)(param_2 + 1)) goto LAB_00efed5c;
      }
      else if ((*(uint *)(*param_3 + 0x1b) >> 0x1c & 1) == 0) goto LAB_00efed5c;
    }
    else if ((int)param_3[2] <= (int)param_2[2]) goto LAB_00efed5c;
  }
  else if (*(int *)((long)param_2 + 0xc) <= *(int *)((long)param_3 + 0xc)) goto LAB_00efed5c;
  lVar5 = param_2[2];
  lVar8 = param_2[1];
  lVar6 = *param_2;
  lVar9 = param_3[1];
  lVar7 = *param_3;
  *(int *)(param_2 + 2) = (int)param_3[2];
  param_2[1] = lVar9;
  *param_2 = lVar7;
  local_50 = (undefined4)lVar5;
  *(undefined4 *)(param_3 + 2) = local_50;
  param_3[1] = lVar8;
  *param_3 = lVar6;
  iVar3 = iVar2 + 3;
  if (*(int *)((long)param_2 + 0xc) == *(int *)((long)param_1 + 0xc)) {
    if ((int)param_2[2] == (int)param_1[2]) {
      if ((*(uint *)(*param_2 + 0x1b) >> 0x1c & 1) ==
          (*(uint *)(*param_1 + 0x1b) & 0x10000000) >> 0x1c) {
        if (*(uint *)(param_2 + 1) <= *(uint *)(param_1 + 1)) goto LAB_00efed5c;
      }
      else if ((*(uint *)(*param_2 + 0x1b) >> 0x1c & 1) == 0) goto LAB_00efed5c;
    }
    else if ((int)param_2[2] <= (int)param_1[2]) goto LAB_00efed5c;
  }
  else if (*(int *)((long)param_1 + 0xc) <= *(int *)((long)param_2 + 0xc)) goto LAB_00efed5c;
  lVar5 = param_1[2];
  lVar8 = param_1[1];
  lVar6 = *param_1;
  lVar9 = param_2[1];
  lVar7 = *param_2;
  *(int *)(param_1 + 2) = (int)param_2[2];
  param_1[1] = lVar9;
  *param_1 = lVar7;
  local_50 = (undefined4)lVar5;
  *(undefined4 *)(param_2 + 2) = local_50;
  param_2[1] = lVar8;
  *param_2 = lVar6;
  iVar3 = iVar2 + 4;
LAB_00efed5c:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar3;
}

