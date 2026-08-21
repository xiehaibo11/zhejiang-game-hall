
stack_st_X509_ALGOR * PKCS7_get_smimecap(PKCS7_SIGNER_INFO *si)

{
  ASN1_TYPE *pAVar1;
  ASN1_VALUE *pAVar2;
  uchar *local_18;
  
  pAVar1 = PKCS7_get_signed_attribute(si,0xa7);
  pAVar2 = (ASN1_VALUE *)0x0;
  if (pAVar1 != (ASN1_TYPE *)0x0) {
    if (pAVar1->type == 0x10) {
      local_18 = ((pAVar1->value).asn1_string)->data;
      pAVar2 = ASN1_item_d2i((ASN1_VALUE **)0x0,&local_18,
                             (long)((pAVar1->value).asn1_string)->length,(ASN1_ITEM *)X509_ALGORS_it
                            );
    }
    else {
      pAVar2 = (ASN1_VALUE *)0x0;
    }
  }
  return (stack_st_X509_ALGOR *)pAVar2;
}

