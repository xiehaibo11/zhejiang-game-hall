
int SMIME_text(BIO *in,BIO *out)

{
  int iVar1;
  long lVar2;
  long lVar3;
  char *local_1040;
  undefined8 uStack_1038;
  undefined8 local_1030;
  
  lVar2 = FUN_00bd95e4();
  if (lVar2 == 0) {
    ERR_put_error(0xd,0xd5,0xcf,"crypto/asn1/asn_mime.c",0x214);
  }
  else {
    local_1040 = "content-type";
    uStack_1038 = 0;
    local_1030 = 0;
    iVar1 = OPENSSL_sk_find(lVar2,&local_1040);
    if (((iVar1 < 0) || (lVar3 = OPENSSL_sk_value(lVar2,iVar1), lVar3 == 0)) ||
       (*(char **)(lVar3 + 8) == (char *)0x0)) {
      ERR_put_error(0xd,0xd5,0xce,"crypto/asn1/asn_mime.c",0x219);
    }
    else {
      iVar1 = strcmp(*(char **)(lVar3 + 8),"text/plain");
      if (iVar1 == 0) {
        OPENSSL_sk_pop_free(lVar2,FUN_00bd9d30);
        iVar1 = BIO_read(in,&local_1040,0x1000);
        while (0 < iVar1) {
          BIO_write(out,&local_1040,iVar1);
          iVar1 = BIO_read(in,&local_1040,0x1000);
        }
        return (uint)(iVar1 == 0);
      }
      ERR_put_error(0xd,0xd5,0xcd,"crypto/asn1/asn_mime.c",0x21e);
      ERR_add_error_data(2,"type: ",*(undefined8 *)(lVar3 + 8));
    }
    OPENSSL_sk_pop_free(lVar2,FUN_00bd9d30);
  }
  return 0;
}

