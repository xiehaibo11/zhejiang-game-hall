
int PKCS12_set_mac(PKCS12 *p12,char *pass,int passlen,uchar *salt,int saltlen,int iter,
                  EVP_MD *md_type)

{
  int iVar1;
  int line;
  ASN1_STRING *local_90;
  int local_84;
  undefined1 auStack_80 [64];
  
  if (md_type == (EVP_MD *)0x0) {
    md_type = EVP_sha1();
  }
  iVar1 = PKCS12_setup_mac(p12,iter,salt,saltlen,md_type);
  if (iVar1 == 0) {
    iVar1 = 0x6e;
    line = 0xb6;
  }
  else {
    iVar1 = FUN_00b41ae4(p12,pass,passlen,auStack_80,&local_84,PKCS12_key_gen_utf8);
    if (iVar1 == 0) {
      iVar1 = 0x6d;
      line = 0xbe;
    }
    else {
      X509_SIG_getm(p12->mac->dinfo,0,&local_90);
      iVar1 = ASN1_OCTET_STRING_set(local_90,auStack_80,local_84);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = 0x6f;
      line = 0xc3;
    }
  }
  ERR_put_error(0x23,0x7b,iVar1,"crypto/pkcs12/p12_mutl.c",line);
  return 0;
}

