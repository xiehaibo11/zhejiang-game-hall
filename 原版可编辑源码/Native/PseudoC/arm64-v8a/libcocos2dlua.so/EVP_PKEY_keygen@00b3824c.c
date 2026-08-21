
int EVP_PKEY_keygen(EVP_PKEY_CTX *ctx,EVP_PKEY **ppkey)

{
  int iVar1;
  EVP_PKEY *pEVar2;
  code *pcVar3;
  
  if (((ctx == (EVP_PKEY_CTX *)0x0) || (*(long *)ctx == 0)) ||
     (pcVar3 = *(code **)(*(long *)ctx + 0x38), pcVar3 == (code *)0x0)) {
    ERR_put_error(6,0x92,0x96,"crypto/evp/pmeth_gn.c",0x5b);
    return -2;
  }
  if (*(int *)(ctx + 0x20) == 4) {
    if (ppkey != (EVP_PKEY **)0x0) {
      if (*ppkey == (EVP_PKEY *)0x0) {
        pEVar2 = EVP_PKEY_new();
        *ppkey = pEVar2;
        if (pEVar2 == (EVP_PKEY *)0x0) {
          return -1;
        }
        pcVar3 = *(code **)(*(long *)ctx + 0x38);
      }
      iVar1 = (*pcVar3)(ctx);
      if (iVar1 < 1) {
        EVP_PKEY_free(*ppkey);
        *ppkey = (EVP_PKEY *)0x0;
        return iVar1;
      }
      return iVar1;
    }
  }
  else {
    ERR_put_error(6,0x92,0x97,"crypto/evp/pmeth_gn.c",0x5f);
  }
  return -1;
}

