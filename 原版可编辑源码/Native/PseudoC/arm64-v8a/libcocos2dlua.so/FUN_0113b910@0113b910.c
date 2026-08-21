
void FUN_0113b910(long param_1)

{
  void *__ptr;
  
  TIFFPredictorCleanup();
  __ptr = *(void **)(param_1 + 0x350);
  if (*(void **)((long)__ptr + 0xe0) != (void *)0x0) {
    _TIFFfree(*(void **)((long)__ptr + 0xe0));
    __ptr = *(void **)(param_1 + 0x350);
  }
  if (*(void **)((long)__ptr + 0x118) != (void *)0x0) {
    _TIFFfree(*(void **)((long)__ptr + 0x118));
    __ptr = *(void **)(param_1 + 0x350);
  }
  _TIFFfree(__ptr);
  *(undefined8 *)(param_1 + 0x350) = 0;
  _TIFFSetDefaultCompressionState(param_1);
  return;
}

