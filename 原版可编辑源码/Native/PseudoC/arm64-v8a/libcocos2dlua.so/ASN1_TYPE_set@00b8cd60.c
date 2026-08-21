
void ASN1_TYPE_set(ASN1_TYPE *a,int type,void *value)

{
  ASN1_BOOLEAN AVar1;
  ASN1_TYPE *local_28;
  
  if ((a->value).ptr != (char *)0x0) {
    local_28 = a;
    asn1_primitive_free(&local_28,0,0);
    a = local_28;
  }
  a->type = type;
  if (type == 1) {
    AVar1 = 0xff;
    if (value == (void *)0x0) {
      AVar1 = 0;
    }
    (a->value).boolean = AVar1;
  }
  else {
    (a->value).ptr = value;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8ce18 with catch @ 00b8cdc4
                        */
  return;
}

