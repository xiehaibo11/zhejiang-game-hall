
int PKCS5_PBE_keyivgen(EVP_CIPHER_CTX *ctx,char *pass,int passlen,ASN1_TYPE *param,
                      EVP_CIPHER *cipher,EVP_MD *md,int en_de)

{
  int iVar1;
  int iVar2;
  int iVar3;
  PBEPARAM *a;
  long lVar4;
  size_t sVar5;
  EVP_MD_CTX *ctx_00;
  uchar *d;
  int local_f8;
  uchar auStack_f0 [16];
  uchar auStack_e0 [64];
  uchar auStack_a0 [16];
  undefined1 auStack_90 [48];
  
  if (((param == (ASN1_TYPE *)0x0) || (param->type != 0x10)) || ((param->value).ptr == (char *)0x0))
  {
    iVar2 = 0x29;
LAB_00bcc25c:
    ERR_put_error(6,0x75,0x72,"crypto/evp/p5_crpt.c",iVar2);
    return 0;
  }
  a = (PBEPARAM *)ASN1_TYPE_unpack_sequence(PBEPARAM_it,param);
  if (a == (PBEPARAM *)0x0) {
    iVar2 = 0x2f;
    goto LAB_00bcc25c;
  }
  if (a->iter == (ASN1_INTEGER *)0x0) {
    local_f8 = 1;
  }
  else {
    lVar4 = ASN1_INTEGER_get(a->iter);
    local_f8 = (int)lVar4;
  }
  d = a->salt->data;
  iVar2 = a->salt->length;
  if (pass == (char *)0x0) {
    passlen = 0;
  }
  else if (passlen == -1) {
    sVar5 = strlen(pass);
    passlen = (int)sVar5;
  }
  ctx_00 = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (ctx_00 == (EVP_MD_CTX *)0x0) {
    ERR_put_error(6,0x75,0x41,"crypto/evp/p5_crpt.c",0x41);
  }
  else {
    iVar1 = EVP_DigestInit_ex(ctx_00,md,(ENGINE *)0x0);
    if (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(ctx_00,pass,(long)passlen), iVar1 != 0)) &&
       (iVar2 = EVP_DigestUpdate(ctx_00,d,(long)iVar2), iVar2 != 0)) {
      PBEPARAM_free(a);
      iVar2 = EVP_DigestFinal_ex(ctx_00,auStack_a0,(uint *)0x0);
      if (iVar2 != 0) {
        iVar2 = EVP_MD_size(md);
        if (iVar2 < 0) {
          return 0;
        }
        if (1 < local_f8) {
          iVar1 = 1;
          do {
            iVar3 = EVP_DigestInit_ex(ctx_00,md,(ENGINE *)0x0);
            if (((iVar3 == 0) ||
                (iVar3 = EVP_DigestUpdate(ctx_00,auStack_a0,(long)iVar2), iVar3 == 0)) ||
               (iVar3 = EVP_DigestFinal_ex(ctx_00,auStack_a0,(uint *)0x0), iVar3 == 0))
            goto LAB_00bcc474;
            iVar1 = iVar1 + 1;
          } while (iVar1 < local_f8);
        }
        iVar2 = EVP_CIPHER_key_length(cipher);
        if (0x40 < iVar2) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: EVP_CIPHER_key_length(cipher) <= (int)sizeof(md_tmp)",
                      "crypto/evp/p5_crpt.c",0x59);
        }
        iVar2 = EVP_CIPHER_key_length(cipher);
        memcpy(auStack_e0,auStack_a0,(long)iVar2);
        iVar2 = EVP_CIPHER_iv_length(cipher);
        if (0x10 < iVar2) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: EVP_CIPHER_iv_length(cipher) <= 16","crypto/evp/p5_crpt.c",
                      0x5b);
        }
        iVar2 = EVP_CIPHER_iv_length(cipher);
        iVar1 = EVP_CIPHER_iv_length(cipher);
        memcpy(auStack_f0,auStack_90 + -(long)iVar2,(long)iVar1);
        iVar2 = EVP_CipherInit_ex(ctx,cipher,(ENGINE *)0x0,auStack_e0,auStack_f0,en_de);
        if (iVar2 != 0) {
          OPENSSL_cleanse(auStack_a0,0x40);
          OPENSSL_cleanse(auStack_e0,0x40);
          OPENSSL_cleanse(auStack_f0,0x10);
          iVar2 = 1;
          goto LAB_00bcc478;
        }
      }
    }
  }
LAB_00bcc474:
  iVar2 = 0;
LAB_00bcc478:
  EVP_MD_CTX_free(ctx_00);
  return iVar2;
}

