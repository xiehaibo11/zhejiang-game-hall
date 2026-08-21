
int _CONF_add_string(CONF *conf,CONF_VALUE *section,CONF_VALUE *value)

{
  int iVar1;
  int iVar2;
  void *ptr;
  char *pcVar3;
  
  pcVar3 = section->value;
  value->section = section->section;
  iVar1 = OPENSSL_sk_push(pcVar3,value);
  iVar2 = 0;
  if (iVar1 != 0) {
    ptr = (void *)OPENSSL_LH_insert(conf->data,value);
    if (ptr != (void *)0x0) {
      OPENSSL_sk_delete_ptr(pcVar3,ptr);
      CRYPTO_free(*(void **)((long)ptr + 8));
                    /* catch() { ... } // from try @ 00ba19bc with catch @ 00ba1a3c */
      CRYPTO_free(*(void **)((long)ptr + 0x10));
      CRYPTO_free(ptr);
    }
    iVar2 = 1;
  }
                    /* try { // try from 00ba1a58 to 00ca1a8b has its CatchHandler @ 00ba1a58
                       catch() { ... } // from try @ 00ba1a58 with catch @ 00ba1a58
                       catch() { ... } // from try @ 00ba1a90 with catch @ 00ba1a58
                       catch() { ... } // from try @ 00ba1ab4 with catch @ 00ba1a58
                       catch() { ... } // from try @ 00ba1af4 with catch @ 00ba1a58
                       catch() { ... } // from try @ 00ba1cb8 with catch @ 00ba1a58
                       catch() { ... } // from try @ 00ba1d20 with catch @ 00ba1a58
                       catch() { ... } // from try @ 00ba1d98 with catch @ 00ba1a58
                       catch() { ... } // from try @ 00ba1e2c with catch @ 00ba1a58 */
  return iVar2;
}

