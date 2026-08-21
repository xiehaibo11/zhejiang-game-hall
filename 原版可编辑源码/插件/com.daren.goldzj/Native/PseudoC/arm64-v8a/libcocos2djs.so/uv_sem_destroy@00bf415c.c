
void uv_sem_destroy(sem_t *param_1)

{
  int iVar1;
  
  iVar1 = sem_destroy(param_1);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

