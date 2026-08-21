
void socket_connect(int *param_1,sockaddr *param_2,socklen_t param_3,double *param_4)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ssize_t sVar5;
  double dVar6;
  uint local_54;
  pollfd local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*param_1 == -1) {
    uVar3 = 0xfffffffe;
  }
  else {
                    /* try { // try from 00919a4c to 00a19a7f has its CatchHandler @ 00919b4c */
    iVar2 = connect(*param_1,param_2,param_3);
    uVar3 = 0;
    if (iVar2 != 0) {
      puVar4 = (uint *)__errno();
      do {
        local_54 = *puVar4;
        if (local_54 != 4) {
          if ((local_54 != 0xb) && (uVar3 = local_54, local_54 != 0x73)) goto LAB_00919a90;
                    /* try { // try from 00919acc to 00a19b67 has its CatchHandler @ 00919848 */
          if (*param_4 == 0.0) {
            uVar3 = 0xffffffff;
            goto LAB_00919a90;
          }
          local_50.fd = *param_1;
          local_50.events = 5;
          local_50.revents = 0;
          goto LAB_00919af0;
        }
                    /* try { // try from 00919a80 to 00a19a93 has its CatchHandler @ 00919b18 */
        iVar2 = connect(*param_1,param_2,param_3);
      } while (iVar2 != 0);
      uVar3 = 0;
    }
  }
  goto LAB_00919a90;
  while (uVar3 = *puVar4, uVar3 == 4) {
LAB_00919af0:
    dVar6 = (double)timeout_getretry(param_4);
    iVar2 = (int)(dVar6 * 1000.0);
    if (iVar2 < 0) {
      iVar2 = -1;
    }
    iVar2 = poll(&local_50,1,iVar2);
                    /* catch() { ... } // from try @ 00919a80 with catch @ 00919b18 */
                    /* catch() { ... } // from try @ 00919a98 with catch @ 00919b1c */
    if (iVar2 != -1) {
      if (iVar2 == 0) {
        uVar3 = 0xffffffff;
        local_54 = 0xffffffff;
        goto LAB_00919a90;
      }
                    /* catch() { ... } // from try @ 00919a4c with catch @ 00919b4c */
      if ((local_50._4_4_ & 0x90000) != 0) {
        local_54 = 0xfffffffe;
        goto LAB_00919b64;
      }
      uVar3 = 0;
      local_54 = 0;
      goto LAB_00919a90;
    }
  }
  local_54 = uVar3;
  if (uVar3 == 0xfffffffe) {
LAB_00919b64:
    sVar5 = recvfrom(*param_1,&local_54,0,0,(sockaddr *)0x0,(socklen_t *)0x0);
    uVar3 = 0;
    if (sVar5 != 0) {
      uVar3 = *puVar4;
    }
  }
LAB_00919a90:
                    /* try { // try from 00919a98 to 00a19acb has its CatchHandler @ 00919b1c */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

