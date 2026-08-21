
uint FUN_01125040(long *param_1)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 local_28;
  undefined8 local_18;
  
  if (param_1[0xd] == 0) {
    pvVar1 = _TIFFmalloc(0x1830);
    param_1[0xd] = (long)pvVar1;
    if (pvVar1 == (void *)0x0) {
      TIFFErrorExt(*(undefined8 *)(*param_1 + 0x3b8),"initYCbCrConversion",
                   "No space for YCbCr->RGB conversion state");
      return 0;
    }
  }
  TIFFGetFieldDefaulted(*param_1,0x211,&local_18);
  TIFFGetFieldDefaulted(*param_1,0x214,&local_28);
  uVar2 = TIFFYCbCrToRGBInit(param_1[0xd],local_18,local_28);
  return (uint)(uVar2 >> 0x1f) & 1 ^ 1;
}

