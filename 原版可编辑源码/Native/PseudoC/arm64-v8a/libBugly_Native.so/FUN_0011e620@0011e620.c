
void FUN_0011e620(pthread_mutex_t *param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (DAT_00176e90 == 0) {
    iVar2 = getpagesize();
    DAT_00176e90 = (ulong)iVar2;
  }
  *(undefined8 *)((long)param_1 + 0x40) = 0;
  param_1[1].__align = 0;
  (param_1->__data).__list.__next = (__pthread_internal_list *)0x0;
  *(undefined8 *)((long)param_1 + 0x38) = 0;
  *(undefined8 *)((long)param_1 + 0x30) = 0;
  *(int *)((long)param_1 + 8) = 0;
  *(uint *)((long)param_1 + 0xc) = 0;
  param_1->__align = 0;
  (param_1->__data).__list.__prev = (__pthread_internal_list *)0x0;
  *(int *)((long)param_1 + 0x10) = 0;
  *(int *)((long)param_1 + 0x14) = 0;
  pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  uVar3 = param_2 + 0xfU & 0xfffffffffffffff0;
  if (param_3 == 0) {
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = DAT_00176e90 / uVar3;
    }
    param_3 = 0x10;
    if (uVar4 >> 2 != 0) {
      param_3 = uVar4 >> 2;
    }
  }
  uVar4 = -DAT_00176e90;
  lVar1 = DAT_00176e90 + uVar3 * param_3 * 2;
  *(int *)((long)param_1 + 0x38) = (int)param_3;
  param_1[1].__align = uVar3;
  *(ulong *)((long)param_1 + 0x30) = lVar1 - 1U & uVar4;
  FUN_0011e6d0(param_1);
  return;
}

