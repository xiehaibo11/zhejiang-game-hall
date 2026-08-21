
ulong FUN_010aba18(undefined8 param_1,long param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  uint *puVar2;
  ulong uVar3;
  
  uVar3 = (ulong)*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 7);
  if (uVar3 <= param_5) {
    puVar2 = (uint *)(param_3 + 0xb);
    if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) != 0x423) {
      puVar2 = (uint *)(param_4 + 3);
    }
    if (((uint)((int)*puVar2 >> 1) <= param_5) ||
       ((uVar1 = (ulong)*(uint *)(param_4 + ((int)param_5 << 2) + 7) + param_2, (uVar1 & 1) != 0 &&
        ((int)uVar1 == *(int *)(param_2 + 0xa8))))) {
      return 0xffffffffffffffff;
    }
    param_5 = uVar3 + param_5;
  }
  return param_5;
}

