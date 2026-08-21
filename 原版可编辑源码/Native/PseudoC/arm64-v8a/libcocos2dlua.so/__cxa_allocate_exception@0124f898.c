
long __cxa_allocate_exception(long param_1)

{
  void *__s;
  ulong __n;
  
  __n = param_1 + 0x8fU & 0xfffffffffffffff0;
  __s = (void *)FUN_01251160(__n);
  if (__s != (void *)0x0) {
    memset(__s,0,__n);
    return (long)__s + 0x80;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}

