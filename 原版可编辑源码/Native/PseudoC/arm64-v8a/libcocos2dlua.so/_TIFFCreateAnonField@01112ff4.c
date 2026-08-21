
uint * _TIFFCreateAnonField(undefined8 param_1,uint param_2,uint param_3)

{
  uint *__s;
  char *__s_00;
  uint uVar1;
  
  __s = _TIFFmalloc(0x30);
  if (__s != (uint *)0x0) {
    _TIFFmemset(__s,0,0x30);
    uVar1 = 0;
    *__s = param_2;
    __s[1] = 0xfffdfffd;
    __s[2] = param_3;
    __s[3] = 0;
    if (param_3 - 1 < 0x12) {
      uVar1 = *(uint *)(&DAT_0147afe0 + (long)(int)(param_3 - 1) * 4);
    }
    __s[4] = uVar1;
    __s[5] = uVar1;
    __s[6] = 0x1010041;
    __s_00 = _TIFFmalloc(0x20);
    *(char **)(__s + 8) = __s_00;
    if (__s_00 == (char *)0x0) {
      _TIFFfree(__s);
      __s = (uint *)0x0;
    }
    else {
      __s[10] = 0;
      __s[0xb] = 0;
      sprintf(__s_00,"Tag %d",(ulong)param_2);
    }
  }
  return __s;
}

