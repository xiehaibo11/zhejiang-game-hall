
undefined4 FUN_0119f0f8(long param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if (*(long *)(param_1 + 0x208) == 0) {
    return 0xffffffff;
  }
  uVar3 = *(ulong *)(*(long *)(param_1 + 0x208) + 0x18);
  uVar1 = uVar3 - *(ulong *)(param_1 + 0x220);
  if (*(ulong *)(param_1 + 0x220) <= uVar3 && uVar1 != 0) {
    uVar2 = (undefined4)uVar1;
    if (0x7ffffffe < uVar1) {
      uVar2 = 0x7fffffff;
    }
    return uVar2;
  }
  return 0;
}

