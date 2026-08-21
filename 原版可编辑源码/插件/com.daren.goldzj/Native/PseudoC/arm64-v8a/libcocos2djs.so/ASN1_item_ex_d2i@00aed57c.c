
int ASN1_item_ex_d2i(ASN1_VALUE **pval,uchar **in,long len,ASN1_ITEM *it,int tag,int aclass,char opt
                    ,ASN1_TLC *ctx)

{
  int iVar1;
  
  iVar1 = FUN_00aed5c4();
  if (iVar1 < 1) {
    ASN1_item_ex_free(pval,it);
  }
  return iVar1;
}

