
void FUN_00b001b4(ASN1_VALUE **param_1,ASN1_ITEM *param_2,int param_3)

{
  int iVar1;
  ASN1_TEMPLATE *tt;
  ASN1_VALUE **ppAVar2;
  ASN1_VALUE *ptr;
  void *pvVar3;
  ASN1_TEMPLATE *pAVar4;
  code *pcVar5;
  long lVar6;
  
  if (param_1 == (ASN1_VALUE **)0x0) {
    return;
  }
  pvVar3 = param_2->funcs;
  if ((param_2->itype != '\0') && (*param_1 == (ASN1_VALUE *)0x0)) {
    return;
  }
  if ((pvVar3 == (void *)0x0) || (pcVar5 = *(code **)((long)pvVar3 + 0x18), pcVar5 == (code *)0x0))
  {
    pcVar5 = (code *)0x0;
  }
  switch(param_2->itype) {
  case '\0':
    if (param_2->templates != (ASN1_TEMPLATE *)0x0) {
      asn1_template_free(param_1);
      return;
    }
  case '\x05':
    asn1_primitive_free(param_1,param_2,param_3);
    return;
  case '\x01':
  case '\x06':
    iVar1 = asn1_do_lock(param_1,-1,param_2);
    if (iVar1 != 0) {
      return;
    }
    if ((pcVar5 != (code *)0x0) && (iVar1 = (*pcVar5)(2,param_1,param_2,0), iVar1 == 2)) {
      return;
    }
    asn1_enc_free(param_1,param_2);
    if (0 < param_2->tcount) {
      lVar6 = 0;
      pAVar4 = param_2->templates + param_2->tcount;
      do {
        pAVar4 = pAVar4 + -1;
        tt = asn1_do_adb(param_1,pAVar4,0);
        if (tt != (ASN1_TEMPLATE *)0x0) {
          ppAVar2 = asn1_get_field_ptr(param_1,tt);
          asn1_template_free(ppAVar2,tt);
        }
        lVar6 = lVar6 + 1;
      } while (lVar6 < param_2->tcount);
    }
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(3,param_1,param_2,0);
    }
    if (param_3 != 0) {
      return;
    }
    ptr = *param_1;
    break;
  case '\x02':
    if ((pcVar5 != (code *)0x0) && (iVar1 = (*pcVar5)(2,param_1,param_2,0), iVar1 == 2)) {
      return;
    }
    iVar1 = asn1_get_choice_selector(param_1,param_2);
    if ((-1 < iVar1) && ((long)iVar1 < param_2->tcount)) {
      pAVar4 = param_2->templates;
      ppAVar2 = asn1_get_field_ptr(param_1,pAVar4 + iVar1);
      asn1_template_free(ppAVar2,pAVar4 + iVar1);
    }
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(3,param_1,param_2,0);
    }
    if (param_3 != 0) {
      return;
    }
    ptr = *param_1;
    break;
  default:
    goto switchD_00b00218_caseD_3;
  case '\x04':
    if (pvVar3 == (void *)0x0) {
      return;
    }
    if (*(code **)((long)pvVar3 + 0x10) == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00b003f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)pvVar3 + 0x10))(param_1,param_2);
    return;
  }
  CRYPTO_free(ptr);
  *param_1 = (ASN1_VALUE *)0x0;
switchD_00b00218_caseD_3:
  return;
}

