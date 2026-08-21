
int X509_get_signature_nid(long param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid(*(ASN1_OBJECT **)(param_1 + 0x88));
  return iVar1;
}

