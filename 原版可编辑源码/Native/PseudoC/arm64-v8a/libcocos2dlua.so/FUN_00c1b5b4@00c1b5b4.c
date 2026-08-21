
long FUN_00c1b5b4(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = *param_2;
  uVar1 = (uint)(uVar2 >> 0x20);
  uVar3 = (int)uVar1 >> 0xf;
  if (uVar3 == 0xfffffffb) {
    return (ulong)(*(uint *)(param_1 + 0x34) & *(uint *)((uVar2 & 0x7fffffffffff) + 0xc)) * 0x18 +
           *(long *)(param_1 + 0x28);
  }
  if (0xfffffff1 < uVar3) {
    if (1 < uVar3 + 3) {
      uVar3 = (uVar1 ^ (uint)uVar2) - (uVar1 >> 0x12 | uVar1 << 0xe);
      return (ulong)((uVar3 ^ (uVar1 >> 0xd | uVar1 << 0x13)) - (uVar3 >> 0x13 | uVar3 * 0x2000) &
                    *(uint *)(param_1 + 0x34)) * 0x18 + *(long *)(param_1 + 0x28);
    }
    return (ulong)(-uVar3 - 2 & *(uint *)(param_1 + 0x34)) * 0x18 + *(long *)(param_1 + 0x28);
  }
  uVar1 = *(uint *)((long)param_2 + 4);
  uVar3 = (uVar1 << 1 ^ (uint)*param_2) - ((uVar1 & 0x7fffffff) >> 0x11 | uVar1 << 0xf);
  return (ulong)((uVar3 ^ ((uVar1 & 0x7fffffff) >> 0xc | uVar1 << 0x14)) -
                 (uVar3 >> 0x13 | uVar3 * 0x2000) & *(uint *)(param_1 + 0x34)) * 0x18 +
         *(long *)(param_1 + 0x28);
}

