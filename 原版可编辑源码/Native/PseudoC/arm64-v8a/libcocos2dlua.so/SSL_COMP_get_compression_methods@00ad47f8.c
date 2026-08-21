
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

stack_st_SSL_COMP * SSL_COMP_get_compression_methods(void)

{
  CRYPTO_THREAD_run_once(&DAT_01782c50,&LAB_00ad4d90);
                    /* try { // try from 00ad4828 to 00bd4847 has its CatchHandler @ 00ad48c0 */
  return DAT_01782c58;
}

