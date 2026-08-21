
int PKCS12_key_gen_utf8(long param_1,undefined8 param_2,uchar *param_3,int param_4,int param_5,
                       int param_6,int param_7,uchar *param_8,EVP_MD *param_9)

{
  int iVar1;
  long lVar2;
  int local_4c;
  uchar *local_48;
  
  if (param_1 == 0) {
    local_48 = (uchar *)0x0;
    local_4c = 0;
  }
  else {
    lVar2 = OPENSSL_utf82uni(param_1,param_2,&local_48,&local_4c);
    if (lVar2 == 0) {
      ERR_put_error(0x23,0x74,0x41,"crypto/pkcs12/p12_key.c",0x41);
      return 0;
    }
  }
  iVar1 = PKCS12_key_gen_uni(local_48,local_4c,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_9);
  if (iVar1 < 1) {
    return 0;
  }
  CRYPTO_clear_free(local_48,(long)local_4c,"crypto/pkcs12/p12_key.c",0x48);
  return iVar1;
}

