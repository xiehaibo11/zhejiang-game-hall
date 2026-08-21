
X509 * X509_find_by_subject(stack_st_X509 *sk,X509_NAME *name)

{
  int iVar1;
  int iVar2;
  X509 *pXVar3;
  X509_NAME *a;
  
  iVar1 = OPENSSL_sk_num();
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      pXVar3 = (X509 *)OPENSSL_sk_value(sk,iVar1);
      a = (X509_NAME *)pXVar3->ex_flags;
      if ((((a->canon_enc != (uchar *)0x0) && (a->modified == 0)) ||
          (iVar2 = i2d_X509_NAME(a,(uchar **)0x0), -1 < iVar2)) &&
         ((((name->canon_enc != (uchar *)0x0 && (name->modified == 0)) ||
           (iVar2 = i2d_X509_NAME(name,(uchar **)0x0), -1 < iVar2)) &&
          ((a->canon_enclen == name->canon_enclen &&
           (iVar2 = memcmp(a->canon_enc,name->canon_enc,(long)a->canon_enclen), iVar2 == 0)))))) {
        return pXVar3;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(sk);
    } while (iVar1 < iVar2);
  }
  return (X509 *)0x0;
}

