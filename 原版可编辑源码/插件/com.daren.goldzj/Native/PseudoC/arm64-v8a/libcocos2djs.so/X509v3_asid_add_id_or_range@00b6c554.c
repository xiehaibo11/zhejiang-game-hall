
undefined8 X509v3_asid_add_id_or_range(long *param_1,int param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  ASN1_VALUE *pAVar3;
  ASN1_VALUE *pAVar4;
  int *piVar5;
  
  if (param_1 == (long *)0x0) {
    return 0;
  }
  if (param_2 == 1) {
                    /* try { // try from 00b6c594 to 00c6c59f has its CatchHandler @ 00b6c6f4 */
    param_1 = param_1 + 1;
    piVar5 = (int *)*param_1;
    if (piVar5 == (int *)0x0) goto LAB_00b6c5a0;
LAB_00b6c588:
    if (*piVar5 == 0) {
      return 0;
    }
  }
  else {
    if (param_2 != 0) {
      return 0;
    }
    piVar5 = (int *)*param_1;
                    /* try { // try from 00b6c584 to 00c6c587 has its CatchHandler @ 00b6c6d0 */
    if (piVar5 != (int *)0x0) goto LAB_00b6c588;
LAB_00b6c5a0:
                    /* try { // try from 00b6c5a0 to 00c6c6c3 has its CatchHandler @ 00b6c18c */
    pAVar3 = ASN1_item_new((ASN1_ITEM *)ASIdentifierChoice_it);
    *param_1 = (long)pAVar3;
    if (pAVar3 == (ASN1_VALUE *)0x0) {
      return 0;
    }
    if (*(long *)(pAVar3 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
      OPENSSL_die("assertion failed: (*choice)->u.asIdsOrRanges == NULL","crypto/x509v3/v3_asid.c",
                  0xcb);
    }
    uVar2 = OPENSSL_sk_new(FUN_00b6c6a0);
    *(undefined8 *)(*param_1 + 8) = uVar2;
    if (*(long *)((undefined4 *)*param_1 + 2) == 0) {
      return 0;
    }
    *(undefined4 *)*param_1 = 1;
  }
  pAVar3 = ASN1_item_new((ASN1_ITEM *)ASIdOrRange_it);
  if (pAVar3 == (ASN1_VALUE *)0x0) {
    return 0;
  }
  if (param_4 == 0) {
    *(undefined4 *)pAVar3 = 0;
    *(undefined8 *)(pAVar3 + 8) = param_3;
  }
  else {
    *(undefined4 *)pAVar3 = 1;
    pAVar4 = ASN1_item_new((ASN1_ITEM *)ASRange_it);
    *(ASN1_VALUE **)(pAVar3 + 8) = pAVar4;
    if (pAVar4 == (ASN1_VALUE *)0x0) goto LAB_00b6c664;
    ASN1_INTEGER_free(*(ASN1_STRING **)pAVar4);
    **(undefined8 **)(pAVar3 + 8) = param_3;
    ASN1_INTEGER_free(*(ASN1_STRING **)(*(long *)(pAVar3 + 8) + 8));
    *(long *)(*(long *)(pAVar3 + 8) + 8) = param_4;
  }
  iVar1 = OPENSSL_sk_push(*(undefined8 *)(*param_1 + 8),pAVar3);
  if (iVar1 != 0) {
    return 1;
  }
LAB_00b6c664:
  ASN1_item_free(pAVar3,(ASN1_ITEM *)ASIdOrRange_it);
  return 0;
}

