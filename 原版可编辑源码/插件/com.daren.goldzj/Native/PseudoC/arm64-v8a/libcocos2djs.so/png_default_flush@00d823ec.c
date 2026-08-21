
int png_default_flush(long param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = fflush(*(FILE **)(param_1 + 0x140));
    return iVar1;
  }
  return 0;
}

