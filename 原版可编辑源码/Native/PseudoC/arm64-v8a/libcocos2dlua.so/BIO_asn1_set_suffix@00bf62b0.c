
int BIO_asn1_set_suffix(BIO *b,undefined1 *suffix,undefined1 *suffix_free)

{
  long lVar1;
  undefined1 *local_20;
  undefined1 *puStack_18;
  
  local_20 = suffix;
  puStack_18 = suffix_free;
  lVar1 = BIO_ctrl(b,0x97,0,&local_20);
  return (int)lVar1;
}

