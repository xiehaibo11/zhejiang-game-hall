
int SSL_do_handshake(SSL *s)

{
  uchar *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int in_w1;
  int in_w2;
  int reason;
  int in_w3;
  int line;
  long in_x4;
  int *in_x5;
  SSL *local_48 [4];
  int local_24;
  
  if (s->handshake_func == (_func_3149 *)0x0) {
                    /* try { // try from 00ac7d04 to 00bc7e37 has its CatchHandler @ 00ac7d04
                       catch() { ... } // from try @ 00ac7d04 with catch @ 00ac7d04
                       catch() { ... } // from try @ 00ac7e40 with catch @ 00ac7d04 */
    iVar2 = 0xb4;
    reason = 0x90;
    line = 0xbc3;
  }
  else {
    (*s->method->ssl_get_message)(s,in_w1,in_w2,in_w3,in_x4,in_x5);
    iVar2 = SSL_in_init(s);
    if ((iVar2 == 0) && (iVar2 = SSL_in_before(s), iVar2 == 0)) {
      return 1;
    }
    if ((((ulong)s->tlsext_hostname & 0x100) == 0) || (lVar4 = ASYNC_get_current_job(), lVar4 != 0))
    {
                    /* WARNING: Could not recover jumptable at 0x00ac7cf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*s->handshake_func)(s);
      return iVar2;
    }
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
    uVar3 = ASYNC_start_job(puVar1,lVar4,&local_24,&LAB_00ac9a7c,local_48,0x20);
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
      iVar2 = 0x185;
      reason = 0x44;
      line = 0x5dd;
      s->rwstate = 1;
    }
  }
  ERR_put_error(0x14,iVar2,reason,"ssl/ssl_lib.c",line);
  return -1;
}

