
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
      iVar1 = *piVar2;
      break;
    }
    piVar2 = (int *)__errno();
    iVar1 = *piVar2;
  } while (iVar1 == 4);
  if (iVar1 != 0xb) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return 0xfffffff5;
}

