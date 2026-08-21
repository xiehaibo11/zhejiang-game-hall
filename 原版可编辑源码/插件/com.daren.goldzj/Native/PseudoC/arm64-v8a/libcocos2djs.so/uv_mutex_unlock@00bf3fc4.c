
void uv_mutex_unlock(pthread_mutex_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_mutex_unlock(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

