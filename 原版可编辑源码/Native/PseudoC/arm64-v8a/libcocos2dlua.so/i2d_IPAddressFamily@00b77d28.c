
int i2d_IPAddressFamily(IPAddressFamily *a,uchar **out)

{
  int iVar1;
  
                    /* try { // try from 00b77d30 to 00c77dbf has its CatchHandler @ 00b77d30
                       catch() { ... } // from try @ 00b77d30 with catch @ 00b77d30
                       catch() { ... } // from try @ 00b77de4 with catch @ 00b77d30
                       catch() { ... } // from try @ 00b77e5c with catch @ 00b77d30
                       catch() { ... } // from try @ 00b77ecc with catch @ 00b77d30 */
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,(ASN1_ITEM *)IPAddressFamily_it);
  return iVar1;
}

