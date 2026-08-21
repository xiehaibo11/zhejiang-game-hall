
X509_EXTENSION * X509_REVOKED_delete_ext(X509_REVOKED *x,int loc)

{
  X509_EXTENSION *pXVar1;
  
                    /* catch() { ... } // from try @ 00b5bef4 with catch @ 00b5bb5c */
  pXVar1 = X509v3_delete_ext(*(stack_st_X509_EXTENSION **)&x->reason,loc);
  return pXVar1;
}

