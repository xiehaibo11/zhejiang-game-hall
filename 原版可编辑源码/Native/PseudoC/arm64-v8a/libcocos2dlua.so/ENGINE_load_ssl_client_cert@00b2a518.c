
int ENGINE_load_ssl_client_cert
              (ENGINE *e,SSL *s,stack_st_X509_NAME *ca_dn,X509 **pcert,EVP_PKEY **ppkey,
              stack_st_X509 **pother,UI_METHOD *ui_method,void *callback_data)

{
  int iVar1;
  int line;
  
  if (e == (ENGINE *)0x0) {
    iVar1 = 0x43;
    line = 0x7a;
  }
  else {
    CRYPTO_THREAD_write_lock(global_engine_lock);
    iVar1 = *(int *)(e + 0xa0);
    CRYPTO_THREAD_unlock(global_engine_lock);
    if (iVar1 == 0) {
      iVar1 = 0x75;
      line = 0x81;
    }
    else {
      if (*(code **)(e + 0x88) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b2a5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        iVar1 = (**(code **)(e + 0x88))(e,s,ca_dn,pcert,ppkey,pother,ui_method,callback_data);
        return iVar1;
      }
      iVar1 = 0x7d;
      line = 0x87;
    }
  }
  ERR_put_error(0x26,0xc2,iVar1,"crypto/engine/eng_pkey.c",line);
  return 0;
}

