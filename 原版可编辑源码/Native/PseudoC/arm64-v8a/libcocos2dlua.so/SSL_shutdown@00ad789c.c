
int SSL_shutdown(SSL *s)

{
  uchar *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int reason;
  int line;
  SSL *local_48 [2];
  undefined4 local_34;
  _func_3062 *local_30;
  int local_24;
  
  if (s->handshake_func == (_func_3149 *)0x0) {
    iVar2 = 0xe0;
    reason = 0x114;
    line = 0x653;
  }
  else {
    iVar2 = SSL_in_init(s);
    if (iVar2 == 0) {
      if ((((ulong)s->tlsext_hostname & 0x100) == 0) ||
         (lVar4 = ASYNC_get_current_job(), lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00ad7938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar2 = (*s->method->ssl_renegotiate)(s);
        return iVar2;
      }
      local_34 = 2;
      local_30 = s->method->ssl_renegotiate;
      lVar4 = *(long *)(s[6].sid_ctx + 0x1c);
      local_48[0] = s;
      if (lVar4 == 0) {
        lVar4 = ASYNC_WAIT_CTX_new();
        *(long *)(s[6].sid_ctx + 0x1c) = lVar4;
        if (lVar4 == 0) {
          return -1;
        }
      }
      puVar1 = s[6].sid_ctx + 0x14;
      uVar3 = ASYNC_start_job(puVar1,lVar4,&local_24,&LAB_00ad7538,local_48,0x20);
      switch(uVar3) {
      case 0:
        s->rwstate = 1;
        iVar2 = 0x185;
        reason = 0x195;
        line = 0x5d0;
        break;
      case 1:
        s->rwstate = 6;
        return -1;
      case 2:
        s->rwstate = 5;
        return -1;
      case 3:
        puVar1[0] = '\0';
        puVar1[1] = '\0';
        puVar1[2] = '\0';
        puVar1[3] = '\0';
        puVar1[4] = '\0';
        puVar1[5] = '\0';
        puVar1[6] = '\0';
        puVar1[7] = '\0';
        return local_24;
      default:
        s->rwstate = 1;
        iVar2 = 0x185;
        reason = 0x44;
        line = 0x5dd;
      }
    }
    else {
      iVar2 = 0xe0;
      reason = 0x197;
      line = 0x664;
    }
  }
  ERR_put_error(0x14,iVar2,reason,"ssl/ssl_lib.c",line);
  return -1;
}

