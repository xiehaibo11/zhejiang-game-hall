
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_cond_init(pthread_cond_t *param_1)

{
  int iVar1;
  int iVar2;
  pthread_condattr_t apStack_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = pthread_condattr_init(apStack_10);
  iVar2 = -iVar1;
  if (iVar1 == 0) {
    iVar1 = pthread_condattr_setclock(apStack_10,1);
    if ((iVar1 == 0) && (iVar1 = pthread_cond_init(param_1,apStack_10), iVar1 == 0)) {
      iVar1 = pthread_condattr_destroy(apStack_10);
      iVar2 = 0;
      if (iVar1 == 0) goto LAB_00bf427c;
      pthread_cond_destroy(param_1);
    }
    pthread_condattr_destroy(apStack_10);
    iVar2 = -iVar1;
  }
LAB_00bf427c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

