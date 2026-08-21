
void FUN_00f14040(long *param_1,undefined8 *param_2,char *param_3)

{
  ulong uVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 uVar4;
  void *pvVar5;
  void *__src;
  size_t __n;
  long lVar6;
  ulong uVar7;
  FunctionLiteral *pFVar8;
  long lVar9;
  
  puVar2 = (undefined4 *)param_1[1];
  if (puVar2 < (undefined4 *)param_1[2]) {
    cVar3 = *param_3;
    pFVar8 = (FunctionLiteral *)*param_2;
    if (cVar3 == '\0') {
      uVar4 = v8::internal::FunctionLiteral::end_position(pFVar8);
    }
    else {
      uVar4 = v8::internal::FunctionLiteral::start_position(pFVar8);
    }
    *puVar2 = uVar4;
    puVar2[1] = (uint)(cVar3 == '\0');
    *(FunctionLiteral **)(puVar2 + 2) = pFVar8;
    param_1[1] = param_1[1] + 0x10;
  }
  else {
    lVar9 = (long)puVar2 - *param_1 >> 4;
    uVar1 = lVar9 + 1;
    if (uVar1 >> 0x3c != 0) {
LAB_00f141a4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = param_1[2] - *param_1;
    uVar7 = lVar6 >> 3;
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    if (0x7fffffffffffffe < (ulong)(lVar6 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar1 >> 0x3c != 0) goto LAB_00f141a4;
      pvVar5 = operator_new(uVar1 << 4);
    }
    cVar3 = *param_3;
    pFVar8 = (FunctionLiteral *)*param_2;
    puVar2 = (undefined4 *)((long)pvVar5 + lVar9 * 0x10);
    if (cVar3 == '\0') {
      uVar4 = v8::internal::FunctionLiteral::end_position(pFVar8);
    }
    else {
      uVar4 = v8::internal::FunctionLiteral::start_position(pFVar8);
    }
    *puVar2 = uVar4;
    *(FunctionLiteral **)((long)pvVar5 + lVar9 * 0x10 + 8) = pFVar8;
    *(uint *)((long)pvVar5 + lVar9 * 0x10 + 4) = (uint)(cVar3 == '\0');
    __src = (void *)*param_1;
    __n = param_1[1] - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar2 - __n),__src,__n);
      __src = (void *)*param_1;
    }
    *param_1 = (long)((long)puVar2 - __n);
    param_1[1] = (long)(puVar2 + 4);
    param_1[2] = (long)((long)pvVar5 + uVar1 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
      return;
    }
  }
  return;
}

