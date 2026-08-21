
undefined8 FUN_001356d0(long param_1)

{
  int iVar1;
  FILE *__stream;
  
  __stream = *(FILE **)(param_1 + 0x20);
  if (__stream != (FILE *)0x0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    iVar1 = fclose(__stream);
    if (iVar1 != 0) {
      return 0;
    }
  }
  return 1;
}

