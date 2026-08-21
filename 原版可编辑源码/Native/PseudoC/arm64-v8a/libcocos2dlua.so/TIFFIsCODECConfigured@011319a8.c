
bool TIFFIsCODECConfigured(void)

{
  bool bVar1;
  long lVar2;
  
  lVar2 = TIFFFindCODEC();
  bVar1 = false;
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0x10) == (code *)0x0) {
      return false;
    }
    bVar1 = *(code **)(lVar2 + 0x10) != FUN_01131980;
  }
  return bVar1;
}

