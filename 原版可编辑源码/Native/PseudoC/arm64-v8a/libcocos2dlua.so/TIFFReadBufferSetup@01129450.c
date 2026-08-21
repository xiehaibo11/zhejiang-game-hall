
undefined8 TIFFReadBufferSetup(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  void *pvVar3;
  size_t __size;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = uVar1 & 0xff7fffff;
  if (*(void **)(param_1 + 0x368) != (void *)0x0) {
    if ((uVar1 >> 9 & 1) != 0) {
      _TIFFfree(*(void **)(param_1 + 0x368));
    }
    *(undefined8 *)(param_1 + 0x368) = 0;
    *(undefined8 *)(param_1 + 0x370) = 0;
  }
  if (param_2 == 0) {
    __size = param_3 + 0x3ffU & 0xfffffffffffffc00;
    if ((param_3 + 0x3ffU & 0xfffffffffffffc00) == 0) {
      __size = 0xffffffffffffffff;
    }
    *(size_t *)(param_1 + 0x370) = __size;
    pvVar3 = _TIFFmalloc(__size);
    *(void **)(param_1 + 0x368) = pvVar3;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
    if (pvVar3 == (void *)0x0) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFReadBufferSetup",
                   "No space for data buffer at scanline %lu",*(undefined4 *)(param_1 + 0x27c));
      uVar2 = 0;
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    *(long *)(param_1 + 0x370) = param_3;
    *(long *)(param_1 + 0x368) = param_2;
    uVar2 = 1;
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffdff;
  }
  return uVar2;
}

