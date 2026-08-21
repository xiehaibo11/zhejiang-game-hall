
void TIFFFreeDirectory(long param_1)

{
  void *__ptr;
  int iVar1;
  long lVar2;
  long lVar3;
  
  _TIFFmemset((void *)(param_1 + 0x38),0,4);
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(void **)(param_1 + 0x98) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (*(void **)(param_1 + 0xb8) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0xb8));
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  if (*(void **)(param_1 + 0xc0) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0xc0));
    *(undefined8 *)(param_1 + 0xc0) = 0;
  }
  if (*(void **)(param_1 + 200) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
  }
  if (*(void **)(param_1 + 0xd8) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0xd8));
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  if (*(void **)(param_1 + 0x100) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x100));
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  if (*(void **)(param_1 + 0x138) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x138));
    *(undefined8 *)(param_1 + 0x138) = 0;
  }
  if (*(void **)(param_1 + 0x128) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x128));
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  if (*(void **)(param_1 + 0x110) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x110) = 0;
  }
  if (*(void **)(param_1 + 0x118) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x118));
    *(undefined8 *)(param_1 + 0x118) = 0;
  }
  if (*(void **)(param_1 + 0x120) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x120));
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  if (*(void **)(param_1 + 0xe8) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
  }
  if (*(void **)(param_1 + 0xf0) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  iVar1 = *(int *)(param_1 + 0x140);
  *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x40) & 0xfffffffffffffe7f;
  if (0 < iVar1) {
    lVar2 = 0;
    lVar3 = 0x10;
    do {
      __ptr = *(void **)(*(long *)(param_1 + 0x148) + lVar3);
      if (__ptr != (void *)0x0) {
        _TIFFfree(__ptr);
        iVar1 = *(int *)(param_1 + 0x140);
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x18;
    } while (lVar2 < iVar1);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(void **)(param_1 + 0x148) != (void *)0x0) {
    _TIFFfree(*(void **)(param_1 + 0x148));
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  return;
}

