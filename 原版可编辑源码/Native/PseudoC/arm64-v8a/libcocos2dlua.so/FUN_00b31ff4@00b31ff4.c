
ulong FUN_00b31ff4(undefined8 param_1,uchar *param_2,uchar *param_3,ulong param_4)

{
  int iVar1;
  uchar *buf;
  undefined8 *puVar2;
  DES_key_schedule *pDVar3;
  undefined8 uVar4;
  uchar *puVar5;
  DES_cblock *pauVar6;
  void *ptr;
  size_t siz;
  _union_772 _Var7;
  undefined8 local_78 [3];
  uchar auStack_60 [8];
  uchar auStack_58 [8];
  
  if ((param_4 & 0xc000000000000007) == 0) {
    iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    if (iVar1 == 0) {
      if (0x17 < param_4) {
        if (param_2 == (uchar *)0x0) {
          siz = (size_t)((int)param_4 - 0x10);
          goto LAB_00b3202c;
        }
        puVar2 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
        *puVar2 = 0x521e8792ca2dd4a;
        pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
        _Var7 = pDVar3[3].ks[0];
        if (_Var7 == (_union_772)0x0) {
          pauVar6 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
          iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
          DES_ede3_cbc_encrypt(param_3,auStack_58,8,pDVar3,pDVar3 + 1,pDVar3 + 2,pauVar6,iVar1);
        }
        else {
          uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
          (*(code *)_Var7)(param_3,auStack_58,8,pDVar3,uVar4);
        }
        if (param_2 == param_3) {
          memmove(param_2,param_2 + 8,param_4 - 8);
          param_3 = param_2 + -8;
        }
        siz = param_4 - 0x10;
        FUN_00b316e0(param_1,param_2,param_3 + 8,siz);
        pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
        _Var7 = pDVar3[3].ks[0];
        if (_Var7 == (_union_772)0x0) {
          pauVar6 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
          iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
          DES_ede3_cbc_encrypt
                    (param_3 + (param_4 - 8),auStack_60,8,pDVar3,pDVar3 + 1,pDVar3 + 2,pauVar6,iVar1
                    );
        }
        else {
          uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
          (*(code *)_Var7)(param_3 + (param_4 - 8),auStack_60,8,pDVar3,uVar4);
        }
        BUF_reverse(auStack_58,(uchar *)0x0,8);
        BUF_reverse(param_2,(uchar *)0x0,siz);
        puVar5 = (uchar *)EVP_CIPHER_CTX_iv_noconst(param_1);
        BUF_reverse(puVar5,auStack_60,8);
        FUN_00b316e0(param_1,param_2,param_2,siz);
        pDVar3 = (DES_key_schedule *)EVP_CIPHER_CTX_get_cipher_data(param_1);
        _Var7 = pDVar3[3].ks[0];
        if (_Var7 == (_union_772)0x0) {
          pauVar6 = (DES_cblock *)EVP_CIPHER_CTX_iv_noconst(param_1);
          iVar1 = EVP_CIPHER_CTX_encrypting(param_1);
          DES_ede3_cbc_encrypt(auStack_58,auStack_58,8,pDVar3,pDVar3 + 1,pDVar3 + 2,pauVar6,iVar1);
        }
        else {
          uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
          (*(code *)_Var7)(auStack_58,auStack_58,8,pDVar3,uVar4);
        }
        SHA1(param_2,siz,(uchar *)local_78);
        iVar1 = CRYPTO_memcmp(local_78,auStack_58,8);
        OPENSSL_cleanse(auStack_58,8);
        OPENSSL_cleanse(local_78,0x14);
        OPENSSL_cleanse(auStack_60,8);
        ptr = (void *)EVP_CIPHER_CTX_iv_noconst(param_1);
        OPENSSL_cleanse(ptr,8);
        if (((int)siz != -1) && (iVar1 == 0)) goto LAB_00b3202c;
        OPENSSL_cleanse(param_2,siz);
      }
    }
    else {
      if (param_2 == (uchar *)0x0) {
        siz = (size_t)((int)param_4 + 0x10);
        goto LAB_00b3202c;
      }
      puVar5 = param_2 + 8;
      memmove(puVar5,param_3,param_4);
      SHA1(param_3,param_4,(uchar *)local_78);
      *(undefined8 *)(param_2 + param_4 + 8) = local_78[0];
      OPENSSL_cleanse(local_78,0x14);
      buf = (uchar *)EVP_CIPHER_CTX_iv_noconst(param_1);
      iVar1 = RAND_bytes(buf,8);
      if (0 < iVar1) {
        puVar2 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
        *(undefined8 *)param_2 = *puVar2;
        FUN_00b316e0(param_1,puVar5,puVar5,param_4 + 8);
        siz = param_4 + 0x10;
        BUF_reverse(param_2,(uchar *)0x0,siz);
        puVar2 = (undefined8 *)EVP_CIPHER_CTX_iv_noconst(param_1);
        *puVar2 = 0x521e8792ca2dd4a;
        FUN_00b316e0(param_1,param_2,param_2,siz);
        goto LAB_00b3202c;
      }
    }
  }
  siz = 0xffffffff;
LAB_00b3202c:
  return siz & 0xffffffff;
}

