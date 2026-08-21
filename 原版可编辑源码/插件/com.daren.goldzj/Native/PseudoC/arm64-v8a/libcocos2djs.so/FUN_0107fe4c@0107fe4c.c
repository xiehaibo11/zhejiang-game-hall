
int FUN_0107fe4c(undefined8 param_1,ulong param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_2 + 0xb);
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
    piVar1 = (int *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 7)) + 3);
  }
  return *piVar1 >> 1;
}

