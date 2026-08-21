
int PKCS7_set_content(PKCS7 *p7,PKCS7 *p7_data)

{
  int iVar1;
  pkcs7_st **pppVar2;
  
  iVar1 = OBJ_obj2nid(p7->type);
  if (iVar1 == 0x19) {
    PKCS7_free((PKCS7 *)((p7->d).sign)->cert);
    pppVar2 = (pkcs7_st **)&((p7->d).sign)->cert;
  }
  else {
    if (iVar1 != 0x16) {
      ERR_put_error(0x21,0x6d,0x70,"crypto/pkcs7/pk7_lib.c",99);
      return 0;
    }
    PKCS7_free(((p7->d).sign)->contents);
    pppVar2 = &((p7->d).sign)->contents;
  }
  *pppVar2 = p7_data;
  return 1;
}

