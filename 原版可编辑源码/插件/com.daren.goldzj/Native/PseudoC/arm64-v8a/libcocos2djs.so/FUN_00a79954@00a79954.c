
void FUN_00a79954(void)

{
  void *__src;
  void *__dest;
  size_t __n;
  
  __src = DAT_01d38dc8;
  if ((ulong)(DAT_01d38dd8 - (long)DAT_01d38dc8 >> 3) < 10) {
    __n = DAT_01d38dd0 - (long)DAT_01d38dc8;
    __dest = operator_new(0x50);
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    DAT_01d38dc8 = __dest;
    DAT_01d38dd0 = (long)__dest + __n;
    DAT_01d38dd8 = (long)__dest + 0x50;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}

