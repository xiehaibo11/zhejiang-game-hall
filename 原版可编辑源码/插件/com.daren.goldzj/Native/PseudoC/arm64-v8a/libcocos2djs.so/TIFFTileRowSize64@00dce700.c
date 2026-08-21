
ulong TIFFTileRowSize64(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((*(int *)(param_1 + 0x68) == 0) || (*(int *)(param_1 + 100) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = _TIFFMultiply64(param_1,*(undefined2 *)(param_1 + 0x74),*(int *)(param_1 + 100),
                            "TIFFTileRowSize");
    if (*(short *)(param_1 + 0xaa) == 1) {
      uVar1 = _TIFFMultiply64(param_1,uVar1,*(undefined2 *)(param_1 + 0x82),"TIFFTileRowSize");
    }
    uVar2 = uVar1 >> 3;
    if ((uVar1 & 7) != 0) {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}

