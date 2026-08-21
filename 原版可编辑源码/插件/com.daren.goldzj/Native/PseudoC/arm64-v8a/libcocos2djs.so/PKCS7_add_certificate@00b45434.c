
int PKCS7_add_certificate(PKCS7 *p7,X509 *x509)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int line;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if ((iVar2 == 0x18) || (iVar2 == 0x16)) {
    plVar1 = &((p7->d).data)->flags;
    if (*plVar1 == 0) {
      lVar3 = OPENSSL_sk_new_null();
      *plVar1 = lVar3;
      if (lVar3 == 0) {
        iVar2 = 0x41;
        line = 0x104;
        goto LAB_00b454dc;
      }
    }
    X509_up_ref(x509);
    iVar2 = OPENSSL_sk_push(*plVar1,x509);
    if (iVar2 != 0) {
      return 1;
    }
    X509_free(x509);
  }
  else {
    iVar2 = 0x71;
    line = 0xfd;
LAB_00b454dc:
    ERR_put_error(0x21,100,iVar2,"crypto/pkcs7/pk7_lib.c",line);
  }
  return 0;
}

