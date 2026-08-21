
void vorbis_comment_clear(undefined8 *param_1)

{
  undefined8 *__ptr;
  void *__ptr_00;
  int iVar1;
  long lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = *(int *)(param_1 + 2);
    __ptr = (undefined8 *)*param_1;
    if (0 < iVar1) {
      lVar2 = 0;
      __ptr_00 = (void *)*__ptr;
      while( true ) {
        if (__ptr_00 != (void *)0x0) {
          free(__ptr_00);
          iVar1 = *(int *)(param_1 + 2);
          __ptr = (undefined8 *)*param_1;
        }
        lVar2 = lVar2 + 1;
        if (iVar1 <= lVar2) break;
        __ptr_00 = (void *)__ptr[lVar2];
      }
    }
    if (__ptr != (undefined8 *)0x0) {
      free(__ptr);
    }
    if ((void *)param_1[1] != (void *)0x0) {
      free((void *)param_1[1]);
    }
    if ((void *)param_1[3] != (void *)0x0) {
      free((void *)param_1[3]);
    }
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

