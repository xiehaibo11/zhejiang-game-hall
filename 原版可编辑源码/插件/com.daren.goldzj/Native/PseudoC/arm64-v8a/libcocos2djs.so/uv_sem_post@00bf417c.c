
void uv_sem_post(sem_t *param_1)

{
  int iVar1;
  
  iVar1 = sem_post(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

