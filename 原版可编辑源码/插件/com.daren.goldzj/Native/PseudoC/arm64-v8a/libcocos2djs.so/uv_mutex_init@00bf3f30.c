
int uv_mutex_init(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_init(param_1,(pthread_mutexattr_t *)0x0);
  return -iVar1;
}

