
X509_NAME_ENTRY * X509_NAME_delete_entry(X509_NAME *name,int loc)

{
  int iVar1;
  long lVar2;
  X509_NAME_ENTRY *pXVar3;
  stack_st_X509_NAME_ENTRY *psVar4;
  int iVar5;
  
  if (name == (X509_NAME *)0x0) {
    pXVar3 = (X509_NAME_ENTRY *)0x0;
  }
  else {
    iVar1 = OPENSSL_sk_num(name->entries);
    pXVar3 = (X509_NAME_ENTRY *)0x0;
    if ((-1 < loc) && (loc < iVar1)) {
      psVar4 = name->entries;
      pXVar3 = (X509_NAME_ENTRY *)OPENSSL_sk_delete(psVar4,loc);
                    /* try { // try from 00b72cd0 to 00c72cf3 has its CatchHandler @ 00b72cd0
                       catch() { ... } // from try @ 00b72cd0 with catch @ 00b72cd0
                       catch() { ... } // from try @ 00b72cfc with catch @ 00b72cd0 */
      iVar1 = OPENSSL_sk_num(psVar4);
      name->modified = 1;
      if (iVar1 != loc) {
        if (loc == 0) {
          iVar5 = pXVar3->set + -1;
        }
        else {
                    /* try { // try from 00b72cf4 to 00c72cfb has its CatchHandler @ 00b72d18 */
          lVar2 = OPENSSL_sk_value(psVar4,loc + -1);
                    /* try { // try from 00b72cfc to 00c72d2b has its CatchHandler @ 00b72cd0 */
          iVar5 = *(int *)(lVar2 + 0x10);
        }
        lVar2 = OPENSSL_sk_value(psVar4,loc);
        if ((iVar5 + 1 < *(int *)(lVar2 + 0x10)) && (loc < iVar1)) {
          do {
            lVar2 = OPENSSL_sk_value(psVar4,loc);
            loc = loc + 1;
            *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + -1;
          } while (iVar1 != loc);
        }
      }
    }
  }
                    /* catch() { ... } // from try @ 00b72cf4 with catch @ 00b72d18 */
  return pXVar3;
}

