
int X509_ATTRIBUTE_set1_object(X509_ATTRIBUTE *attr,ASN1_OBJECT *obj)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  
  uVar1 = 0;
                    /* try { // try from 00b5aa18 to 00c5aa1f has its CatchHandler @ 00b5aa9c */
  if ((attr != (X509_ATTRIBUTE *)0x0) && (obj != (ASN1_OBJECT *)0x0)) {
    ASN1_OBJECT_free(attr->object);
    pAVar2 = OBJ_dup(obj);
                    /* try { // try from 00b5aa38 to 00c5aa47 has its CatchHandler @ 00b5aa94 */
    attr->object = pAVar2;
    uVar1 = (uint)(pAVar2 != (ASN1_OBJECT *)0x0);
  }
                    /* try { // try from 00b5aa48 to 00c5aaaf has its CatchHandler @ 00b5a9ec */
  return uVar1;
}

