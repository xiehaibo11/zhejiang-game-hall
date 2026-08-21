
void FUN_001389f8(long *param_1,undefined8 *param_2)

{
  undefined8 *__src;
  ulong uVar1;
  size_t __n;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *__dest;
  ulong uVar9;
  
  __src = (undefined8 *)param_1[1];
  __dest = __src;
  if (__src == (undefined8 *)*param_1) {
    uVar9 = param_1[2];
    uVar1 = param_1[3];
    if (uVar9 < uVar1) {
      lVar3 = (long)(uVar1 - uVar9) >> 3;
      lVar6 = lVar3 + 2;
      if (-1 < lVar3 + 1) {
        lVar6 = lVar3 + 1;
      }
      __n = uVar9 - (long)__src;
      __dest = (undefined8 *)(uVar9 + (lVar6 >> 1) * 8);
      if (__n != 0) {
        __dest = (undefined8 *)((long)__dest - __n);
        memmove(__dest,__src,__n);
        uVar9 = param_1[2];
      }
      param_1[1] = (long)__dest;
      param_1[2] = uVar9 + (lVar6 >> 1) * 8;
    }
    else {
      uVar4 = (long)(uVar1 - (long)__src) >> 2;
      if (uVar1 - (long)__src == 0) {
        uVar4 = 1;
      }
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00138d84("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar2 = operator_new(uVar4 << 3);
      __dest = (undefined8 *)((long)pvVar2 + (uVar4 * 2 + 6 & 0xfffffffffffffff8));
      lVar6 = uVar9 - (long)__src;
      puVar5 = __dest;
      if (lVar6 != 0) {
        puVar5 = (undefined8 *)((long)__dest + lVar6);
        lVar6 = (lVar6 >> 3) << 3;
        puVar7 = __dest;
        puVar8 = __src;
        do {
          lVar6 = lVar6 + -8;
          *puVar7 = *puVar8;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        } while (lVar6 != 0);
      }
      *param_1 = (long)pvVar2;
      param_1[1] = (long)__dest;
      param_1[2] = (long)puVar5;
      param_1[3] = (long)((long)pvVar2 + uVar4 * 8);
      if (__src != (undefined8 *)0x0) {
        operator_delete(__src);
        __dest = (undefined8 *)param_1[1];
      }
    }
  }
  __dest[-1] = *param_2;
  param_1[1] = param_1[1] + -8;
  return;
}

