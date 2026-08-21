
void * ASN1_item_dup(ASN1_ITEM *it,void *x)

{
  int iVar1;
  ASN1_VALUE *pAVar2;
  uchar *local_28;
  uchar *local_18;
  
  local_18 = (uchar *)0x0;
  if (x != (void *)0x0) {
    iVar1 = ASN1_item_i2d(x,&local_18,it);
    if (local_18 != (uchar *)0x0) {
      local_28 = local_18;
      pAVar2 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_28,(long)iVar1,it);
      CRYPTO_free(local_18);
      return pAVar2;
    }
    ERR_put_error(0xd,0xbf,0x41,"crypto/asn1/a_dup.c",0x3d);
  }
  return (void *)0x0;
}

