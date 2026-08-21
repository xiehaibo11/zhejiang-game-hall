
int i2d_ASN1_OBJECT(ASN1_OBJECT *a,uchar **pp)

{
  int iVar1;
  uchar *local_28;
  
  if ((a == (ASN1_OBJECT *)0x0) || (a->data == (uchar *)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = ASN1_object_size(0,a->length,6);
    if ((pp != (uchar **)0x0) && (iVar1 != -1)) {
      local_28 = *pp;
      ASN1_put_object(&local_28,0,a->length,6,0);
      memcpy(local_28,a->data,(long)a->length);
      *pp = local_28 + a->length;
    }
  }
  return iVar1;
}

