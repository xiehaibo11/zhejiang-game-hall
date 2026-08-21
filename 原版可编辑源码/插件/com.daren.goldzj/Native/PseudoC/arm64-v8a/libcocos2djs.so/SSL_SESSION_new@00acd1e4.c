
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

SSL_SESSION * SSL_SESSION_new(void)

{
  int iVar1;
  SSL_SESSION *obj;
  time_t tVar2;
  long lVar3;
  
  obj = (SSL_SESSION *)CRYPTO_zalloc(0x160,"ssl/ssl_sess.c",0x54);
  if (obj == (SSL_SESSION *)0x0) {
                    /* try { // try from 00acd280 to 00bcd287 has its CatchHandler @ 00acd344 */
    ERR_put_error(0x14,0xbd,0x41,"ssl/ssl_sess.c",0x56);
  }
  else {
    obj->krb5_client_princ[0x20] = '\x01';
    obj->krb5_client_princ[0x21] = '\0';
    obj->krb5_client_princ[0x22] = '\0';
    obj->krb5_client_princ[0x23] = '\0';
    obj->krb5_client_princ[0x24] = '\0';
    obj->krb5_client_princ[0x25] = '\0';
    obj->krb5_client_princ[0x26] = '\0';
    obj->krb5_client_princ[0x27] = '\0';
    obj->krb5_client_princ[0x28] = '\x01';
    obj->krb5_client_princ[0x29] = '\0';
    obj->krb5_client_princ[0x2a] = '\0';
    obj->krb5_client_princ[0x2b] = '\0';
    obj->krb5_client_princ[0x30] = '0';
    obj->krb5_client_princ[0x31] = '\x01';
    obj->krb5_client_princ[0x32] = '\0';
    obj->krb5_client_princ[0x33] = '\0';
    obj->krb5_client_princ[0x34] = '\0';
    obj->krb5_client_princ[0x35] = '\0';
    obj->krb5_client_princ[0x36] = '\0';
    obj->krb5_client_princ[0x37] = '\0';
    tVar2 = time((time_t *)0x0);
    *(time_t *)(obj->krb5_client_princ + 0x38) = tVar2;
    lVar3 = CRYPTO_THREAD_lock_new();
    *(long *)(obj->krb5_client_princ + 200) = lVar3;
    if (lVar3 == 0) {
                    /* try { // try from 00acd288 to 00bcd363 has its CatchHandler @ 00acd150 */
      ERR_put_error(0x14,0xbd,0x41,"ssl/ssl_sess.c",0x60);
    }
    else {
      iVar1 = CRYPTO_new_ex_data(2,obj,(CRYPTO_EX_DATA *)(obj->krb5_client_princ + 0x60));
      if (iVar1 != 0) {
        return obj;
      }
      CRYPTO_THREAD_lock_free(*(undefined8 *)(obj->krb5_client_princ + 200));
    }
    CRYPTO_free(obj);
  }
  return (SSL_SESSION *)0x0;
}

