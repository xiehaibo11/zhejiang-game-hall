
void FUN_00d1c324(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *__src;
  size_t __n;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar5 = (undefined8 *)param_1[1];
  if (puVar5 < (undefined8 *)param_1[2]) {
    uVar8 = param_2[1];
    uVar7 = *param_2;
    puVar5[2] = param_2[2];
    puVar5[1] = uVar8;
    *puVar5 = uVar7;
    param_1[1] = puVar5 + 3;
    return;
  }
  __src = (void *)*param_1;
  __n = (long)puVar5 - (long)__src;
  uVar6 = 0xaaaaaaaaaaaaaaa;
  uVar1 = ((long)__n >> 3) * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)param_1[2] - (long)__src >> 3;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0x555555555555555) {
    uVar4 = lVar3 * 0x5555555555555556;
    uVar6 = uVar1;
    if (uVar1 <= uVar4) {
      uVar6 = uVar4;
    }
    if (uVar6 == 0) {
      pvVar2 = (void *)0x0;
      goto LAB_00d1c3d0;
    }
  }
  pvVar2 = operator_new(uVar6 * 0x18);
LAB_00d1c3d0:
  uVar8 = param_2[1];
  uVar7 = *param_2;
  puVar5 = (undefined8 *)((long)pvVar2 + ((long)__n >> 3) * 8);
  puVar5[2] = param_2[2];
  puVar5[1] = uVar8;
  *puVar5 = uVar7;
  if (0 < (long)__n) {
    memcpy((void *)((long)puVar5 - __n),__src,__n);
  }
  *param_1 = (void *)((long)puVar5 - __n);
  param_1[1] = puVar5 + 3;
  param_1[2] = (void *)((long)pvVar2 + uVar6 * 0x18);
  if (__src == (void *)0x0) {
    return;
  }
  operator_delete(__src);
  return;
}

