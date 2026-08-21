
undefined4 FUN_00a464f4(long *param_1,int param_2)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  int iVar4;
  ulong e;
  undefined4 *puVar5;
  char *pcVar6;
  long lVar7;
  undefined4 uVar8;
  long lVar9;
  char acStack_158 [256];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar7 = *param_1;
  plVar1 = param_1 + (long)param_2 * 5 + 0x56;
  if (*(int *)(lVar7 + 0x638) == 2) {
                    /* try { // try from 00a46544 to 00b46627 has its CatchHandler @ 00a4637c */
    SSL_shutdown((SSL *)*plVar1);
  }
  if (*plVar1 == 0) {
    uVar8 = 0;
    goto LAB_00a466dc;
  }
  iVar4 = FUN_00a159e8(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260),0xffffffff,
                       0xffffffff,10000);
  if (0 < iVar4) {
LAB_00a4658c:
    ERR_clear_error();
    iVar4 = SSL_read((SSL *)*plVar1,acStack_158,0x100);
    iVar4 = SSL_get_error((SSL *)*plVar1,iVar4);
                    /* catch() { ... } // from try @ 00a463fc with catch @ 00a465b8 */
                    /* catch() { ... } // from try @ 00a463f0 with catch @ 00a465bc */
                    /* catch() { ... } // from try @ 00a463d0 with catch @ 00a465c0 */
    switch(iVar4) {
    case 0:
    case 6:
      goto switchD_00a465c4_caseD_0;
    default:
      e = ERR_get_error();
      lVar9 = *param_1;
      ERR_error_string_n(e,acStack_158,0x100);
      puVar5 = (undefined4 *)__errno();
      FUN_00a23020(lVar9,"OpenSSL SSL read: %s, errno %d",acStack_158,*puVar5);
      goto switchD_00a465c4_caseD_0;
    case 2:
      goto switchD_00a465c4_caseD_2;
    case 3:
      FUN_00a22d58(lVar7,"SSL_ERROR_WANT_WRITE\n");
      goto switchD_00a465c4_caseD_0;
    }
  }
LAB_00a465f0:
  if (iVar4 == 0) {
                    /* try { // try from 00a46628 to 00b4667b has its CatchHandler @ 00a46628
                       catch() { ... } // from try @ 00a46628 with catch @ 00a46628
                       catch() { ... } // from try @ 00a467e0 with catch @ 00a46628 */
    FUN_00a23020(lVar7,"SSL shutdown timeout");
switchD_00a465c4_caseD_0:
                    /* try { // try from 00a4667c to 00b46693 has its CatchHandler @ 00a4685c */
    uVar8 = 0;
    cVar2 = *(char *)(lVar7 + 0x628);
  }
  else {
    puVar5 = (undefined4 *)__errno();
    FUN_00a23020(lVar7,"select/poll on SSL socket, errno: %d",*puVar5);
    uVar8 = 0xffffffff;
    cVar2 = *(char *)(lVar7 + 0x628);
  }
  if (cVar2 != '\0') {
    iVar4 = SSL_get_shutdown((SSL *)*plVar1);
    if (iVar4 == 3) {
                    /* try { // try from 00a466b4 to 00b467df has its CatchHandler @ 00a4686c */
      pcVar6 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN|SSL_RECEIVED__SHUTDOWN\n";
    }
    else {
                    /* try { // try from 00a4669c to 00b466a7 has its CatchHandler @ 00a46858 */
      if (iVar4 == 2) {
        pcVar6 = "SSL_get_shutdown() returned SSL_RECEIVED_SHUTDOWN\n";
      }
      else {
        if (iVar4 != 1) goto LAB_00a466d0;
                    /* try { // try from 00a466a8 to 00b466b3 has its CatchHandler @ 00a46854 */
        pcVar6 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN\n";
      }
    }
    FUN_00a22d58(lVar7,pcVar6);
  }
LAB_00a466d0:
  SSL_free((SSL *)*plVar1);
  *plVar1 = 0;
LAB_00a466dc:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00a465c4_caseD_2:
                    /* catch() { ... } // from try @ 00a46408 with catch @ 00a465d0 */
  FUN_00a22d58(lVar7,"SSL_ERROR_WANT_READ\n");
  iVar4 = FUN_00a159e8(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260),0xffffffff,
                       0xffffffff,10000);
  if (iVar4 < 1) goto LAB_00a465f0;
  goto LAB_00a4658c;
}

