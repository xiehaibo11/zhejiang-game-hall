
void AES_cfb1_encrypt(uchar *in,uchar *out,size_t length,AES_KEY *key,uchar *ivec,int *num,int enc)

{
  CRYPTO_cfb128_1_encrypt();
  return;
}

