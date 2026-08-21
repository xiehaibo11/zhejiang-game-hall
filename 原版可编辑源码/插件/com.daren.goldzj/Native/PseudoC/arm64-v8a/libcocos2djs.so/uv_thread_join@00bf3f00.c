
int uv_thread_join(pthread_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_join(*param_1,(void **)0x0);
  return -iVar1;
}

