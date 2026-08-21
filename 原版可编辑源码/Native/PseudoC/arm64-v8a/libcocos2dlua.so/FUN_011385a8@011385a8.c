
void FUN_011385a8(long param_1)

{
  undefined2 uVar1;
  
  uVar1 = 3;
  if (*(short *)(param_1 + 0x7a) == -0x7fb4) {
    uVar1 = 1;
  }
  *(undefined2 *)(param_1 + 0x82) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = 0x20010;
  return;
}

