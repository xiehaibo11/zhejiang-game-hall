
void FUN_01837a70(long param_1,long *param_2,long param_3,int param_4,uint param_5)

{
  int iVar1;
  char *__s1;
  
  if ((param_5 & 1) == 0) {
    if (param_1 == param_2[2]) goto LAB_01837b28;
    if (param_1 != *param_2) {
      return;
    }
  }
  else {
    __s1 = *(char **)(param_1 + 8);
    iVar1 = strcmp(__s1,*(char **)(param_2[2] + 8));
    if (iVar1 == 0) {
LAB_01837b28:
      if (param_2[1] != param_3) {
        return;
      }
      if (*(int *)((long)param_2 + 0x34) == 1) {
        return;
      }
      *(int *)((long)param_2 + 0x34) = param_4;
      return;
    }
    iVar1 = strcmp(__s1,*(char **)(*param_2 + 8));
    if (iVar1 != 0) {
      return;
    }
  }
  if ((param_2[4] == param_3) || (param_2[5] == param_3)) {
    if (param_4 == 1) {
      *(undefined4 *)(param_2 + 7) = 1;
    }
  }
  else {
    *(int *)(param_2 + 7) = param_4;
    param_2[5] = param_3;
    *(int *)(param_2 + 8) = (int)param_2[8] + 1;
    if ((*(int *)((long)param_2 + 0x3c) == 1) && ((int)param_2[6] == 2)) {
      *(undefined1 *)((long)param_2 + 0x4e) = 1;
    }
    *(undefined4 *)((long)param_2 + 0x44) = 4;
  }
  return;
}

