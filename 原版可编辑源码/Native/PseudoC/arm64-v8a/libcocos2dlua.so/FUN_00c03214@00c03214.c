
ulong FUN_00c03214(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_2 < 1) {
    if (-10000 < param_2) {
      return *(long *)(param_1 + 0x28) + (long)param_2 * 8;
    }
    if (param_2 == -0x2712) {
      lVar1 = *(long *)(param_1 + 0x10);
      *(ulong *)(lVar1 + 0xd8) = *(ulong *)(param_1 + 0x48) | 0xfffa000000000000;
      return lVar1 + 0xd8;
    }
    if (param_2 == -10000) {
      return *(long *)(param_1 + 0x10) + 0xd0;
    }
    uVar2 = *(ulong *)(*(long *)(param_1 + 0x20) + -0x10) & 0x7fffffffffff;
    if (param_2 == -0x2711) {
      lVar1 = *(long *)(param_1 + 0x10);
      *(ulong *)(lVar1 + 0xd8) = *(ulong *)(uVar2 + 0x10) | 0xfffa000000000000;
      return lVar1 + 0xd8;
    }
    if (-0x2712 - param_2 <= (int)(uint)*(byte *)(uVar2 + 0xb)) {
      return uVar2 + ((long)(-0x2713 - param_2) + 6) * 8;
    }
  }
  else {
    uVar2 = *(long *)(param_1 + 0x20) + (long)param_2 * 8 + -8;
    if (uVar2 < *(ulong *)(param_1 + 0x28)) {
      return uVar2;
    }
  }
  return *(long *)(param_1 + 0x10) + 0xe8;
}

