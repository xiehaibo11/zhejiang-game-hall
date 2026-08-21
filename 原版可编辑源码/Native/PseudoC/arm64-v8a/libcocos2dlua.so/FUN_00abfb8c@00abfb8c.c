
void FUN_00abfb8c(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  void *__src;
  size_t __n;
  ulong uVar7;
  
  puVar6 = (undefined8 *)param_1[1];
  if (puVar6 != (undefined8 *)param_1[2]) {
    uVar5 = *param_2;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
    *puVar6 = uVar5;
    param_1[1] = (long)puVar6 + 0xc;
    return;
  }
  __src = (void *)*param_1;
  __n = (long)puVar6 - (long)__src;
  uVar7 = 0x1555555555555555;
  uVar1 = ((long)__n >> 2) * -0x5555555555555555 + 1;
  if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)param_1[2] - (long)__src >> 2;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0xaaaaaaaaaaaaaaa) {
    uVar4 = lVar3 * 0x5555555555555556;
    uVar7 = uVar1;
    if (uVar1 <= uVar4) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00abfc48;
    }
  }
  pvVar2 = operator_new(uVar7 * 0xc);
LAB_00abfc48:
  uVar5 = *param_2;
  puVar6 = (undefined8 *)((long)pvVar2 + ((long)__n >> 2) * 4);
  *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar6 = uVar5;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar6 - __n),__src,__n);
  }
  *param_1 = (void *)((long)puVar6 - __n);
  param_1[1] = (long)puVar6 + 0xc;
  param_1[2] = (void *)((long)pvVar2 + uVar7 * 0xc);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

