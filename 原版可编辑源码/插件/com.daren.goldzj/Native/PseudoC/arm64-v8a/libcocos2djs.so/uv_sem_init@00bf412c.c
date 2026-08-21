
int uv_sem_init(sem_t *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = sem_init(param_1,0,param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)__errno();
    iVar2 = -*piVar3;
  }
  return iVar2;
}

