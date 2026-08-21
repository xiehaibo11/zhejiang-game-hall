
long FT_Get_Charmap_Index(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (long *)0x0) {
    return 0xffffffff;
  }
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x48) < 1) {
      return 0;
    }
    lVar1 = 0;
    do {
      if (*(long **)(*(long *)(lVar2 + 0x50) + lVar1 * 8) == param_1) {
        return lVar1;
      }
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(lVar2 + 0x48));
    return lVar1;
  }
  return 0xffffffff;
}

