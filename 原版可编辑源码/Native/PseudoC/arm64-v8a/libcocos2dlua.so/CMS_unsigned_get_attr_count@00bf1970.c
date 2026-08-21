
int CMS_unsigned_get_attr_count(CMS_SignerInfo *si)

{
  int iVar1;
  
  iVar1 = X509at_get_attr_count(*(undefined8 *)(si + 0x30));
  return iVar1;
}

