
void * PKCS12_SAFEBAG_get1_crl(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if ((iVar1 == 0x99) && (iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)param_1[1]), iVar1 == 0xa0)) {
    pvVar2 = ASN1_item_unpack(*(ASN1_STRING **)(param_1[1] + 8),(ASN1_ITEM *)X509_CRL_it);
  }
  else {
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

