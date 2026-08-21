
ulong TIFFNumberOfTiles(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 100);
  uVar1 = *(uint *)(param_1 + 0x68);
  uVar2 = *(uint *)(param_1 + 0x6c);
  if (uVar6 == 0xffffffff) {
    uVar6 = *(uint *)(param_1 + 0x58);
  }
  if (uVar1 == 0xffffffff) {
    uVar1 = *(uint *)(param_1 + 0x5c);
  }
  if (uVar2 == 0xffffffff) {
    uVar2 = *(uint *)(param_1 + 0x60);
  }
  uVar4 = 0;
  if (((uVar6 != 0) && (uVar4 = 0, uVar1 != 0)) && (uVar2 != 0)) {
    uVar5 = 0;
    if (*(uint *)(param_1 + 0x58) < -uVar6) {
      uVar5 = 0;
      if (uVar6 != 0) {
        uVar5 = ((uVar6 + *(uint *)(param_1 + 0x58)) - 1) / uVar6;
      }
    }
    uVar6 = 0;
    if (*(uint *)(param_1 + 0x5c) < -uVar1) {
      uVar6 = 0;
      if (uVar1 != 0) {
        uVar6 = ((uVar1 + *(uint *)(param_1 + 0x5c)) - 1) / uVar1;
      }
    }
    uVar3 = _TIFFMultiply32(param_1,uVar5,uVar6,"TIFFNumberOfTiles");
    uVar6 = 0;
    if (*(uint *)(param_1 + 0x60) < -uVar2) {
      uVar6 = 0;
      if (uVar2 != 0) {
        uVar6 = ((uVar2 + *(uint *)(param_1 + 0x60)) - 1) / uVar2;
      }
    }
    uVar4 = _TIFFMultiply32(param_1,uVar3,uVar6,"TIFFNumberOfTiles");
    uVar4 = uVar4 & 0xffffffff;
  }
  if (*(short *)(param_1 + 0xaa) != 2) {
    return uVar4;
  }
  uVar4 = _TIFFMultiply32(param_1,uVar4,*(undefined2 *)(param_1 + 0x82),"TIFFNumberOfTiles");
  return uVar4;
}

