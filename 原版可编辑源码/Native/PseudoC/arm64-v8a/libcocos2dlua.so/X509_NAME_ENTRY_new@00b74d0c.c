
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

X509_NAME_ENTRY * X509_NAME_ENTRY_new(void)

{
  X509_NAME_ENTRY *pXVar1;
  
                    /* try { // try from 00b74d0c to 00c74e7f has its CatchHandler @ 00b74d0c
                       catch() { ... } // from try @ 00b74d0c with catch @ 00b74d0c
                       catch() { ... } // from try @ 00b74e88 with catch @ 00b74d0c
                       catch() { ... } // from try @ 00b74f48 with catch @ 00b74d0c
                       catch() { ... } // from try @ 00b74fd4 with catch @ 00b74d0c */
  pXVar1 = (X509_NAME_ENTRY *)ASN1_item_new((ASN1_ITEM *)X509_NAME_ENTRY_it);
  return pXVar1;
}

