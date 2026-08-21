
ulong FUN_010aba00(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  uint *puVar2;
  long extraout_x1;
  ulong uVar3;
  
  FUN_010ac248();
  FUN_010ac25c();
  uVar3 = (ulong)*(uint *)((param_3 & 0xffffffff00000000 | (ulong)*(uint *)(param_3 + 0xb)) + 7);
  if (uVar3 <= param_5) {
    puVar2 = (uint *)(param_3 + 0xb);
    if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) != 0x423) {
      puVar2 = (uint *)(param_4 + 3);
    }
    if (((uint)((int)*puVar2 >> 1) <= param_5) ||
       ((uVar1 = (ulong)*(uint *)(param_4 + ((int)param_5 << 2) + 7) + extraout_x1, (uVar1 & 1) != 0
        && ((int)uVar1 == *(int *)(extraout_x1 + 0xa8))))) {
      return 0xffffffffffffffff;
    }
    param_5 = uVar3 + param_5;
  }
  return param_5;
}

