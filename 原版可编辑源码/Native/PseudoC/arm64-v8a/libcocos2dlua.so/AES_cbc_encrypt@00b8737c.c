
void AES_cbc_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int enc)

{
  if (enc != 0) {
    CRYPTO_cbc128_encrypt();
    return;
  }
                    /* try { // try from 00b87390 to 00c873ef has its CatchHandler @ 00b875c0 */
  CRYPTO_cbc128_decrypt();
  return;
}

