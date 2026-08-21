
ASN1_TEMPLATE * asn1_do_adb(ASN1_VALUE **pval,ASN1_TEMPLATE *tt,int nullerr)

{
  int iVar1;
  ASN1_OBJECT *o;
  ASN1_TEMPLATE *pAVar2;
  long lVar3;
  ASN1_ITEM_EXP *pAVar4;
  ASN1_ITEM_EXP *local_28;
  
                    /* try { // try from 00af0d20 to 00bf0d23 has its CatchHandler @ 00af0f60 */
                    /* try { // try from 00af0d24 to 00bf0d83 has its CatchHandler @ 00af0860 */
  if ((tt->flags & 0x300) == 0) {
    return tt;
  }
  pAVar4 = tt->item;
  o = *(ASN1_OBJECT **)(*pval + pAVar4->utype);
  if (o == (ASN1_OBJECT *)0x0) {
    pAVar2 = (ASN1_TEMPLATE *)pAVar4->sname;
  }
  else {
    if (((uint)tt->flags >> 8 & 1) == 0) {
      local_28 = (ASN1_ITEM_EXP *)ASN1_INTEGER_get((ASN1_INTEGER *)o);
    }
    else {
      iVar1 = OBJ_obj2nid(o);
      local_28 = (ASN1_ITEM_EXP *)(long)iVar1;
    }
                    /* try { // try from 00af0d84 to 00bf0d8b has its CatchHandler @ 00af0f70 */
    if ((pAVar4->templates != (ASN1_TEMPLATE *)0x0) &&
       (iVar1 = (*(code *)pAVar4->templates)(&local_28), iVar1 == 0)) {
      iVar1 = 0xd5;
      goto LAB_00af0dec;
    }
    if (0 < (long)pAVar4->funcs) {
      lVar3 = 0;
      pAVar2 = (ASN1_TEMPLATE *)(pAVar4->tcount + 8);
      do {
        if (pAVar2[-1].item == local_28) {
          return pAVar2;
        }
        lVar3 = lVar3 + 1;
        pAVar2 = (ASN1_TEMPLATE *)&pAVar2[1].tag;
      } while (lVar3 < (long)pAVar4->funcs);
    }
    pAVar2 = (ASN1_TEMPLATE *)pAVar4->size;
  }
  if (pAVar2 != (ASN1_TEMPLATE *)0x0) {
    return pAVar2;
  }
  if (nullerr == 0) {
    return (ASN1_TEMPLATE *)0x0;
  }
  iVar1 = 0xee;
LAB_00af0dec:
  ERR_put_error(0xd,0x6e,0xa4,"crypto/asn1/tasn_utl.c",iVar1);
  return (ASN1_TEMPLATE *)0x0;
}

