
void * ASN1_item_d2i_bio(ASN1_ITEM *it,BIO *in,void *x)

{
  BUF_MEM *a;
  int iVar1;
  ASN1_VALUE *pAVar2;
  uchar *local_38;
  BUF_MEM *local_28;
  
  local_28 = (BUF_MEM *)0x0;
  iVar1 = FUN_00b7acc4(in,&local_28);
  a = local_28;
  if (iVar1 < 0) {
    pAVar2 = (ASN1_VALUE *)0x0;
  }
  else {
    local_38 = (uchar *)local_28->data;
    pAVar2 = ASN1_item_d2i(x,&local_38,(long)iVar1,it);
  }
  BUF_MEM_free(a);
  return pAVar2;
}

