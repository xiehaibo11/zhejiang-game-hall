
int uv_os_getpriority(id_t param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == (int *)0x0) {
    return -0x16;
  }
  piVar2 = (int *)__errno();
  *piVar2 = 0;
  iVar1 = getpriority(PRIO_PROCESS,param_1);
  if ((iVar1 == -1) && (*piVar2 != 0)) {
    return -*piVar2;
  }
  *param_2 = iVar1;
  return 0;
}

