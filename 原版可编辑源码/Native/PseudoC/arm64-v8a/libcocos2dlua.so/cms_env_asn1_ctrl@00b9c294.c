
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
                    /* try { // try from 00b9c310 to 00c9c31b has its CatchHandler @ 00b9c6fc */
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
                    /* try { // try from 00b9c31c to 00c9c327 has its CatchHandler @ 00b9c720 */
  if ((pEVar3 != (EVP_PKEY_ASN1_METHOD *)0x0) && (*(code **)(pEVar3 + 0xb0) != (code *)0x0)) {
                    /* try { // try from 00b9c2d8 to 00c9c2df has its CatchHandler @ 00b9c7bc */
    iVar1 = (**(code **)(pEVar3 + 0xb0))(pEVar2,7,(long)param_2,param_1);
    if (iVar1 == -2) {
      iVar1 = 0x7d;
      line = 0x47;
                    /* try { // try from 00b9c300 to 00c9c30f has its CatchHandler @ 00b9c70c */
    }
    else {
      if (0 < iVar1) {
        return 1;
      }
                    /* try { // try from 00b9c344 to 00c9c34b has its CatchHandler @ 00b9c710 */
      iVar1 = 0x6f;
      line = 0x4b;
    }
    ERR_put_error(0x2e,0xab,iVar1,"crypto/cms/cms_env.c",line);
    return 0;
  }
  return 1;
}

