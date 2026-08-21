
int X509_cmp(X509 *a,X509 *b)

{
  int iVar1;
  X509_POLICY_CACHE *__n;
  
  X509_check_purpose(a,-1,0);
  X509_check_purpose(b,-1,0);
  iVar1 = memcmp(&a[1].ex_xkusage,&b[1].ex_xkusage,0x14);
  if (iVar1 == 0) {
    if ((*(int *)&a->crldp == 0) && (*(int *)&b->crldp == 0)) {
      __n = a->policy_cache;
      if ((long)__n < (long)b->policy_cache) {
        iVar1 = -1;
      }
      else {
        if ((long)__n <= (long)b->policy_cache) {
          iVar1 = memcmp(a->akid,b->akid,(size_t)__n);
          return iVar1;
        }
        iVar1 = 1;
      }
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

