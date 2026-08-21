
/* WARNING: Type propagation algorithm not settling */

int X509_STORE_CTX_purpose_inherit(X509_STORE_CTX *ctx,int def_purpose,int purpose,int trust)

{
  bool bVar1;
  int iVar2;
  X509_PURPOSE *pXVar3;
  int iVar4;
  
  iVar4 = def_purpose;
  if (purpose != 0) {
    iVar4 = purpose;
  }
  if (iVar4 == 0) {
LAB_00b6e854:
    if (trust == 0) {
      bVar1 = false;
      goto joined_r0x00b6e86c;
    }
  }
  else {
    iVar2 = X509_PURPOSE_get_by_id(iVar4);
    if (iVar2 == -1) {
      iVar4 = 0x79;
      iVar2 = 0x872;
      goto LAB_00b6e8e4;
    }
    pXVar3 = X509_PURPOSE_get0(iVar2);
    if (pXVar3->trust == 0) {
      iVar2 = X509_PURPOSE_get_by_id(def_purpose);
      if (iVar2 == -1) {
        iVar4 = 0x79;
        iVar2 = 0x87f;
        goto LAB_00b6e8e4;
      }
      pXVar3 = X509_PURPOSE_get0(iVar2);
    }
    if (trust == 0) {
      trust = pXVar3->trust;
      goto LAB_00b6e854;
    }
  }
  iVar2 = X509_TRUST_get_by_id(trust);
  if (iVar2 == -1) {
    iVar4 = 0x78;
    iVar2 = 0x88c;
LAB_00b6e8e4:
    ERR_put_error(0xb,0x86,iVar4,"crypto/x509/x509_vfy.c",iVar2);
    return 0;
  }
  bVar1 = true;
joined_r0x00b6e86c:
  if ((iVar4 != 0) && (ctx->crls[1].stack.num == 0)) {
    ctx->crls[1].stack.num = iVar4;
  }
  if ((bVar1) && (*(int *)&ctx->crls[1].stack.field_0x4 == 0)) {
    *(int *)&ctx->crls[1].stack.field_0x4 = trust;
  }
  return 1;
}

