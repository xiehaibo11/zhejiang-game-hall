
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
LAB_00b603d4:
    if (trust == 0) {
      bVar1 = false;
      goto joined_r0x00b603ec;
    }
  }
  else {
    iVar2 = X509_PURPOSE_get_by_id(iVar4);
    if (iVar2 == -1) {
      iVar4 = 0x79;
      iVar2 = 0x872;
      goto LAB_00b60464;
    }
    pXVar3 = X509_PURPOSE_get0(iVar2);
    if (pXVar3->trust == 0) {
                    /* try { // try from 00b603b8 to 00c603bf has its CatchHandler @ 00b60424 */
      iVar2 = X509_PURPOSE_get_by_id(def_purpose);
                    /* try { // try from 00b603c0 to 00c603e7 has its CatchHandler @ 00b60318 */
      if (iVar2 == -1) {
        iVar4 = 0x79;
        iVar2 = 0x87f;
        goto LAB_00b60464;
      }
      pXVar3 = X509_PURPOSE_get0(iVar2);
    }
    if (trust == 0) {
      trust = pXVar3->trust;
      goto LAB_00b603d4;
    }
  }
  iVar2 = X509_TRUST_get_by_id(trust);
  if (iVar2 == -1) {
    iVar4 = 0x78;
    iVar2 = 0x88c;
LAB_00b60464:
    ERR_put_error(0xb,0x86,iVar4,"crypto/x509/x509_vfy.c",iVar2);
    return 0;
  }
                    /* try { // try from 00b603e8 to 00c603ef has its CatchHandler @ 00b6042c */
  bVar1 = true;
joined_r0x00b603ec:
                    /* try { // try from 00b6041c to 00c60423 has its CatchHandler @ 00b60424 */
  if ((iVar4 != 0) && (ctx->crls[1].stack.num == 0)) {
    ctx->crls[1].stack.num = iVar4;
  }
                    /* catch() { ... } // from try @ 00b603b8 with catch @ 00b60424
                       catch() { ... } // from try @ 00b6041c with catch @ 00b60424
                       try { // try from 00b60424 to 00c604a7 has its CatchHandler @ 00b60318 */
                    /* catch() { ... } // from try @ 00b603e8 with catch @ 00b6042c */
  if ((bVar1) && (*(int *)&ctx->crls[1].stack.field_0x4 == 0)) {
    *(int *)&ctx->crls[1].stack.field_0x4 = trust;
  }
  return 1;
}

