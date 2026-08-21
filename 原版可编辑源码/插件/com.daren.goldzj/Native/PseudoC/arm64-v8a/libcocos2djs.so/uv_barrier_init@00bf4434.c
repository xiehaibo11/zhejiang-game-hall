
int uv_barrier_init(pthread_barrier_t *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = pthread_barrier_init(param_1,(pthread_barrierattr_t *)0x0,param_2);
  return -iVar1;
}

