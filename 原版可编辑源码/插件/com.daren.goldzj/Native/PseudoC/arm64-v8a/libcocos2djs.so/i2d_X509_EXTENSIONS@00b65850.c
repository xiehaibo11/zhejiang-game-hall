
int i2d_X509_EXTENSIONS(X509_EXTENSIONS *a,uchar **out)

{
  int iVar1;
  
                    /* try { // try from 00b65854 to 00c6597f has its CatchHandler @ 00b6558c */
  iVar1 = ASN1_item_i2d((ASN1_VALUE *)a,out,(ASN1_ITEM *)X509_EXTENSIONS_it);
  return iVar1;
}

