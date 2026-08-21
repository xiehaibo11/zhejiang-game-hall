
void FUN_0014c270(undefined8 *param_1,undefined8 *param_2)

{
  void *__dest;
  undefined8 *puVar1;
  undefined8 uVar2;
  size_t __n;
  undefined8 *__src;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 == (undefined8 *)param_1[2]) {
    __src = (undefined8 *)*param_1;
    __n = (long)puVar1 - (long)__src;
    if (__src == param_1 + 3) {
      __dest = malloc(__n * 2);
      if (__dest == (void *)0x0) goto LAB_0014c330;
      if (__n != 0) {
        memmove(__dest,__src,__n);
      }
      *param_1 = __dest;
    }
    else {
      __dest = realloc(__src,__n * 2);
      *param_1 = __dest;
      if (__dest == (void *)0x0) {
LAB_0014c330:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
    }
    puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    param_1[1] = puVar1;
    param_1[2] = (void *)((long)__dest + ((long)__n >> 2) * 8);
  }
  uVar2 = *param_2;
  param_1[1] = puVar1 + 1;
  *puVar1 = uVar2;
  return;
}

