
int FUN_00b5a1ac(long param_1,uchar *param_2,long *param_3,uchar *param_4,int param_5)

{
  int iVar1;
  uchar *to;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(int *)(lVar3 + 0x18) == 4) {
    to = *(uchar **)(lVar3 + 0x38);
    if (to == (uchar *)0x0) {
      iVar1 = EVP_PKEY_size(*(EVP_PKEY **)(param_1 + 0x10));
      to = CRYPTO_malloc(iVar1,"crypto/rsa/rsa_pmeth.c",0x5b);
      *(uchar **)(lVar3 + 0x38) = to;
      if (to == (uchar *)0x0) {
        return -1;
      }
    }
    iVar1 = RSA_private_decrypt(param_5,param_4,to,*(RSA **)(*(long *)(param_1 + 0x10) + 0x20),3);
    if (iVar1 < 1) {
      return iVar1;
    }
    lVar2 = 0;
    do {
      if (*(char *)(*(long *)(lVar3 + 0x38) + lVar2) != '\0') break;
      lVar2 = lVar2 + 1;
    } while (lVar2 < iVar1);
    iVar1 = RSA_padding_check_PKCS1_OAEP_mgf1
                      (param_2,iVar1,*(long *)(lVar3 + 0x38) + (long)(int)lVar2,iVar1 - (int)lVar2,
                       iVar1,*(undefined8 *)(lVar3 + 0x40),*(undefined4 *)(lVar3 + 0x48),
                       *(undefined8 *)(lVar3 + 0x20),*(undefined8 *)(lVar3 + 0x28));
  }
  else {
    iVar1 = RSA_private_decrypt(param_5,param_4,param_2,*(RSA **)(*(long *)(param_1 + 0x10) + 0x20),
                                *(int *)(lVar3 + 0x18));
  }
  if (-1 < iVar1) {
    *param_3 = (long)iVar1;
    iVar1 = 1;
  }
  return iVar1;
}

