
undefined8 ogg_sync_clear(undefined8 *param_1)

{
  void *__ptr;
  undefined8 *__ptr_00;
  undefined8 *__ptr_01;
  void *pvVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    ogg_sync_reset();
    __ptr_01 = (undefined8 *)*param_1;
    __ptr = (void *)__ptr_01[1];
    *(undefined4 *)((long)__ptr_01 + 0x14) = 1;
    __ptr_00 = (undefined8 *)*__ptr_01;
    while (__ptr_00 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)__ptr_00[3];
      if ((void *)*__ptr_00 != (void *)0x0) {
        free((void *)*__ptr_00);
      }
      free(__ptr_00);
      __ptr_00 = puVar2;
    }
    *__ptr_01 = 0;
    while (__ptr != (void *)0x0) {
      pvVar1 = *(void **)((long)__ptr + 0x18);
      free(__ptr);
      __ptr = pvVar1;
    }
    __ptr_01[1] = 0;
    if (*(int *)(__ptr_01 + 2) == 0) {
      free(__ptr_01);
    }
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  return 0;
}

