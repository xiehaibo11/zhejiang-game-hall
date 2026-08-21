
ulong FUN_00e34f40(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if (-1 < param_2) {
    uVar1 = param_2 + param_3 + 0x10;
    return uVar1 & 0xffffffffffffffe0 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar1 = -((0x10 - param_2) + param_3 & 0xffffffffffffffe0U);
  return uVar1 & (long)uVar1 >> 0x3f;
}

