
void FUN_01828350(undefined8 *param_1,void *param_2,void *param_3)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  lVar1 = param_1[2];
  puVar4 = (undefined8 *)*param_1;
  sVar3 = (long)param_3 - (long)param_2;
  uVar5 = (long)sVar3 >> 3;
  if (uVar5 <= (ulong)(lVar1 - (long)puVar4 >> 3)) {
    uVar2 = param_1[1] - (long)puVar4 >> 3;
    __src = (void *)((long)param_2 + (param_1[1] - (long)puVar4));
    if (uVar5 <= uVar2) {
      __src = param_3;
    }
    sVar3 = (long)__src - (long)param_2;
    if (sVar3 != 0) {
      memmove(puVar4,param_2,sVar3);
    }
    if (uVar2 < uVar5) {
      sVar3 = (long)param_3 - (long)__src;
      if ((long)sVar3 < 1) {
        return;
      }
      memcpy((void *)param_1[1],__src,sVar3);
      puVar4 = (undefined8 *)(param_1[1] + sVar3);
    }
    else {
      puVar4 = puVar4 + ((long)sVar3 >> 3);
    }
    goto LAB_018284ac;
  }
  if (puVar4 != (undefined8 *)0x0) {
    param_1[1] = puVar4;
    if (puVar4 == param_1 + 4) {
      *(undefined1 *)(param_1 + 0x20) = 0;
    }
    else {
      operator_delete(puVar4);
    }
    lVar1 = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (uVar5 >> 0x3d != 0) {
LAB_018284c8:
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(lVar1 >> 3) < 0xfffffffffffffff) {
    uVar2 = lVar1 >> 2;
    if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3d != 0)) goto LAB_018284c8;
    if ((0x1c < uVar5) || (*(char *)(param_1 + 0x20) != '\0')) goto LAB_0182847c;
    puVar4 = param_1 + 4;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  else {
    uVar5 = 0x1fffffffffffffff;
LAB_0182847c:
    puVar4 = operator_new(uVar5 << 3);
  }
  *param_1 = puVar4;
  param_1[1] = puVar4;
  param_1[2] = puVar4 + uVar5;
  if ((long)sVar3 < 1) {
    return;
  }
  memcpy(puVar4,param_2,sVar3);
  puVar4 = (undefined8 *)(param_1[1] + sVar3);
LAB_018284ac:
  param_1[1] = puVar4;
  return;
}

