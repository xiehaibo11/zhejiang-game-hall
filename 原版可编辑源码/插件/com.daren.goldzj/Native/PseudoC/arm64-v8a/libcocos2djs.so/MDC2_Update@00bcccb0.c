
undefined8 MDC2_Update(uint *param_1,void *param_2,ulong param_3)

{
  void *__dest;
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 8 - (ulong)uVar1;
    __dest = (void *)((long)param_1 + (ulong)uVar1 + 4);
    if (param_3 < uVar2) {
      memcpy(__dest,param_2,param_3);
      param_3 = (ulong)(uVar1 + (int)param_3);
      goto LAB_00bccd5c;
    }
    memcpy(__dest,param_2,uVar2);
    *param_1 = 0;
    param_3 = param_3 - uVar2;
    param_2 = (void *)((long)param_2 + uVar2);
    FUN_00bccd78(param_1,param_1 + 1,8);
  }
  uVar2 = param_3 & 0xfffffffffffffff8;
  if (uVar2 != 0) {
    FUN_00bccd78(param_1,param_2,uVar2);
  }
  param_3 = param_3 - uVar2;
  if (param_3 == 0) {
    return 1;
  }
  memcpy(param_1 + 1,(void *)((long)param_2 + uVar2),param_3);
LAB_00bccd5c:
  *param_1 = (uint)param_3;
  return 1;
}

