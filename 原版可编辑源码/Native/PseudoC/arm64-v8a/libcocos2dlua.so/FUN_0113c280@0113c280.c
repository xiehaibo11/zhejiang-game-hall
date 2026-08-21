
undefined8 FUN_0113c280(long param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = _TIFFmalloc(8);
  *(void **)(param_1 + 0x350) = pvVar1;
  uVar2 = 0;
  if (pvVar1 != (void *)0x0) {
    if ((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) {
      uVar2 = TIFFScanlineSize(param_1);
    }
    else {
      uVar2 = TIFFTileRowSize(param_1);
    }
    **(undefined8 **)(param_1 + 0x350) = uVar2;
    uVar2 = 1;
  }
  return uVar2;
}

