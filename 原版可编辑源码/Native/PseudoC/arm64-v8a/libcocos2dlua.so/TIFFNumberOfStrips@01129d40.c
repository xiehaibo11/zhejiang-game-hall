
ulong TIFFNumberOfStrips(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x84);
  if (uVar1 == 0xffffffff) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
    if (*(uint *)(param_1 + 0x5c) < -uVar1) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = ((uVar1 + *(uint *)(param_1 + 0x5c)) - 1) / uVar1;
      }
      uVar3 = (ulong)uVar2;
    }
  }
  if (*(short *)(param_1 + 0xaa) == 2) {
    uVar3 = _TIFFMultiply32(param_1,uVar3,*(undefined2 *)(param_1 + 0x82),"TIFFNumberOfStrips");
    return uVar3;
  }
  return uVar3;
}

