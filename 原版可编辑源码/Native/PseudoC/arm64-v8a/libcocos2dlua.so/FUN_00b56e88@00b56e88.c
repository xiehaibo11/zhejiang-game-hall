
ASN1_STRING * FUN_00b56e88(EVP_PKEY_CTX *param_1)

{
  int iVar1;
  EVP_PKEY *pkey;
  RSA_PSS_PARAMS *a;
  ASN1_INTEGER *a_00;
  X509_ALGOR *alg;
  ASN1_STRING *pAVar2;
  int local_3c;
  ASN1_OCTET_STRING *local_38;
  undefined8 local_30;
  EVP_MD *local_28;
  
  local_38 = (ASN1_STRING *)0x0;
  pkey = EVP_PKEY_CTX_get0_pkey(param_1);
  iVar1 = EVP_PKEY_CTX_ctrl(param_1,-1,0xf8,0xd,0,&local_28);
  if (((iVar1 < 1) || (iVar1 = EVP_PKEY_CTX_ctrl(param_1,6,0x3f8,0x1008,0,&local_30), iVar1 < 1)) ||
     (iVar1 = EVP_PKEY_CTX_ctrl(param_1,6,0x18,0x1007,0,&local_3c), iVar1 == 0)) {
    a = (RSA_PSS_PARAMS *)0x0;
  }
  else {
    if (local_3c == -2) {
      iVar1 = EVP_PKEY_size(pkey);
      local_3c = EVP_MD_size(local_28);
      local_3c = (iVar1 + -2) - local_3c;
      iVar1 = EVP_PKEY_bits(pkey);
      if ((iVar1 + 7U & 7) == 0) {
        local_3c = local_3c + -1;
      }
    }
    else if (local_3c == -1) {
      local_3c = EVP_MD_size(local_28);
    }
    a = RSA_PSS_PARAMS_new();
    if (a != (RSA_PSS_PARAMS *)0x0) {
      if (local_3c != 0x14) {
        a_00 = ASN1_INTEGER_new();
        a->saltLength = a_00;
        if ((a_00 == (ASN1_INTEGER *)0x0) ||
           (iVar1 = ASN1_INTEGER_set(a_00,(long)local_3c), iVar1 == 0)) goto LAB_00b56f38;
      }
      iVar1 = EVP_MD_type(local_28);
      if (iVar1 != 0x40) {
        alg = X509_ALGOR_new();
        a->hashAlgorithm = alg;
        if (alg == (X509_ALGOR *)0x0) goto LAB_00b56f38;
        X509_ALGOR_set_md(alg,local_28);
      }
      iVar1 = FUN_00b57034(&a->maskGenAlgorithm,local_30);
      if (iVar1 != 0) {
        pAVar2 = ASN1_item_pack(a,(ASN1_ITEM *)RSA_PSS_PARAMS_it,&local_38);
        RSA_PSS_PARAMS_free(a);
        if (pAVar2 != (ASN1_STRING *)0x0) {
          return local_38;
        }
        goto LAB_00b56f44;
      }
    }
  }
LAB_00b56f38:
  RSA_PSS_PARAMS_free(a);
LAB_00b56f44:
  ASN1_STRING_free(local_38);
  return (ASN1_STRING *)0x0;
}

