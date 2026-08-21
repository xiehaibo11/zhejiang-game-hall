
int SSL_CTX_set_generate_session_id(SSL_CTX *param_1,GEN_SESSION_CB param_2)

{
  stack_st_SSL_COMP *psVar1;
  
                    /* try { // try from 00ad58d8 to 00bd58e3 has its CatchHandler @ 00ad5940 */
                    /* try { // try from 00ad58e4 to 00bd5983 has its CatchHandler @ 00ad584c */
  CRYPTO_THREAD_write_lock(param_1[1].comp_methods);
  psVar1 = param_1[1].comp_methods;
  *(GEN_SESSION_CB *)(param_1->sid_ctx + 0x18) = param_2;
  CRYPTO_THREAD_unlock(psVar1);
  return 1;
}

