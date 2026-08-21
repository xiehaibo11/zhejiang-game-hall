
ulong FUN_00b2efbc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  void *b;
  undefined1 auStack_50 [16];
  
  lVar2 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(int *)(lVar2 + 0xf8) != 0) {
    if (*(int *)(lVar2 + 0x110) < 0) {
      if ((*(int *)(lVar2 + 0xfc) != 0) &&
         ((iVar1 = EVP_CIPHER_CTX_encrypting(param_1), iVar1 != 0 || (*(int *)(lVar2 + 0x100) != 0))
         )) {
        lVar6 = lVar2 + 0x118;
        if (param_2 == (undefined8 *)0x0) {
          if (param_3 == (undefined8 *)0x0) {
            uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
            iVar1 = CRYPTO_ccm128_setiv(lVar6,uVar5,0xf - (long)*(int *)(lVar2 + 0x108),param_4);
            if (iVar1 == 0) {
              *(undefined4 *)(lVar2 + 0x104) = 1;
              goto LAB_00b2f320;
            }
          }
          else if ((param_4 == 0) || (*(int *)(lVar2 + 0x104) != 0)) {
            CRYPTO_ccm128_aad(lVar6,param_3,param_4);
            goto LAB_00b2f320;
          }
        }
        else {
          if (param_3 == (undefined8 *)0x0) {
            param_4 = 0;
            goto LAB_00b2f320;
          }
          if (*(int *)(lVar2 + 0x104) == 0) {
            uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
            iVar1 = CRYPTO_ccm128_setiv(lVar6,uVar5,0xf - (long)*(int *)(lVar2 + 0x108),param_4);
            if (iVar1 != 0) goto LAB_00b2f31c;
            *(undefined4 *)(lVar2 + 0x104) = 1;
          }
          iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
          if (iVar1 == 0) {
            if (*(long *)(lVar2 + 0x150) == 0) {
              iVar1 = CRYPTO_ccm128_decrypt(lVar6,param_3,param_2,param_4);
              if (iVar1 == 0) goto LAB_00b2f27c;
LAB_00b2f2b4:
              OPENSSL_cleanse(param_2,param_4);
              param_4 = 0xffffffff;
            }
            else {
              iVar1 = CRYPTO_ccm128_decrypt_ccm64(lVar6,param_3,param_2,param_4);
              if (iVar1 != 0) goto LAB_00b2f2b4;
LAB_00b2f27c:
              lVar6 = CRYPTO_ccm128_tag(lVar6,auStack_50,(long)*(int *)(lVar2 + 0x10c));
              if (lVar6 == 0) goto LAB_00b2f2b4;
              b = (void *)EVP_CIPHER_CTX_buf_noconst(param_1);
              iVar1 = CRYPTO_memcmp(auStack_50,b,(long)*(int *)(lVar2 + 0x10c));
              if ((iVar1 != 0) || ((int)param_4 == -1)) goto LAB_00b2f2b4;
            }
            *(undefined8 *)(lVar2 + 0xfc) = 0;
            *(undefined4 *)(lVar2 + 0x104) = 0;
            goto LAB_00b2f320;
          }
          if (*(long *)(lVar2 + 0x150) == 0) {
            iVar1 = CRYPTO_ccm128_encrypt(lVar6,param_3,param_2,param_4);
          }
          else {
            iVar1 = CRYPTO_ccm128_encrypt_ccm64(lVar6,param_3,param_2,param_4);
          }
          if (iVar1 == 0) {
            *(undefined4 *)(lVar2 + 0x100) = 1;
            goto LAB_00b2f320;
          }
        }
      }
    }
    else {
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      if ((param_2 == param_3) && ((long)*(int *)(lVar2 + 0x10c) + 8U <= param_4)) {
        lVar6 = lVar2 + 0x118;
        iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
        if (iVar1 != 0) {
          puVar3 = (undefined8 *)EVP_CIPHER_CTX_buf_noconst(param_1);
          *param_2 = *puVar3;
        }
        lVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
        *(undefined8 *)(lVar4 + 4) = *param_2;
        param_4 = param_4 - ((long)*(int *)(lVar2 + 0x10c) + 8);
        uVar5 = EVP_CIPHER_CTX_iv_noconst(param_1);
        iVar1 = CRYPTO_ccm128_setiv(lVar6,uVar5,0xf - (long)*(int *)(lVar2 + 0x108),param_4);
        if (iVar1 == 0) {
          uVar5 = EVP_CIPHER_CTX_buf_noconst(param_1);
          CRYPTO_ccm128_aad(lVar6,uVar5,(long)*(int *)(lVar2 + 0x110));
          param_2 = param_2 + 1;
          iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
          if (iVar1 == 0) {
            if (*(long *)(lVar2 + 0x150) == 0) {
              iVar1 = CRYPTO_ccm128_decrypt(lVar6,param_2,param_2,param_4);
            }
            else {
              iVar1 = CRYPTO_ccm128_decrypt_ccm64(lVar6,param_2,param_2,param_4);
            }
            if (((iVar1 == 0) &&
                (lVar6 = CRYPTO_ccm128_tag(lVar6,auStack_50,(long)*(int *)(lVar2 + 0x10c)),
                lVar6 != 0)) &&
               (iVar1 = CRYPTO_memcmp(auStack_50,(void *)((long)param_2 + param_4),
                                      (long)*(int *)(lVar2 + 0x10c)), iVar1 == 0))
            goto LAB_00b2f320;
            OPENSSL_cleanse(param_2,param_4);
          }
          else {
            if (*(long *)(lVar2 + 0x150) == 0) {
              iVar1 = CRYPTO_ccm128_encrypt(lVar6,param_2,param_2,param_4);
            }
            else {
              iVar1 = CRYPTO_ccm128_encrypt_ccm64(lVar6,param_2,param_2,param_4);
            }
            if ((iVar1 == 0) &&
               (lVar6 = CRYPTO_ccm128_tag(lVar6,(long)param_2 + param_4,
                                          (long)*(int *)(lVar2 + 0x10c)), lVar6 != 0)) {
              param_4 = (ulong)((int)param_4 + *(int *)(lVar2 + 0x10c) + 8);
              goto LAB_00b2f320;
            }
          }
        }
      }
    }
  }
LAB_00b2f31c:
  param_4 = 0xffffffff;
LAB_00b2f320:
  return param_4 & 0xffffffff;
}

