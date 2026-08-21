
int SSL_COMP_add_compression_method(int id,COMP_METHOD *cm)

{
  int iVar1;
  int *ptr;
  int line;
  
  if (cm == (COMP_METHOD *)0x0) {
    return 1;
  }
  iVar1 = COMP_get_type(cm);
  if (iVar1 == 0) {
    return 1;
  }
  if (0x3e < id - 0xc1U) {
    ERR_put_error(0x14,0xa5,0x133,"ssl/ssl_ciph.c",0x725);
    return 0;
  }
  CRYPTO_mem_ctrl(3);
  ptr = CRYPTO_malloc(0x18,"ssl/ssl_ciph.c",0x72a);
  if (ptr == (int *)0x0) {
    CRYPTO_mem_ctrl(2);
                    /* try { // try from 00ac5190 to 00bc519f has its CatchHandler @ 00ac5354 */
    iVar1 = 0x41;
    line = 0x72d;
  }
  else {
    *(COMP_METHOD **)(ptr + 4) = cm;
    *ptr = id;
    CRYPTO_THREAD_run_once(&DAT_01d38ed0,&LAB_00ac55bc);
    if (DAT_01d38ed8 != 0) {
      iVar1 = OPENSSL_sk_find(DAT_01d38ed8,ptr);
      if (-1 < iVar1) {
        CRYPTO_free(ptr);
        CRYPTO_mem_ctrl(2);
        iVar1 = 0x135;
        line = 0x738;
        goto LAB_00ac51f8;
      }
      if ((DAT_01d38ed8 != 0) && (iVar1 = OPENSSL_sk_push(DAT_01d38ed8,ptr), iVar1 != 0)) {
        CRYPTO_mem_ctrl(2);
        return 0;
      }
    }
    CRYPTO_free(ptr);
    CRYPTO_mem_ctrl(2);
    iVar1 = 0x41;
    line = 0x73e;
  }
LAB_00ac51f8:
  ERR_put_error(0x14,0xa5,iVar1,"ssl/ssl_ciph.c",line);
  return 1;
}

