
int i2d_PUBKEY(EVP_PKEY *a,uchar **pp)

{
  int iVar1;
  X509_PUBKEY *local_28;
  
                    /* try { // try from 00b66858 to 00c6686b has its CatchHandler @ 00b66a28 */
  local_28 = (X509_PUBKEY *)0x0;
                    /* try { // try from 00b66874 to 00c6687f has its CatchHandler @ 00b66a24 */
  if ((a == (EVP_PKEY *)0x0) || (iVar1 = X509_PUBKEY_set(&local_28,a), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = ASN1_item_i2d((ASN1_VALUE *)local_28,pp,(ASN1_ITEM *)X509_PUBKEY_it);
    ASN1_item_free((ASN1_VALUE *)local_28,(ASN1_ITEM *)X509_PUBKEY_it);
  }
  return iVar1;
}

