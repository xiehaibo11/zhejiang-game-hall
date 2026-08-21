
CONF_VALUE * _CONF_new_section(CONF *conf,char *section)

{
  char *pcVar1;
  CONF_VALUE *ptr;
  size_t sVar2;
  char *__dest;
  long lVar3;
  
  pcVar1 = (char *)OPENSSL_sk_new_null();
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
  OPENSSL_sk_free(pcVar1);
  CRYPTO_free(ptr);
  return (CONF_VALUE *)0x0;
}

