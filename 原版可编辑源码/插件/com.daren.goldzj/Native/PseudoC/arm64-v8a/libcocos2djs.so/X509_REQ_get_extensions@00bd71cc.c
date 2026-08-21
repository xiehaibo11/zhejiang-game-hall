
stack_st_X509_EXTENSION * X509_REQ_get_extensions(X509_REQ *req)

{
  int iVar1;
  X509_ATTRIBUTE *attr;
  ASN1_TYPE *pAVar2;
  ASN1_VALUE *pAVar3;
  int *piVar4;
  uchar *local_28;
  
  if ((req != (X509_REQ *)0x0) && (PTR_DAT_01d23db0 != (undefined *)0x0)) {
    iVar1 = *(int *)PTR_DAT_01d23db0;
    piVar4 = (int *)PTR_DAT_01d23db0;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 1;
      iVar1 = X509at_get_attr_by_NID((stack_st_X509_ATTRIBUTE *)req[1].signature,iVar1,-1);
      if (iVar1 != -1) {
        attr = X509at_get_attr((stack_st_X509_ATTRIBUTE *)req[1].signature,iVar1);
        pAVar2 = X509_ATTRIBUTE_get0_type(attr,0);
        if (pAVar2 == (ASN1_TYPE *)0x0) {
          return (stack_st_X509_EXTENSION *)0x0;
        }
        if (pAVar2->type != 0x10) {
          return (stack_st_X509_EXTENSION *)0x0;
        }
        local_28 = ((pAVar2->value).asn1_string)->data;
        pAVar3 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_28,
                               (long)((pAVar2->value).asn1_string)->length,
                               (ASN1_ITEM *)X509_EXTENSIONS_it);
        return (stack_st_X509_EXTENSION *)pAVar3;
      }
      iVar1 = *piVar4;
    }
  }
  return (stack_st_X509_EXTENSION *)0x0;
}

