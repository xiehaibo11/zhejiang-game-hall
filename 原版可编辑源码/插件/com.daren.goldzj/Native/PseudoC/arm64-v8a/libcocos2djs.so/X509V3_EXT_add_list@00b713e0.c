
int X509V3_EXT_add_list(X509V3_EXT_METHOD *extlist)

{
  int iVar1;
  
  iVar1 = extlist->ext_nid;
  while( true ) {
    if (iVar1 == -1) {
      return 1;
    }
    if ((DAT_01d3b220 == 0) && (DAT_01d3b220 = OPENSSL_sk_new(&LAB_00b7129c), DAT_01d3b220 == 0))
    break;
    iVar1 = OPENSSL_sk_push(DAT_01d3b220,extlist);
    if (iVar1 == 0) {
      iVar1 = 0x21;
      goto LAB_00b71478;
    }
    extlist = extlist + 1;
    iVar1 = extlist->ext_nid;
  }
  iVar1 = 0x1d;
LAB_00b71478:
  ERR_put_error(0x22,0x68,0x41,"crypto/x509v3/v3_lib.c",iVar1);
  return 0;
}

