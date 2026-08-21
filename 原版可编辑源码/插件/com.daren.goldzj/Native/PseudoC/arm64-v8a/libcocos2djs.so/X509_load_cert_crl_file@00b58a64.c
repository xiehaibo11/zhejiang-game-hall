
int X509_load_cert_crl_file(X509_LOOKUP *ctx,char *file,int type)

{
  int iVar1;
  int iVar2;
  BIO *bp;
  stack_st_X509_INFO *psVar3;
  undefined8 *puVar4;
  int iVar5;
  
                    /* try { // try from 00b58a74 to 00c58a7f has its CatchHandler @ 00b58b58 */
  if (type != 1) {
                    /* try { // try from 00b58b30 to 00c58b37 has its CatchHandler @ 00b58b3c */
                    /* try { // try from 00b58b38 to 00c58bbb has its CatchHandler @ 00b587dc */
                    /* catch() { ... } // from try @ 00b58b30 with catch @ 00b58b3c */
                    /* catch() { ... } // from try @ 00b588f0 with catch @ 00b58b40
                       catch() { ... } // from try @ 00b58aa0 with catch @ 00b58b40 */
    iVar1 = X509_load_cert_file(ctx,file,type);
    return iVar1;
  }
  bp = BIO_new_file(file,"r");
  if (bp == (BIO *)0x0) {
                    /* catch() { ... } // from try @ 00b589b0 with catch @ 00b58b44 */
                    /* catch() { ... } // from try @ 00b58a20 with catch @ 00b58b54 */
                    /* catch() { ... } // from try @ 00b58a10 with catch @ 00b58b58
                       catch() { ... } // from try @ 00b58a74 with catch @ 00b58b58 */
    ERR_put_error(0xb,0x84,2,"crypto/x509/by_file.c",199);
    iVar1 = 0;
  }
  else {
                    /* try { // try from 00b58aa0 to 00c58ab3 has its CatchHandler @ 00b58b40 */
    psVar3 = PEM_X509_INFO_read_bio(bp,(stack_st_X509_INFO *)0x0,(undefined1 *)0x0,(void *)0x0);
    BIO_free(bp);
    if (psVar3 == (stack_st_X509_INFO *)0x0) {
      ERR_put_error(0xb,0x84,9,"crypto/x509/by_file.c",0xcd);
      iVar1 = 0;
    }
    else {
      iVar1 = OPENSSL_sk_num(psVar3);
      if (iVar1 < 1) {
        iVar1 = 0;
      }
      else {
        iVar1 = 0;
        iVar5 = 0;
        do {
          puVar4 = (undefined8 *)OPENSSL_sk_value(psVar3,iVar5);
          if ((X509 *)*puVar4 != (X509 *)0x0) {
            X509_STORE_add_cert(ctx->store_ctx,(X509 *)*puVar4);
            iVar1 = iVar1 + 1;
          }
          if ((X509_CRL *)puVar4[1] != (X509_CRL *)0x0) {
            X509_STORE_add_crl(ctx->store_ctx,(X509_CRL *)puVar4[1]);
            iVar1 = iVar1 + 1;
          }
          iVar5 = iVar5 + 1;
          iVar2 = OPENSSL_sk_num(psVar3);
        } while (iVar5 < iVar2);
      }
      OPENSSL_sk_pop_free(psVar3,X509_INFO_free);
    }
  }
  return iVar1;
}

