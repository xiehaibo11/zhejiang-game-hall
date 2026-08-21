
ulong FUN_010727a4(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  if (-1 < param_2) {
    uVar1 = param_2 + param_3 + 0x20;
    return uVar1 & 0xffffffffffffffc0 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar1 = -((0x20 - param_2) + param_3 & 0xffffffffffffffc0U);
  return uVar1 & (long)uVar1 >> 0x3f;
}

