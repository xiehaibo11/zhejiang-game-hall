
int ASN1_digest(undefined1 *i2d,EVP_MD *type,char *data,uchar *md,uint *len)

{
  int iVar1;
  int iVar2;
  void *data_00;
  void *local_48;
  
  iVar1 = (*(code *)i2d)(data,0);
  data_00 = CRYPTO_malloc(iVar1,"crypto/asn1/a_digest.c",0x21);
  if (data_00 == (void *)0x0) {
    ERR_put_error(0xd,0xb8,0x41,"crypto/asn1/a_digest.c",0x22);
    iVar1 = 0;
  }
  else {
    local_48 = data_00;
    (*(code *)i2d)(data,&local_48);
    iVar2 = EVP_Digest(data_00,(long)iVar1,md,len,type,(ENGINE *)0x0);
    iVar1 = 0;
    if (iVar2 != 0) {
      CRYPTO_free(data_00);
      iVar1 = 1;
    }
  }
  return iVar1;
}

