
int uv_thread_create(pthread_t *param_1,__start_routine *param_2,void *param_3)

{
  int iVar1;
  
  iVar1 = pthread_create(param_1,(pthread_attr_t *)0x0,param_2,param_3);
  return -iVar1;
}

