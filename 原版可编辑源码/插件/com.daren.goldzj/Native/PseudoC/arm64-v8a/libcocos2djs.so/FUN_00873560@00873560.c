
void FUN_00873560(ulong *param_1,ulong *param_2,ulong *param_3)

{
  void *pvVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((*param_2 & 1) == 0) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  else {
    uVar4 = param_2[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar1 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      pvVar3 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_008735ec;
    }
    else {
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar3 = operator_new(uVar5);
      param_1[1] = uVar4;
      param_1[2] = (ulong)pvVar3;
      *param_1 = uVar5 | 1;
LAB_008735ec:
      memcpy(pvVar3,pvVar1,uVar4);
    }
    *(undefined1 *)((long)pvVar3 + uVar4) = 0;
  }
  puVar2 = param_1 + 3;
  *puVar2 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*param_3 & 1) == 0) {
    uVar5 = param_3[1];
    uVar4 = *param_3;
    param_1[5] = param_3[2];
    param_1[4] = uVar5;
    *puVar2 = uVar4;
    return;
  }
  uVar4 = param_3[1];
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar1 = (void *)param_3[2];
  if (uVar4 < 0x17) {
    pvVar3 = (void *)((long)param_1 + 0x19);
    *(char *)puVar2 = (char)((int)uVar4 << 1);
    if (uVar4 == 0) goto LAB_00873680;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar3 = operator_new(uVar5);
    param_1[4] = uVar4;
    param_1[5] = (ulong)pvVar3;
    param_1[3] = uVar5 | 1;
  }
  memcpy(pvVar3,pvVar1,uVar4);
LAB_00873680:
  *(undefined1 *)((long)pvVar3 + uVar4) = 0;
  return;
}

