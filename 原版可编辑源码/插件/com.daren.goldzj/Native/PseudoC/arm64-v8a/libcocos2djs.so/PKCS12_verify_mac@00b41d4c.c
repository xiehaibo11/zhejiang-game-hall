
int PKCS12_verify_mac(PKCS12 *p12,char *pass,int passlen)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void *b;
  int line;
  ASN1_STRING *local_68;
  undefined1 auStack_60 [64];
  uint local_14;
  
  if (p12->mac == (PKCS12_MAC_DATA *)0x0) {
    iVar2 = 0x6c;
    line = 0x99;
  }
  else {
    iVar2 = FUN_00b41ae4(p12,pass,passlen,auStack_60,&local_14,PKCS12_key_gen_utf8);
    if (iVar2 != 0) {
      X509_SIG_get0(p12->mac->dinfo,0,&local_68);
      uVar1 = local_14;
      uVar3 = ASN1_STRING_length(local_68);
      if (uVar1 != uVar3) {
        return 0;
      }
      b = (void *)ASN1_STRING_get0_data(local_68);
      iVar2 = CRYPTO_memcmp(auStack_60,b,(ulong)local_14);
      return (uint)(iVar2 == 0);
    }
    iVar2 = 0x6d;
    line = 0x9e;
  }
  ERR_put_error(0x23,0x7e,iVar2,"crypto/pkcs12/p12_mutl.c",line);
  return 0;
}

