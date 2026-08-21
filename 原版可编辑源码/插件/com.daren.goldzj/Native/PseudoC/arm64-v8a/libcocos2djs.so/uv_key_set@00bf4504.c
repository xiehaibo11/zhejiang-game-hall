
void uv_key_set(pthread_key_t *param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = pthread_setspecific(*param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

