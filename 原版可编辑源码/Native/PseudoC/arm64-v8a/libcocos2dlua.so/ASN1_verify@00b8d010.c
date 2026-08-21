
int ASN1_verify(undefined1 *i2d,X509_ALGOR *algor1,ASN1_BIT_STRING *signature,char *data,
               EVP_PKEY *pkey)

{
  int iVar1;
  int iVar2;
  EVP_MD_CTX *ctx;
  char *name;
  EVP_MD *type;
  void *d;
  void *local_58;
  
                    /* try { // try from 00b8d020 to 00c8d077 has its CatchHandler @ 00b8d020
                       catch() { ... } // from try @ 00b8d020 with catch @ 00b8d020
                       catch() { ... } // from try @ 00b8d090 with catch @ 00b8d020 */
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx == (EVP_MD_CTX *)0x0) {
    iVar1 = 0x41;
    iVar2 = 0x26;
  }
  else {
    iVar1 = OBJ_obj2nid(algor1->algorithm);
    name = OBJ_nid2sn(iVar1);
    type = EVP_get_digestbyname(name);
    if (type == (EVP_MD *)0x0) {
      iVar1 = 0xa1;
      iVar2 = 0x2c;
    }
    else {
                    /* try { // try from 00b8d078 to 00c8d08f has its CatchHandler @ 00b8d0e0 */
      if ((signature->type == 3) && ((signature->flags & 7) != 0)) {
        iVar1 = 0xdc;
                    /* try { // try from 00b8d090 to 00c8d117 has its CatchHandler @ 00b8d020 */
        iVar2 = 0x31;
      }
      else {
        iVar1 = (*(code *)i2d)(data,0);
        d = CRYPTO_malloc(iVar1,"crypto/asn1/a_verify.c",0x36);
        if (d != (void *)0x0) {
                    /* catch() { ... } // from try @ 00b8d078 with catch @ 00b8d0e0 */
          local_58 = d;
          (*(code *)i2d)(data,&local_58);
          iVar2 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0);
          if (iVar2 == 0) {
                    /* try { // try from 00b8d1c0 to 00c8d25b has its CatchHandler @ 00b8d134 */
            CRYPTO_clear_free(d,iVar1,"crypto/asn1/a_verify.c",0x41);
LAB_00b8d1d4:
            iVar1 = 0x44;
          }
          else {
            iVar2 = EVP_DigestUpdate(ctx,d,(long)iVar1);
            CRYPTO_clear_free(d,iVar1,"crypto/asn1/a_verify.c",0x41);
            if (iVar2 == 0) goto LAB_00b8d1d4;
                    /* try { // try from 00b8d134 to 00c8d1b7 has its CatchHandler @ 00b8d134
                       catch() { ... } // from try @ 00b8d134 with catch @ 00b8d134
                       catch() { ... } // from try @ 00b8d1c0 with catch @ 00b8d134
                       catch() { ... } // from try @ 00b8d270 with catch @ 00b8d134 */
            iVar1 = EVP_VerifyFinal(ctx,signature->data,signature->length,pkey);
            if (0 < iVar1) {
              iVar1 = 1;
              goto LAB_00b8d194;
            }
            iVar1 = 0x4b;
          }
          ERR_put_error(0xd,0x89,6,"crypto/asn1/a_verify.c",iVar1);
          iVar1 = 0;
          goto LAB_00b8d194;
        }
        iVar1 = 0x41;
        iVar2 = 0x38;
      }
    }
  }
  ERR_put_error(0xd,0x89,iVar1,"crypto/asn1/a_verify.c",iVar2);
  iVar1 = -1;
LAB_00b8d194:
  EVP_MD_CTX_free(ctx);
                    /* try { // try from 00b8d1b8 to 00c8d1bf has its CatchHandler @ 00b8d2a4 */
  return iVar1;
}

