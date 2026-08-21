
void FUN_01258064(undefined8 *param_1,void *param_2,long param_3)

{
  ulong __size;
  size_t __n;
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  
  __n = param_3 - (long)param_2;
  if (__n != 0) {
    lVar3 = param_1[1];
    __size = lVar3 + __n;
    if (__size < (ulong)param_1[2]) {
      pvVar1 = (void *)*param_1;
    }
    else {
      uVar2 = param_1[2] << 1;
      if (__size <= uVar2) {
        __size = uVar2;
      }
      param_1[2] = __size;
      pvVar1 = realloc((void *)*param_1,__size);
      *param_1 = pvVar1;
      if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar3 = param_1[1];
    }
    memmove((void *)((long)pvVar1 + lVar3),param_2,__n);
    param_1[1] = param_1[1] + __n;
  }
  return;
}

