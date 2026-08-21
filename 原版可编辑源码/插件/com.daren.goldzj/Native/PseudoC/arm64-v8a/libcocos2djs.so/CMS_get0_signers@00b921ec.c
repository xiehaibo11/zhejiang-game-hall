
stack_st_X509 * CMS_get0_signers(CMS_ContentInfo *cms)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  stack_st_X509 *psVar6;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
  if (iVar1 == 0x16) {
    if (*(long *)(cms + 8) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(cms + 8) + 0x28);
      goto LAB_00b92240;
    }
  }
  else {
    ERR_put_error(0x2e,0x85,0x6c,"crypto/cms/cms_sd.c",0x1a);
  }
  uVar5 = 0;
LAB_00b92240:
  iVar1 = OPENSSL_sk_num(uVar5);
  if (iVar1 < 1) {
LAB_00b922b0:
    psVar6 = (stack_st_X509 *)0x0;
  }
  else {
    iVar1 = 0;
    psVar6 = (stack_st_X509 *)0x0;
    do {
      lVar3 = OPENSSL_sk_value(uVar5,iVar1);
      lVar4 = *(long *)(lVar3 + 0x38);
      if (lVar4 != 0) {
        if (psVar6 == (stack_st_X509 *)0x0) {
          psVar6 = (stack_st_X509 *)OPENSSL_sk_new_null();
          if (psVar6 == (stack_st_X509 *)0x0) {
            return (stack_st_X509 *)0x0;
          }
          lVar4 = *(long *)(lVar3 + 0x38);
        }
        iVar2 = OPENSSL_sk_push(psVar6,lVar4);
        if (iVar2 == 0) {
          OPENSSL_sk_free(psVar6);
          goto LAB_00b922b0;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(uVar5);
    } while (iVar1 < iVar2);
  }
  return psVar6;
}

