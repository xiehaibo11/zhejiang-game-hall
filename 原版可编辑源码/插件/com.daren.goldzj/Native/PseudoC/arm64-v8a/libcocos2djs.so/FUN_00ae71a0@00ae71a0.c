
int FUN_00ae71a0(long param_1,char *param_2)

{
  int iVar1;
  stack_st_X509_NAME *stackCAs;
  
  stackCAs = *(stack_st_X509_NAME **)(param_1 + 0x98);
                    /* try { // try from 00ae71b4 to 00be71c7 has its CatchHandler @ 00ae71f8 */
  if (stackCAs == (stack_st_X509_NAME *)0x0) {
    stackCAs = (stack_st_X509_NAME *)OPENSSL_sk_new_null();
    *(stack_st_X509_NAME **)(param_1 + 0x98) = stackCAs;
    if (stackCAs == (stack_st_X509_NAME *)0x0) {
                    /* try { // try from 00ae71e0 to 00be71e7 has its CatchHandler @ 00ae6ed8 */
      return 0;
    }
  }
                    /* try { // try from 00ae71cc to 00be71df has its CatchHandler @ 00ae7244 */
  iVar1 = SSL_add_file_cert_subjects_to_stack(stackCAs,param_2);
  return iVar1;
}

