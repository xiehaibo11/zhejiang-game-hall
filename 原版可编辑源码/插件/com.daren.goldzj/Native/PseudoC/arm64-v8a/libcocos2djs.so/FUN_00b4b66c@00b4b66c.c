
uint FUN_00b4b66c(long param_1,uchar *param_2,long *param_3,uchar *param_4,size_t param_5)

{
  int iVar1;
  uint m_length;
  int iVar2;
  void *__dest;
  uchar *EM;
  RSA *rsa;
  long lVar3;
  uint local_58;
  uint local_54;
  
  lVar3 = *(long *)(param_1 + 0x28);
  rsa = *(RSA **)(*(long *)(param_1 + 0x10) + 0x20);
  m_length = (uint)param_5;
  if (*(EVP_MD **)(lVar3 + 0x20) == (EVP_MD *)0x0) {
    iVar1 = *(int *)(lVar3 + 0x18);
LAB_00b4b718:
    local_54 = RSA_private_encrypt(m_length,param_4,param_2,rsa,iVar1);
  }
  else {
    iVar1 = EVP_MD_size(*(EVP_MD **)(lVar3 + 0x20));
    if ((long)iVar1 != param_5) {
      iVar1 = 0x8f;
      iVar2 = 0x76;
      goto LAB_00b4b750;
    }
    iVar1 = EVP_MD_type(*(EVP_MD **)(lVar3 + 0x20));
    if (iVar1 == 0x5f) {
      if (*(int *)(lVar3 + 0x18) != 1) {
        return -1;
      }
      iVar1 = RSA_sign_ASN1_OCTET_STRING(0,param_4,m_length,param_2,&local_54,rsa);
    }
    else {
      iVar1 = *(int *)(lVar3 + 0x18);
      if (iVar1 != 1) {
        if (iVar1 == 6) {
          EM = *(uchar **)(lVar3 + 0x38);
          if (EM == (uchar *)0x0) {
            iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
            EM = CRYPTO_malloc(iVar1,"crypto/rsa/rsa_pmeth.c",0x5b);
            *(uchar **)(lVar3 + 0x38) = EM;
            if (EM == (uchar *)0x0) {
              return -1;
            }
          }
          iVar1 = RSA_padding_add_PKCS1_PSS_mgf1
                            (rsa,EM,param_4,*(EVP_MD **)(lVar3 + 0x20),*(EVP_MD **)(lVar3 + 0x28),
                             *(int *)(lVar3 + 0x30));
          if (iVar1 == 0) {
            return -1;
          }
          m_length = RSA_size(rsa);
          param_4 = *(uchar **)(lVar3 + 0x38);
          iVar1 = 3;
        }
        else {
          if (iVar1 != 5) {
            return -1;
          }
          iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
          if ((ulong)(long)iVar1 < param_5 + 1) {
            iVar1 = 0x78;
            iVar2 = 0x86;
LAB_00b4b750:
            ERR_put_error(4,0x8e,iVar1,"crypto/rsa/rsa_pmeth.c",iVar2);
            return -1;
          }
          __dest = *(void **)(lVar3 + 0x38);
          if (__dest == (void *)0x0) {
            iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
            __dest = CRYPTO_malloc(iVar1,"crypto/rsa/rsa_pmeth.c",0x5b);
            *(void **)(lVar3 + 0x38) = __dest;
            if (__dest == (void *)0x0) {
              iVar1 = 0x41;
              iVar2 = 0x8a;
              goto LAB_00b4b750;
            }
          }
          memcpy(__dest,param_4,param_5);
          iVar1 = EVP_MD_type(*(EVP_MD **)(lVar3 + 0x20));
          iVar2 = RSA_X931_hash_id(iVar1);
          iVar1 = 5;
          *(char *)(*(long *)(lVar3 + 0x38) + param_5) = (char)iVar2;
          param_4 = *(uchar **)(lVar3 + 0x38);
          m_length = (uint)(param_5 + 1);
        }
        goto LAB_00b4b718;
      }
      iVar1 = EVP_MD_type(*(EVP_MD **)(lVar3 + 0x20));
      iVar1 = RSA_sign(iVar1,param_4,m_length,param_2,&local_58,rsa);
      local_54 = local_58;
    }
    if (iVar1 < 1) {
      return iVar1;
    }
  }
  if (-1 < (int)local_54) {
    lVar3 = (long)(int)local_54;
    local_54 = 1;
    *param_3 = lVar3;
  }
  return local_54;
}

