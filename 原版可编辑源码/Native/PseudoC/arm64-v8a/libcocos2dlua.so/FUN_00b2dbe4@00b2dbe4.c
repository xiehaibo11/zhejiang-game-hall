
/* WARNING: Type propagation algorithm not settling */

undefined1 FUN_00b2dbe4(EVP_CIPHER_CTX *param_1,uchar *param_2,undefined8 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  AES_KEY *key;
  EVP_CIPHER *cipher;
  ulong uVar4;
  code *pcVar5;
  code *pcVar6;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  cipher = EVP_CIPHER_CTX_cipher(param_1);
  uVar4 = EVP_CIPHER_flags(cipher);
  uVar2 = OPENSSL_armcap_P;
  uVar1 = (uint)uVar4 & 0xf0007;
  if ((param_4 == 0) && (uVar1 - 1 < 2)) {
    if ((OPENSSL_armcap_P >> 2 & 1) == 0) {
      iVar3 = EVP_CIPHER_CTX_key_length(param_1);
      if ((uVar2 & 1) == 0) {
        iVar3 = AES_set_decrypt_key(param_2,iVar3 << 3,key);
        pcVar5 = AES_cbc_encrypt;
        pcVar6 = AES_decrypt;
      }
      else {
        iVar3 = vpaes_set_decrypt_key();
        pcVar5 = vpaes_cbc_encrypt;
        pcVar6 = vpaes_decrypt;
      }
      *(code **)(key[1].rd_key + 1) = pcVar6;
      if (uVar1 != 2) {
        pcVar5 = (code *)0x0;
      }
      *(code **)(key[1].rd_key + 3) = pcVar5;
    }
    else {
      iVar3 = EVP_CIPHER_CTX_key_length(param_1);
      iVar3 = aes_v8_set_decrypt_key(param_2,iVar3 << 3,key);
      *(code **)(key[1].rd_key + 1) = aes_v8_decrypt;
      key[1].rd_key[3] = 0;
      key[1].rd_key[4] = 0;
      if (uVar1 == 2) {
        *(code **)(key[1].rd_key + 3) = aes_v8_cbc_encrypt;
      }
    }
  }
  else if ((OPENSSL_armcap_P >> 2 & 1) == 0) {
    iVar3 = EVP_CIPHER_CTX_key_length(param_1);
    if ((uVar2 & 1) == 0) {
      iVar3 = AES_set_encrypt_key(param_2,iVar3 << 3,key);
      pcVar5 = AES_cbc_encrypt;
      pcVar6 = AES_encrypt;
    }
    else {
      iVar3 = vpaes_set_encrypt_key();
      pcVar5 = vpaes_cbc_encrypt;
      pcVar6 = vpaes_encrypt;
    }
    if (uVar1 != 2) {
      pcVar5 = (code *)0x0;
    }
    *(code **)(key[1].rd_key + 1) = pcVar6;
    *(code **)(key[1].rd_key + 3) = pcVar5;
  }
  else {
    iVar3 = EVP_CIPHER_CTX_key_length(param_1);
    iVar3 = aes_v8_set_encrypt_key(param_2,iVar3 << 3,key);
    *(code **)(key[1].rd_key + 1) = aes_v8_encrypt;
    key[1].rd_key[3] = 0;
    key[1].rd_key[4] = 0;
    if (uVar1 == 2) {
      *(code **)(key[1].rd_key + 3) = aes_v8_cbc_encrypt;
    }
    else if (uVar1 == 5) {
      *(code **)(key[1].rd_key + 3) = aes_v8_ctr32_encrypt_blocks;
    }
  }
  if (iVar3 < 0) {
    ERR_put_error(6,0x85,0x8f,"crypto/evp/e_aes.c",0x46a);
  }
  return iVar3 >= 0;
}

