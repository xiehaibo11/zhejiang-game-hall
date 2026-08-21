
ulong FUN_0108b8bc(undefined8 param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_3 + 0xb);
  if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) != 0x423) {
    piVar2 = (int *)(param_4 + 3);
  }
  if (((uint)(*piVar2 >> 1) <= param_5) ||
     ((uVar1 = (ulong)*(uint *)(param_4 + ((int)param_5 << 2) + 7) + param_2, (uVar1 & 1) != 0 &&
      ((int)uVar1 == *(int *)(param_2 + 0xa8))))) {
    param_5 = 0xffffffffffffffff;
  }
  return param_5;
}

