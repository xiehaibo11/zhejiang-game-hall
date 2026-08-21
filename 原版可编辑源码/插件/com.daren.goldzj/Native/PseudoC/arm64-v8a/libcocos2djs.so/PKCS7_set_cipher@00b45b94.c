
int PKCS7_set_cipher(PKCS7 *p7,EVP_CIPHER *cipher)

{
  int iVar1;
  int line;
  pkcs7_st **pppVar2;
  pkcs7_st *ppVar3;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x17) {
    pppVar2 = (pkcs7_st **)&((p7->d).enveloped)->enc_data;
  }
  else {
    if (iVar1 != 0x18) {
      iVar1 = 0x71;
      line = 0x214;
      goto LAB_00b45c24;
    }
    pppVar2 = &((p7->d).sign)->contents;
  }
  ppVar3 = *pppVar2;
  iVar1 = EVP_CIPHER_type(cipher);
  if (iVar1 != 0) {
    ppVar3->type = (ASN1_OBJECT *)cipher;
    return 1;
  }
  iVar1 = 0x90;
  line = 0x21c;
LAB_00b45c24:
  ERR_put_error(0x21,0x6c,iVar1,"crypto/pkcs7/pk7_lib.c",line);
  return 0;
}

