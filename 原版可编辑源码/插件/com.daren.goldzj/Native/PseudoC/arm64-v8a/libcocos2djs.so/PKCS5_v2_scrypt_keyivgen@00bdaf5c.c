
int PKCS5_v2_scrypt_keyivgen
              (EVP_CIPHER_CTX *param_1,undefined8 param_2,int param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,int param_7)

{
  int iVar1;
  int iVar2;
  EVP_CIPHER *pEVar3;
  ASN1_VALUE *val;
  int line;
  size_t len;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  size_t local_80 [8];
  
  pEVar3 = EVP_CIPHER_CTX_cipher(param_1);
  if (pEVar3 == (EVP_CIPHER *)0x0) {
    ERR_put_error(6,0xb4,0x83,"crypto/asn1/p5_scrypt.c",0xed);
    val = (ASN1_VALUE *)0x0;
    iVar2 = 0;
    goto LAB_00bdb11c;
  }
  val = (ASN1_VALUE *)ASN1_TYPE_unpack_sequence(&DAT_01c8c7d8,param_4);
  if (val == (ASN1_VALUE *)0x0) {
    ERR_put_error(6,0xb4,0x72,"crypto/asn1/p5_scrypt.c",0xf6);
    iVar2 = 0;
    goto LAB_00bdb11c;
  }
  iVar1 = EVP_CIPHER_CTX_key_length(param_1);
  len = (size_t)iVar1;
  if ((*(long *)(val + 0x20) == 0) ||
     ((iVar2 = ASN1_INTEGER_get_uint64(local_80), iVar2 != 0 && (local_80[0] == len)))) {
    iVar2 = ASN1_INTEGER_get_uint64(&local_98,*(undefined8 *)(val + 8));
    if ((iVar2 == 0) ||
       (((iVar2 = ASN1_INTEGER_get_uint64(&uStack_90,*(undefined8 *)(val + 0x10)), iVar2 == 0 ||
         (iVar2 = ASN1_INTEGER_get_uint64(&local_88,*(undefined8 *)(val + 0x18)), iVar2 == 0)) ||
        (iVar2 = EVP_PBE_scrypt(0,0,0,0,local_98,uStack_90,local_88,0,0,0), iVar2 == 0)))) {
      iVar2 = 0xab;
      line = 0x10d;
      goto LAB_00bdb104;
    }
    iVar2 = EVP_PBE_scrypt(param_2,(long)param_3,*(undefined8 *)(*(int **)val + 2),
                           (long)**(int **)val,local_98,uStack_90,local_88,0,local_80,len);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = EVP_CipherInit_ex(param_1,(EVP_CIPHER *)0x0,(ENGINE *)0x0,(uchar *)local_80,
                                (uchar *)0x0,param_7);
    }
  }
  else {
    iVar2 = 0x7b;
    line = 0x103;
LAB_00bdb104:
    ERR_put_error(6,0xb4,iVar2,"crypto/asn1/p5_scrypt.c",line);
    iVar2 = 0;
  }
  if (iVar1 != 0) {
    OPENSSL_cleanse(local_80,len);
  }
LAB_00bdb11c:
  ASN1_item_free(val,(ASN1_ITEM *)&DAT_01c8c7d8);
  return iVar2;
}

