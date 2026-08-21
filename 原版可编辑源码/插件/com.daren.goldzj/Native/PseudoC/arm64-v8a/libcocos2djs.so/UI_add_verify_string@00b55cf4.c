
int UI_add_verify_string
              (UI *ui,char *prompt,int flags,char *result_buf,int minsize,int maxsize,char *test_buf
              )

{
  int iVar1;
  int *ptr;
  long lVar2;
  int line;
  
  if (prompt == (char *)0x0) {
                    /* try { // try from 00b55e1c to 00c56293 has its CatchHandler @ 00b55580 */
    iVar1 = 0x43;
    line = 99;
  }
  else {
    if (result_buf != (char *)0x0) {
      ptr = CRYPTO_malloc(0x40,"crypto/ui/ui_lib.c",0x67);
      if (ptr == (int *)0x0) {
        return -1;
      }
      *(char **)(ptr + 2) = prompt;
                    /* try { // try from 00b55d54 to 00c55dd7 has its CatchHandler @ 00b562a0 */
      ptr[0xe] = 0;
      ptr[4] = flags;
      *ptr = 2;
      *(char **)(ptr + 6) = result_buf;
      lVar2 = *(long *)(ui + 8);
      if (lVar2 == 0) {
        lVar2 = OPENSSL_sk_new_null();
        *(long *)(ui + 8) = lVar2;
        if (lVar2 == 0) {
          if (((*(byte *)(ptr + 0xe) & 1) != 0) && (CRYPTO_free(*(void **)(ptr + 2)), *ptr == 3)) {
            CRYPTO_free(*(void **)(ptr + 8));
            CRYPTO_free(*(void **)(ptr + 10));
            CRYPTO_free(*(void **)(ptr + 0xc));
          }
          CRYPTO_free(ptr);
          return -1;
        }
      }
      ptr[8] = minsize;
      ptr[9] = maxsize;
      *(char **)(ptr + 10) = test_buf;
      iVar1 = OPENSSL_sk_push(lVar2,ptr);
      if (iVar1 < 1) {
        if (((*(byte *)(ptr + 0xe) & 1) != 0) && (CRYPTO_free(*(void **)(ptr + 2)), *ptr == 3)) {
          CRYPTO_free(*(void **)(ptr + 8));
                    /* try { // try from 00b55dd8 to 00c55e07 has its CatchHandler @ 00b55580 */
          CRYPTO_free(*(void **)(ptr + 10));
          CRYPTO_free(*(void **)(ptr + 0xc));
        }
                    /* try { // try from 00b55e08 to 00c55e1b has its CatchHandler @ 00b562a0 */
        CRYPTO_free(ptr);
        return iVar1 + -1;
      }
      return iVar1;
    }
    iVar1 = 0x69;
    line = 0x66;
  }
  ERR_put_error(0x28,0x6d,iVar1,"crypto/ui/ui_lib.c",line);
  return -1;
}

