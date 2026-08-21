
int X509_ATTRIBUTE_set1_data(X509_ATTRIBUTE *attr,int attrtype,void *data,int len)

{
  int iVar1;
  int iVar2;
  ASN1_STRING *str;
  ASN1_TYPE *a;
  
  if (attr == (X509_ATTRIBUTE *)0x0) {
    return 0;
  }
  if (((uint)attrtype >> 0xc & 1) == 0) {
    if (len == -1) {
      str = (ASN1_STRING *)0x0;
      iVar1 = 0;
    }
    else {
      str = ASN1_STRING_type_new(attrtype);
      if ((str == (ASN1_STRING *)0x0) ||
         (iVar2 = ASN1_STRING_set(str,data,len), iVar1 = attrtype, iVar2 == 0)) {
        a = (ASN1_TYPE *)0x0;
        goto LAB_00b5ab88;
      }
    }
  }
  else {
    iVar1 = OBJ_obj2nid(attr->object);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5aa38 with catch @ 00b5aa94
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5aa18 with catch @ 00b5aa9c
                        */
    str = ASN1_STRING_set_by_NID((ASN1_STRING **)0x0,data,len,attrtype,iVar1);
    if (str == (ASN1_STRING *)0x0) {
      ERR_put_error(0xb,0x8a,0xd,"crypto/x509/x509_att.c",0x101);
      return 0;
    }
    iVar1 = str->type;
  }
  if (attrtype == 0) {
    ASN1_STRING_free(str);
    return 1;
  }
                    /* try { // try from 00b5aab0 to 00c5aab3 has its CatchHandler @ 00b5aab8 */
  a = ASN1_TYPE_new();
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b5aab0 with catch @ 00b5aab8
                        */
  if (a != (ASN1_TYPE *)0x0) {
    if ((((uint)attrtype >> 0xc & 1) == 0) && (len == -1)) {
      iVar1 = ASN1_TYPE_set1(a,attrtype,data);
      if (iVar1 == 0) goto LAB_00b5ab88;
    }
    else {
      ASN1_TYPE_set(a,iVar1,str);
      str = (ASN1_STRING *)0x0;
    }
    iVar1 = OPENSSL_sk_push(*(undefined8 *)&attr->single,a);
    if (iVar1 != 0) {
      return 1;
    }
  }
LAB_00b5ab88:
  ERR_put_error(0xb,0x8a,0x41,"crypto/x509/x509_att.c",0x122);
  ASN1_TYPE_free(a);
  ASN1_STRING_free(str);
  return 0;
}

