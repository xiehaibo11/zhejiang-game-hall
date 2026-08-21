
void FUN_01134ef0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x350);
  *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(param_1 + 0x418) = *(undefined8 *)(lVar1 + 0x38);
  if (*(void **)(lVar1 + 0x60) != (void *)0x0) {
    _TIFFfree(*(void **)(lVar1 + 0x60));
  }
  if (*(void **)(lVar1 + 0x80) != (void *)0x0) {
    _TIFFfree(*(void **)(lVar1 + 0x80));
  }
  _TIFFfree(*(void **)(param_1 + 0x350));
  *(undefined8 *)(param_1 + 0x350) = 0;
  _TIFFSetDefaultCompressionState(param_1);
  return;
}

