
int X509_NAME_get_index_by_NID(X509_NAME *name,int nid,int lastpos)

{
  int iVar1;
  int iVar2;
  ASN1_OBJECT *b;
  undefined8 *puVar3;
  stack_st_X509_NAME_ENTRY *psVar4;
  
                    /* catch() { ... } // from try @ 00b63728 with catch @ 00b63790 */
  b = OBJ_nid2obj(nid);
  if (b == (ASN1_OBJECT *)0x0) {
    lastpos = -2;
  }
  else if (name == (X509_NAME *)0x0) {
LAB_00b637e4:
    lastpos = -1;
  }
  else {
                    /* catch() { ... } // from try @ 00b63760 with catch @ 00b637a0 */
    psVar4 = name->entries;
    if (lastpos < 0) {
      lastpos = -1;
    }
    iVar1 = OPENSSL_sk_num(psVar4);
    do {
      lastpos = lastpos + 1;
      if (iVar1 <= lastpos) goto LAB_00b637e4;
      puVar3 = (undefined8 *)OPENSSL_sk_value(psVar4,lastpos);
      iVar2 = OBJ_cmp((ASN1_OBJECT *)*puVar3,b);
    } while (iVar2 != 0);
  }
  return lastpos;
}

