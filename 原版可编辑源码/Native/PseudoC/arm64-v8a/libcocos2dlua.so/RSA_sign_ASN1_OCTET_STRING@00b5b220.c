
int RSA_sign_ASN1_OCTET_STRING(int type,uchar *m,uint m_length,uchar *sigret,uint *siglen,RSA *rsa)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uchar *from;
  uchar *local_60;
  ASN1_OCTET_STRING local_58;
  
  local_58.type = 4;
  local_58.length = m_length;
  local_58.data = m;
  iVar1 = i2d_ASN1_OCTET_STRING(&local_58,(uchar **)0x0);
  iVar2 = RSA_size(rsa);
  if (iVar2 + -0xb < iVar1) {
    iVar1 = 0x70;
    iVar2 = 0x22;
  }
  else {
    from = CRYPTO_malloc(iVar2 + 1,"crypto/rsa/rsa_saos.c",0x25);
    if (from != (uchar *)0x0) {
      local_60 = from;
      i2d_ASN1_OCTET_STRING(&local_58,&local_60);
      uVar3 = RSA_private_encrypt(iVar1,from,sigret,rsa,1);
      if (0 < (int)uVar3) {
        *siglen = uVar3;
      }
      CRYPTO_clear_free(from,iVar2 + 1,"crypto/rsa/rsa_saos.c",0x32);
      return (uint)(0 < (int)uVar3);
    }
    iVar1 = 0x41;
    iVar2 = 0x27;
  }
  ERR_put_error(4,0x76,iVar1,"crypto/rsa/rsa_saos.c",iVar2);
  return 0;
}

