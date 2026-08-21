
void uv_cond_broadcast(pthread_cond_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_cond_broadcast(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

