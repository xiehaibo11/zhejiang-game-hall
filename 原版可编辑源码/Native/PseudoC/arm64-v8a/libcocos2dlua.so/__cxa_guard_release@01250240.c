
void __cxa_guard_release(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  
  *param_1 = 1;
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_017958e8);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012542ec("%s failed to acquire mutex","__cxa_guard_release");
  }
  bVar1 = *(byte *)((long)param_1 + 1);
  *(undefined1 *)((long)param_1 + 1) = 1;
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_017958e8);
  if (iVar2 == 0) {
    if (((bVar1 >> 2 & 1) != 0) &&
       (iVar2 = pthread_cond_broadcast((pthread_cond_t *)&DAT_01795910), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012542ec("%s failed to broadcast","__cxa_guard_release");
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012542ec("%s failed to release mutex","__cxa_guard_release");
}

