
void * TIFFGetConfiguredCODECs(void)

{
  int iVar1;
  void *__ptr;
  void *pvVar2;
  void *pvVar3;
  undefined8 *__src;
  size_t __size;
  undefined **__src_00;
  int iVar4;
  
  if (DAT_01d3e8b8 == (void *)0x0) {
    __ptr = (void *)0x0;
    iVar4 = 1;
  }
  else {
    iVar4 = 1;
    __size = 0x18;
    __src = DAT_01d3e8b8;
    pvVar3 = (void *)0x0;
    do {
      __ptr = _TIFFrealloc(pvVar3,__size);
      if (__ptr == (void *)0x0) {
        _TIFFfree(pvVar3);
        return (void *)0x0;
      }
      _TIFFmemcpy((void *)((long)__ptr + (__size - 0x18)),__src,0x18);
      __src = (undefined8 *)*__src;
      __size = __size + 0x18;
      iVar4 = iVar4 + 1;
      pvVar3 = __ptr;
    } while (__src != (void *)0x0);
  }
  if (_TIFFBuiltinCODECS != (undefined *)0x0) {
    __src_00 = &_TIFFBuiltinCODECS;
    pvVar3 = __ptr;
    do {
      iVar1 = TIFFIsCODECConfigured(*(undefined2 *)(__src_00 + 1));
      pvVar2 = pvVar3;
      if (iVar1 != 0) {
        pvVar2 = _TIFFrealloc(pvVar3,((long)iVar4 + (long)iVar4 * 2) * 8);
        if (pvVar2 == (void *)0x0) {
          _TIFFfree(pvVar3);
          return (void *)0x0;
        }
        _TIFFmemcpy((void *)((long)pvVar2 + (long)iVar4 * 0x18 + -0x18),__src_00,0x18);
        iVar4 = iVar4 + 1;
        __ptr = pvVar2;
      }
      __src_00 = __src_00 + 3;
      pvVar3 = pvVar2;
    } while (*__src_00 != (undefined *)0x0);
  }
  pvVar3 = _TIFFrealloc(__ptr,((long)iVar4 + (long)iVar4 * 2) * 8);
  if (pvVar3 == (void *)0x0) {
    _TIFFfree(__ptr);
  }
  else {
    _TIFFmemset((void *)((long)pvVar3 + (long)iVar4 * 0x18 + -0x18),0,0x18);
  }
  return pvVar3;
}

