
ulong lws_ssl_capable_write(long param_1,void *param_2,int param_3)

{
  long lVar1;
  uint ret_code;
  int iVar2;
  ulong uVar3;
  SSL *s;
  char *pcVar4;
  ulong uVar5;
  char acStack_138 [256];
  ulong local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(ulong *)(lVar1 + 0x28);
  if (*(SSL **)(param_1 + 0x2b0) == (SSL *)0x0) {
    uVar3 = lws_ssl_capable_write_no_ssl(param_1);
    uVar5 = *(ulong *)(lVar1 + 0x28);
    if (uVar5 == local_38) {
      return uVar3;
    }
    goto LAB_0104f7a4;
  }
  ret_code = SSL_write(*(SSL **)(param_1 + 0x2b0),param_2,param_3);
  uVar5 = (ulong)ret_code;
  if (0 < (int)ret_code) {
    if (*(ulong *)(lVar1 + 0x28) == local_38) {
      return uVar5;
    }
    goto LAB_0104f7a4;
  }
  s = (SSL *)0x0;
  if (*(SSL **)(param_1 + 0x2b0) == (SSL *)0x0) {
LAB_0104f718:
    iVar2 = SSL_want(s);
    if (iVar2 == 3) {
      pcVar4 = "%s: want read\n";
    }
    else {
      iVar2 = SSL_want(*(SSL **)(param_1 + 0x2b0));
      if (iVar2 != 2) goto LAB_0104f77c;
      pcVar4 = "%s: want write\n";
    }
    _lws_log(4,pcVar4,"lws_ssl_capable_write");
    uVar5 = 0xfffffffe;
    if (*(ulong *)(lVar1 + 0x28) != local_38) goto LAB_0104f7a4;
  }
  else {
    iVar2 = SSL_get_error(*(SSL **)(param_1 + 0x2b0),ret_code);
    if (iVar2 != 5) {
      s = *(SSL **)(param_1 + 0x2b0);
      goto LAB_0104f718;
    }
LAB_0104f77c:
    while (uVar5 = ERR_get_error(), uVar5 != 0) {
      ERR_error_string_n(uVar5,acStack_138,0x100);
    }
                    /* catch() { ... } // from try @ 0104f80c with catch @ 0104f784
                       catch() { ... } // from try @ 0104f88c with catch @ 0104f784 */
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
    uVar5 = 0xffffffff;
    if (*(ulong *)(lVar1 + 0x28) != local_38) {
LAB_0104f7a4:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
  }
  return uVar5;
}

