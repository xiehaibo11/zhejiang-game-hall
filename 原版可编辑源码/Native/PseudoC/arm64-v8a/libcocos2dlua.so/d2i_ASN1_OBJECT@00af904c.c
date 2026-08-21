
ASN1_OBJECT * d2i_ASN1_OBJECT(ASN1_OBJECT **a,uchar **pp,long length)

{
  uint uVar1;
  ASN1_OBJECT *pAVar2;
  int reason;
  int iStack_38;
  int local_34;
  long local_30;
  uchar *local_28;
  
  local_28 = *pp;
  uVar1 = ASN1_get_object(&local_28,&local_30,&local_34,&iStack_38,length);
  if ((uVar1 >> 7 & 1) == 0) {
    if (local_34 == 6) {
      pAVar2 = c2i_ASN1_OBJECT(a,&local_28,local_30);
      if (pAVar2 == (ASN1_OBJECT *)0x0) {
        return (ASN1_OBJECT *)0x0;
      }
      *pp = local_28;
      return pAVar2;
    }
    reason = 0x74;
  }
  else {
    reason = 0x66;
  }
  ERR_put_error(0xd,0x93,reason,"crypto/asn1/a_object.c",0xde);
  return (ASN1_OBJECT *)0x0;
}

