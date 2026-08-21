
CONF_VALUE * _CONF_new_section(CONF *conf,char *section)

{
  char *pcVar1;
  CONF_VALUE *ptr;
  size_t sVar2;
  char *__dest;
  long lVar3;
  
                    /* try { // try from 00ba1d90 to 00ca1d97 has its CatchHandler @ 00ba1e30 */
  pcVar1 = (char *)OPENSSL_sk_new_null();
                    /* try { // try from 00ba1d98 to 00ca1e23 has its CatchHandler @ 00ba1a58 */
  if (pcVar1 == (char *)0x0) {
    ptr = (CONF_VALUE *)0x0;
  }
  else {
    ptr = CRYPTO_malloc(0x18,"crypto/conf/conf_api.c",0xc4);
    if (ptr != (CONF_VALUE *)0x0) {
      sVar2 = strlen(section);
      lVar3 = (sVar2 << 0x20) + 0x100000000;
      __dest = CRYPTO_malloc((int)((ulong)lVar3 >> 0x20),"crypto/conf/conf_api.c",199);
      ptr->section = __dest;
      if (__dest != (char *)0x0) {
        memcpy(__dest,section,lVar3 >> 0x20);
        ptr->name = (char *)0x0;
        ptr->value = pcVar1;
        lVar3 = OPENSSL_LH_insert(conf->data,ptr);
        if (lVar3 == 0) {
          return ptr;
        }
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: vv == NULL","crypto/conf/conf_api.c",0xcf);
      }
    }
  }
                    /* try { // try from 00ba1e24 to 00ca1e2b has its CatchHandler @ 00ba1e2c */
  OPENSSL_sk_free(pcVar1);
                    /* catch() { ... } // from try @ 00ba1d18 with catch @ 00ba1e2c
                       catch() { ... } // from try @ 00ba1e24 with catch @ 00ba1e2c
                       try { // try from 00ba1e2c to 00ca1eff has its CatchHandler @ 00ba1a58 */
                    /* catch() { ... } // from try @ 00ba1d90 with catch @ 00ba1e30 */
  CRYPTO_free(ptr);
                    /* catch() { ... } // from try @ 00ba1d44 with catch @ 00ba1e50 */
  return (CONF_VALUE *)0x0;
}

