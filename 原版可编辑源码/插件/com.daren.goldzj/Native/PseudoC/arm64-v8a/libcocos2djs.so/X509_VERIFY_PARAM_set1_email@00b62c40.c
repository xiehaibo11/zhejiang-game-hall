
undefined8 X509_VERIFY_PARAM_set1_email(long param_1,char *param_2,size_t param_3)

{
  long lVar1;
  
  if (param_2 == (char *)0x0) {
    param_3 = 0;
    lVar1 = 0;
  }
  else {
                    /* try { // try from 00b62c60 to 00c62c6f has its CatchHandler @ 00b62cd8 */
    if (param_3 == 0) {
      param_3 = strlen(param_2);
    }
                    /* try { // try from 00b62c70 to 00c62c9b has its CatchHandler @ 00b62bb0 */
    lVar1 = CRYPTO_memdup(param_2,param_3,"crypto/x509/x509_vpm.c",0x10a);
    if (lVar1 == 0) {
      return 0;
    }
  }
                    /* try { // try from 00b62c9c to 00c62cab has its CatchHandler @ 00b62ce8 */
  CRYPTO_free(*(void **)(param_1 + 0x50));
                    /* try { // try from 00b62cac to 00c62d07 has its CatchHandler @ 00b62bb0 */
  *(long *)(param_1 + 0x50) = lVar1;
  *(size_t *)(param_1 + 0x58) = param_3;
  return 1;
}

