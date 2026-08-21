
int PKCS5_v2_PBKDF2_keyivgen
              (EVP_CIPHER_CTX *param_1,char *param_2,int param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  EVP_CIPHER *pEVar3;
  PBKDF2PARAM *a;
  long lVar4;
  char *name;
  EVP_MD *digest;
  int line;
  ASN1_STRING *pAVar5;
  size_t len;
  uchar *salt;
  uchar auStack_a0 [64];
  int local_54;
  
  pEVar3 = EVP_CIPHER_CTX_cipher(param_1);
  if (pEVar3 == (EVP_CIPHER *)0x0) {
    ERR_put_error(6,0xa4,0x83,"crypto/evp/p5_crpt2.c",0xd3);
    len = 0;
    a = (PBKDF2PARAM *)0x0;
  }
  else {
    uVar1 = EVP_CIPHER_CTX_key_length(param_1);
    len = (size_t)uVar1;
    if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: keylen <= sizeof key","crypto/evp/p5_crpt2.c",0xd7);
    }
    a = (PBKDF2PARAM *)ASN1_TYPE_unpack_sequence(PBKDF2PARAM_it,param_4);
    if (a == (PBKDF2PARAM *)0x0) {
      iVar2 = 0x72;
      line = 0xde;
    }
    else {
      uVar1 = EVP_CIPHER_CTX_key_length(param_1);
      len = (size_t)uVar1;
      if ((a->keylength == (ASN1_INTEGER *)0x0) ||
         (lVar4 = ASN1_INTEGER_get(a->keylength), lVar4 == (int)uVar1)) {
        if (a->prf == (X509_ALGOR *)0x0) {
          iVar2 = 0xa3;
        }
        else {
          iVar2 = OBJ_obj2nid(a->prf->algorithm);
        }
        iVar2 = EVP_PBE_find(1,iVar2,(int *)0x0,&local_54,(undefined1 **)0x0);
        if (iVar2 == 0) {
          iVar2 = 0x7d;
          line = 0xf1;
        }
        else {
          name = OBJ_nid2sn(local_54);
          digest = EVP_get_digestbyname(name);
          if (digest == (EVP_MD *)0x0) {
            iVar2 = 0x7d;
            line = 0xf7;
          }
          else {
            if (a->salt->type == 4) {
              pAVar5 = (a->salt->value).asn1_string;
              salt = pAVar5->data;
              iVar2 = pAVar5->length;
              lVar4 = ASN1_INTEGER_get(a->iter);
              iVar2 = PKCS5_PBKDF2_HMAC(param_2,param_3,salt,iVar2,(int)lVar4,digest,uVar1,
                                        auStack_a0);
              if (iVar2 != 0) {
                iVar2 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,auStack_a0,
                                          (uchar *)0x0,param_7);
                goto LAB_00bdbbf4;
              }
              goto LAB_00bdbbf0;
            }
            iVar2 = 0x7e;
            line = 0xfc;
          }
        }
      }
      else {
        iVar2 = 0x7b;
        line = 0xe7;
      }
    }
    ERR_put_error(6,0xa4,iVar2,"crypto/evp/p5_crpt2.c",line);
  }
LAB_00bdbbf0:
  iVar2 = 0;
LAB_00bdbbf4:
  OPENSSL_cleanse(auStack_a0,len);
  PBKDF2PARAM_free(a);
  return iVar2;
}

