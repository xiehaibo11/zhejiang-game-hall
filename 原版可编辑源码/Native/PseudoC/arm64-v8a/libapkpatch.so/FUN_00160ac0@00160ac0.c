
void FUN_00160ac0(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if ((param_6 & 1) == 0) {
    if (*(long *)(param_1 + 8) != *(long *)(lVar3 + 8)) goto LAB_00160b58;
  }
  else if ((param_1 != lVar3) &&
          (iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(lVar3 + 8)), iVar1 != 0)) {
LAB_00160b58:
                    /* WARNING: Could not recover jumptable at 0x00160b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
              (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6 & 1);
    return;
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) != param_4) {
    return;
  }
  *(undefined1 *)(param_2 + 0x4c) = 1;
  if (*(long *)(param_2 + 0x20) == 0) {
    iVar1 = *(int *)(param_2 + 0x48);
    *(long *)(param_2 + 0x20) = param_3;
    *(int *)(param_2 + 0x30) = param_5;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    iVar2 = param_5;
  }
  else {
    if (*(long *)(param_2 + 0x20) != param_3) {
      *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
      goto LAB_00160be0;
    }
    iVar2 = *(int *)(param_2 + 0x30);
    if (*(int *)(param_2 + 0x30) == 2) {
      *(int *)(param_2 + 0x30) = param_5;
      iVar2 = param_5;
    }
    iVar1 = *(int *)(param_2 + 0x48);
  }
  if (iVar1 != 1) {
    return;
  }
  if (iVar2 != 1) {
    return;
  }
LAB_00160be0:
  *(undefined1 *)(param_2 + 0x4e) = 1;
  return;
}

