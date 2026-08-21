
undefined8 _TIFFNoRowEncode(undefined8 *param_1)

{
  short sVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  
  sVar1 = *(short *)(param_1 + 0xf);
  for (plVar3 = (long *)DAT_01792e00; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    ppuVar5 = (undefined **)plVar3[1];
    if (*(short *)(ppuVar5 + 1) == sVar1) {
      uVar4 = param_1[0x77];
      uVar2 = *param_1;
      if (ppuVar5 == (undefined **)0x0) goto LAB_0112d678;
      goto LAB_0112d69c;
    }
  }
  if (_TIFFBuiltinCODECS != (undefined *)0x0) {
    ppuVar5 = &_TIFFBuiltinCODECS;
    do {
      if (*(short *)(ppuVar5 + 1) == sVar1) {
        uVar4 = param_1[0x77];
        uVar2 = *param_1;
LAB_0112d69c:
        TIFFErrorExt(uVar4,uVar2,"%s %s encoding is not implemented",*ppuVar5,"scanline");
        return 0xffffffff;
      }
      ppuVar5 = ppuVar5 + 3;
    } while (*ppuVar5 != (undefined *)0x0);
  }
  uVar4 = param_1[0x77];
  uVar2 = *param_1;
LAB_0112d678:
  TIFFErrorExt(uVar4,uVar2,"Compression scheme %u %s encoding is not implemented",sVar1,"scanline");
  return 0xffffffff;
}

