
void closeElfInfoParser(void)

{
  void *pvVar1;
  void *__ptr;
  long *__ptr_00;
  long lVar2;
  long lVar3;
  
  while (DAT_0013fe18 != (void *)0x0) {
    pvVar1 = *(void **)((long)DAT_0013fe18 + 0x10);
    if (*(undefined8 **)((long)DAT_0013fe18 + 8) != (undefined8 *)0x0) {
      __ptr_00 = (long *)**(undefined8 **)((long)DAT_0013fe18 + 8);
      if (__ptr_00 != (long *)0x0) {
        __ptr = (void *)*__ptr_00;
        if (0 < (int)__ptr_00[1]) {
          lVar2 = 0;
          lVar3 = 0x10;
          do {
            free(*(void **)((long)__ptr + lVar3));
            __ptr = (void *)*__ptr_00;
            lVar2 = lVar2 + 1;
            lVar3 = lVar3 + 0x18;
          } while (lVar2 < (int)__ptr_00[1]);
        }
        free(__ptr);
        free(__ptr_00);
      }
      free(*(void **)((long)DAT_0013fe18 + 8));
    }
    free(DAT_0013fe18);
    DAT_0013fe18 = pvVar1;
  }
  return;
}

