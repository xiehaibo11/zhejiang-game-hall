
X509_EXTENSION * X509V3_EXT_i2d(int ext_nid,int crit,void *ext_struc)

{
  X509V3_EXT_METHOD *pXVar1;
  X509_EXTENSION *pXVar2;
  
  pXVar1 = X509V3_EXT_get_nid(ext_nid);
  if (pXVar1 != (X509V3_EXT_METHOD *)0x0) {
    pXVar2 = (X509_EXTENSION *)FUN_00b7d8d8(pXVar1,ext_nid,crit,ext_struc);
    return pXVar2;
  }
  ERR_put_error(0x22,0x88,0x81,"crypto/x509v3/v3_conf.c",0xb6);
  return (X509_EXTENSION *)0x0;
}

