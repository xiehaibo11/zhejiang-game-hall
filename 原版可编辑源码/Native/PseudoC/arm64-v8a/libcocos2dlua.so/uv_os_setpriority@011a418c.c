
int uv_os_setpriority(id_t param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (0x27 < param_2 + 0x14U) {
    return -0x16;
  }
  iVar1 = setpriority(PRIO_PROCESS,param_1,param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    piVar3 = (int *)__errno();
    iVar2 = -*piVar3;
  }
  return iVar2;
}

