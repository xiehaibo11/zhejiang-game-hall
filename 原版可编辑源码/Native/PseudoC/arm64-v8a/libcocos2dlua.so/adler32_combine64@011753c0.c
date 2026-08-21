
ulong adler32_combine64(ulong param_1,undefined4 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (-1 < (long)param_3) {
    lVar1 = (param_1 & 0xffff) + (ulong)(ushort)param_2;
    uVar2 = lVar1 + 0xfff0;
    uVar4 = lVar1 - 1;
    if (uVar2 < 0xfff1) {
      uVar4 = uVar2;
    }
    uVar2 = (((param_1 >> 0x10 & 0xffff) + (ulong)(ushort)((uint)param_2 >> 0x10) + 0xfff1) -
            param_3 % 0xfff1) + ((param_3 % 0xfff1) * (param_1 & 0xffff)) % 0xfff1;
    uVar3 = uVar4 - 0xfff1;
    if (uVar4 < 0xfff1) {
      uVar3 = uVar4;
    }
    uVar4 = uVar2 - 0x1ffe2;
    if (uVar2 < 0x1ffe2) {
      uVar4 = uVar2;
    }
    uVar2 = uVar4 + 0xffffffff000f;
    if (uVar4 < 0xfff1) {
      uVar2 = uVar4;
    }
    return uVar3 | uVar2 << 0x10;
  }
  return 0xffffffff;
}

