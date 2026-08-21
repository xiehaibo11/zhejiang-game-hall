
int lws_plat_service_periodic(long param_1)

{
  int iVar1;
  __pid_t __pid;
  
  iVar1 = 0;
  if ((*(__pid_t *)(param_1 + 0xc60) != 0) &&
     (iVar1 = kill(*(__pid_t *)(param_1 + 0xc60),0), iVar1 < 0)) {
                    /* try { // try from 01052208 to 0115221b has its CatchHandler @ 01053580 */
    __pid = getpid();
    iVar1 = kill(__pid,0xf);
    return iVar1;
  }
                    /* try { // try from 01052200 to 01152207 has its CatchHandler @ 0105350c */
  return iVar1;
}

