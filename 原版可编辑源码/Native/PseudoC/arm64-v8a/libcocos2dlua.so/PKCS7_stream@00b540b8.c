
int PKCS7_stream(uchar ***boundary,PKCS7 *p7)

{
  int iVar1;
  ASN1_OCTET_STRING *pAVar2;
  
  iVar1 = OBJ_obj2nid(p7->type);
  switch(iVar1) {
  case 0x15:
    pAVar2 = (p7->d).data;
    if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
      return 0;
    }
    break;
  case 0x16:
    pAVar2 = (((p7->d).sign)->contents->d).data;
    if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
      return 0;
    }
    break;
  case 0x17:
    pAVar2 = ((p7->d).enveloped)->enc_data->enc_data;
    if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
      pAVar2 = ASN1_OCTET_STRING_new();
      ((p7->d).enveloped)->enc_data->enc_data = pAVar2;
      if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
        return 0;
      }
    }
    break;
  case 0x18:
    pAVar2 = ((p7->d).signed_and_enveloped)->enc_data->enc_data;
    if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
      pAVar2 = ASN1_OCTET_STRING_new();
      ((p7->d).signed_and_enveloped)->enc_data->enc_data = pAVar2;
      if (pAVar2 == (ASN1_OCTET_STRING *)0x0) {
        return 0;
      }
    }
    break;
  default:
    return 0;
  }
  pAVar2->flags = pAVar2->flags | 0x10;
  *boundary = &pAVar2->data;
  return 1;
}

