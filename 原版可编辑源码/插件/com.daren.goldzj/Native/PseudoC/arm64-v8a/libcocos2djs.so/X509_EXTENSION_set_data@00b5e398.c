
int X509_EXTENSION_set_data(X509_EXTENSION *ex,ASN1_OCTET_STRING *data)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (ex != (X509_EXTENSION *)0x0) {
                    /* try { // try from 00b5e3b4 to 00c5e3bb has its CatchHandler @ 00b5e3d8 */
    iVar1 = ASN1_OCTET_STRING_set((ASN1_STRING *)&ex->value,data->data,data->length);
                    /* try { // try from 00b5e3bc to 00c5e3bf has its CatchHandler @ 00b5e3c0 */
    uVar2 = (uint)(iVar1 != 0);
                    /* catch() { ... } // from try @ 00b5e35c with catch @ 00b5e3c0
                       catch() { ... } // from try @ 00b5e3bc with catch @ 00b5e3c0
                       try { // try from 00b5e3c0 to 00c5e41f has its CatchHandler @ 00b5e234 */
  }
  return uVar2;
}

