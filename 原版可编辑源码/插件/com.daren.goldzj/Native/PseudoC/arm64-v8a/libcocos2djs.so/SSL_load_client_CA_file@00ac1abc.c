
stack_st_X509_NAME * SSL_load_client_CA_file(char *file)

{
  int iVar1;
  BIO_METHOD *type;
  BIO *bp;
  long lVar2;
  long lVar3;
  X509 *pXVar4;
  stack_st_X509_NAME *psVar5;
  X509_NAME *pXVar6;
  X509 *local_38;
  
  type = BIO_s_file();
  bp = BIO_new(type);
  local_38 = (X509 *)0x0;
  lVar2 = OPENSSL_LH_new(&LAB_00ac1c54,&LAB_00ac1c58);
  if ((bp == (BIO *)0x0) || (lVar2 == 0)) {
                    /* try { // try from 00ac1bcc to 00bc1bcf has its CatchHandler @ 00ac1c54 */
    ERR_put_error(0x14,0xb9,0x41,"ssl/ssl_cert.c",0x244);
LAB_00ac1bd8:
    psVar5 = (stack_st_X509_NAME *)0x0;
LAB_00ac1bdc:
    pXVar6 = (X509_NAME *)0x0;
LAB_00ac1be0:
    X509_NAME_free(pXVar6);
    OPENSSL_sk_pop_free(psVar5,X509_NAME_free);
  }
  else {
    lVar3 = BIO_ctrl(bp,0x6c,3,file);
    if ((int)lVar3 == 0) goto LAB_00ac1bd8;
    pXVar4 = PEM_read_bio_X509(bp,&local_38,(undefined1 *)0x0,(void *)0x0);
    if (pXVar4 != (X509 *)0x0) {
      pXVar6 = (X509_NAME *)0x0;
      psVar5 = (stack_st_X509_NAME *)0x0;
      do {
        if ((psVar5 == (stack_st_X509_NAME *)0x0) &&
           (psVar5 = (stack_st_X509_NAME *)OPENSSL_sk_new_null(),
           psVar5 == (stack_st_X509_NAME *)0x0)) {
          ERR_put_error(0x14,0xb9,0x41,"ssl/ssl_cert.c",0x251);
          goto LAB_00ac1be0;
        }
        pXVar6 = X509_get_subject_name(local_38);
        if (pXVar6 == (X509_NAME *)0x0) goto LAB_00ac1bdc;
        pXVar6 = X509_NAME_dup(pXVar6);
        if (pXVar6 == (X509_NAME *)0x0) goto LAB_00ac1be0;
        lVar3 = OPENSSL_LH_retrieve(lVar2,pXVar6);
                    /* try { // try from 00ac1b70 to 00bc1b73 has its CatchHandler @ 00ac1c58 */
        if (lVar3 == 0) {
          OPENSSL_LH_insert(lVar2,pXVar6);
          iVar1 = OPENSSL_sk_push(psVar5,pXVar6);
          if (iVar1 == 0) goto LAB_00ac1be0;
        }
        else {
          X509_NAME_free(pXVar6);
          pXVar6 = (X509_NAME *)0x0;
        }
        pXVar4 = PEM_read_bio_X509(bp,&local_38,(undefined1 *)0x0,(void *)0x0);
      } while (pXVar4 != (X509 *)0x0);
      goto LAB_00ac1bfc;
    }
  }
  psVar5 = (stack_st_X509_NAME *)0x0;
LAB_00ac1bfc:
  BIO_free(bp);
  X509_free(local_38);
  OPENSSL_LH_free(lVar2);
  if (psVar5 != (stack_st_X509_NAME *)0x0) {
    ERR_clear_error();
  }
  return psVar5;
}

