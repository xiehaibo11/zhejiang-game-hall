
int BIO_asn1_set_prefix(BIO *b,undefined1 *prefix,undefined1 *prefix_free)

{
  long lVar1;
  undefined1 *local_20;
  undefined1 *puStack_18;
  
  local_20 = prefix;
  puStack_18 = prefix_free;
  lVar1 = BIO_ctrl(b,0x95,0,&local_20);
  return (int)lVar1;
}

