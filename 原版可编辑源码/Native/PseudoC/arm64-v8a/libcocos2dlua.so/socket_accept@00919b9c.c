
/* WARNING: Removing unreachable block (ram,0x00919c98) */

void socket_accept(int *param_1,int *param_2,sockaddr *param_3,socklen_t *param_4,double *param_5)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  double dVar4;
  pollfd local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*param_1 != -1) {
LAB_00919bf4:
    do {
      do {
        iVar2 = accept(*param_1,param_3,param_4);
        *param_2 = iVar2;
        if (iVar2 != -1) {
          iVar2 = 0;
          goto LAB_00919cb0;
        }
        piVar3 = (int *)__errno();
        iVar2 = *piVar3;
      } while (iVar2 == 4);
                    /* try { // try from 00919c2c to 00a19c2f has its CatchHandler @ 00919c64 */
                    /* try { // try from 00919c30 to 00a19c77 has its CatchHandler @ 00919be0 */
      if ((iVar2 != 0x67) && (iVar2 != 0xb)) goto LAB_00919cb0;
      local_70.fd = *param_1;
      local_70.events = 1;
      local_70.revents = 0;
      if (*param_5 == 0.0) goto LAB_00919c9c;
      do {
        dVar4 = (double)timeout_getretry(param_5);
        iVar2 = (int)(dVar4 * 1000.0);
        if (iVar2 < 0) {
          iVar2 = -1;
        }
                    /* catch() { ... } // from try @ 00919c2c with catch @ 00919c64 */
        iVar2 = poll(&local_70,1,iVar2);
        if (iVar2 != -1) {
          if (iVar2 == 0) goto LAB_00919c9c;
          goto LAB_00919bf4;
        }
                    /* try { // try from 00919c78 to 00a19d2f has its CatchHandler @ 00919c78
                       catch() { ... } // from try @ 00919c78 with catch @ 00919c78
                       catch() { ... } // from try @ 00919db0 with catch @ 00919c78 */
        iVar2 = *piVar3;
      } while (iVar2 == 4);
      if (iVar2 != 0) goto LAB_00919cb0;
    } while( true );
  }
  iVar2 = -2;
LAB_00919cb0:
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2);
  }
  return;
LAB_00919c9c:
  iVar2 = -1;
  goto LAB_00919cb0;
}

