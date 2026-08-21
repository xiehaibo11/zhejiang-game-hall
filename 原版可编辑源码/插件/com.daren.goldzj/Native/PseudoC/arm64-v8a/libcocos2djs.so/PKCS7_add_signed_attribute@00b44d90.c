
int PKCS7_add_signed_attribute(PKCS7_SIGNER_INFO *p7si,int nid,int type,void *data)

{
  int iVar1;
  
  iVar1 = FUN_00b44d98(&p7si->auth_attr,nid,type);
  return iVar1;
}

