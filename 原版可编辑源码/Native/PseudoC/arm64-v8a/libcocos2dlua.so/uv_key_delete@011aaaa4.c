
void uv_key_delete(pthread_key_t *param_1)

{
  int iVar1;
  
  iVar1 = pthread_key_delete(*param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

