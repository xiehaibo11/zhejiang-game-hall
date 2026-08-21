
ulong luaJIT_profile_start(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  itimerval local_40;
  _union_1457 local_20;
  code *local_18;
  
  iVar3 = 10;
  while (bVar1 = *param_2, bVar1 != 0) {
    param_2 = param_2 + 1;
    if (bVar1 == 0x69) {
      uVar2 = *param_2 - 0x30;
      if ((uVar2 & 0xff) < 10) {
        iVar3 = 0;
        do {
          param_2 = param_2 + 1;
          iVar3 = iVar3 * 10 + uVar2;
          uVar2 = *param_2 - 0x30;
        } while ((uVar2 & 0xff) < 10);
        if (iVar3 == 0) {
          iVar3 = 1;
        }
      }
      else {
        iVar3 = 1;
      }
    }
  }
  if (DAT_01785688 != 0) {
    luaJIT_profile_stop(param_1);
    if (DAT_01785688 != 0) {
      return DAT_01785688;
    }
  }
  DAT_01785688 = *(undefined8 *)(param_1 + 0x10);
  local_40.it_interval.tv_sec = (__time_t)(iVar3 / 1000);
  DAT_017856c4 = 0;
  local_40.it_interval.tv_usec = (__suseconds_t)((iVar3 % 1000) * 1000);
  DAT_017856a0 = 0;
  DAT_017856a8 = 0;
  DAT_017856b0 = 0;
  DAT_01785690 = param_3;
  DAT_01785698 = param_4;
  DAT_017856b8 = param_1;
  DAT_017856c0 = iVar3;
  local_40.it_value.tv_sec = local_40.it_interval.tv_sec;
  local_40.it_value.tv_usec = local_40.it_interval.tv_usec;
  setitimer(ITIMER_PROF,&local_40,(itimerval *)0x0);
  local_18 = FUN_00c05f28;
  local_20._0_4_ = 0x10000000;
  sigemptyset((sigset_t *)&stack0xfffffffffffffff0);
  uVar2 = sigaction(0x1b,(sigaction *)&local_20,(sigaction *)&DAT_017856d0);
  return (ulong)uVar2;
}

