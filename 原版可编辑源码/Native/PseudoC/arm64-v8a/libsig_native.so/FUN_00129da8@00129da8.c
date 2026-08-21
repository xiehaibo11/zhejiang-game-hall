
void FUN_00129da8(undefined8 param_1,long param_2,long param_3,long param_4,int param_5)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 0x4d) = 1;
  if (*(long *)(param_2 + 8) == param_4) {
    *(undefined1 *)(param_2 + 0x4c) = 1;
    if (*(long *)(param_2 + 0x20) == 0) {
      *(long *)(param_2 + 0x20) = param_3;
      *(int *)(param_2 + 0x30) = param_5;
      *(undefined4 *)(param_2 + 0x3c) = 1;
      if ((param_5 == 1) && (*(int *)(param_2 + 0x48) == 1)) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        return;
      }
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
      if ((*(int *)(param_2 + 0x48) == 1) && (iVar1 == 1)) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        return;
      }
    }
  }
  return;
}

