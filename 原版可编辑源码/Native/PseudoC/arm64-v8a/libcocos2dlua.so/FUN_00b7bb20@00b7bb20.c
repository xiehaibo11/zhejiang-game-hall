
int FUN_00b7bb20(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = (int *)*param_1;
  piVar6 = (int *)*param_2;
  iVar2 = *piVar7;
  if (iVar2 == 1) {
    plVar3 = *(long **)(piVar7 + 2);
    if ((plVar3 == (long *)0x0) || (*plVar3 == 0)) goto LAB_00b7bba4;
    plVar4 = (long *)plVar3[1];
  }
  else {
    if (iVar2 != 0) goto LAB_00b7bba4;
    plVar3 = *(long **)(piVar7 + 2);
    plVar4 = plVar3;
  }
  if (plVar4 == (long *)0x0) {
LAB_00b7bba4:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: (a->type == ASIdOrRange_id && a->u.id != NULL) || (a->type == ASIdOrRange_range && a->u.range != NULL && a->u.range->min != NULL && a->u.range->max != NULL)"
                ,"crypto/x509v3/v3_asid.c",0x80);
  }
  iVar1 = *piVar6;
  if (iVar1 == 0) {
    plVar4 = *(long **)(piVar6 + 2);
    plVar5 = plVar4;
  }
  else {
    if (((iVar1 != 1) || (plVar4 = *(long **)(piVar6 + 2), plVar4 == (long *)0x0)) || (*plVar4 == 0)
       ) goto LAB_00b7bbc4;
    plVar5 = (long *)plVar4[1];
  }
  if (plVar5 == (long *)0x0) {
LAB_00b7bbc4:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: (b->type == ASIdOrRange_id && b->u.id != NULL) || (b->type == ASIdOrRange_range && b->u.range != NULL && b->u.range->min != NULL && b->u.range->max != NULL)"
                ,"crypto/x509v3/v3_asid.c",0x84);
  }
  if (iVar2 == 1) {
    if (iVar1 == 1) {
      iVar2 = ASN1_INTEGER_cmp((ASN1_INTEGER *)*plVar3,(ASN1_INTEGER *)*plVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      plVar3 = (long *)(*(long *)(piVar7 + 2) + 8);
      plVar4 = (long *)(*(long *)(piVar6 + 2) + 8);
      goto LAB_00b7bc04;
    }
  }
  else if ((iVar2 == 0) && (plVar3 = (long *)(piVar7 + 2), iVar1 != 0)) goto LAB_00b7bc04;
  plVar4 = (long *)(piVar6 + 2);
LAB_00b7bc04:
  iVar2 = ASN1_INTEGER_cmp((ASN1_INTEGER *)*plVar3,(ASN1_INTEGER *)*plVar4);
  return iVar2;
}

