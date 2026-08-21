
undefined8 cms_env_asn1_ctrl(int *param_1,int param_2)

{
  int iVar1;
  EVP_PKEY *pEVar2;
  int line;
  EVP_PKEY_ASN1_METHOD *pEVar3;
  
  if (*param_1 == 1) {
    if (*(EVP_PKEY_CTX **)(*(long *)(param_1 + 2) + 0x28) == (EVP_PKEY_CTX *)0x0) {
      return 0;
    }
    pEVar2 = EVP_PKEY_CTX_get0_pkey(*(EVP_PKEY_CTX **)(*(long *)(param_1 + 2) + 0x28));
    if (pEVar2 == (EVP_PKEY *)0x0) {
      return 0;
    }
    pEVar3 = pEVar2->ameth;
  }
  else {
    if (*param_1 != 0) {
      return 0;
    }
    pEVar2 = *(EVP_PKEY **)(*(long *)(param_1 + 2) + 0x28);
    pEVar3 = pEVar2->ameth;
  }
  if ((pEVar3 != (EVP_PKEY_ASN1_METHOD *)0x0) && (*(code **)(pEVar3 + 0xb0) != (code *)0x0)) {
    iVar1 = (**(code **)(pEVar3 + 0xb0))(pEVar2,7,(long)param_2,param_1);
    if (iVar1 == -2) {
      iVar1 = 0x7d;
      line = 0x47;
    }
    else {
      if (0 < iVar1) {
        return 1;
      }
      iVar1 = 0x6f;
      line = 0x4b;
    }
    ERR_put_error(0x2e,0xab,iVar1,"crypto/cms/cms_env.c",line);
    return 0;
  }
  return 1;
}

