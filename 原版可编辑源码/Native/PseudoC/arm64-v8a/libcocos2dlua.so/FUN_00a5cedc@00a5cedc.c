
undefined4 FUN_00a5cedc(long *param_1,int param_2)

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
    SSL_shutdown((SSL *)*plVar1);
  }
  if (*plVar1 == 0) {
    uVar8 = 0;
    goto LAB_00a5d0c4;
  }
  iVar4 = FUN_00a2b3d0(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260),0xffffffff,
                       0xffffffff,10000);
  if (0 < iVar4) {
LAB_00a5cf74:
    ERR_clear_error();
    iVar4 = SSL_read((SSL *)*plVar1,acStack_158,0x100);
    iVar4 = SSL_get_error((SSL *)*plVar1,iVar4);
    switch(iVar4) {
    case 0:
    case 6:
      goto switchD_00a5cfac_caseD_0;
    default:
      e = ERR_get_error();
      lVar9 = *param_1;
      ERR_error_string_n(e,acStack_158,0x100);
      puVar5 = (undefined4 *)__errno();
      FUN_00a38a08(lVar9,"OpenSSL SSL read: %s, errno %d",acStack_158,*puVar5);
      goto switchD_00a5cfac_caseD_0;
    case 2:
      goto switchD_00a5cfac_caseD_2;
    case 3:
      FUN_00a38740(lVar7,"SSL_ERROR_WANT_WRITE\n");
      goto switchD_00a5cfac_caseD_0;
    }
  }
LAB_00a5cfd8:
  if (iVar4 == 0) {
    FUN_00a38a08(lVar7,"SSL shutdown timeout");
switchD_00a5cfac_caseD_0:
    uVar8 = 0;
    cVar2 = *(char *)(lVar7 + 0x628);
  }
  else {
    puVar5 = (undefined4 *)__errno();
    FUN_00a38a08(lVar7,"select/poll on SSL socket, errno: %d",*puVar5);
    uVar8 = 0xffffffff;
    cVar2 = *(char *)(lVar7 + 0x628);
  }
  if (cVar2 != '\0') {
    iVar4 = SSL_get_shutdown((SSL *)*plVar1);
    if (iVar4 == 3) {
      pcVar6 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN|SSL_RECEIVED__SHUTDOWN\n";
    }
    else if (iVar4 == 2) {
      pcVar6 = "SSL_get_shutdown() returned SSL_RECEIVED_SHUTDOWN\n";
    }
    else {
      if (iVar4 != 1) goto LAB_00a5d0b8;
      pcVar6 = "SSL_get_shutdown() returned SSL_SENT_SHUTDOWN\n";
    }
    FUN_00a38740(lVar7,pcVar6);
  }
LAB_00a5d0b8:
  SSL_free((SSL *)*plVar1);
  *plVar1 = 0;
LAB_00a5d0c4:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
switchD_00a5cfac_caseD_2:
  FUN_00a38740(lVar7,"SSL_ERROR_WANT_READ\n");
  iVar4 = FUN_00a2b3d0(*(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x260),0xffffffff,
                       0xffffffff,10000);
  if (iVar4 < 1) goto LAB_00a5cfd8;
  goto LAB_00a5cf74;
}

