
undefined8 TIFFWriteBufferSetup(long param_1,void *param_2,size_t param_3)

{
  uint uVar1;
  
  if (*(void **)(param_1 + 0x368) != (void *)0x0) {
    if ((*(byte *)(param_1 + 0x11) >> 1 & 1) != 0) {
      _TIFFfree(*(void **)(param_1 + 0x368));
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffdff;
    }
    *(undefined8 *)(param_1 + 0x368) = 0;
  }
  if (param_3 == 0xffffffffffffffff) {
    if ((*(byte *)(param_1 + 0x11) >> 2 & 1) == 0) {
      param_3 = TIFFStripSize(param_1);
    }
    else {
      param_3 = *(size_t *)(param_1 + 0x2b0);
    }
    if ((long)param_3 < 0x2001) {
      param_3 = 0x2000;
    }
  }
  else if (param_2 != (void *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x10) & 0xfffffdff;
    goto LAB_00dcf110;
  }
  param_2 = _TIFFmalloc(param_3);
  if (param_2 == (void *)0x0) {
    TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),"TIFFWriteBufferSetup",
                 "No space for output buffer");
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x10) | 0x200;
LAB_00dcf110:
  *(uint *)(param_1 + 0x10) = uVar1;
  *(void **)(param_1 + 0x368) = param_2;
  *(size_t *)(param_1 + 0x370) = param_3;
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(void **)(param_1 + 0x388) = param_2;
  *(uint *)(param_1 + 0x10) = uVar1 | 0x10;
  return 1;
}

