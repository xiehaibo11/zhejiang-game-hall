
int X509_check_issued(X509 *issuer,X509 *subject)

{
  int iVar1;
  X509_NAME *a;
  X509_NAME *b;
  
  a = X509_get_subject_name(issuer);
  b = X509_get_issuer_name(subject);
  iVar1 = X509_NAME_cmp(a,b);
  if (iVar1 == 0) {
    FUN_00b8305c(issuer);
    FUN_00b8305c(subject);
    if (((AUTHORITY_KEYID *)subject[1].name == (AUTHORITY_KEYID *)0x0) ||
       (iVar1 = X509_check_akid(issuer,(AUTHORITY_KEYID *)subject[1].name), iVar1 == 0)) {
      if ((*(byte *)((long)&subject[1].sig_alg + 1) >> 2 & 1) == 0) {
        if (((*(uint *)&issuer[1].sig_alg >> 1 & 1) != 0) &&
           ((*(byte *)((long)&issuer[1].sig_alg + 4) >> 2 & 1) == 0)) {
          return 0x20;
        }
      }
      else if (((*(uint *)&issuer[1].sig_alg >> 1 & 1) != 0) &&
              (-1 < *(char *)((long)&issuer[1].sig_alg + 4))) {
        return 0x27;
      }
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0x1d;
  }
  return iVar1;
}

