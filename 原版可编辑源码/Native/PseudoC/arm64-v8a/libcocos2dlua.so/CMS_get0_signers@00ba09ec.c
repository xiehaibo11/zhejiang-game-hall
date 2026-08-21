
stack_st_X509 * CMS_get0_signers(CMS_ContentInfo *cms)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  stack_st_X509 *psVar6;
  
                    /* catch() { ... } // from try @ 00ba0350 with catch @ 00ba09ec
                       catch() { ... } // from try @ 00ba0384 with catch @ 00ba09ec
                       catch() { ... } // from try @ 00ba04a8 with catch @ 00ba09ec */
                    /* catch() { ... } // from try @ 00ba08b8 with catch @ 00ba09f0 */
                    /* catch() { ... } // from try @ 00b9fef0 with catch @ 00ba09f4 */
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)cms);
                    /* catch() { ... } // from try @ 00ba0704 with catch @ 00ba0a0c */
  if (iVar1 == 0x16) {
                    /* catch() { ... } // from try @ 00ba0170 with catch @ 00ba0a10 */
    if (*(long *)(cms + 8) != 0) {
      uVar5 = *(undefined8 *)(*(long *)(cms + 8) + 0x28);
                    /* catch() { ... } // from try @ 00ba04bc with catch @ 00ba0a1c */
      goto LAB_00ba0a40;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00b9fe80 with catch @ 00ba0a20 */
                    /* catch() { ... } // from try @ 00b9fe14 with catch @ 00ba0a24 */
                    /* catch() { ... } // from try @ 00ba05a8 with catch @ 00ba0a34 */
                    /* catch() { ... } // from try @ 00ba061c with catch @ 00ba0a38 */
    ERR_put_error(0x2e,0x85,0x6c,"crypto/cms/cms_sd.c",0x1a);
  }
  uVar5 = 0;
LAB_00ba0a40:
  iVar1 = OPENSSL_sk_num(uVar5);
                    /* catch() { ... } // from try @ 00ba08c8 with catch @ 00ba0a4c
                       catch() { ... } // from try @ 00ba0908 with catch @ 00ba0a4c */
  if (iVar1 < 1) {
LAB_00ba0ab0:
    psVar6 = (stack_st_X509 *)0x0;
  }
  else {
                    /* catch() { ... } // from try @ 00b9fe24 with catch @ 00ba0a50 */
    iVar1 = 0;
                    /* catch() { ... } // from try @ 00b9fe90 with catch @ 00ba0a54 */
    psVar6 = (stack_st_X509 *)0x0;
    do {
      lVar3 = OPENSSL_sk_value(uVar5,iVar1);
      lVar4 = *(long *)(lVar3 + 0x38);
      if (lVar4 != 0) {
        if (psVar6 == (stack_st_X509 *)0x0) {
                    /* catch() { ... } // from try @ 00ba076c with catch @ 00ba0a74 */
          psVar6 = (stack_st_X509 *)OPENSSL_sk_new_null();
          if (psVar6 == (stack_st_X509 *)0x0) {
            return (stack_st_X509 *)0x0;
          }
          lVar4 = *(long *)(lVar3 + 0x38);
        }
        iVar2 = OPENSSL_sk_push(psVar6,lVar4);
                    /* catch() { ... } // from try @ 00b9fe08 with catch @ 00ba0a8c
                       catch() { ... } // from try @ 00b9fe74 with catch @ 00ba0a8c
                       catch() { ... } // from try @ 00b9ff14 with catch @ 00ba0a8c */
        if (iVar2 == 0) {
          OPENSSL_sk_free(psVar6);
          goto LAB_00ba0ab0;
        }
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(uVar5);
    } while (iVar1 < iVar2);
  }
  return psVar6;
}

