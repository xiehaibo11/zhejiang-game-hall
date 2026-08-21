
ulong ssl_get_algorithm2(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x90) == 0) {
    return 0xffffffffffffffff;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x90) + 0x228);
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x38);
    uVar2 = (ulong)uVar1;
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x68) >> 2 & 1) == 0) {
      if ((uVar1 == 0x505) && ((*(uint *)(lVar3 + 0x14) & 0x1c8) != 0)) {
        uVar2 = 0x909;
      }
    }
    else if (uVar1 == 0x909) {
      return 0x404;
    }
    return uVar2;
  }
  return 0xffffffffffffffff;
}

