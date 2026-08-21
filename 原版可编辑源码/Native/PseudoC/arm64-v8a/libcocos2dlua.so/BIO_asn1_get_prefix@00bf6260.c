
int BIO_asn1_get_prefix(BIO *b,undefined1 **pprefix,undefined1 **pprefix_free)

{
  long lVar1;
  undefined1 *local_30;
  undefined1 *local_28;
  
  lVar1 = BIO_ctrl(b,0x96,0,&local_30);
  if (0 < (int)lVar1) {
    *pprefix = local_30;
    *pprefix_free = local_28;
  }
  return (int)lVar1;
}

