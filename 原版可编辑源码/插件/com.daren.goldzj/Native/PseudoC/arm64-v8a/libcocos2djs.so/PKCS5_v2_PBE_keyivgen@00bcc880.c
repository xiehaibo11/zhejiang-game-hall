
int PKCS5_v2_PBE_keyivgen
              (EVP_CIPHER_CTX *ctx,char *pass,int passlen,ASN1_TYPE *param,EVP_CIPHER *cipher,
              EVP_MD *md,int en_de)

{
  int iVar1;
  PBE2PARAM *a;
  char *name;
  EVP_CIPHER *cipher_00;
  int line;
  code *local_38;
  
  a = (PBE2PARAM *)ASN1_TYPE_unpack_sequence(PBE2PARAM_it,param,passlen);
  if (a == (PBE2PARAM *)0x0) {
    iVar1 = 0x72;
    line = 0xa2;
LAB_00bcc9d0:
    ERR_put_error(6,0x76,iVar1,"crypto/evp/p5_crpt2.c",line);
  }
  else {
    iVar1 = OBJ_obj2nid(a->keyfunc->algorithm);
    iVar1 = EVP_PBE_find(2,iVar1,(int *)0x0,(int *)0x0,&local_38);
    if (iVar1 == 0) {
      iVar1 = 0x7c;
      line = 0xaa;
      goto LAB_00bcc9d0;
    }
    iVar1 = OBJ_obj2nid(a->encryption->algorithm);
    name = OBJ_nid2sn(iVar1);
    cipher_00 = EVP_get_cipherbyname(name);
    if (cipher_00 == (EVP_CIPHER *)0x0) {
      iVar1 = 0x6b;
      line = 0xb5;
      goto LAB_00bcc9d0;
    }
    iVar1 = EVP_CipherInit_ex(ctx,cipher_00,(ENGINE *)0x0,(uchar *)0x0,(uchar *)0x0,en_de);
    if (iVar1 != 0) {
      iVar1 = EVP_CIPHER_asn1_to_param(ctx,a->encryption->parameter);
      if (-1 < iVar1) {
        iVar1 = (*local_38)(ctx,pass,passlen,a->keyfunc->parameter,0,0,en_de);
        goto LAB_00bcc9d8;
      }
      iVar1 = 0x7a;
      line = 0xbd;
      goto LAB_00bcc9d0;
    }
  }
  iVar1 = 0;
LAB_00bcc9d8:
  PBE2PARAM_free(a);
  return iVar1;
}

