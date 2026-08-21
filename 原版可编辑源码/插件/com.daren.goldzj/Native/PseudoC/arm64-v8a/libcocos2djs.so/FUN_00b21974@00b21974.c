
undefined8 FUN_00b21974(EVP_CIPHER_CTX *param_1,uchar *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  CAMELLIA_KEY *key;
  EVP_CIPHER *cipher;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  key = (CAMELLIA_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  iVar3 = EVP_CIPHER_CTX_key_length(param_1);
  iVar3 = Camellia_set_key(param_2,iVar3 << 3,key);
  if (iVar3 < 0) {
    ERR_put_error(6,0x9f,0x9d,"crypto/evp/e_camellia.c",0xdd);
    uVar5 = 0;
  }
  else {
    cipher = EVP_CIPHER_CTX_cipher(param_1);
    uVar4 = EVP_CIPHER_flags(cipher);
    uVar1 = (uint)uVar4 & 0xf0007;
    pcVar6 = Camellia_cbc_encrypt;
    pcVar2 = Camellia_encrypt;
    if (uVar1 - 1 < 2 && param_4 == 0) {
      pcVar2 = Camellia_decrypt;
    }
    if (uVar1 != 2) {
      pcVar6 = (code *)0x0;
    }
    uVar5 = 1;
    key[1].u.d = (double)pcVar2;
    *(code **)((long)&key[1].u + 8) = pcVar6;
  }
  return uVar5;
}

