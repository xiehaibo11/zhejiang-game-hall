
int ASN1_item_print(BIO *out,ASN1_VALUE *ifld,int indent,ASN1_ITEM *it,ASN1_PCTX *pctx)

{
  ASN1_PCTX *pAVar1;
  int iVar2;
  char *pcVar3;
  ASN1_VALUE *local_18;
  
  pAVar1 = (ASN1_PCTX *)0x176f218;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8fe18 with catch @ 00b8ff98
                        */
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
  iVar2 = FUN_00b8ffd4((int)out,&local_18,indent,it,0,pcVar3,0);
  return iVar2;
}

