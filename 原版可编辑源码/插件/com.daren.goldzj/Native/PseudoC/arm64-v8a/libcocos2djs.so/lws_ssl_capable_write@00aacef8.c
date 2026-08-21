
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
    goto LAB_00aad020;
  }
  ret_code = SSL_write(*(SSL **)(param_1 + 0x2b0),param_2,param_3);
  uVar5 = (ulong)ret_code;
  if (0 < (int)ret_code) {
    if (*(ulong *)(lVar1 + 0x28) == local_38) {
      return uVar5;
    }
    goto LAB_00aad020;
  }
  s = (SSL *)0x0;
  if (*(SSL **)(param_1 + 0x2b0) == (SSL *)0x0) {
LAB_00aacf94:
    iVar2 = SSL_want(s);
    if (iVar2 == 3) {
      pcVar4 = "%s: want read\n";
    }
    else {
      iVar2 = SSL_want(*(SSL **)(param_1 + 0x2b0));
      if (iVar2 != 2) goto LAB_00aacff8;
      pcVar4 = "%s: want write\n";
    }
                    /* try { // try from 00aacfcc to 00bacfd3 has its CatchHandler @ 00aad050 */
    _lws_log(4,pcVar4,"lws_ssl_capable_write");
                    /* try { // try from 00aacfd4 to 00bacfdb has its CatchHandler @ 00aad058 */
    uVar5 = 0xfffffffe;
                    /* try { // try from 00aacfdc to 00bacfe3 has its CatchHandler @ 00aad054 */
                    /* try { // try from 00aacfe4 to 00bad01b has its CatchHandler @ 00aad050 */
    if (*(ulong *)(lVar1 + 0x28) != local_38) goto LAB_00aad020;
  }
  else {
    iVar2 = SSL_get_error(*(SSL **)(param_1 + 0x2b0),ret_code);
    if (iVar2 != 5) {
      s = *(SSL **)(param_1 + 0x2b0);
      goto LAB_00aacf94;
    }
LAB_00aacff8:
    while (uVar5 = ERR_get_error(), uVar5 != 0) {
      ERR_error_string_n(uVar5,acStack_138,0x100);
    }
    *(uint *)(param_1 + 0x2f4) = *(uint *)(param_1 + 0x2f4) | 0x40;
    uVar5 = 0xffffffff;
                    /* try { // try from 00aad01c to 00bad023 has its CatchHandler @ 00aad04c */
    if (*(ulong *)(lVar1 + 0x28) != local_38) {
LAB_00aad020:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar5);
    }
  }
  return uVar5;
}

