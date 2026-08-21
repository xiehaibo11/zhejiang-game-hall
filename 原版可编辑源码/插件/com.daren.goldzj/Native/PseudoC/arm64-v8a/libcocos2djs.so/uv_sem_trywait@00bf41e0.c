
undefined8 uv_sem_trywait(sem_t *param_1)

{
  int iVar1;
  int *piVar2;
  
  do {
    iVar1 = sem_trywait(param_1);
    if (iVar1 != -1) {
      if (iVar1 == 0) {
        return 0;
      }
      piVar2 = (int *)__errno();
      break;
    }
    piVar2 = (int *)__errno();
  } while (*piVar2 == 4);
  if (*piVar2 == 0xb) {
    return 0xfffffff5;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

