
uint FUN_014e27d8(long param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x490) + 7);
  uVar1 = (uVar1 ^ (ulong)param_2 ^ 0xffffffffffffffff) + (uVar1 ^ param_2) * 0x40000;
  uVar1 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uVar1 = (uVar1 ^ uVar1 >> 0xb) * 0x41;
  return ((uint)(uVar1 >> 0x16) ^ (uint)uVar1) & 0x3fffffff;
}

