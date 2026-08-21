
void FUN_0011b85c(pthread_mutex_t *param_1,long param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  if (DAT_00171e20 == 0) {
    iVar1 = getpagesize();
    DAT_00171e20 = (ulong)iVar1;
  }
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  param_1->__align = 0;
  *(int *)((long)param_1 + 8) = 0;
  *(uint *)((long)param_1 + 0xc) = 0;
  *(int *)((long)param_1 + 0x10) = 0;
  *(int *)((long)param_1 + 0x14) = 0;
  (param_1->__data).__list.__prev = (__pthread_internal_list *)0x0;
  (param_1->__data).__list.__next = (__pthread_internal_list *)0x0;
  param_1[1].__align = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  uVar3 = param_2 + 0xfU & 0xfffffffffffffff0;
  if (param_3 == 0) {
    param_3 = 0;
    if (uVar3 != 0) {
      param_3 = DAT_00171e20 / uVar3;
    }
    param_3 = param_3 >> 2;
    if (param_3 == 0) {
      uVar5 = 0x10;
      param_3 = 0x10;
      goto LAB_0011b8e0;
    }
  }
  uVar5 = (undefined4)param_3;
LAB_0011b8e0:
  lVar4 = DAT_00171e20 - 1;
  uVar2 = -DAT_00171e20;
  param_1[1].__align = uVar3;
  *(undefined4 *)((long)param_1 + 0x38) = uVar5;
  *(ulong *)((long)param_1 + 0x30) = lVar4 + uVar3 * 2 * param_3 & uVar2;
  FUN_0011b71c(param_1);
  return;
}

