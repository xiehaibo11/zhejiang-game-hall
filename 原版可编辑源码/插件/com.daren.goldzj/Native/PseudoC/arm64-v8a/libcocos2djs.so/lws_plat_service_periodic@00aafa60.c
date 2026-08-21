
int lws_plat_service_periodic(long param_1)

{
  int iVar1;
  __pid_t __pid;
  
  iVar1 = 0;
  if ((*(__pid_t *)(param_1 + 0xc60) != 0) &&
     (iVar1 = kill(*(__pid_t *)(param_1 + 0xc60),0), iVar1 < 0)) {
    __pid = getpid();
    iVar1 = kill(__pid,0xf);
    return iVar1;
  }
  return iVar1;
}

