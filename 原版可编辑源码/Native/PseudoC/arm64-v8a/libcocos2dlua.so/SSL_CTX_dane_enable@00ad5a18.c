
undefined8 SSL_CTX_dane_enable(long param_1)

{
  void *ptr;
  void *ptr_00;
  char *pcVar1;
  EVP_MD *pEVar2;
  
                    /* catch() { ... } // from try @ 00ad59e0 with catch @ 00ad5a1c
                       try { // try from 00ad5a1c to 00bd5a6f has its CatchHandler @ 00ad5984 */
  if (*(long *)(param_1 + 0x308) == 0) {
    ptr = (void *)CRYPTO_zalloc(0x18,"ssl/ssl_lib.c",0x78);
                    /* catch() { ... } // from try @ 00ad59b8 with catch @ 00ad5a4c */
                    /* catch() { ... } // from try @ 00ad59b4 with catch @ 00ad5a5c */
    ptr_00 = (void *)CRYPTO_zalloc(3,"ssl/ssl_lib.c",0x79);
    if ((ptr == (void *)0x0) || (ptr_00 == (void *)0x0)) {
      CRYPTO_free(ptr_00);
                    /* catch() { ... } // from try @ 00ad5a9c with catch @ 00ad5ae0 */
      CRYPTO_free(ptr);
                    /* catch() { ... } // from try @ 00ad5b38 with catch @ 00ad5b04 */
      ERR_put_error(0x14,0x15b,0x41,"ssl/ssl_lib.c",0x7e);
      return 0;
    }
                    /* catch() { ... } // from try @ 00ad5aa4 with catch @ 00ad5a70 */
    pcVar1 = OBJ_nid2sn(0x2a0);
    pEVar2 = EVP_get_digestbyname(pcVar1);
    if (pEVar2 != (EVP_MD *)0x0) {
      *(EVP_MD **)((long)ptr + 8) = pEVar2;
      *(undefined1 *)((long)ptr_00 + 1) = 1;
    }
    pcVar1 = OBJ_nid2sn(0x2a2);
    pEVar2 = EVP_get_digestbyname(pcVar1);
    if (pEVar2 != (EVP_MD *)0x0) {
                    /* try { // try from 00ad5a9c to 00bd5aa3 has its CatchHandler @ 00ad5ae0 */
      *(EVP_MD **)((long)ptr + 0x10) = pEVar2;
      *(undefined1 *)((long)ptr_00 + 2) = 2;
    }
                    /* try { // try from 00ad5aa4 to 00bd5b03 has its CatchHandler @ 00ad5a70 */
    *(void **)(param_1 + 0x308) = ptr;
    *(void **)(param_1 + 0x310) = ptr_00;
    *(undefined1 *)(param_1 + 0x318) = 2;
  }
  return 1;
}

