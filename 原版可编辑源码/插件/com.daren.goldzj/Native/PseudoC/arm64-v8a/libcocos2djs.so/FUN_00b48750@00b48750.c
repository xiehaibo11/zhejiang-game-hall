
undefined8 FUN_00b48750(void)

{
  int iVar1;
  EVP_PKEY_CTX *ctx;
  ASN1_STRING *a;
  ASN1_STRING *pval;
  ASN1_OBJECT *pAVar2;
  undefined8 uVar3;
  X509_ALGOR *in_x3;
  X509_ALGOR *in_x4;
  int local_34;
  
  ctx = (EVP_PKEY_CTX *)EVP_MD_CTX_pkey_ctx();
  iVar1 = EVP_PKEY_CTX_ctrl(ctx,6,-1,0x1006,0,&local_34);
  if (iVar1 < 1) {
    uVar3 = 0;
  }
  else if (local_34 == 6) {
    a = (ASN1_STRING *)FUN_00b48a08(ctx);
    uVar3 = 0;
    if (a != (ASN1_STRING *)0x0) {
      if (in_x4 != (X509_ALGOR *)0x0) {
        pval = ASN1_STRING_dup(a);
        if (pval == (ASN1_STRING *)0x0) {
          ASN1_STRING_free(a);
          return 0;
        }
        pAVar2 = OBJ_nid2obj(0x390);
        X509_ALGOR_set0(in_x4,pAVar2,0x10,pval);
      }
      pAVar2 = OBJ_nid2obj(0x390);
      X509_ALGOR_set0(in_x3,pAVar2,0x10,a);
      uVar3 = 3;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

