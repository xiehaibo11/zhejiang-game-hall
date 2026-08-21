
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * CONF_get1_default_config_file(void)

{
  long lVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  
  pcVar2 = getenv("OPENSSL_CONF");
  if (pcVar2 != (char *)0x0) {
    pcVar2 = CRYPTO_strdup(pcVar2,"crypto/conf/conf_mod.c",0x1e3);
    return pcVar2;
  }
  pcVar2 = X509_get_default_cert_area();
  sVar3 = strlen(pcVar2);
  lVar1 = (sVar3 << 0x20) + 0xd00000000;
  lVar5 = lVar1 >> 0x20;
  pcVar2 = CRYPTO_malloc((int)((ulong)lVar1 >> 0x20),"crypto/conf/conf_mod.c",0x1eb);
                    /* try { // try from 00b01c20 to 00c01c23 has its CatchHandler @ 00b01c3c */
                    /* try { // try from 00b01c24 to 00c01e73 has its CatchHandler @ 00b01b84 */
  if (pcVar2 != (char *)0x0) {
    pcVar4 = X509_get_default_cert_area();
    OPENSSL_strlcpy(pcVar2,pcVar4,lVar5);
                    /* catch() { ... } // from try @ 00b01c20 with catch @ 00b01c3c */
    OPENSSL_strlcat(pcVar2,"/",lVar5);
    OPENSSL_strlcat(pcVar2,"openssl.cnf",lVar5);
  }
  return pcVar2;
}

