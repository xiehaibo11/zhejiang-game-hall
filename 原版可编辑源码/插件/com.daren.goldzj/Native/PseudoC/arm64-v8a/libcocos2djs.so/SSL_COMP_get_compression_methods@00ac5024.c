
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

stack_st_SSL_COMP * SSL_COMP_get_compression_methods(void)

{
  CRYPTO_THREAD_run_once(&DAT_01d38ed0,&LAB_00ac55bc);
  return DAT_01d38ed8;
}

