
void vorbis_comment_clear(long *param_1)

{
  void *__ptr;
  void *__ptr_00;
  int iVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    iVar1 = (int)param_1[2];
    __ptr = (void *)*param_1;
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        __ptr_00 = *(void **)((long)__ptr + lVar2 * 8);
        if (__ptr_00 != (void *)0x0) {
          free(__ptr_00);
          iVar1 = (int)param_1[2];
          __ptr = (void *)*param_1;
        }
        lVar2 = lVar2 + 1;
      } while (lVar2 < iVar1);
    }
    if (__ptr != (void *)0x0) {
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

