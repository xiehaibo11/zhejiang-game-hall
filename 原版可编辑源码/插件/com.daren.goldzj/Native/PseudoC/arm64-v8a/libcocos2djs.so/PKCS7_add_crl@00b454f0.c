
int PKCS7_add_crl(PKCS7 *p7,X509_CRL *x509)

{
  stack_st_X509_CRL **ppsVar1;
  int iVar2;
  stack_st_X509_CRL *psVar3;
  int line;
  
  iVar2 = OBJ_obj2nid(p7->type);
  if ((iVar2 == 0x18) || (iVar2 == 0x16)) {
    ppsVar1 = &((p7->d).sign)->crl;
    if (*ppsVar1 == (stack_st_X509_CRL *)0x0) {
      psVar3 = (stack_st_X509_CRL *)OPENSSL_sk_new_null();
      *ppsVar1 = psVar3;
      if (psVar3 == (stack_st_X509_CRL *)0x0) {
        iVar2 = 0x41;
        line = 0x124;
        goto LAB_00b45598;
      }
    }
    X509_CRL_up_ref(x509);
    iVar2 = OPENSSL_sk_push(*ppsVar1,x509);
    if (iVar2 != 0) {
      return 1;
    }
    X509_CRL_free(x509);
  }
  else {
    iVar2 = 0x71;
    line = 0x11d;
LAB_00b45598:
    ERR_put_error(0x21,0x65,iVar2,"crypto/pkcs7/pk7_lib.c",line);
  }
  return 0;
}

