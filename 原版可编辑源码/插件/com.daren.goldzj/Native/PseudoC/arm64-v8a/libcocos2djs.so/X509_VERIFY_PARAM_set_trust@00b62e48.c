
int X509_VERIFY_PARAM_set_trust(X509_VERIFY_PARAM *param,int trust)

{
  int iVar1;
  
                    /* try { // try from 00b62e4c to 00c630ab has its CatchHandler @ 00b62d08 */
  iVar1 = X509_TRUST_set(&param->trust,trust);
  return iVar1;
}

