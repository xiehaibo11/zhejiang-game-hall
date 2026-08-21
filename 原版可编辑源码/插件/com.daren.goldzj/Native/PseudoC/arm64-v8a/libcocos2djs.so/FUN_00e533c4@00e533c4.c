
short FUN_00e533c4(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar3 = *(ulong *)(param_1 + 0x18);
  if (uVar3 != 0) {
    uVar4 = 0;
    uVar6 = uVar3 >> 1;
    uVar5 = (ulong)param_2;
    do {
      uVar1 = uVar4 + uVar3 >> 1;
      if (uVar4 <= uVar6 && uVar6 <= uVar3) {
        uVar1 = uVar6;
      }
      uVar6 = *(ulong *)(*(long *)(param_1 + 0x20) + uVar1 * 0x10);
      if (uVar6 == uVar5) {
        return *(short *)(*(long *)(param_1 + 0x20) + uVar1 * 0x10 + 8) + 1;
      }
      uVar2 = uVar1;
      if (uVar6 < uVar5) {
        uVar4 = uVar1 + 1;
        uVar2 = uVar3;
      }
      uVar3 = uVar2;
      uVar6 = (uVar1 + uVar5) - uVar6;
    } while (uVar4 < uVar3);
  }
  return 0;
}

