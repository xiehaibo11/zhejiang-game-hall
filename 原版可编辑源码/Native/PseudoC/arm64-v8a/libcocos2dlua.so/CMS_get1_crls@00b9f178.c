
stack_st_X509_CRL * CMS_get1_crls(CMS_ContentInfo *cms)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  stack_st_X509_CRL *psVar4;
  undefined8 *puVar5;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x17) {
    if (*(long *)(*(long *)(cms + 8) + 8) == 0) {
      return (stack_st_X509_CRL *)0x0;
    }
    puVar5 = (undefined8 *)(*(long *)(*(long *)(cms + 8) + 8) + 8);
  }
  else {
    if (iVar1 != 0x16) {
                    /* try { // try from 00b9f230 to 00c9f233 has its CatchHandler @ 00b9f468 */
      ERR_put_error(0x2e,0x84,0x98,"crypto/cms/cms_lib.c",0x1af);
      return (stack_st_X509_CRL *)0x0;
    }
    puVar5 = (undefined8 *)(*(long *)(cms + 8) + 0x20);
  }
  iVar1 = OPENSSL_sk_num(*puVar5);
  if (iVar1 < 1) {
    return (stack_st_X509_CRL *)0x0;
  }
  iVar1 = 0;
  psVar4 = (stack_st_X509_CRL *)0x0;
  do {
    piVar3 = (int *)OPENSSL_sk_value(*puVar5,iVar1);
    if (*piVar3 == 0) {
      if ((psVar4 == (stack_st_X509_CRL *)0x0) &&
         (psVar4 = (stack_st_X509_CRL *)OPENSSL_sk_new_null(), psVar4 == (stack_st_X509_CRL *)0x0))
      {
        return (stack_st_X509_CRL *)0x0;
      }
      iVar2 = OPENSSL_sk_push(psVar4,*(undefined8 *)(piVar3 + 2));
      if (iVar2 == 0) {
        OPENSSL_sk_pop_free(psVar4,X509_CRL_free);
        return (stack_st_X509_CRL *)0x0;
      }
      X509_CRL_up_ref(*(undefined8 *)(piVar3 + 2));
    }
    iVar1 = iVar1 + 1;
    iVar2 = OPENSSL_sk_num(*puVar5);
    if (iVar2 <= iVar1) {
      return psVar4;
    }
  } while( true );
}

