
ASN1_VALUE * ASN1_item_new(ASN1_ITEM *it)

{
  int iVar1;
  ASN1_VALUE *local_18;
  
  local_18 = (ASN1_VALUE *)0x0;
  iVar1 = FUN_00af0198(&local_18,it,0);
  if (iVar1 < 1) {
    local_18 = (ASN1_VALUE *)0x0;
  }
  return local_18;
}

