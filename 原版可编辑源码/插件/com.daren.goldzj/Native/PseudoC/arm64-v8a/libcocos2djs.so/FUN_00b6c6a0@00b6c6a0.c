
int FUN_00b6c6a0(undefined8 *param_1,undefined8 *param_2)

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
    if ((plVar3 == (long *)0x0) || (*plVar3 == 0)) goto LAB_00b6c724;
    plVar4 = (long *)plVar3[1];
  }
  else {
    if (iVar2 != 0) goto LAB_00b6c724;
                    /* try { // try from 00b6c6c4 to 00c6c6c7 has its CatchHandler @ 00b6c6cc */
    plVar3 = *(long **)(piVar7 + 2);
                    /* try { // try from 00b6c6c8 to 00c6c81b has its CatchHandler @ 00b6c18c */
    plVar4 = plVar3;
  }
  if (plVar4 == (long *)0x0) {
LAB_00b6c724:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: (a->type == ASIdOrRange_id && a->u.id != NULL) || (a->type == ASIdOrRange_range && a->u.range != NULL && a->u.range->min != NULL && a->u.range->max != NULL)"
                ,"crypto/x509v3/v3_asid.c",0x80);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c6c4 with catch @ 00b6c6cc
                        */
  iVar1 = *piVar6;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c584 with catch @ 00b6c6d0
                        */
  if (iVar1 == 0) {
    plVar4 = *(long **)(piVar6 + 2);
    plVar5 = plVar4;
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c2d4 with catch @ 00b6c6d4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c35c with catch @ 00b6c6d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c4f0 with catch @ 00b6c6dc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c538 with catch @ 00b6c6e8
                        */
    if (((iVar1 != 1) || (plVar4 = *(long **)(piVar6 + 2), plVar4 == (long *)0x0)) || (*plVar4 == 0)
       ) goto LAB_00b6c744;
    plVar5 = (long *)plVar4[1];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c4b0 with catch @ 00b6c6f0
                        */
  }
  if (plVar5 == (long *)0x0) {
LAB_00b6c744:
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: (b->type == ASIdOrRange_id && b->u.id != NULL) || (b->type == ASIdOrRange_range && b->u.range != NULL && b->u.range->min != NULL && b->u.range->max != NULL)"
                ,"crypto/x509v3/v3_asid.c",0x84);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b6c594 with catch @ 00b6c6f4
                        */
  if (iVar2 == 1) {
    if (iVar1 == 1) {
      iVar2 = ASN1_INTEGER_cmp((ASN1_INTEGER *)*plVar3,(ASN1_INTEGER *)*plVar4);
      if (iVar2 != 0) {
        return iVar2;
      }
      plVar3 = (long *)(*(long *)(piVar7 + 2) + 8);
      plVar4 = (long *)(*(long *)(piVar6 + 2) + 8);
      goto LAB_00b6c784;
    }
  }
  else if ((iVar2 == 0) && (plVar3 = (long *)(piVar7 + 2), iVar1 != 0)) goto LAB_00b6c784;
  plVar4 = (long *)(piVar6 + 2);
LAB_00b6c784:
  iVar2 = ASN1_INTEGER_cmp((ASN1_INTEGER *)*plVar3,(ASN1_INTEGER *)*plVar4);
  return iVar2;
}

