
void FUN_01212b64(long *param_1,__shared_count *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  size_t __n;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  void *__src;
  long lVar6;
  ulong uVar7;
  
  puVar3 = (undefined8 *)param_1[1];
  if (puVar3 != (undefined8 *)param_1[2]) {
    *puVar3 = param_2;
    param_1[1] = (long)(puVar3 + 1);
    goto LAB_01212c24;
  }
  __src = (void *)*param_1;
  lVar6 = (long)puVar3 - (long)__src >> 3;
  uVar7 = lVar6 + 1;
  if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = param_1[2] - (long)__src;
  if ((ulong)(lVar4 >> 3) < 0xfffffffffffffff) {
    uVar5 = lVar4 >> 2;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 != 0) goto LAB_01212bdc;
    pvVar2 = (void *)0x0;
  }
  else {
    uVar7 = 0x1fffffffffffffff;
LAB_01212bdc:
    pvVar2 = operator_new(uVar7 << 3);
    __src = (void *)*param_1;
    puVar3 = (undefined8 *)param_1[1];
  }
  puVar1 = (undefined8 *)((long)pvVar2 + lVar6 * 8);
  __n = (long)puVar3 - (long)__src;
  *puVar1 = param_2;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
  }
  *param_1 = (long)((long)puVar1 - __n);
  param_1[1] = (long)(puVar1 + 1);
  param_1[2] = (long)((long)pvVar2 + uVar7 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_01212c24:
  std::__ndk1::__shared_count::__add_shared(param_2);
  return;
}

