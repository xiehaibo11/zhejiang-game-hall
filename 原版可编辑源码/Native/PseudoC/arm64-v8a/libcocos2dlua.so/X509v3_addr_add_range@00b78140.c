
undefined8
X509v3_addr_add_range
          (undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  ASN1_VALUE *local_38;
  
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
    if (lVar3 != 0) goto LAB_00b781e0;
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
LAB_00b781c8:
    OPENSSL_sk_set_cmp_func(lVar3,puVar5);
  }
  else if (param_2 == 1) {
    puVar5 = &DAT_00b7a11c;
    goto LAB_00b781c8;
  }
  puVar7 = *(undefined4 **)(lVar2 + 8);
  *puVar7 = 1;
  *(long *)(puVar7 + 2) = lVar3;
LAB_00b781e0:
  iVar1 = 4;
  if (param_2 != 1) {
    iVar1 = (uint)(param_2 == 2) << 4;
  }
  uVar4 = FUN_00b78250(&local_38,param_4,param_5,iVar1);
  if ((int)uVar4 != 0) {
    iVar1 = OPENSSL_sk_push(lVar3,local_38);
    if (iVar1 == 0) {
      ASN1_item_free(local_38,(ASN1_ITEM *)IPAddressOrRange_it);
      return 0;
    }
    return 1;
  }
  return uVar4;
}

