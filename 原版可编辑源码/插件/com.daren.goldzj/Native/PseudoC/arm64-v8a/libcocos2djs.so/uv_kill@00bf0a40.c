
int uv_kill(__pid_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = kill(param_1,param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)__errno();
    iVar2 = -*piVar3;
  }
  return iVar2;
}

