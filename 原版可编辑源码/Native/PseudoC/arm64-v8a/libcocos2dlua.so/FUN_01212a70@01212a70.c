
void FUN_01212a70(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  puVar3 = *(undefined8 **)(param_1 + 0x20);
  if (puVar3 < *(undefined8 **)(param_1 + 0x28)) {
    *puVar3 = param_2;
    puVar3[1] = param_3;
    *(undefined8 **)(param_1 + 0x20) = puVar3 + 2;
    return;
  }
  __src = *(void **)(param_1 + 0x18);
  lVar6 = (long)puVar3 - (long)__src >> 4;
  uVar7 = lVar6 + 1;
  if (uVar7 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar4 = (long)*(undefined8 **)(param_1 + 0x28) - (long)__src;
  if ((ulong)(lVar4 >> 4) < 0x7ffffffffffffff) {
    uVar5 = lVar4 >> 3;
    if (uVar7 <= uVar5) {
      uVar7 = uVar5;
    }
    if (uVar7 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_01212afc;
    }
  }
  else {
    uVar7 = 0xfffffffffffffff;
  }
  pvVar2 = operator_new(uVar7 << 4);
  __src = *(void **)(param_1 + 0x18);
  puVar3 = *(undefined8 **)(param_1 + 0x20);
LAB_01212afc:
  puVar1 = (undefined8 *)((long)pvVar2 + lVar6 * 0x10);
  __n = (long)puVar3 - (long)__src;
  *puVar1 = param_2;
  puVar1[1] = param_3;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar1 - __n),__src,__n);
  }
  *(void **)(param_1 + 0x18) = (void *)((long)puVar1 - __n);
  *(undefined8 **)(param_1 + 0x20) = puVar1 + 2;
  *(void **)(param_1 + 0x28) = (void *)((long)pvVar2 + uVar7 * 0x10);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

