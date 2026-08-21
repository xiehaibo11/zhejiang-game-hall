
int BIO_asn1_get_suffix(BIO *b,undefined1 **psuffix,undefined1 **psuffix_free)

{
  long lVar1;
  undefined1 *local_30;
  undefined1 *local_28;
  
  lVar1 = BIO_ctrl(b,0x98,0,&local_30);
  if (0 < (int)lVar1) {
    *psuffix = local_30;
    *psuffix_free = local_28;
  }
  return (int)lVar1;
}

