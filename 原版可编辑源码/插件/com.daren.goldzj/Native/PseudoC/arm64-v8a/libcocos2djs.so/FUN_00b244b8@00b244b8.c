
undefined8 FUN_00b244b8(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  uchar *iv;
  long lVar4;
  uchar *puVar5;
  ulong uVar6;
  uchar *out;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar6 = uVar1 & 0xc000000000000000;
    lVar4 = uVar6 + 0x4000000000000000;
    puVar5 = param_3 + lVar4;
    out = param_2;
    do {
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      iv = (uchar *)EVP_CIPHER_CTX_iv_noconst(param_1);
      iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      RC2_cbc_encrypt(param_3,out,0x4000000000000000,(RC2_KEY *)(lVar3 + 4),iv,iVar2);
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar4;
    param_4 = uVar1 - uVar6;
    param_3 = puVar5;
  }
  if (param_4 != 0) {
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    puVar5 = (uchar *)EVP_CIPHER_CTX_iv_noconst(param_1);
    iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    RC2_cbc_encrypt(param_3,param_2,param_4,(RC2_KEY *)(lVar4 + 4),puVar5,iVar2);
  }
  return 1;
}

