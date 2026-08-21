
int SSL_set_session_ticket_ext(SSL *s,void *ext_data,int ext_len)

{
  int iVar1;
  undefined2 *puVar2;
  
  if (s->version < 0x301) {
                    /* try { // try from 00ace460 to 00bce463 has its CatchHandler @ 00ace4b4 */
    iVar1 = 0;
                    /* try { // try from 00ace464 to 00bce4cb has its CatchHandler @ 00ace264 */
  }
  else {
    CRYPTO_free(*(void **)&s->tlsext_hb_seq);
                    /* try { // try from 00ace42c to 00bce42f has its CatchHandler @ 00ace4b8 */
    s->tlsext_hb_seq = 0;
    s->renegotiate = 0;
    puVar2 = CRYPTO_malloc(ext_len + 0x10,"ssl/ssl_sess.c",0x3b1);
    *(undefined2 **)&s->tlsext_hb_seq = puVar2;
    if (puVar2 == (undefined2 *)0x0) {
      ERR_put_error(0x14,0x126,0x41,"ssl/ssl_sess.c",0x3b3);
      iVar1 = 0;
    }
    else {
      if (ext_data == (void *)0x0) {
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 4) = 0;
      }
      else {
        *puVar2 = (short)ext_len;
        *(undefined2 **)(puVar2 + 4) = puVar2 + 8;
        memcpy(puVar2 + 8,ext_data,(long)ext_len);
      }
      iVar1 = 1;
    }
  }
  return iVar1;
}

