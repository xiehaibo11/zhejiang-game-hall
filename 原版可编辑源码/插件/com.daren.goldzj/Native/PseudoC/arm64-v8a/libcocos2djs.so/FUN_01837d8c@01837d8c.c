
void FUN_01837d8c(long param_1,long param_2,long param_3,long param_4,int param_5,uint param_6)

{
  int iVar1;
  
  if ((param_6 & 1) == 0) {
    if (param_1 != *(long *)(param_2 + 0x10)) goto LAB_01837dd0;
  }
  else {
    iVar1 = strcmp(*(char **)(param_1 + 8),*(char **)(*(long *)(param_2 + 0x10) + 8));
    if (iVar1 != 0) {
LAB_01837dd0:
                    /* WARNING: Could not recover jumptable at 0x01837e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 0x10) + 0x28))
                (*(long **)(param_1 + 0x10),param_2,param_3,param_4,param_5,param_6 & 1);
      return;
    }
  }
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) == param_4) {
    *(undefined1 *)(param_2 + 0x4c) = 1;
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(int *)(param_2 + 0x30) = param_5;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      iVar1 = param_5;
    }
    else {
      if (*(long *)(param_2 + 0x20) != param_3) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
        return;
      }
      iVar1 = *(int *)(param_2 + 0x30);
      if (*(int *)(param_2 + 0x30) == 2) {
        *(int *)(param_2 + 0x30) = param_5;
        iVar1 = param_5;
      }
    }
    if ((iVar1 == 1) && (*(int *)(param_2 + 0x48) == 1)) {
      *(undefined1 *)(param_2 + 0x4e) = 1;
    }
  }
  return;
}

