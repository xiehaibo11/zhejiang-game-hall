
void luaJIT_profile_stop(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  itimerval local_20;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != DAT_01785688) {
    return;
  }
  local_20.it_interval.tv_sec = 0;
  local_20.it_value.tv_sec = 0;
  local_20.it_interval.tv_usec = 0;
  local_20.it_value.tv_usec = 0;
  setitimer(ITIMER_PROF,&local_20,(itimerval *)0x0);
  sigaction(0x1b,(sigaction *)&DAT_017856d0,(sigaction *)0x0);
  *(byte *)(lVar3 + 0xc1) = *(byte *)(lVar3 + 0xc1) & 0x7f;
  FUN_00bfe9d0(lVar3);
  uVar1 = DAT_017856b0;
  uVar2 = (ulong)(uint)((int)DAT_017856a8 - (int)DAT_017856b0);
  *(ulong *)(lVar3 + 0x20) = *(long *)(lVar3 + 0x20) - uVar2;
  (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18),uVar1,uVar2,0);
  DAT_017856b0 = 0;
  DAT_017856a8 = 0;
  DAT_01785688 = 0;
  return;
}

