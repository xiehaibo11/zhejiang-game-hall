
void FUN_018369d8(undefined8 param_1,long param_2,long param_3,undefined4 param_4)

{
  if (*(long *)(param_2 + 0x20) == 0) {
    *(long *)(param_2 + 0x20) = param_3;
    *(undefined4 *)(param_2 + 0x30) = param_4;
    *(undefined4 *)(param_2 + 0x3c) = 1;
    return;
  }
  if (*(long *)(param_2 + 0x20) == param_3) {
    if (*(int *)(param_2 + 0x30) == 2) {
      *(undefined4 *)(param_2 + 0x30) = param_4;
      return;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x30) = 2;
    *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + 1;
    *(undefined1 *)(param_2 + 0x4e) = 1;
  }
  return;
}

