
void dynamic_load_destroy(long *param_1)

{
  void *__ptr;
  undefined8 *puVar1;
  void *pvVar2;
  
  if ((param_1 != (long *)0x0) && (pvVar2 = (void *)*param_1, pvVar2 != (void *)0x0)) {
    if (*(void **)((long)pvVar2 + 0x10) != (void *)0xffffffffffffffff) {
      munmap(*(void **)((long)pvVar2 + 0x10),*(size_t *)((long)pvVar2 + 0x18));
      pvVar2 = (void *)*param_1;
    }
    if (-1 < *(int *)((long)pvVar2 + 8)) {
      close(*(int *)((long)pvVar2 + 8));
      pvVar2 = (void *)*param_1;
    }
    __ptr = *(void **)((long)pvVar2 + 0x28);
    if (*(void **)((long)pvVar2 + 0x28) != (void *)0x0) {
      while (pvVar2 = *(void **)((long)__ptr + 0x28), pvVar2 != (void *)0x0) {
        *(undefined8 *)((long)pvVar2 + 0x30) = *(undefined8 *)((long)__ptr + 0x30);
        **(undefined8 **)((long)__ptr + 0x30) = pvVar2;
        free(__ptr);
        __ptr = pvVar2;
      }
      puVar1 = *(undefined8 **)((long)__ptr + 0x30);
      *(undefined8 **)(*param_1 + 0x30) = puVar1;
      *puVar1 = 0;
      free(__ptr);
      pvVar2 = (void *)*param_1;
    }
    free(pvVar2);
    *param_1 = 0;
  }
  return;
}

