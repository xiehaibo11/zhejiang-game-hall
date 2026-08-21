
undefined8 FUN_00bca3d4(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  BF_KEY *pBVar4;
  uchar *ivec;
  uchar *puVar5;
  ulong uVar6;
  uchar *out;
  
  if (param_4 >> 0x3e != 0) {
    uVar1 = param_4 + 0xc000000000000000;
    uVar6 = uVar1 & 0xc000000000000000;
    lVar2 = uVar6 + 0x4000000000000000;
    puVar5 = param_3 + lVar2;
    out = param_2;
    do {
      pBVar4 = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
      ivec = (uchar *)EVP_CIPHER_CTX_iv_noconst(param_1);
      iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
      BF_cbc_encrypt(param_3,out,0x4000000000000000,pBVar4,ivec,iVar3);
      param_4 = param_4 + 0xc000000000000000;
      param_3 = param_3 + 0x4000000000000000;
      out = out + 0x4000000000000000;
    } while (param_4 >> 0x3e != 0);
    param_2 = param_2 + lVar2;
    param_4 = uVar1 - uVar6;
    param_3 = puVar5;
  }
  if (param_4 != 0) {
    pBVar4 = (BF_KEY *)EVP_CIPHER_CTX_get_cipher_data(param_1);
    puVar5 = (uchar *)EVP_CIPHER_CTX_iv_noconst(param_1);
    iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
    BF_cbc_encrypt(param_3,param_2,param_4,pBVar4,puVar5,iVar3);
  }
  return 1;
}

