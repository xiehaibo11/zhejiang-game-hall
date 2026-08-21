
int uv_cond_init(pthread_cond_t *param_1)

{
  int iVar1;
  pthread_condattr_t apStack_28 [2];
  
  iVar1 = pthread_condattr_init(apStack_28);
  if (iVar1 != 0) {
    return -iVar1;
  }
  iVar1 = pthread_condattr_setclock(apStack_28,1);
  if ((iVar1 == 0) && (iVar1 = pthread_cond_init(param_1,apStack_28), iVar1 == 0)) {
    iVar1 = pthread_condattr_destroy(apStack_28);
    if (iVar1 == 0) {
      return 0;
    }
    pthread_cond_destroy(param_1);
  }
  pthread_condattr_destroy(apStack_28);
  return -iVar1;
}

