
int EVP_PKEY_derive_set_peer(EVP_PKEY_CTX *ctx,EVP_PKEY *peer)

{
  int iVar1;
  int line;
  long lVar2;
  
  if ((((ctx == (EVP_PKEY_CTX *)0x0) || (lVar2 = *(long *)ctx, lVar2 == 0)) ||
      ((*(long *)(lVar2 + 0xb8) == 0 &&
       ((*(long *)(lVar2 + 0x98) == 0 && (*(long *)(lVar2 + 0xa8) == 0)))))) ||
     (*(code **)(lVar2 + 0xc0) == (code *)0x0)) {
    ERR_put_error(6,0x9b,0x96,"crypto/evp/pmeth_fn.c",0xe2);
    return -2;
  }
  iVar1 = *(int *)(ctx + 0x20);
  if (((iVar1 == 0x100) || (iVar1 == 0x200)) || (iVar1 == 0x400)) {
    iVar1 = (**(code **)(lVar2 + 0xc0))(ctx,2,0,peer);
    if (iVar1 < 1) {
      return iVar1;
    }
    if (iVar1 == 2) {
      return 1;
    }
    if (*(int **)(ctx + 0x10) == (int *)0x0) {
      iVar1 = 0x9a;
      line = 0xf6;
    }
    else if (**(int **)(ctx + 0x10) == peer->type) {
      iVar1 = EVP_PKEY_missing_parameters(peer);
      if ((iVar1 != 0) ||
         (iVar1 = EVP_PKEY_cmp_parameters(*(EVP_PKEY **)(ctx + 0x10),peer), iVar1 != 0)) {
        EVP_PKEY_free(*(EVP_PKEY **)(ctx + 0x18));
        *(EVP_PKEY **)(ctx + 0x18) = peer;
        iVar1 = (**(code **)(*(long *)ctx + 0xc0))(ctx,2,1,peer);
        if (0 < iVar1) {
          EVP_PKEY_up_ref(peer);
          return 1;
        }
        *(undefined8 *)(ctx + 0x18) = 0;
        return iVar1;
      }
      iVar1 = 0x99;
      line = 0x108;
    }
    else {
      iVar1 = 0x65;
      line = 0xfb;
    }
  }
  else {
    iVar1 = 0x97;
    line = 0xe9;
  }
  ERR_put_error(6,0x9b,iVar1,"crypto/evp/pmeth_fn.c",line);
  return -1;
}

