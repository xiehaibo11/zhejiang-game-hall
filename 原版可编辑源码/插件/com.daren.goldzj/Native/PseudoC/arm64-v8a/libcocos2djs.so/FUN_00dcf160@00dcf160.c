
undefined8 FUN_00dcf160(long param_1,undefined8 param_2)

{
  void *__ptr;
  void *__ptr_00;
  undefined8 uVar1;
  
  __ptr = _TIFFrealloc(*(void **)(param_1 + 0xe8),(ulong)(*(int *)(param_1 + 0xe4) + 1) << 3);
  __ptr_00 = _TIFFrealloc(*(void **)(param_1 + 0xf0),(ulong)(*(int *)(param_1 + 0xe4) + 1) << 3);
  if ((__ptr == (void *)0x0) || (__ptr_00 == (void *)0x0)) {
    if (__ptr != (void *)0x0) {
      _TIFFfree(__ptr);
    }
    if (__ptr_00 != (void *)0x0) {
      _TIFFfree(__ptr_00);
    }
    *(undefined4 *)(param_1 + 0xe4) = 0;
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),param_2,"No space to expand strip arrays");
    uVar1 = 0;
  }
  else {
    *(void **)(param_1 + 0xe8) = __ptr;
    *(void **)(param_1 + 0xf0) = __ptr_00;
    _TIFFmemset((void *)((long)__ptr + (ulong)*(uint *)(param_1 + 0xe4) * 8),0,8);
    _TIFFmemset((void *)(*(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_1 + 0xe4) * 8),0,8);
    uVar1 = 1;
    *(int *)(param_1 + 0xe4) = *(int *)(param_1 + 0xe4) + 1;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  }
  return uVar1;
}

