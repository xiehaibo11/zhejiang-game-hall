
void FUN_01207e60(undefined8 *param_1,void *param_2,void *param_3)

{
  void *__src;
  long lVar1;
  ulong uVar2;
  void *__dest;
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
      __dest = (void *)param_1[1];
      sVar3 = (long)param_3 - (long)__src;
      if (0 < (long)sVar3) {
        memcpy(__dest,__src,sVar3);
        __dest = (void *)((long)__dest + sVar3);
      }
      param_1[1] = __dest;
      return;
    }
    param_1[1] = puVar4 + ((long)sVar3 >> 3);
    return;
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
LAB_01207fe4:
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  if ((ulong)(lVar1 >> 3) < 0xfffffffffffffff) {
    uVar2 = lVar1 >> 2;
    if ((uVar5 <= uVar2) && (uVar5 = uVar2, uVar2 >> 0x3d != 0)) goto LAB_01207fe4;
    if ((uVar5 < 0x1d) && (*(char *)(param_1 + 0x20) == '\0')) {
      puVar4 = param_1 + 4;
      *(undefined1 *)(param_1 + 0x20) = 1;
      goto LAB_01207fa0;
    }
  }
  else {
    uVar5 = 0x1fffffffffffffff;
  }
  puVar4 = operator_new(uVar5 << 3);
LAB_01207fa0:
  *param_1 = puVar4;
  param_1[1] = puVar4;
  param_1[2] = puVar4 + uVar5;
  if (0 < (long)sVar3) {
    memcpy(puVar4,param_2,sVar3);
    puVar4 = (undefined8 *)((long)puVar4 + sVar3);
  }
  param_1[1] = puVar4;
  return;
}

