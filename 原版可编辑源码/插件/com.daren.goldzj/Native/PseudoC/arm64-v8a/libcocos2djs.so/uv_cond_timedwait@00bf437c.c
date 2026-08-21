
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_cond_timedwait(pthread_cond_t *param_1,pthread_mutex_t *param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  timespec local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = uv__hrtime(0);
  local_18.tv_sec = (ulong)(lVar3 + param_3) / 1000000000;
  local_18.tv_nsec = (ulong)(lVar3 + param_3) % 1000000000;
  iVar1 = pthread_cond_timedwait(param_1,param_2,&local_18);
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 0xffffff92, iVar1 != 0x6e)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

