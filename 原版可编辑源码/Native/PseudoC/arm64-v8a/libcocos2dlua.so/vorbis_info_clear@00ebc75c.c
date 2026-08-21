
void vorbis_info_clear(undefined8 *param_1)

{
  void *pvVar1;
  void *__ptr;
  long lVar2;
  long lVar3;
  
  __ptr = (void *)param_1[6];
  if (__ptr != (void *)0x0) {
    if (*(void **)((long)__ptr + 0x28) != (void *)0x0) {
      free(*(void **)((long)__ptr + 0x28));
    }
    pvVar1 = *(void **)((long)__ptr + 0x30);
    if (pvVar1 != (void *)0x0) {
      if (0 < *(int *)((long)__ptr + 0x14)) {
        lVar2 = 0;
        lVar3 = 0;
        do {
          mapping_clear_info((long)pvVar1 + lVar2);
          pvVar1 = *(void **)((long)__ptr + 0x30);
          lVar3 = lVar3 + 1;
          lVar2 = lVar2 + 0x28;
        } while (lVar3 < *(int *)((long)__ptr + 0x14));
      }
      free(pvVar1);
    }
    pvVar1 = *(void **)((long)__ptr + 0x40);
    if (pvVar1 != (void *)0x0) {
      if (0 < *(int *)((long)__ptr + 0x18)) {
        lVar3 = 0;
        while( true ) {
          if (*(char *)(*(long *)((long)__ptr + 0x38) + lVar3) == '\0') {
            floor0_free_info(*(undefined8 *)((long)pvVar1 + lVar3 * 8));
          }
          else {
            floor1_free_info();
          }
          lVar3 = lVar3 + 1;
          if (*(int *)((long)__ptr + 0x18) <= lVar3) break;
          pvVar1 = *(void **)((long)__ptr + 0x40);
        }
        pvVar1 = *(void **)((long)__ptr + 0x40);
      }
      free(pvVar1);
      free(*(void **)((long)__ptr + 0x38));
    }
    pvVar1 = *(void **)((long)__ptr + 0x48);
    if (pvVar1 != (void *)0x0) {
      if (0 < *(int *)((long)__ptr + 0x1c)) {
        lVar2 = 0;
        lVar3 = 0;
        do {
          res_clear_info((long)pvVar1 + lVar2);
          pvVar1 = *(void **)((long)__ptr + 0x48);
          lVar3 = lVar3 + 1;
          lVar2 = lVar2 + 0x30;
        } while (lVar3 < *(int *)((long)__ptr + 0x1c));
      }
      free(pvVar1);
    }
    pvVar1 = *(void **)((long)__ptr + 0x50);
    if (pvVar1 != (void *)0x0) {
      if (0 < *(int *)((long)__ptr + 0x20)) {
        lVar2 = 0;
        lVar3 = 0;
        do {
          vorbis_book_clear((long)pvVar1 + lVar2);
          pvVar1 = *(void **)((long)__ptr + 0x50);
          lVar3 = lVar3 + 1;
          lVar2 = lVar2 + 0x68;
        } while (lVar3 < *(int *)((long)__ptr + 0x20));
      }
      free(pvVar1);
    }
    free(__ptr);
  }
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

