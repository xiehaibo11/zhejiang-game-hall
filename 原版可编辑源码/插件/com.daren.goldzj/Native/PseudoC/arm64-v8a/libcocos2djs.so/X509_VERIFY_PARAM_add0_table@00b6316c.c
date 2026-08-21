
int X509_VERIFY_PARAM_add0_table(X509_VERIFY_PARAM *param)

{
  int iVar1;
  X509_VERIFY_PARAM *param_00;
  
                    /* try { // try from 00b6317c to 00c63183 has its CatchHandler @ 00b63498 */
                    /* try { // try from 00b63188 to 00c6318f has its CatchHandler @ 00b63480 */
  if (DAT_01d3b218 == 0) {
    DAT_01d3b218 = OPENSSL_sk_new(&LAB_00b631fc);
    if (DAT_01d3b218 == 0) {
      return 0;
    }
  }
  else {
                    /* try { // try from 00b63190 to 00c63197 has its CatchHandler @ 00b63470 */
    iVar1 = OPENSSL_sk_find(DAT_01d3b218,param);
                    /* try { // try from 00b63198 to 00c632db has its CatchHandler @ 00b630ac */
    if (iVar1 != -1) {
      param_00 = (X509_VERIFY_PARAM *)OPENSSL_sk_value(DAT_01d3b218,iVar1);
      X509_VERIFY_PARAM_free(param_00);
      OPENSSL_sk_delete(DAT_01d3b218,iVar1);
    }
  }
  iVar1 = OPENSSL_sk_push(DAT_01d3b218,param);
  return (uint)(iVar1 != 0);
}

