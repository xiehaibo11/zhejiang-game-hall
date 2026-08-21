
ulong dtls1_read_failed(SSL *param_1,uint param_2)

{
  int iVar1;
  BIO *b;
  ulong uVar2;
  
  uVar2 = (ulong)param_2;
  if ((int)param_2 < 1) {
    iVar1 = dtls1_is_timer_expired(param_1);
    if (iVar1 != 0) {
      iVar1 = SSL_in_init(param_1);
      if (iVar1 != 0) {
        uVar2 = dtls1_handle_timeout(param_1);
        return uVar2;
      }
      b = SSL_get_rbio(param_1);
      BIO_set_flags(b,1);
    }
  }
  else {
    ERR_put_error(0x14,0x153,0x44,"ssl/statem/statem_dtls.c",0x3a0);
    uVar2 = 1;
  }
  return uVar2;
}

