
ASN1_VALUE * ASN1_item_d2i(ASN1_VALUE **val,uchar **in,long len,ASN1_ITEM *it)

{
  ASN1_VALUE **pval;
  int iVar1;
  ASN1_VALUE *pAVar2;
  ASN1_VALUE *local_48;
  undefined1 local_40;
  
  pval = &local_48;
  if (val != (ASN1_VALUE **)0x0) {
    pval = val;
  }
  local_48 = (ASN1_VALUE *)0x0;
  local_40 = 0;
  iVar1 = FUN_00afda44(pval);
  if (iVar1 < 1) {
    ASN1_item_ex_free(pval,it);
    pAVar2 = (ASN1_VALUE *)0x0;
  }
  else {
    pAVar2 = *pval;
  }
  return pAVar2;
}

