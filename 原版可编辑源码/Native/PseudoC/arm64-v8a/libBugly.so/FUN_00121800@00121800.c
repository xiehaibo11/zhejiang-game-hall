
void FUN_00121800(undefined8 param_1,long param_2)

{
  void *__ptr;
  
  __ptr = *(void **)(param_2 + 0x38);
  if (__ptr != (void *)0x0) {
    if (*(int *)((long)__ptr + 0x28) == 0) {
      if (*(long *)((long)__ptr + 0x48) != 0) {
        FUN_00120e20();
        *(undefined8 *)((long)__ptr + 0x48) = 0;
        __ptr = *(void **)(param_2 + 0x38);
      }
    }
    else if ((*(int *)((long)__ptr + 0x28) == 1) && (*(void **)((long)__ptr + 0x48) != (void *)0x0))
    {
      free(*(void **)((long)__ptr + 0x48));
      *(undefined8 *)((long)__ptr + 0x48) = 0;
      __ptr = *(void **)(param_2 + 0x38);
    }
    free(__ptr);
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  return;
}

