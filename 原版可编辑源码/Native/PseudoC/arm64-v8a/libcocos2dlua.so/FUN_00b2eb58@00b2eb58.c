
undefined8 FUN_00b2eb58(EVP_CIPHER_CTX *param_1,uchar *param_2,undefined8 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  AES_KEY *key;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  key = (AES_KEY *)EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 != (uchar *)0x0 || param_3 != (undefined8 *)0x0) {
    if (param_2 != (uchar *)0x0) {
      key[2].rd_key[10] = 0;
      uVar1 = OPENSSL_armcap_P;
      key[2].rd_key[0xb] = 0;
      if ((OPENSSL_armcap_P >> 2 & 1) == 0) {
        iVar2 = EVP_CIPHER_CTX_key_length(param_1);
        iVar2 = iVar2 << 2;
        if ((uVar1 & 1) == 0) {
          if (param_4 == 0) {
            AES_set_decrypt_key(param_2,iVar2,key);
            pcVar5 = AES_decrypt;
          }
          else {
            AES_set_encrypt_key(param_2,iVar2,key);
            pcVar5 = AES_encrypt;
          }
          *(code **)(key[2].rd_key + 6) = pcVar5;
          iVar2 = EVP_CIPHER_CTX_key_length(param_1);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar3 = EVP_CIPHER_CTX_key_length(param_1);
          AES_set_encrypt_key(param_2 + (iVar2 >> 1),iVar3 << 2,(AES_KEY *)(key[1].rd_key + 1));
          pcVar5 = AES_encrypt;
        }
        else {
          if (param_4 == 0) {
            vpaes_set_decrypt_key(param_2,iVar2,key);
            pcVar5 = vpaes_decrypt;
          }
          else {
            vpaes_set_encrypt_key(param_2,iVar2,key);
            pcVar5 = vpaes_encrypt;
          }
          *(code **)(key[2].rd_key + 6) = pcVar5;
          iVar2 = EVP_CIPHER_CTX_key_length(param_1);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 1;
          }
          iVar3 = EVP_CIPHER_CTX_key_length(param_1);
          vpaes_set_encrypt_key(param_2 + (iVar2 >> 1),iVar3 << 2,key[1].rd_key + 1);
          pcVar5 = vpaes_encrypt;
        }
      }
      else {
        iVar2 = EVP_CIPHER_CTX_key_length(param_1);
        if (param_4 == 0) {
          aes_v8_set_decrypt_key(param_2,iVar2 << 2,key);
          pcVar5 = aes_v8_decrypt;
        }
        else {
          aes_v8_set_encrypt_key();
          pcVar5 = aes_v8_encrypt;
        }
        *(code **)(key[2].rd_key + 6) = pcVar5;
        iVar2 = EVP_CIPHER_CTX_key_length(param_1);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 1;
        }
        iVar3 = EVP_CIPHER_CTX_key_length(param_1);
        aes_v8_set_encrypt_key(param_2 + (iVar2 >> 1),iVar3 << 2,key[1].rd_key + 1);
        pcVar5 = aes_v8_encrypt;
      }
      *(code **)(key[2].rd_key + 8) = pcVar5;
      *(AES_KEY **)(key[2].rd_key + 2) = key;
    }
    if (param_3 != (undefined8 *)0x0) {
      *(uint **)(key[2].rd_key + 4) = key[1].rd_key + 1;
      puVar4 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar6 = *param_3;
      puVar4[1] = param_3[1];
      *puVar4 = uVar6;
    }
  }
  return 1;
}

