
int FUN_00ae71e4(long param_1,char *param_2)

{
  int iVar1;
  stack_st_X509_NAME *stackCAs;
  
                    /* try { // try from 00ae71e8 to 00be71ef has its CatchHandler @ 00ae7230 */
                    /* catch() { ... } // from try @ 00ae70b0 with catch @ 00ae71f0
                       try { // try from 00ae71f0 to 00be7267 has its CatchHandler @ 00ae6ed8 */
  stackCAs = *(stack_st_X509_NAME **)(param_1 + 0x98);
                    /* catch() { ... } // from try @ 00ae7088 with catch @ 00ae71f4 */
                    /* catch() { ... } // from try @ 00ae71b4 with catch @ 00ae71f8 */
                    /* catch() { ... } // from try @ 00ae718c with catch @ 00ae71fc */
  if (stackCAs == (stack_st_X509_NAME *)0x0) {
    stackCAs = (stack_st_X509_NAME *)OPENSSL_sk_new_null();
    *(stack_st_X509_NAME **)(param_1 + 0x98) = stackCAs;
    if (stackCAs == (stack_st_X509_NAME *)0x0) {
      return 0;
    }
  }
                    /* catch() { ... } // from try @ 00ae70f8 with catch @ 00ae7210 */
  iVar1 = SSL_add_dir_cert_subjects_to_stack(stackCAs,param_2);
  return iVar1;
}

