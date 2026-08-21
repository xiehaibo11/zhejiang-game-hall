
EVP_MD * FUN_00b573d8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  char *name;
  EVP_MD *pEVar2;
  int line;
  
  if (param_1 == (undefined8 *)0x0) {
    pEVar2 = EVP_sha1();
    return pEVar2;
  }
  iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_1);
  if (iVar1 == 0x38f) {
    if (param_2 == (undefined8 *)0x0) {
      iVar1 = 0x9a;
      line = 0x1a9;
    }
    else {
      iVar1 = OBJ_obj2nid((ASN1_OBJECT *)*param_2);
      name = OBJ_nid2sn(iVar1);
      pEVar2 = EVP_get_digestbyname(name);
      if (pEVar2 != (EVP_MD *)0x0) {
        return pEVar2;
      }
      iVar1 = 0x97;
      line = 0x1ae;
    }
  }
  else {
    iVar1 = 0x99;
    line = 0x1a5;
  }
  ERR_put_error(4,0x9d,iVar1,"crypto/rsa/rsa_ameth.c",line);
  return (EVP_MD *)0x0;
}

