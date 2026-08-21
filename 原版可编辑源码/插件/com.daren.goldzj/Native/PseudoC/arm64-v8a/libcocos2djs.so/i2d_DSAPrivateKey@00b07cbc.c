
int i2d_DSAPrivateKey(DSA *a,uchar **pp)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,pp,(ASN1_ITEM *)&DAT_01c749a0);
  return iVar1;
}

