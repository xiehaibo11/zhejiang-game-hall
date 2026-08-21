
int PKCS12_key_gen_asc(char *pass,int passlen,uchar *salt,int saltlen,int id,int iter,int n,
                      uchar *out,EVP_MD *md_type)

{
  int iVar1;
  uchar *puVar2;
  int local_4c;
  uchar *local_48;
  
  if (pass == (char *)0x0) {
    local_48 = (uchar *)0x0;
    local_4c = 0;
  }
  else {
    puVar2 = OPENSSL_asc2uni(pass,passlen,&local_48,&local_4c);
    if (puVar2 == (uchar *)0x0) {
      ERR_put_error(0x23,0x6e,0x41,"crypto/pkcs12/p12_key.c",0x2a);
      return 0;
    }
  }
  iVar1 = PKCS12_key_gen_uni(local_48,local_4c,salt,saltlen,id,iter,n,out,md_type);
  if (iVar1 < 1) {
    return 0;
  }
  CRYPTO_clear_free(local_48,(long)local_4c,"crypto/pkcs12/p12_key.c",0x31);
  return iVar1;
}

