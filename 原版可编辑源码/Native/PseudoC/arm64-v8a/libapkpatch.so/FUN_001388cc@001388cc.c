
void FUN_001388cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *__src;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)param_1[2];
  if (puVar8 == (undefined8 *)param_1[3]) {
    puVar2 = (undefined8 *)*param_1;
    __src = (undefined8 *)param_1[1];
    if (__src < puVar2 || (long)__src - (long)puVar2 == 0) {
      uVar5 = (long)puVar8 - (long)puVar2 >> 2;
      if ((long)puVar8 - (long)puVar2 == 0) {
        uVar5 = 1;
      }
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00138d84("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar5 << 3);
      puVar1 = (undefined8 *)((long)pvVar3 + (uVar5 & 0x7ffffffffffffffc) * 2);
      lVar6 = (long)puVar8 - (long)__src;
      puVar8 = puVar1;
      if (lVar6 != 0) {
        puVar8 = (undefined8 *)((long)puVar1 + lVar6);
        lVar6 = (lVar6 >> 3) << 3;
        puVar7 = puVar1;
        do {
          lVar6 = lVar6 + -8;
          *puVar7 = *__src;
          puVar7 = puVar7 + 1;
          __src = __src + 1;
        } while (lVar6 != 0);
      }
      *param_1 = pvVar3;
      param_1[1] = puVar1;
      param_1[2] = puVar8;
      param_1[3] = (void *)((long)pvVar3 + uVar5 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        operator_delete(puVar2);
        puVar8 = (undefined8 *)param_1[2];
      }
    }
    else {
      lVar4 = (long)__src - (long)puVar2 >> 3;
      lVar6 = lVar4 + 2;
      if (-1 < lVar4 + 1) {
        lVar6 = lVar4 + 1;
      }
      __n = (long)puVar8 - (long)__src;
      puVar8 = __src + -(lVar6 >> 1);
      if (__n != 0) {
        memmove(puVar8,__src,__n);
        __src = (undefined8 *)param_1[1];
      }
      puVar8 = (undefined8 *)((long)puVar8 + __n);
      param_1[1] = __src + -(lVar6 >> 1);
      param_1[2] = puVar8;
    }
  }
  *puVar8 = *param_2;
  param_1[2] = param_1[2] + 8;
  return;
}

