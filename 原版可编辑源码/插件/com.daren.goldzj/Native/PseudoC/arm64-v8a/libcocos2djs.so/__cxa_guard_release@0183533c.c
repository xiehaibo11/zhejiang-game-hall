
void __cxa_guard_release(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_01d53e60);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01838484("__cxa_guard_release failed to acquire mutex");
  }
  *param_1 = 1;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_01d53e60);
  if (iVar1 == 0) {
    iVar1 = pthread_cond_broadcast((pthread_cond_t *)&DAT_01d53e88);
    if (iVar1 == 0) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01838484("__cxa_guard_release failed to broadcast condition variable");
  }
                    /* WARNING: Subroutine does not return */
  FUN_01838484("__cxa_guard_release failed to release mutex");
}

