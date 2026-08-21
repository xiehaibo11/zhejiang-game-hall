
int PKCS7_add_attribute(PKCS7_SIGNER_INFO *p7si,int nid,int atrtype,void *value)

{
  int iVar1;
  
  iVar1 = FUN_00b44d98(&p7si->unauth_attr,nid,atrtype);
  return iVar1;
}

