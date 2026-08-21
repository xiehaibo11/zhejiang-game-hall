
undefined4
FUN_00b9ddb4(undefined8 *param_1,long *param_2,uchar *param_3,int param_4,long param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  uchar *out;
  undefined4 uVar3;
  int local_8c;
  size_t local_88;
  uchar auStack_80 [64];
  
  uVar1 = EVP_CIPHER_CTX_key_length(*(EVP_CIPHER_CTX **)(param_5 + 0x30));
  local_88 = (size_t)(int)uVar1;
  if (0x40 < uVar1) {
    return 0;
  }
  iVar2 = EVP_PKEY_derive(*(EVP_PKEY_CTX **)(param_5 + 0x28),auStack_80,&local_88);
  if (((iVar2 < 1) ||
      (iVar2 = EVP_CipherInit_ex(*(EVP_CIPHER_CTX **)(param_5 + 0x30),(EVP_CIPHER *)0x0,
                                 (ENGINE *)0x0,auStack_80,(uchar *)0x0,param_6), iVar2 == 0)) ||
     (iVar2 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_5 + 0x30),(uchar *)0x0,&local_8c,param_3,
                               param_4), iVar2 == 0)) {
    out = (uchar *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00b9defc with catch @ 00b9de60
                       catch() { ... } // from try @ 00b9e13c with catch @ 00b9de60 */
    out = CRYPTO_malloc(local_8c,"crypto/cms/cms_kari.c",0xd0);
    if ((out != (uchar *)0x0) &&
       (iVar2 = EVP_CipherUpdate(*(EVP_CIPHER_CTX **)(param_5 + 0x30),out,&local_8c,param_3,param_4)
       , iVar2 != 0)) {
      *param_1 = out;
      *param_2 = (long)local_8c;
      OPENSSL_cleanse(auStack_80,local_88);
                    /* try { // try from 00b9deac to 00c9deb3 has its CatchHandler @ 00b9e1bc */
      uVar3 = 1;
      goto LAB_00b9dedc;
    }
  }
  OPENSSL_cleanse(auStack_80,local_88);
                    /* try { // try from 00b9ded0 to 00c9ded7 has its CatchHandler @ 00b9e1b8 */
  CRYPTO_free(out);
  uVar3 = 0;
LAB_00b9dedc:
  EVP_CIPHER_CTX_reset(*(undefined8 *)(param_5 + 0x30));
  EVP_PKEY_CTX_free(*(EVP_PKEY_CTX **)(param_5 + 0x28));
  *(undefined8 *)(param_5 + 0x28) = 0;
                    /* try { // try from 00b9def4 to 00c9defb has its CatchHandler @ 00b9e1b4 */
                    /* try { // try from 00b9defc to 00c9df3b has its CatchHandler @ 00b9de60 */
  return uVar3;
}

