
void FUN_018338d0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  void *__src;
  long lVar5;
  ulong uVar6;
  
  __src = (void *)*param_1;
  lVar3 = param_1[1];
  lVar5 = lVar3 - (long)__src >> 3;
  uVar6 = lVar5 + 1;
  if (uVar6 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)__src >> 3) < 0xfffffffffffffff) {
    uVar4 = param_1[2] - (long)__src >> 2;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_01833940;
    }
  }
  else {
    uVar6 = 0x1fffffffffffffff;
  }
  pvVar2 = operator_new(uVar6 << 3);
  __src = (void *)*param_1;
  lVar3 = param_1[1];
LAB_01833940:
  puVar1 = (undefined8 *)((long)pvVar2 + lVar5 * 8);
  __n = lVar3 - (long)__src;
  *puVar1 = *param_2;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
  }
  *param_1 = (long)((long)puVar1 - __n);
  param_1[1] = (long)(puVar1 + 1);
  param_1[2] = (long)((long)pvVar2 + uVar6 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

