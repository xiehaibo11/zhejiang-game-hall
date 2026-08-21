
void * PKCS12_SAFEBAG_get1_cert(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if ((iVar1 == 0x98) && (iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)param_1[1]), iVar1 == 0x9e)) {
    pvVar2 = ASN1_item_unpack(*(ASN1_STRING **)(param_1[1] + 8),(ASN1_ITEM *)X509_it);
  }
  else {
    pvVar2 = (void *)0x0;
  }
  return pvVar2;
}

