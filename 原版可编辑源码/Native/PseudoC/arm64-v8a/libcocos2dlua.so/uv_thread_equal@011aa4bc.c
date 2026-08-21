
int uv_thread_equal(pthread_t *param_1,pthread_t *param_2)

{
  int iVar1;
  
  iVar1 = pthread_equal(*param_1,*param_2);
  return iVar1;
}

