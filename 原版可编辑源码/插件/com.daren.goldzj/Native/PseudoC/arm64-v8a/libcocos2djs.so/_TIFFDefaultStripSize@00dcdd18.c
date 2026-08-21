
ulong _TIFFDefaultStripSize(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  if (0 < (int)param_2) {
    return param_2 & 0xffffffff;
  }
  uVar2 = TIFFScanlineSize64();
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  if (0x2000 < uVar2) {
    return 1;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = 0x2000 / uVar2;
  }
  return uVar1;
}

