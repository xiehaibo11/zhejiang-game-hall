
void FUN_011a23cc(long param_1)

{
  if (*(int *)(param_1 + 0x1f8) != -1) {
    if (*(int *)(param_1 + 0x200) != -1) {
      if (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x1f8)) {
        FUN_011a2d5c();
      }
      *(undefined4 *)(param_1 + 0x200) = 0xffffffff;
    }
    FUN_011a37d8(param_1,param_1 + 0x1c8,1);
    FUN_011a2d5c(*(undefined4 *)(param_1 + 0x1f8));
    *(undefined4 *)(param_1 + 0x1f8) = 0xffffffff;
  }
  return;
}

