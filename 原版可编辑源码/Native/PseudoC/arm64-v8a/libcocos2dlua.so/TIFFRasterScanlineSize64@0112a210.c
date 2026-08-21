
ulong TIFFRasterScanlineSize64(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = _TIFFMultiply64(param_1,*(undefined2 *)(param_1 + 0x74),*(undefined4 *)(param_1 + 0x58),
                          "TIFFRasterScanlineSize64");
  if (*(short *)(param_1 + 0xaa) == 1) {
    uVar2 = _TIFFMultiply64(param_1,uVar1,*(undefined2 *)(param_1 + 0x82),"TIFFRasterScanlineSize64"
                           );
    uVar1 = uVar2 >> 3;
    if ((uVar2 & 7) != 0) {
      uVar1 = uVar1 + 1;
    }
    return uVar1;
  }
  uVar2 = uVar1 >> 3;
  if ((uVar1 & 7) != 0) {
    uVar2 = uVar2 + 1;
  }
  uVar1 = _TIFFMultiply64(param_1,uVar2,*(undefined2 *)(param_1 + 0x82),"TIFFRasterScanlineSize64");
  return uVar1;
}

