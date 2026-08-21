
void uv_barrier_destroy(pthread_barrier_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_barrier_destroy(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

