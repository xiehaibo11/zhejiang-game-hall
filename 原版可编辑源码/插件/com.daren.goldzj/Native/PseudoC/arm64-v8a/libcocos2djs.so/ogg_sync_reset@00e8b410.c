
undefined8 ogg_sync_reset(long param_1)

{
  int iVar1;
  long lVar2;
  long *__ptr;
  long *__ptr_00;
  undefined8 *__ptr_01;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  plVar4 = *(long **)(param_1 + 0x10);
  while( true ) {
    do {
      __ptr_00 = plVar4;
      if (__ptr_00 == (long *)0x0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        return 0;
      }
      lVar2 = *__ptr_00;
      plVar4 = (long *)__ptr_00[3];
      __ptr = *(long **)(lVar2 + 0x18);
      iVar1 = *(int *)(lVar2 + 0x10) + -1;
      *(int *)(lVar2 + 0x10) = iVar1;
      if (iVar1 == 0) {
        *(int *)(__ptr + 2) = (int)__ptr[2] + -1;
        *(long *)(lVar2 + 0x18) = *__ptr;
        *__ptr = lVar2;
      }
      *(int *)(__ptr + 2) = (int)__ptr[2] + -1;
      __ptr_00[3] = __ptr[1];
      __ptr[1] = (long)__ptr_00;
    } while (*(int *)((long)__ptr + 0x14) == 0);
    __ptr_01 = (undefined8 *)*__ptr;
    if ((undefined8 *)*__ptr == (undefined8 *)0x0) break;
    do {
      puVar5 = (undefined8 *)__ptr_01[3];
      if ((void *)*__ptr_01 != (void *)0x0) {
        free((void *)*__ptr_01);
      }
      free(__ptr_01);
      __ptr_01 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
    *__ptr = 0;
    while (__ptr_00 != (long *)0x0) {
LAB_00e8b4c0:
      plVar3 = (long *)__ptr_00[3];
      free(__ptr_00);
      __ptr_00 = plVar3;
    }
    __ptr[1] = 0;
    if ((int)__ptr[2] == 0) {
      free(__ptr);
    }
  }
  *__ptr = 0;
  goto LAB_00e8b4c0;
}

