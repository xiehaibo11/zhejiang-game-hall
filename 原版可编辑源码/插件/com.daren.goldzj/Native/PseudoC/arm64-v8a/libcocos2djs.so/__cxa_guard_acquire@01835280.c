
undefined4 __cxa_guard_acquire(ulong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_01d53e60);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01838484("__cxa_guard_acquire failed to acquire mutex");
  }
  if ((char)*param_1 == '\0') {
    while ((*param_1 & 0xff00) != 0) {
      iVar1 = pthread_cond_wait((pthread_cond_t *)&DAT_01d53e88,(pthread_mutex_t *)&DAT_01d53e60);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01838484("__cxa_guard_acquire condition variable wait failed");
      }
    }
    if ((*param_1 & 0xff) == 0) {
      *param_1 = 0x100;
      uVar2 = 1;
      goto LAB_018352f0;
    }
  }
  uVar2 = 0;
LAB_018352f0:
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_01d53e60);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01838484("__cxa_guard_acquire failed to release mutex");
  }
  return uVar2;
}

