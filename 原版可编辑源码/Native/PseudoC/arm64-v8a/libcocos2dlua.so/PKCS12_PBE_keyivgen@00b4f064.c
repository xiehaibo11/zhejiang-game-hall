
int PKCS12_PBE_keyivgen(EVP_CIPHER_CTX *ctx,char *pass,int passlen,ASN1_TYPE *param,
                       EVP_CIPHER *cipher,EVP_MD *md_type,int en_de)

{
  int iVar1;
  int iVar2;
  PBEPARAM *a;
  ulong uVar3;
  uchar *puVar4;
  uchar auStack_b0 [16];
  uchar auStack_a0 [64];
  
  if (cipher != (EVP_CIPHER *)0x0) {
    a = (PBEPARAM *)ASN1_TYPE_unpack_sequence(PBEPARAM_it,param);
    if (a == (PBEPARAM *)0x0) {
      ERR_put_error(0x23,0x78,0x65,"crypto/pkcs12/p12_crpt.c",0x2b);
      return 0;
    }
    if (a->iter == (ASN1_INTEGER *)0x0) {
      uVar3 = 1;
    }
    else {
      uVar3 = ASN1_INTEGER_get(a->iter);
    }
    puVar4 = a->salt->data;
    iVar2 = a->salt->length;
    iVar1 = EVP_CIPHER_key_length(cipher);
    iVar1 = PKCS12_key_gen_utf8(pass,passlen,puVar4,iVar2,1,uVar3 & 0xffffffff,iVar1,auStack_a0,
                                md_type);
    if (iVar1 == 0) {
      iVar2 = 0x6b;
      iVar1 = 0x37;
    }
    else {
      iVar1 = EVP_CIPHER_iv_length(cipher);
      iVar2 = PKCS12_key_gen_utf8(pass,passlen,puVar4,iVar2,2,uVar3 & 0xffffffff,iVar1,auStack_b0,
                                  md_type);
      if (iVar2 != 0) {
        PBEPARAM_free(a);
        iVar2 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,auStack_a0,auStack_b0,en_de);
        OPENSSL_cleanse(auStack_a0,0x40);
        OPENSSL_cleanse(auStack_b0,0x10);
        return iVar2;
      }
      iVar2 = 0x6a;
      iVar1 = 0x3d;
    }
    ERR_put_error(0x23,0x78,iVar2,"crypto/pkcs12/p12_crpt.c",iVar1);
    PBEPARAM_free(a);
  }
  return 0;
}

