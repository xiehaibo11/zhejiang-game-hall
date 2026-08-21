
void FUN_00e6f78c(__jmp_buf_tag *param_1,int param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  
  iVar1 = param_1[1].__mask_was_saved + -1;
  if (param_1[1].__mask_was_saved <= param_2) {
    iVar1 = param_2;
  }
  if (((int)param_1[1].__saved_mask.__val[2] == 0) &&
     ((iVar4 = (int)param_1[1].__saved_mask.__val[1], iVar4 != 0 ||
      (*(int *)((long)param_1[1].__saved_mask.__val + 0xc) != 0)))) {
    piVar5 = (int *)(param_1[1].__saved_mask.__val[3] +
                    (long)(*(int *)((long)param_1[1].__jmpbuf + 0x3c) -
                          (int)param_1[1].__saved_mask.__val[0]) * 8);
    piVar6 = *(int **)piVar5;
    iVar3 = (int)param_1[1].__jmpbuf[7];
    if ((piVar6 != (int *)0x0) && (iVar7 = *piVar6, iVar7 <= iVar3)) {
      do {
        piVar5 = piVar6;
        if (iVar7 == iVar3) {
          piVar5[2] = piVar5[2] + iVar4;
          piVar5[1] = piVar5[1] + *(int *)((long)param_1[1].__saved_mask.__val + 0xc);
          goto LAB_00e6f844;
        }
        piVar6 = *(int **)(piVar5 + 4);
      } while ((piVar6 != (int *)0x0) && (iVar7 = *piVar6, iVar7 <= iVar3));
      piVar5 = piVar5 + 4;
    }
    uVar2 = param_1[1].__saved_mask.__val[6];
    if ((long)param_1[1].__saved_mask.__val[5] <= (long)uVar2) {
                    /* WARNING: Subroutine does not return */
      longjmp(param_1,1);
    }
    uVar8 = param_1[1].__saved_mask.__val[4];
    param_1[1].__saved_mask.__val[6] = uVar2 + 1;
    piVar6 = (int *)(uVar8 + uVar2 * 0x18);
    *piVar6 = iVar3;
    piVar6[2] = iVar4;
    piVar6[1] = *(int *)((long)param_1[1].__saved_mask.__val + 0xc);
    *(undefined8 *)(piVar6 + 4) = *(undefined8 *)piVar5;
    *(int **)piVar5 = piVar6;
  }
LAB_00e6f844:
  iVar4 = *(int *)((long)param_1[1].__saved_mask.__val + 4);
  param_1[1].__saved_mask.__val[1] = 0;
  *(int *)(param_1[1].__jmpbuf + 7) = iVar1;
  *(int *)((long)param_1[1].__jmpbuf + 0x3c) = param_3;
  if (iVar4 <= param_3) {
    *(undefined4 *)(param_1[1].__saved_mask.__val + 2) = 1;
    return;
  }
  if (param_3 < (int)param_1[1].__saved_mask.__val[0]) {
    *(undefined4 *)(param_1[1].__saved_mask.__val + 2) = 1;
    return;
  }
  *(uint *)(param_1[1].__saved_mask.__val + 2) = (uint)(*(int *)&param_1[1].field_0x44 <= iVar1);
  return;
}

