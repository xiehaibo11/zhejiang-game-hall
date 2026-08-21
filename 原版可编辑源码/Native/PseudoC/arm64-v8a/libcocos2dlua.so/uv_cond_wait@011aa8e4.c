
void uv_cond_wait(pthread_cond_t *param_1,pthread_mutex_t *param_2)

{
  int iVar1;
  
  iVar1 = pthread_cond_wait(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

