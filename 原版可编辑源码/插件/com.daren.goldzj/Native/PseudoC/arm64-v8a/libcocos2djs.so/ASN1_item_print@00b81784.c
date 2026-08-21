
int ASN1_item_print(BIO *out,ASN1_VALUE *ifld,int indent,ASN1_ITEM *it,ASN1_PCTX *pctx)

{
  ASN1_PCTX *pAVar1;
  int iVar2;
  char *pcVar3;
  ASN1_VALUE *local_18;
  
  pAVar1 = (ASN1_PCTX *)0x1d20fc8;
  if (pctx != (ASN1_PCTX *)0x0) {
    pAVar1 = pctx;
  }
  if (((byte)pAVar1[1] & 1) == 0) {
    pcVar3 = it->sname;
  }
  else {
    pcVar3 = (char *)0x0;
  }
  local_18 = ifld;
  iVar2 = FUN_00b817d4((int)out,&local_18,indent,it,0,pcVar3,0);
  return iVar2;
}

