
ulong FUN_00b4ba78(long param_1,uchar *param_2,long *param_3,uchar *param_4,undefined8 param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uchar *to;
  int line;
  ulong __n;
  ulong uVar4;
  long lVar5;
  uint local_48 [2];
  
  lVar5 = *(long *)(param_1 + 0x28);
  if (*(EVP_MD **)(lVar5 + 0x20) == (EVP_MD *)0x0) {
    local_48[0] = RSA_public_decrypt((int)param_5,param_4,param_2,
                                     *(RSA **)(*(long *)(param_1 + 0x10) + 0x20),
                                     *(int *)(lVar5 + 0x18));
joined_r0x00b4bb80:
    __n = (ulong)local_48[0];
    if ((int)local_48[0] < 0) {
      return __n;
    }
LAB_00b4bbc8:
    uVar4 = 1;
    *param_3 = (long)(int)__n;
  }
  else {
    if (*(int *)(lVar5 + 0x18) == 1) {
      iVar2 = EVP_MD_type(*(EVP_MD **)(lVar5 + 0x20));
      iVar2 = int_rsa_verify(iVar2,0,0,param_2,local_48,param_4,param_5,
                             *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x20));
      if (0 < iVar2) goto joined_r0x00b4bb80;
    }
    else {
      if (*(int *)(lVar5 + 0x18) != 5) {
        return 0xffffffff;
      }
      to = *(uchar **)(lVar5 + 0x38);
      if (to == (uchar *)0x0) {
        iVar2 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
        to = CRYPTO_malloc(iVar2,"crypto/rsa/rsa_pmeth.c",0x5b);
        *(uchar **)(lVar5 + 0x38) = to;
        if (to == (uchar *)0x0) {
          return 0xffffffff;
        }
      }
      iVar2 = RSA_public_decrypt((int)param_5,param_4,to,*(RSA **)(*(long *)(param_1 + 0x10) + 0x20)
                                 ,5);
      if (0 < iVar2) {
        __n = (long)iVar2 - 1;
        bVar1 = *(byte *)(*(long *)(lVar5 + 0x38) + __n);
        iVar2 = EVP_MD_type(*(EVP_MD **)(lVar5 + 0x20));
        uVar3 = RSA_X931_hash_id(iVar2);
        if (uVar3 == bVar1) {
          iVar2 = EVP_MD_size(*(EVP_MD **)(lVar5 + 0x20));
          if ((int)__n == iVar2) {
            if (param_2 != (uchar *)0x0) {
              memcpy(param_2,*(void **)(lVar5 + 0x38),__n);
            }
            goto LAB_00b4bbc8;
          }
          iVar2 = 0x8f;
          line = 0xc5;
        }
        else {
          iVar2 = 100;
          line = 0xc0;
        }
        ERR_put_error(4,0x8d,iVar2,"crypto/rsa/rsa_pmeth.c",line);
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

