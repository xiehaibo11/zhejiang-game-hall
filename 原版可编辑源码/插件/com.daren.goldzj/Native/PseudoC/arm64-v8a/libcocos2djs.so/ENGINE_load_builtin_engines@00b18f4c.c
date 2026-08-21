
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ENGINE_load_builtin_engines(void)

{
  OPENSSL_cpuid_setup();
  OPENSSL_init_crypto(0x7600,0);
  return;
}

