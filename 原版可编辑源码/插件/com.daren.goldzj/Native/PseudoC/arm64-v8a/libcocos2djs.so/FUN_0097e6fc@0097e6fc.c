
void FUN_0097e6fc(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  void *__src;
  void *__dest;
  ulong uVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((*param_2 & 1) == 0) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar3;
    *param_1 = uVar2;
    puVar1 = (ulong *)param_2[8];
    goto joined_r0x0097e7c4;
  }
  uVar2 = param_2[1];
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  __src = (void *)param_2[2];
  if (uVar2 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)uVar2 << 1);
    if (uVar2 != 0) goto LAB_0097e7ac;
  }
  else {
    uVar3 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    param_1[1] = uVar2;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar3 | 1;
LAB_0097e7ac:
    memcpy(__dest,__src,uVar2);
  }
  *(undefined1 *)((long)__dest + uVar2) = 0;
  puVar1 = (ulong *)param_2[8];
joined_r0x0097e7c4:
  if (puVar1 == (ulong *)0x0) {
    param_1[8] = 0;
  }
  else if (param_2 + 4 == puVar1) {
    param_1[8] = (ulong)(param_1 + 4);
    (**(code **)(*(long *)param_2[8] + 0x18))();
  }
  else {
    uVar2 = (**(code **)(*puVar1 + 0x10))();
    param_1[8] = uVar2;
  }
  *(int *)(param_1 + 10) = (int)param_2[10];
  return;
}

