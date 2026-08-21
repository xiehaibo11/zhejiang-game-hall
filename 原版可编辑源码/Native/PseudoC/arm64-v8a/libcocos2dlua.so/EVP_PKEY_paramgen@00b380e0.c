
int EVP_PKEY_paramgen(EVP_PKEY_CTX *ctx,EVP_PKEY **ppkey)

{
  int iVar1;
  EVP_PKEY *pEVar2;
  int line;
  code *pcVar3;
  
  if (((ctx == (EVP_PKEY_CTX *)0x0) || (*(long *)ctx == 0)) ||
     (pcVar3 = *(code **)(*(long *)ctx + 0x28), pcVar3 == (code *)0x0)) {
    ERR_put_error(6,0x94,0x96,"crypto/evp/pmeth_gn.c",0x28);
    return -2;
  }
  if (*(int *)(ctx + 0x20) == 2) {
    if (ppkey == (EVP_PKEY **)0x0) {
      return -1;
    }
    if (*ppkey == (EVP_PKEY *)0x0) {
      pEVar2 = EVP_PKEY_new();
      *ppkey = pEVar2;
      if (pEVar2 == (EVP_PKEY *)0x0) {
        iVar1 = 0x41;
        line = 0x38;
        goto LAB_00b381a4;
      }
      pcVar3 = *(code **)(*(long *)ctx + 0x28);
    }
    iVar1 = (*pcVar3)(ctx);
    if (iVar1 < 1) {
      EVP_PKEY_free(*ppkey);
      *ppkey = (EVP_PKEY *)0x0;
      return iVar1;
    }
    return iVar1;
  }
  iVar1 = 0x97;
  line = 0x2d;
LAB_00b381a4:
  ERR_put_error(6,0x94,iVar1,"crypto/evp/pmeth_gn.c",line);
  return -1;
}

