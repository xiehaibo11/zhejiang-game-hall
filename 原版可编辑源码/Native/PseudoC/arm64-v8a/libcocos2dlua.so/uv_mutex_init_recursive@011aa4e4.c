
int uv_mutex_init_recursive(pthread_mutex_t *param_1)

{
  int iVar1;
  int iVar2;
  pthread_mutexattr_t apStack_18 [2];
  
  iVar1 = pthread_mutexattr_init(apStack_18);
  if ((iVar1 == 0) && (iVar1 = pthread_mutexattr_settype(apStack_18,1), iVar1 == 0)) {
    iVar1 = pthread_mutex_init(param_1,apStack_18);
    iVar2 = pthread_mutexattr_destroy(apStack_18);
    if (iVar2 == 0) {
      return -iVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

