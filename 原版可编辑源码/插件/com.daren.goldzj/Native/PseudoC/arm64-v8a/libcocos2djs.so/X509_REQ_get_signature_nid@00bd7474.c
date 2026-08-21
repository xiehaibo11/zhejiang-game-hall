
int X509_REQ_get_signature_nid(long param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x38));
  return iVar1;
}

