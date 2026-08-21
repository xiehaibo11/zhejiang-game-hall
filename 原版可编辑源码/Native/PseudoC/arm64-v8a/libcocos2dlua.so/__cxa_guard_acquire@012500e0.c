
undefined4 __cxa_guard_acquire(char *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  int unaff_w20;
  
  if (*param_1 == '\0') {
    iVar3 = pthread_mutex_lock((pthread_mutex_t *)&DAT_017958e8);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012542ec("%s failed to acquire mutex","__cxa_guard_acquire");
    }
    if (((byte)param_1[1] >> 1 & 1) == 0) {
      bVar2 = false;
    }
    else {
      iVar3 = *(int *)(param_1 + 4);
      lVar4 = syscall(0xb2);
      unaff_w20 = (int)lVar4;
      if (iVar3 == unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_012542ec("__cxa_guard_acquire detected recursive initialization");
      }
      bVar2 = true;
    }
    while (bVar1 = param_1[1], (bVar1 >> 1 & 1) != 0) {
      param_1[1] = bVar1 | 4;
      pthread_cond_wait((pthread_cond_t *)&DAT_01795910,(pthread_mutex_t *)&DAT_017958e8);
    }
    if (bVar1 == 1) {
      uVar5 = 0;
    }
    else {
      if (!bVar2) {
        lVar4 = syscall(0xb2);
        unaff_w20 = (int)lVar4;
      }
      *(int *)(param_1 + 4) = unaff_w20;
      param_1[1] = '\x02';
      uVar5 = 1;
    }
    iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_017958e8);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012542ec("%s failed to release mutex","__cxa_guard_acquire");
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

