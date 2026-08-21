
void TIFFRGBAImageEnd(long param_1)

{
  void *__ptr;
  
  if (*(void **)(param_1 + 0x50) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x50));
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  if (*(void **)(param_1 + 0x58) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x58));
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x60));
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(void **)(param_1 + 0x68) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x68));
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(void **)(param_1 + 0x70) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(void **)(param_1 + 0x78) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(void **)(param_1 + 0x80) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  __ptr = *(void **)(param_1 + 0x28);
  if (__ptr != (void *)0x0) {
    _TIFFfree(__ptr);
    _TIFFfree(*(void **)(param_1 + 0x30));
    _TIFFfree(*(void **)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  return;
}

