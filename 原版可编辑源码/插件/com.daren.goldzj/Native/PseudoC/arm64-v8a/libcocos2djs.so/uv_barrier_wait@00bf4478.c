
bool uv_barrier_wait(pthread_barrier_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_barrier_wait(param_1);
  if ((iVar1 != 0x12345) && (iVar1 != 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return iVar1 == 0x12345;
}

