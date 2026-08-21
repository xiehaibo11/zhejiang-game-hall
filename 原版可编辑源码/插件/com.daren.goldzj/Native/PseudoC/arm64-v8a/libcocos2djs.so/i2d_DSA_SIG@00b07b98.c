
int i2d_DSA_SIG(DSA_SIG *a,uchar **pp)

{
  int iVar1;
  
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,pp,(ASN1_ITEM *)&DAT_01c74968);
  return iVar1;
}

