
void FUN_011abf94(long param_1)

{
  if (*(int *)(param_1 + 0x348) != -1) {
    FUN_011a37d8(param_1,param_1 + 0x308,1);
    FUN_011a2d5c(*(undefined4 *)(param_1 + 0x348));
    *(undefined4 *)(param_1 + 0x348) = 0xffffffff;
  }
  return;
}

