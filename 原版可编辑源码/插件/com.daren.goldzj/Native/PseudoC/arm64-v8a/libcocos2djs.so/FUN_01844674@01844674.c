
long FUN_01844674(long *param_1)

{
  char cVar1;
  long lVar2;
  void *__dest;
  long *plVar3;
  size_t __n;
  long *__src;
  
  if ((char *)param_1[1] == (char *)*param_1) {
LAB_018446c0:
    lVar2 = FUN_0183ca54(param_1);
    return lVar2;
  }
  cVar1 = *(char *)*param_1;
  if (cVar1 == 'D') {
    lVar2 = FUN_0183d720(param_1);
  }
  else {
    if (cVar1 != 'T') goto LAB_018446c0;
    lVar2 = FUN_0183d478(param_1);
  }
  if (lVar2 != 0) {
    plVar3 = (long *)param_1[0x26];
    if (plVar3 == (long *)param_1[0x27]) {
      __src = (long *)param_1[0x25];
      __n = (long)plVar3 - (long)__src;
      if (param_1 + 0x28 == __src) {
        __dest = malloc(__n * 2);
        if (__dest == (void *)0x0) goto LAB_01844784;
        if (__n != 0) {
          memmove(__dest,__src,__n);
        }
        param_1[0x25] = (long)__dest;
      }
      else {
        __dest = realloc(__src,__n * 2);
        param_1[0x25] = (long)__dest;
        if (__dest == (void *)0x0) {
LAB_01844784:
                    /* WARNING: Subroutine does not return */
          std::terminate();
        }
      }
      plVar3 = (long *)((long)__dest + ((long)__n >> 3) * 8);
      param_1[0x26] = (long)plVar3;
      param_1[0x27] = (long)((long)__dest + ((long)__n >> 2) * 8);
    }
    param_1[0x26] = (long)(plVar3 + 1);
    *plVar3 = lVar2;
  }
  return lVar2;
}

