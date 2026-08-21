
void jitter_buffer_destroy(void *param_1)

{
  void *__ptr;
  long lVar1;
  
  lVar1 = -0x1900;
  do {
    __ptr = *(void **)((long)param_1 + lVar1 + 0x1910);
    if (__ptr != (void *)0x0) {
      if (*(code **)((long)param_1 + 0x1c30) == (code *)0x0) {
        free(__ptr);
      }
      else {
        (**(code **)((long)param_1 + 0x1c30))();
      }
      *(undefined8 *)((long)param_1 + lVar1 + 0x1910) = 0;
    }
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0);
  free(param_1);
  return;
}

