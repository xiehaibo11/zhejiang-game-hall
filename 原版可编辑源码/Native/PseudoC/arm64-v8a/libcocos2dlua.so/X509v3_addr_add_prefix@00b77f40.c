
undefined8
X509v3_addr_add_prefix
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  ASN1_VALUE *local_38;
  
                    /* catch() { ... } // from try @ 00b77dc0 with catch @ 00b77f4c */
  lVar2 = FUN_00b77dfc();
  if (lVar2 == 0) {
    return 0;
  }
  piVar6 = *(int **)(lVar2 + 8);
  if (piVar6 == (int *)0x0) {
    return 0;
  }
  if (*piVar6 == 1) {
    lVar3 = *(long *)(piVar6 + 2);
    if (lVar3 != 0) goto LAB_00b77fe0;
  }
  else if ((*piVar6 == 0) && (*(long *)(piVar6 + 2) != 0)) {
    return 0;
  }
  lVar3 = OPENSSL_sk_new_null();
  if (lVar3 == 0) {
    return 0;
  }
  if (param_2 == 2) {
    puVar5 = &DAT_00b7a12c;
LAB_00b77fc8:
    OPENSSL_sk_set_cmp_func(lVar3,puVar5);
  }
  else if (param_2 == 1) {
    puVar5 = &DAT_00b7a11c;
    goto LAB_00b77fc8;
  }
  puVar7 = *(undefined4 **)(lVar2 + 8);
  *puVar7 = 1;
  *(long *)(puVar7 + 2) = lVar3;
LAB_00b77fe0:
  uVar4 = FUN_00b78038(&local_38,param_4,param_5);
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  iVar1 = OPENSSL_sk_push(lVar3,local_38);
  if (iVar1 == 0) {
    ASN1_item_free(local_38,(ASN1_ITEM *)IPAddressOrRange_it);
    return 0;
  }
  return 1;
}

