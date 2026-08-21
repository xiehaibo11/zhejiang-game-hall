
int OBJ_add_sigid(int signid,int dig_id,int pkey_id)

{
  int iVar1;
  int iVar2;
  int *ptr;
  
  if ((DAT_01784a30 == 0) && (DAT_01784a30 = OPENSSL_sk_new(&LAB_00b48c4c), DAT_01784a30 == 0)) {
    return 0;
  }
  if ((DAT_01784a38 == 0) && (DAT_01784a38 = OPENSSL_sk_new(&LAB_00b48c64), DAT_01784a38 == 0)) {
    return 0;
  }
  ptr = CRYPTO_malloc(0xc,"crypto/objects/obj_xref.c",0x6a);
  iVar1 = 0;
  if (ptr != (int *)0x0) {
    *ptr = signid;
    ptr[1] = dig_id;
    ptr[2] = pkey_id;
    iVar1 = OPENSSL_sk_push(DAT_01784a30,ptr);
    if (iVar1 == 0) {
      CRYPTO_free(ptr);
      iVar1 = 0;
    }
    else {
      iVar2 = OPENSSL_sk_push(DAT_01784a38,ptr);
      iVar1 = 0;
      if (iVar2 != 0) {
        OPENSSL_sk_sort(DAT_01784a30);
        OPENSSL_sk_sort(DAT_01784a38);
        iVar1 = 1;
      }
    }
  }
  return iVar1;
}

