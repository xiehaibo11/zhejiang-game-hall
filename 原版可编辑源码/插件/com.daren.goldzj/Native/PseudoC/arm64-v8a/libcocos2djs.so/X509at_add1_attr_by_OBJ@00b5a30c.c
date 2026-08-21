
stack_st_X509_ATTRIBUTE *
X509at_add1_attr_by_OBJ(stack_st_X509_ATTRIBUTE **x,ASN1_OBJECT *obj,int type,uchar *bytes,int len)

{
  int iVar1;
  X509_ATTRIBUTE *attr;
  ASN1_OBJECT *pAVar2;
  stack_st_X509_ATTRIBUTE *psVar3;
  
  attr = X509_ATTRIBUTE_new();
  if (attr == (X509_ATTRIBUTE *)0x0) {
    ERR_put_error(0xb,0x89,0x41,"crypto/x509/x509_att.c",0xc4);
  }
  else {
    if (obj != (ASN1_OBJECT *)0x0) {
      ASN1_OBJECT_free(attr->object);
      pAVar2 = OBJ_dup(obj);
      attr->object = pAVar2;
      if ((pAVar2 != (ASN1_OBJECT *)0x0) &&
         (iVar1 = X509_ATTRIBUTE_set1_data(attr,type,bytes,len), iVar1 != 0)) {
        psVar3 = X509at_add1_attr(x,attr);
        X509_ATTRIBUTE_free(attr);
        return psVar3;
      }
    }
    X509_ATTRIBUTE_free(attr);
  }
  return (stack_st_X509_ATTRIBUTE *)0x0;
}

