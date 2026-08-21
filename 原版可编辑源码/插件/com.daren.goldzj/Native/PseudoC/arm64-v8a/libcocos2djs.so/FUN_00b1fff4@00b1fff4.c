
/* WARNING: Type propagation algorithm not settling */

ulong FUN_00b1fff4(EVP_CIPHER_CTX *param_1,void *param_2,void *param_3,ulong param_4)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *a;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar4 + 0xf8) == 0) {
    return 0xffffffff;
  }
  if (*(int *)(lVar4 + 0x29c) < 0) {
    if (*(int *)(lVar4 + 0xfc) == 0) {
      return 0xffffffff;
    }
    if (param_3 != (void *)0x0) {
      if (param_2 == (void *)0x0) {
        iVar3 = CRYPTO_gcm128_aad(lVar4 + 0x100,param_3,param_4);
      }
      else {
        iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
        lVar1 = lVar4 + 0x100;
        if (iVar3 == 0) {
          if (*(long *)(lVar4 + 0x2a0) == 0) {
            iVar3 = CRYPTO_gcm128_decrypt(lVar1,param_3,param_2,param_4);
          }
          else {
            iVar3 = CRYPTO_gcm128_decrypt_ctr32(lVar1,param_3,param_2,param_4);
          }
        }
        else if (*(long *)(lVar4 + 0x2a0) == 0) {
          iVar3 = CRYPTO_gcm128_encrypt(lVar1,param_3,param_2,param_4);
        }
        else {
          iVar3 = CRYPTO_gcm128_encrypt_ctr32(lVar1,param_3,param_2,param_4);
        }
      }
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      return param_4 & 0xffffffff;
    }
    iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
    if (iVar3 == 0) {
      if (*(int *)(lVar4 + 0x294) < 0) {
        return 0xffffffff;
      }
      uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      uVar6 = CRYPTO_gcm128_finish(lVar4 + 0x100,uVar5,(long)*(int *)(lVar4 + 0x294));
      if ((int)uVar6 != 0) {
        return 0xffffffff;
      }
    }
    else {
      uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
      CRYPTO_gcm128_tag(lVar4 + 0x100,uVar5,0x10);
      uVar6 = 0;
      *(undefined4 *)(lVar4 + 0x294) = 0x10;
    }
    *(undefined4 *)(lVar4 + 0xfc) = 0;
    return uVar6;
  }
  lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  if (param_2 != param_3) {
    return 0xffffffff;
  }
  uVar6 = param_4 - 0x18;
  if (param_4 < 0x18) {
    return 0xffffffff;
  }
  iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
  iVar3 = 0x13;
  if (iVar2 == 0) {
    iVar3 = 0x18;
  }
  iVar3 = EVP_CIPHER_CTX_ctrl(param_1,iVar3,8,param_3);
  if (0 < iVar3) {
    lVar1 = lVar4 + 0x100;
    uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
    iVar3 = CRYPTO_gcm128_aad(lVar1,uVar5,(long)*(int *)(lVar4 + 0x29c));
    if (iVar3 == 0) {
      param_3 = (void *)((long)param_3 + 8);
      iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
      if (iVar3 == 0) {
        if (*(long *)(lVar4 + 0x2a0) == 0) {
          iVar3 = CRYPTO_gcm128_decrypt(lVar1,param_3,param_3,uVar6);
        }
        else {
          iVar3 = CRYPTO_gcm128_decrypt_ctr32(lVar1,param_3,param_3,uVar6);
        }
        if (iVar3 == 0) {
          uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
          CRYPTO_gcm128_tag(lVar1,uVar5,0x10);
          a = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
          iVar3 = CRYPTO_memcmp(a,(void *)((long)param_3 + uVar6),0x10);
          if (iVar3 == 0) {
            param_4 = uVar6 & 0xffffffff;
            goto LAB_00b200a4;
          }
          OPENSSL_cleanse(param_3,uVar6);
        }
      }
      else {
        if (*(long *)(lVar4 + 0x2a0) == 0) {
          iVar3 = CRYPTO_gcm128_encrypt(lVar1,param_3,param_3,uVar6);
        }
        else {
          iVar3 = CRYPTO_gcm128_encrypt_ctr32(lVar1,param_3,param_3,uVar6);
        }
        if (iVar3 == 0) {
          CRYPTO_gcm128_tag(lVar1,(long)param_3 + uVar6,0x10);
          param_4 = param_4 & 0xffffffff;
          goto LAB_00b200a4;
        }
      }
    }
  }
  param_4 = 0xffffffff;
LAB_00b200a4:
  *(undefined4 *)(lVar4 + 0xfc) = 0;
  *(undefined4 *)(lVar4 + 0x29c) = 0xffffffff;
  return param_4;
}

