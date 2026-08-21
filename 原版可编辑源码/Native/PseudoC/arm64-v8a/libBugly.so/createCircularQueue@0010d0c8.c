
uint * createCircularQueue(uint param_1)

{
  uint *__ptr;
  void *pvVar1;
  
  __ptr = malloc(0x18);
  if (__ptr == (uint *)0x0) {
    __ptr = (uint *)0x0;
  }
  else {
    pvVar1 = calloc((ulong)param_1,1);
    *(void **)(__ptr + 2) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      free(__ptr);
      __ptr = (uint *)0x0;
    }
    else {
      *__ptr = param_1;
      __ptr[4] = 0;
    }
  }
  return __ptr;
}

