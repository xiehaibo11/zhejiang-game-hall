
ulong FUN_010a618c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5)

{
  int *piVar1;
  uint uVar2;
  long extraout_x1;
  ulong uVar3;
  ulong uVar4;
  
  FUN_010a6de0();
  uVar3 = (ulong)((*(int *)(param_4 + 3) >> 1) - 2);
  if ((uVar3 <= param_5) ||
     ((uVar2 = *(uint *)(param_4 + (long)((int)param_5 * 4 + 8) + 7), (uVar2 & 1) != 0 &&
      (uVar2 == *(uint *)(extraout_x1 + 0xa8))))) {
    uVar4 = param_4 & 0xffffffff00000000 | (ulong)*(uint *)(param_4 + 0xb);
    piVar1 = (int *)(param_3 + 0xb);
    if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) != 0x423) {
      piVar1 = (int *)(uVar4 + 3);
    }
    if (((uint)(*piVar1 >> 1) <= param_5) ||
       ((uVar4 = (ulong)*(uint *)(uVar4 + (long)((int)param_5 << 2) + 7) + extraout_x1,
        (uVar4 & 1) != 0 && ((int)uVar4 == *(int *)(extraout_x1 + 0xa8))))) {
      return 0xffffffffffffffff;
    }
    param_5 = uVar3 + param_5;
  }
  return param_5;
}

