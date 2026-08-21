
X509_ATTRIBUTE * X509at_delete_attr(stack_st_X509_ATTRIBUTE *x,int loc)

{
  int iVar1;
  X509_ATTRIBUTE *pXVar2;
  
  pXVar2 = (X509_ATTRIBUTE *)0x0;
  if (x != (stack_st_X509_ATTRIBUTE *)0x0) {
    iVar1 = OPENSSL_sk_num(x);
    pXVar2 = (X509_ATTRIBUTE *)0x0;
    if ((-1 < loc) && (loc < iVar1)) {
      pXVar2 = (X509_ATTRIBUTE *)OPENSSL_sk_delete(x,loc);
    }
  }
  return pXVar2;
}

