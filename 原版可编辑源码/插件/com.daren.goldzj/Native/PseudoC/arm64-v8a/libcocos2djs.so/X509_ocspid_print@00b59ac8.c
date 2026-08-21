
int X509_ocspid_print(BIO *bp,X509 *x)

{
  int iVar1;
  X509_NAME *a;
  uchar *data;
  EVP_MD *pEVar2;
  ASN1_BIT_STRING *x_00;
  void *data_00;
  byte local_54;
  byte local_53;
  byte local_52;
  byte local_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  byte local_49;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  byte local_44;
  byte local_43;
  byte local_42;
  byte local_41;
  uchar *local_38;
  
  iVar1 = BIO_printf(bp,"        Subject OCSP hash: ");
  if (0 < iVar1) {
    a = X509_get_subject_name(x);
    iVar1 = i2d_X509_NAME(a,(uchar **)0x0);
    data = CRYPTO_malloc(iVar1,"crypto/x509/t_x509.c",0xe3);
    local_38 = data;
    if (data == (uchar *)0x0) goto LAB_00b5a058;
    i2d_X509_NAME(a,&local_38);
    pEVar2 = EVP_sha1();
    iVar1 = EVP_Digest(data,(long)iVar1,&local_54,(uint *)0x0,pEVar2,(ENGINE *)0x0);
                    /* catch() { ... } // from try @ 00b59240 with catch @ 00b59bb0 */
                    /* catch() { ... } // from try @ 00b59de8 with catch @ 00b59bec */
                    /* try { // try from 00b59c58 to 00c59c5f has its CatchHandler @ 00b59e60 */
                    /* try { // try from 00b59c60 to 00c59c77 has its CatchHandler @ 00b59e9c */
                    /* try { // try from 00b59c78 to 00c59c87 has its CatchHandler @ 00b59e48 */
                    /* try { // try from 00b59ce0 to 00c59d03 has its CatchHandler @ 00b59e64 */
                    /* try { // try from 00b59d04 to 00c59d23 has its CatchHandler @ 00b59e38 */
                    /* try { // try from 00b59d30 to 00c59de7 has its CatchHandler @ 00b59e64 */
    if ((((iVar1 == 0) || (iVar1 = BIO_printf(bp,"%02X",(ulong)local_54), iVar1 < 1)) ||
        (iVar1 = BIO_printf(bp,"%02X",(ulong)local_53), iVar1 < 1)) ||
       ((((((iVar1 = BIO_printf(bp,"%02X",(ulong)local_52), iVar1 < 1 ||
            (iVar1 = BIO_printf(bp,"%02X",(ulong)local_51), iVar1 < 1)) ||
           ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_50), iVar1 < 1 ||
            ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_4f), iVar1 < 1 ||
             (iVar1 = BIO_printf(bp,"%02X",(ulong)local_4e), iVar1 < 1)))))) ||
          (iVar1 = BIO_printf(bp,"%02X",(ulong)local_4d), iVar1 < 1)) ||
         ((((iVar1 = BIO_printf(bp,"%02X",(ulong)local_4c), iVar1 < 1 ||
            (iVar1 = BIO_printf(bp,"%02X",(ulong)local_4b), iVar1 < 1)) ||
           (iVar1 = BIO_printf(bp,"%02X",(ulong)local_4a), iVar1 < 1)) ||
          ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_49), iVar1 < 1 ||
           (iVar1 = BIO_printf(bp,"%02X",(ulong)local_48), iVar1 < 1)))))) ||
        (((iVar1 = BIO_printf(bp,"%02X",(ulong)local_47), iVar1 < 1 ||
          ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_46), iVar1 < 1 ||
           (iVar1 = BIO_printf(bp,"%02X",(ulong)local_45), iVar1 < 1)))) ||
         ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_44), iVar1 < 1 ||
          (((iVar1 = BIO_printf(bp,"%02X",(ulong)local_43), iVar1 < 1 ||
            (iVar1 = BIO_printf(bp,"%02X",(ulong)local_42), iVar1 < 1)) ||
           (iVar1 = BIO_printf(bp,"%02X",(ulong)local_41), iVar1 < 1)))))))))) goto LAB_00b5a058;
    CRYPTO_free(data);
    iVar1 = BIO_printf(bp,"\n        Public key OCSP hash: ");
    if (0 < iVar1) {
      x_00 = X509_get0_pubkey_bitstr(x);
      data = (uchar *)0x0;
      if (x_00 == (ASN1_BIT_STRING *)0x0) goto LAB_00b5a058;
      data_00 = (void *)ASN1_STRING_get0_data(x_00);
      iVar1 = ASN1_STRING_length(x_00);
                    /* try { // try from 00b59de8 to 00c59ecf has its CatchHandler @ 00b59bec */
      pEVar2 = EVP_sha1();
      iVar1 = EVP_Digest(data_00,(long)iVar1,&local_54,(uint *)0x0,pEVar2,(ENGINE *)0x0);
                    /* catch() { ... } // from try @ 00b59d04 with catch @ 00b59e38 */
                    /* catch() { ... } // from try @ 00b59c78 with catch @ 00b59e48 */
                    /* catch() { ... } // from try @ 00b59c58 with catch @ 00b59e60 */
                    /* catch() { ... } // from try @ 00b59ce0 with catch @ 00b59e64
                       catch() { ... } // from try @ 00b59d30 with catch @ 00b59e64 */
                    /* catch() { ... } // from try @ 00b59c60 with catch @ 00b59e9c */
      if (((((iVar1 != 0) && (iVar1 = BIO_printf(bp,"%02X",(ulong)local_54), 0 < iVar1)) &&
           ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_53), 0 < iVar1 &&
            ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_52), 0 < iVar1 &&
             (iVar1 = BIO_printf(bp,"%02X",(ulong)local_51), 0 < iVar1)))))) &&
          ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_50), 0 < iVar1 &&
           ((((iVar1 = BIO_printf(bp,"%02X",(ulong)local_4f), 0 < iVar1 &&
              (iVar1 = BIO_printf(bp,"%02X",(ulong)local_4e), 0 < iVar1)) &&
             (iVar1 = BIO_printf(bp,"%02X",(ulong)local_4d), 0 < iVar1)) &&
            (((iVar1 = BIO_printf(bp,"%02X",(ulong)local_4c), 0 < iVar1 &&
              (iVar1 = BIO_printf(bp,"%02X",(ulong)local_4b), 0 < iVar1)) &&
             ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_4a), 0 < iVar1 &&
              ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_49), 0 < iVar1 &&
               (iVar1 = BIO_printf(bp,"%02X",(ulong)local_48), 0 < iVar1)))))))))))) &&
         ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_47), 0 < iVar1 &&
          (((((iVar1 = BIO_printf(bp,"%02X",(ulong)local_46), 0 < iVar1 &&
              (iVar1 = BIO_printf(bp,"%02X",(ulong)local_45), 0 < iVar1)) &&
             (iVar1 = BIO_printf(bp,"%02X",(ulong)local_44), 0 < iVar1)) &&
            ((iVar1 = BIO_printf(bp,"%02X",(ulong)local_43), 0 < iVar1 &&
             (iVar1 = BIO_printf(bp,"%02X",(ulong)local_42), 0 < iVar1)))) &&
           (iVar1 = BIO_printf(bp,"%02X",(ulong)local_41), 0 < iVar1)))))) {
        BIO_printf(bp,"\n");
        return 1;
      }
    }
  }
  data = (uchar *)0x0;
LAB_00b5a058:
  CRYPTO_free(data);
  return 0;
}

