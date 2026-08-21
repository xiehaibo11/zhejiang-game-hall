
void FUN_011aaaec(long param_1)

{
  uint uVar1;
  
  FUN_011a3868(*(undefined8 *)(param_1 + 8),param_1 + 0x80);
  uVar1 = *(uint *)(param_1 + 0x58);
  if (((uVar1 >> 2 & 1) != 0) &&
     (*(uint *)(param_1 + 0x58) = uVar1 & 0xfffffffb, (uVar1 >> 3 & 1) != 0)) {
    *(int *)(*(long *)(param_1 + 8) + 8) = *(int *)(*(long *)(param_1 + 8) + 8) + -1;
  }
  if (*(int *)(param_1 + 0xb0) != -1) {
    FUN_011a2d5c();
    *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  }
  return;
}

