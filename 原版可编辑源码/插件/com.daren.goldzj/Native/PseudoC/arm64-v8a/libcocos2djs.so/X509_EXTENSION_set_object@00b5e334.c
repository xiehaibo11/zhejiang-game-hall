
int X509_EXTENSION_set_object(X509_EXTENSION *ex,ASN1_OBJECT *obj)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  
  uVar1 = 0;
  if ((ex != (X509_EXTENSION *)0x0) && (obj != (ASN1_OBJECT *)0x0)) {
    ASN1_OBJECT_free(ex->object);
                    /* try { // try from 00b5e35c to 00c5e363 has its CatchHandler @ 00b5e3c0 */
    pAVar2 = OBJ_dup(obj);
                    /* try { // try from 00b5e364 to 00c5e3b3 has its CatchHandler @ 00b5e234 */
    ex->object = pAVar2;
    uVar1 = (uint)(pAVar2 != (ASN1_OBJECT *)0x0);
  }
  return uVar1;
}

