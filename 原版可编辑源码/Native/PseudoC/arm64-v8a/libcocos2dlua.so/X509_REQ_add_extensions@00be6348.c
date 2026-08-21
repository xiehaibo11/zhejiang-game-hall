
int X509_REQ_add_extensions(X509_REQ *req,stack_st_X509_EXTENSION *exts)

{
  int len;
  stack_st_X509_ATTRIBUTE *psVar1;
  uint uVar2;
  uchar *local_18;
  
  local_18 = (uchar *)0x0;
  len = ASN1_item_i2d((ASN1_VALUE *)exts,&local_18,(ASN1_ITEM *)X509_EXTENSIONS_it);
  if (len < 1) {
    uVar2 = 0;
  }
  else {
    psVar1 = X509at_add1_attr_by_NID
                       ((stack_st_X509_ATTRIBUTE **)&req[1].signature,0xac,0x10,local_18,len);
    uVar2 = (uint)(psVar1 != (stack_st_X509_ATTRIBUTE *)0x0);
    CRYPTO_free(local_18);
  }
  return uVar2;
}

