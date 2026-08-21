
int PKCS7_content_new(PKCS7 *p7,int nid)

{
  int iVar1;
  PKCS7 *p7_00;
  pkcs7_st **pppVar2;
  
  p7_00 = PKCS7_new();
  if ((p7_00 == (PKCS7 *)0x0) || (iVar1 = PKCS7_set_type(p7_00,nid), iVar1 == 0)) {
LAB_00b534e8:
    PKCS7_free(p7_00);
    iVar1 = 0;
  }
  else {
    iVar1 = OBJ_obj2nid(p7->type);
    if (iVar1 == 0x19) {
      PKCS7_free((PKCS7 *)((p7->d).sign)->cert);
      pppVar2 = (pkcs7_st **)&((p7->d).sign)->cert;
    }
    else {
      if (iVar1 != 0x16) {
        ERR_put_error(0x21,0x6d,0x70,"crypto/pkcs7/pk7_lib.c",99);
        goto LAB_00b534e8;
      }
      PKCS7_free(((p7->d).sign)->contents);
      pppVar2 = &((p7->d).sign)->contents;
    }
    *pppVar2 = p7_00;
    iVar1 = 1;
  }
  return iVar1;
}

