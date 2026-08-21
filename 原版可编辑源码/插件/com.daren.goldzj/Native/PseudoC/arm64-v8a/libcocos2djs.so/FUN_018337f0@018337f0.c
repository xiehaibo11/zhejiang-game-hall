
void FUN_018337f0(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t __n;
  long lVar3;
  ulong uVar4;
  void *__src;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  __src = (void *)*param_1;
  lVar3 = param_1[1];
  lVar5 = lVar3 - (long)__src >> 4;
  uVar6 = lVar5 + 1;
  if (uVar6 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(param_1[2] - (long)__src >> 4) < 0x7ffffffffffffff) {
    uVar4 = param_1[2] - (long)__src >> 3;
    if (uVar6 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_01833860;
    }
  }
  else {
    uVar6 = 0xfffffffffffffff;
  }
  pvVar2 = operator_new(uVar6 << 4);
  __src = (void *)*param_1;
  lVar3 = param_1[1];
LAB_01833860:
  uVar7 = *param_2;
  puVar1 = (undefined8 *)((long)pvVar2 + lVar5 * 0x10);
  __n = lVar3 - (long)__src;
  puVar1[1] = param_2[1];
  *puVar1 = uVar7;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
  }
  *param_1 = (long)((long)puVar1 - __n);
  param_1[1] = (long)(puVar1 + 2);
  param_1[2] = (long)((long)pvVar2 + uVar6 * 0x10);
  if (__src != (void *)0x0) {
    operator_delete(__src);
    return;
  }
  return;
}

