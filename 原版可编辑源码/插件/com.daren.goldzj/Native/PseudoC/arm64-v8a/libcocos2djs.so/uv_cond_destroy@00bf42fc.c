
void uv_cond_destroy(pthread_cond_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_cond_destroy(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

