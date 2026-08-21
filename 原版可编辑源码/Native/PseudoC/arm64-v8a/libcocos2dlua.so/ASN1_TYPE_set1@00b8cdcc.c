
int ASN1_TYPE_set1(ASN1_TYPE *a,int type,void *value)

{
  ASN1_OBJECT *pAVar1;
  ASN1_BOOLEAN AVar2;
  ASN1_TYPE *local_28;
  
  local_28 = a;
  if ((type == 1) || (value == (void *)0x0)) {
    if ((a->value).ptr != (char *)0x0) {
      asn1_primitive_free(&local_28,0,0);
      a = local_28;
    }
    a->type = type;
    if (type == 1) {
      AVar2 = 0xff;
      if (value == (void *)0x0) {
        AVar2 = 0;
      }
      (a->value).boolean = AVar2;
      return 1;
    }
  }
  else {
    if (type == 6) {
      pAVar1 = OBJ_dup(value);
      if (pAVar1 != (ASN1_OBJECT *)0x0) {
                    /* try { // try from 00b8ce10 to 00c8ce17 has its CatchHandler @ 00b8cf8c */
        if ((a->value).ptr != (char *)0x0) {
                    /* try { // try from 00b8ce18 to 00c8cf8f has its CatchHandler @ 00b8cdc4 */
          asn1_primitive_free(&local_28,0,0);
          a = local_28;
        }
        (a->value).object = pAVar1;
        a->type = 6;
        return 1;
      }
      return 0;
    }
    value = ASN1_STRING_dup(value);
    if (value == (ASN1_STRING *)0x0) {
      return 0;
    }
    if ((a->value).ptr != (char *)0x0) {
      asn1_primitive_free(&local_28,0,0);
      a = local_28;
    }
    a->type = type;
  }
  (a->value).asn1_string = value;
  return 1;
}

