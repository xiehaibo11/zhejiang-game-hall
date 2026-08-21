
void spAnimationStateData_dispose(void *param_1)

{
  void *__ptr;
  void *pvVar1;
  void *pvVar2;
  
  __ptr = *(void **)((long)param_1 + 0x10);
  while (__ptr != (void *)0x0) {
    pvVar1 = *(void **)((long)__ptr + 8);
    while (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x10);
      _spFree(pvVar1);
      pvVar1 = pvVar2;
    }
    pvVar1 = *(void **)((long)__ptr + 0x10);
                    /* try { // try from 00d5caf4 to 00e5cafb has its CatchHandler @ 00d5cb68 */
    _spFree(__ptr);
                    /* try { // try from 00d5cafc to 00e5cb9f has its CatchHandler @ 00d5ca6c */
    __ptr = pvVar1;
  }
  _spFree(param_1);
  return;
}

