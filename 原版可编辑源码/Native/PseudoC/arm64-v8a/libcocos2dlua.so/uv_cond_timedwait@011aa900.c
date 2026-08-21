
undefined8 uv_cond_timedwait(pthread_cond_t *param_1,pthread_mutex_t *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  timespec local_40;
  
  lVar2 = FUN_011ac764(0);
  local_40.tv_sec = (ulong)(lVar2 + param_3) / 1000000000;
  local_40.tv_nsec = (ulong)(lVar2 + param_3) % 1000000000;
  iVar1 = pthread_cond_timedwait(param_1,param_2,&local_40);
  uVar3 = 0;
  if (iVar1 != 0) {
    if (iVar1 != 0x6e) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar3 = 0xffffff92;
  }
  return uVar3;
}

