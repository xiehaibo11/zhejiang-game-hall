
int OBJ_txt2nid(char *s)

{
  int iVar1;
  ASN1_OBJECT *o;
  
  o = OBJ_txt2obj(s,0);
  iVar1 = OBJ_obj2nid(o);
  ASN1_OBJECT_free(o);
  return iVar1;
}

