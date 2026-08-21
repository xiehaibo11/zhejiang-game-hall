
ulong FUN_010727d8(undefined8 param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (-1 < param_2) {
    uVar2 = param_3 + param_2 & 0xffffffffffffffc0U | 0x20;
    uVar1 = 0x20;
    if (-1 < (long)uVar2) {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  uVar2 = param_3 - param_2 & 0xffffffffffffffc0U | 0x20;
  uVar1 = 0xffffffffffffffe0;
  if (-1 < (long)uVar2) {
    uVar1 = -uVar2;
  }
  return uVar1;
}

