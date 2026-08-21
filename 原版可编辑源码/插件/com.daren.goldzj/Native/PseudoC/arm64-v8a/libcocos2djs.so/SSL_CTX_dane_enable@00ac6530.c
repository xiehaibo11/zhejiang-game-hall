
undefined8 SSL_CTX_dane_enable(long param_1)

{
  void *ptr;
  void *ptr_00;
  char *pcVar1;
  EVP_MD *pEVar2;
  
  if (*(long *)(param_1 + 0x308) == 0) {
    ptr = (void *)CRYPTO_zalloc(0x18,"ssl/ssl_lib.c",0x78);
    ptr_00 = (void *)CRYPTO_zalloc(3,"ssl/ssl_lib.c",0x79);
    if ((ptr == (void *)0x0) || (ptr_00 == (void *)0x0)) {
      CRYPTO_free(ptr_00);
      CRYPTO_free(ptr);
      ERR_put_error(0x14,0x15b,0x41,"ssl/ssl_lib.c",0x7e);
      return 0;
    }
    pcVar1 = OBJ_nid2sn(0x2a0);
    pEVar2 = EVP_get_digestbyname(pcVar1);
    if (pEVar2 != (EVP_MD *)0x0) {
      *(EVP_MD **)((long)ptr + 8) = pEVar2;
      *(undefined1 *)((long)ptr_00 + 1) = 1;
    }
    pcVar1 = OBJ_nid2sn(0x2a2);
    pEVar2 = EVP_get_digestbyname(pcVar1);
    if (pEVar2 != (EVP_MD *)0x0) {
      *(EVP_MD **)((long)ptr + 0x10) = pEVar2;
      *(undefined1 *)((long)ptr_00 + 2) = 2;
    }
    *(void **)(param_1 + 0x308) = ptr;
    *(void **)(param_1 + 0x310) = ptr_00;
    *(undefined1 *)(param_1 + 0x318) = 2;
  }
  return 1;
}

