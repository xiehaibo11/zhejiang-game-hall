
ASN1_OBJECT * OBJ_dup(ASN1_OBJECT *o)

{
  ASN1_OBJECT *a;
  uchar *puVar1;
  char **ppcVar2;
  char *pcVar3;
  int line;
  int iVar4;
  
  if (o == (ASN1_OBJECT *)0x0) {
    return (ASN1_OBJECT *)0x0;
  }
  if ((o->flags & 1) == 0) {
    return o;
  }
  a = ASN1_OBJECT_new();
  if (a == (ASN1_OBJECT *)0x0) {
    iVar4 = 0xd;
    line = 0x1d;
    goto LAB_00b3a55c;
  }
  a->flags = o->flags | 0xd;
  iVar4 = o->length;
  if (iVar4 < 1) {
LAB_00b3a4cc:
    a->length = iVar4;
    a->nid = o->nid;
    if (o->ln != (char **)0x0) {
      ppcVar2 = (char **)CRYPTO_strdup((char *)o->ln,"crypto/objects/obj_lib.c",0x2d);
      a->ln = ppcVar2;
      if (ppcVar2 == (char **)0x0) goto LAB_00b3a53c;
    }
    if (o->sn == (char *)0x0) {
      return a;
    }
    pcVar3 = CRYPTO_strdup(o->sn,"crypto/objects/obj_lib.c",0x30);
    a->sn = pcVar3;
    if (pcVar3 != (char *)0x0) {
      return a;
    }
  }
  else {
    puVar1 = (uchar *)CRYPTO_memdup(o->data,(long)iVar4,"crypto/objects/obj_lib.c",0x27);
    a->data = puVar1;
    if (puVar1 != (uchar *)0x0) {
      iVar4 = o->length;
      goto LAB_00b3a4cc;
    }
  }
LAB_00b3a53c:
  ASN1_OBJECT_free(a);
  iVar4 = 0x41;
  line = 0x36;
LAB_00b3a55c:
  ERR_put_error(8,0x65,iVar4,"crypto/objects/obj_lib.c",line);
  return (ASN1_OBJECT *)0x0;
}

