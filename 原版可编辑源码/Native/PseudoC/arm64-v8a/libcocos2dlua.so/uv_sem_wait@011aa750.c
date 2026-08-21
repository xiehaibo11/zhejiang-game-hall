
void uv_sem_wait(sem_t *param_1)

{
  int iVar1;
  int *piVar2;
  
  do {
    iVar1 = sem_wait(param_1);
    if (iVar1 == 0) {
      return;
    }
  } while ((iVar1 == -1) && (piVar2 = (int *)__errno(), *piVar2 == 4));
                    /* WARNING: Subroutine does not return */
  abort();
}

