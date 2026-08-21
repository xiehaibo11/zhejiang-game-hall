
void FUN_011385d0(long param_1)

{
  void *__ptr;
  
  __ptr = *(void **)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)((long)__ptr + 0x28);
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)((long)__ptr + 0x30);
  if (*(void **)((long)__ptr + 0x10) != (void *)0x0) {
    _TIFFfree(*(void **)((long)__ptr + 0x10));
  }
  _TIFFfree(__ptr);
  *(undefined8 *)(param_1 + 0x350) = 0;
  _TIFFSetDefaultCompressionState(param_1);
  return;
}

