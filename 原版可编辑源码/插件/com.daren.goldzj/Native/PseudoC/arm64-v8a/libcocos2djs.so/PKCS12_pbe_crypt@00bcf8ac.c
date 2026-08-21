
uchar * PKCS12_pbe_crypt(X509_ALGOR *algor,char *pass,int passlen,uchar *in,int inlen,uchar **data,
                        int *datalen,int en_de)

{
  int iVar1;
  int iVar2;
  EVP_CIPHER_CTX *ctx;
  uchar *out;
  int local_54;
  
  ctx = EVP_CIPHER_CTX_new();
  if (ctx == (EVP_CIPHER_CTX *)0x0) {
    iVar1 = 0x41;
    iVar2 = 0x21;
  }
  else {
    iVar1 = EVP_PBE_CipherInit(algor->algorithm,pass,passlen,algor->parameter,ctx,en_de);
    if (iVar1 == 0) {
      iVar1 = 0x73;
      iVar2 = 0x29;
    }
    else {
      iVar1 = EVP_CIPHER_CTX_block_size(ctx);
      out = CRYPTO_malloc(iVar1 + inlen,"crypto/pkcs12/p12_decr.c",0x2d);
      if (out == (uchar *)0x0) {
        ERR_put_error(0x23,0x77,0x41,"crypto/pkcs12/p12_decr.c",0x2f);
        goto LAB_00bcfa40;
      }
      iVar2 = EVP_CipherUpdate(ctx,out,&local_54,in,inlen);
      iVar1 = local_54;
      if (iVar2 == 0) {
        CRYPTO_free(out);
        iVar1 = 6;
        iVar2 = 0x36;
      }
      else {
        iVar2 = EVP_CipherFinal_ex(ctx,out + local_54,&local_54);
        if (iVar2 != 0) {
          if (datalen != (int *)0x0) {
            *datalen = local_54 + iVar1;
          }
          if (data != (uchar **)0x0) {
            *data = out;
          }
          goto LAB_00bcfa40;
        }
        CRYPTO_free(out);
        iVar1 = 0x74;
        iVar2 = 0x3f;
      }
    }
  }
  ERR_put_error(0x23,0x77,iVar1,"crypto/pkcs12/p12_decr.c",iVar2);
  out = (uchar *)0x0;
LAB_00bcfa40:
  EVP_CIPHER_CTX_free(ctx);
  return out;
}

