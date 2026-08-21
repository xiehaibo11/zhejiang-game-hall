
bool FUN_0113b25c(long param_1)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x350);
  pvVar1 = _TIFFmalloc(0x23290);
  *(void **)(lVar2 + 0x118) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"LZWSetupEncode","No space for LZW hash table");
  }
  return pvVar1 != (void *)0x0;
}

