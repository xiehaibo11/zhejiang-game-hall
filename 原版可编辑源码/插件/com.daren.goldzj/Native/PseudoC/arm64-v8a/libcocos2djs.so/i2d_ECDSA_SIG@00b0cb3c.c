
int i2d_ECDSA_SIG(ECDSA_SIG *sig,uchar **pp)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)sig,pp,(ASN1_ITEM *)&DAT_01c75070);
  return iVar1;
}

