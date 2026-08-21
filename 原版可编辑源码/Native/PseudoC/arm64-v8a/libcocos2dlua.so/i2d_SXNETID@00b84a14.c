
int i2d_SXNETID(SXNETID *a,uchar **out)

{
  int iVar1;
  
                    /* catch() { ... } // from try @ 00b849a4 with catch @ 00b84a18 */
                    /* catch() { ... } // from try @ 00b84998 with catch @ 00b84a1c */
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,(ASN1_ITEM *)SXNETID_it);
  return iVar1;
}

