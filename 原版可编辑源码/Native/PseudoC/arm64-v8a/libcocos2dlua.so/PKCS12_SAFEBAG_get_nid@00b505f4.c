
int PKCS12_SAFEBAG_get_nid(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  return iVar1;
}

