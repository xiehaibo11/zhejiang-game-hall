
void jitter_buffer_reset(undefined4 *param_1)

{
  void *__ptr;
  long lVar1;
  
  lVar1 = -0x1900;
  do {
    __ptr = *(void **)((long)param_1 + lVar1 + 0x1910);
    if (__ptr != (void *)0x0) {
      if (*(code **)(param_1 + 0x70c) == (code *)0x0) {
        free(__ptr);
      }
      else {
        (**(code **)(param_1 + 0x70c))();
      }
      *(undefined8 *)((long)param_1 + lVar1 + 0x1910) = 0;
    }
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0);
  param_1[0x710] = 1;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 0x7da) = 32000;
  *(undefined8 *)(param_1 + 0x715) = 0;
  *(undefined4 **)(param_1 + 2000) = param_1 + 0x715;
  *(undefined8 *)(param_1 + 0x753) = 0;
  *(undefined4 **)(param_1 + 0x7d2) = param_1 + 0x753;
  *(undefined8 *)(param_1 + 0x791) = 0;
  *(undefined4 **)(param_1 + 0x7d4) = param_1 + 0x791;
  return;
}

