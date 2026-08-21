
X509_EXTENSION * X509v3_delete_ext(stack_st_X509_EXTENSION *x,int loc)

{
  int iVar1;
  X509_EXTENSION *pXVar2;
  
  pXVar2 = (X509_EXTENSION *)0x0;
  if (x != (stack_st_X509_EXTENSION *)0x0) {
    iVar1 = OPENSSL_sk_num(x);
    pXVar2 = (X509_EXTENSION *)0x0;
    if ((-1 < loc) && (loc < iVar1)) {
      pXVar2 = (X509_EXTENSION *)OPENSSL_sk_delete(x,loc);
    }
  }
  return pXVar2;
}

