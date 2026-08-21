
int SSL_peek(SSL *ssl,void *buf,int num)

{
  uchar *puVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  int reason;
  int line;
  SSL *local_50;
  void *pvStack_48;
  int local_40;
  undefined4 uStack_3c;
  _func_3060 *local_38;
  int local_24;
  
  if (ssl->handshake_func == (_func_3149 *)0x0) {
    iVar2 = 0x10e;
    reason = 0x114;
    line = 0x617;
  }
  else {
    if (((byte)ssl->shutdown >> 1 & 1) != 0) {
      return 0;
    }
    if ((((ulong)ssl->tlsext_hostname & 0x100) == 0) ||
       (lVar4 = ASYNC_get_current_job(), lVar4 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00ac80f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar2 = (*ssl->method->ssl_write)(ssl,buf,num);
      return iVar2;
    }
    uStack_3c = 0;
    local_38 = ssl->method->ssl_write;
    lVar4 = *(long *)(ssl[6].sid_ctx + 0x1c);
    local_50 = ssl;
    pvStack_48 = buf;
    local_40 = num;
    if (lVar4 == 0) {
      lVar4 = ASYNC_WAIT_CTX_new();
      *(long *)(ssl[6].sid_ctx + 0x1c) = lVar4;
      if (lVar4 == 0) {
        return -1;
      }
    }
    puVar1 = ssl[6].sid_ctx + 0x14;
                    /* catch() { ... } // from try @ 00ac81a4 with catch @ 00ac8178 */
    uVar3 = ASYNC_start_job(puVar1,lVar4,&local_24,&LAB_00ac8050,&local_50,0x20);
                    /* try { // try from 00ac819c to 00bc81a3 has its CatchHandler @ 00ac81c0 */
                    /* try { // try from 00ac81a4 to 00bc81cf has its CatchHandler @ 00ac8178 */
    switch(uVar3) {
    case 0:
      ssl->rwstate = 1;
      iVar2 = 0x185;
                    /* catch() { ... } // from try @ 00ac819c with catch @ 00ac81c0 */
      reason = 0x195;
      line = 0x5d0;
      break;
    case 1:
      ssl->rwstate = 6;
      return -1;
    case 2:
      ssl->rwstate = 5;
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
      ssl->rwstate = 1;
    }
  }
  ERR_put_error(0x14,iVar2,reason,"ssl/ssl_lib.c",line);
  return -1;
}

