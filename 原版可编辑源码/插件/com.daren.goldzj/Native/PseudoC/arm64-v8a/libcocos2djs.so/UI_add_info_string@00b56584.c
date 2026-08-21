
int UI_add_info_string(UI *ui,char *text)

{
  int iVar1;
  int *ptr;
  long lVar2;
  
  if (text == (char *)0x0) {
                    /* try { // try from 00b56680 to 00c5668f has its CatchHandler @ 00b56a90 */
                    /* try { // try from 00b56690 to 00c566a3 has its CatchHandler @ 00b56a4c */
    ERR_put_error(0x28,0x6d,0x43,"crypto/ui/ui_lib.c",99);
  }
  else {
    ptr = CRYPTO_malloc(0x40,"crypto/ui/ui_lib.c",0x67);
    if (ptr != (int *)0x0) {
      *(char **)(ptr + 2) = text;
      ptr[0xe] = 0;
      ptr[4] = 0;
      *ptr = 4;
      ptr[6] = 0;
      ptr[7] = 0;
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
      ptr[8] = 0;
      ptr[9] = 0;
      ptr[10] = 0;
      ptr[0xb] = 0;
      iVar1 = OPENSSL_sk_push(lVar2,ptr);
      if (iVar1 < 1) {
        if (((*(byte *)(ptr + 0xe) & 1) != 0) && (CRYPTO_free(*(void **)(ptr + 2)), *ptr == 3)) {
          CRYPTO_free(*(void **)(ptr + 8));
          CRYPTO_free(*(void **)(ptr + 10));
          CRYPTO_free(*(void **)(ptr + 0xc));
        }
        CRYPTO_free(ptr);
        return iVar1 + -1;
      }
      return iVar1;
    }
  }
                    /* try { // try from 00b566a4 to 00c568e7 has its CatchHandler @ 00b562dc */
  return -1;
}

