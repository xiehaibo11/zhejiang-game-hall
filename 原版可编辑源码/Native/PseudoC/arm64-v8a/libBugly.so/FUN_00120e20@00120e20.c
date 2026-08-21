
void FUN_00120e20(undefined8 *param_1)

{
  undefined8 *__ptr;
  undefined8 *__ptr_00;
  undefined8 *__ptr_01;
  undefined8 *__ptr_02;
  undefined8 *__ptr_03;
  undefined8 *__ptr_04;
  undefined8 *__ptr_05;
  long *__ptr_06;
  
  __ptr = (undefined8 *)*param_1;
  if (__ptr != (undefined8 *)0x0) {
    __ptr_00 = (undefined8 *)*__ptr;
    if (__ptr_00 != (undefined8 *)0x0) {
      __ptr_01 = (undefined8 *)*__ptr_00;
      if (__ptr_01 != (undefined8 *)0x0) {
        __ptr_02 = (undefined8 *)*__ptr_01;
        if (__ptr_02 != (undefined8 *)0x0) {
          __ptr_03 = (undefined8 *)*__ptr_02;
          if (__ptr_03 != (undefined8 *)0x0) {
            __ptr_04 = (undefined8 *)*__ptr_03;
            if (__ptr_04 != (undefined8 *)0x0) {
              __ptr_05 = (undefined8 *)*__ptr_04;
              if (__ptr_05 != (undefined8 *)0x0) {
                __ptr_06 = (long *)*__ptr_05;
                if (__ptr_06 != (long *)0x0) {
                  if (*__ptr_06 != 0) {
                    FUN_00120e20();
                  }
                  free(__ptr_06);
                }
                free(__ptr_05);
              }
              free(__ptr_04);
            }
            free(__ptr_03);
          }
          free(__ptr_02);
        }
        free(__ptr_01);
      }
      free(__ptr_00);
    }
    free(__ptr);
  }
  free(param_1);
  return;
}

