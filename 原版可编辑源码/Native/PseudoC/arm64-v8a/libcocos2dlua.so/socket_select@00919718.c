
int socket_select(int param_1,fd_set *param_2,fd_set *param_3,fd_set *param_4,undefined8 param_5)

{
  timeval *__timeout;
  long lVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  timeval local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00919744 to 00a197a3 has its CatchHandler @ 00919744
                       catch() { ... } // from try @ 00919744 with catch @ 00919744
                       catch() { ... } // from try @ 009197a8 with catch @ 00919744 */
  do {
    dVar4 = (double)timeout_getretry(param_5);
    local_78.tv_sec = (__time_t)(int)dVar4;
    local_78.tv_usec = (__suseconds_t)(int)((dVar4 - (double)(int)dVar4) * 1000000.0);
    __timeout = &local_78;
    if (dVar4 < 0.0) {
      __timeout = (timeval *)0x0;
    }
                    /* try { // try from 009197a4 to 00a197a7 has its CatchHandler @ 00919834 */
                    /* try { // try from 009197a8 to 00a19847 has its CatchHandler @ 00919744 */
    iVar2 = select(param_1,param_2,param_3,param_4,__timeout);
  } while ((iVar2 < 0) && (piVar3 = (int *)__errno(), *piVar3 == 4));
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

