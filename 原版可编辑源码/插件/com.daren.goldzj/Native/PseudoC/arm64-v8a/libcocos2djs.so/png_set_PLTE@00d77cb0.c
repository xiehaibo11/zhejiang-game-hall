
void png_set_PLTE(long param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (0x100 < param_4) {
      if (*(char *)(param_2 + 0x25) != '\x03') {
        png_warning();
        return;
      }
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid palette length");
    }
    if (((param_3 == (void *)0x0) && (param_4 != 0)) ||
       ((param_4 == 0 && ((*(byte *)(param_1 + 0x450) & 1) == 0)))) {
                    /* WARNING: Subroutine does not return */
      png_error(param_1,"Invalid palette");
    }
    png_free_data(param_1,param_2,0x1000,0);
    __dest = (void *)png_calloc(param_1,0x300);
    *(void **)(param_1 + 0x298) = __dest;
    if (param_4 != 0) {
      memcpy(__dest,param_3,(long)(int)param_4 + (long)(int)param_4 * 2);
    }
    uVar1 = *(uint *)(param_2 + 0x11c);
    uVar2 = *(uint *)(param_2 + 8);
    *(void **)(param_2 + 0x18) = __dest;
    *(short *)(param_1 + 0x2a0) = (short)param_4;
    *(short *)(param_2 + 0x20) = (short)param_4;
    *(uint *)(param_2 + 0x11c) = uVar1 | 0x1000;
    *(uint *)(param_2 + 8) = uVar2 | 8;
  }
  return;
}

