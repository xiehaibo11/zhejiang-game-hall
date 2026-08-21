
void spAnimation_dispose(undefined8 *param_1)

{
  void *__ptr;
  long lVar1;
  
  __ptr = (void *)param_1[2];
  if (0 < *(int *)((long)param_1 + 0xc)) {
    lVar1 = 0;
    do {
      (**(code **)(*(long *)(*(long *)((long)__ptr + lVar1 * 8) + 8) + 0x10))();
      __ptr = (void *)param_1[2];
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)((long)param_1 + 0xc));
  }
  _spFree(__ptr);
  _spFree((void *)*param_1);
  _spFree(param_1);
  return;
}

