
void FUN_018426e8(long param_1,undefined8 *param_2)

{
  ulong __size;
  size_t __n;
  char *__src;
  char cVar1;
  void *pvVar2;
  ulong uVar3;
  long lVar4;
  
  cVar1 = *(char *)(param_1 + 0xc);
  lVar4 = param_2[1];
  __n = 4;
  if (cVar1 == '\0') {
    __n = 5;
  }
  __size = lVar4 + __n;
  if (__size < (ulong)param_2[2]) {
    pvVar2 = (void *)*param_2;
  }
  else {
    uVar3 = param_2[2] << 1;
    if (__size <= uVar3) {
      __size = uVar3;
    }
    param_2[2] = __size;
    pvVar2 = realloc((void *)*param_2,__size);
    *param_2 = pvVar2;
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar4 = param_2[1];
  }
  __src = "false";
  if (cVar1 != '\0') {
    __src = "true";
  }
  memmove((void *)((long)pvVar2 + lVar4),__src,__n);
  param_2[1] = param_2[1] + __n;
  return;
}

