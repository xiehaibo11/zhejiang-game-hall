
undefined4 uv_mutex_trylock(pthread_mutex_t *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_mutex_trylock(param_1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if ((iVar1 != 0xb) && (iVar1 != 0x10)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar2 = 0xfffffff0;
  }
  return uVar2;
}

