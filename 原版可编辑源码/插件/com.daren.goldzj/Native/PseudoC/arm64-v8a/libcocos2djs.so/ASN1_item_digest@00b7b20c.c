
int ASN1_item_digest(ASN1_ITEM *it,EVP_MD *type,void *data,uchar *md,uint *len)

{
  int iVar1;
  int iVar2;
  uchar *local_28;
  
  local_28 = (uchar *)0x0;
  iVar1 = ASN1_item_i2d(data,&local_28,it);
  if (local_28 == (uchar *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar2 = EVP_Digest(local_28,(long)iVar1,md,len,type,(ENGINE *)0x0);
    iVar1 = 0;
    if (iVar2 != 0) {
      CRYPTO_free(local_28);
      iVar1 = 1;
    }
  }
  return iVar1;
}

