
undefined ** TIFFFindCODEC(short param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  
  for (plVar2 = (long *)DAT_01d3e8b8; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    if (*(short *)((undefined **)plVar2[1] + 1) == param_1) {
      return (undefined **)plVar2[1];
    }
  }
  if (_TIFFBuiltinCODECS != (undefined *)0x0) {
    ppuVar1 = &_TIFFBuiltinCODECS;
    do {
      if (*(short *)(ppuVar1 + 1) == param_1) {
        return ppuVar1;
      }
      ppuVar1 = ppuVar1 + 3;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  return (undefined **)0x0;
}

