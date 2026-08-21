
int UI_dup_error_string(UI *ui,char *text)

{
  int iVar1;
  char *pcVar2;
  int *ptr;
  long lVar3;
  int reason;
  int line;
  
                    /* catch() { ... } // from try @ 00b56cf0 with catch @ 00b56abc */
  if (text == (char *)0x0) {
    iVar1 = 0x6d;
    reason = 0x43;
    line = 99;
  }
  else {
    pcVar2 = CRYPTO_strdup(text,"crypto/ui/ui_lib.c",0x155);
    if (pcVar2 != (char *)0x0) {
      ptr = CRYPTO_malloc(0x40,"crypto/ui/ui_lib.c",0x67);
      if (ptr == (int *)0x0) {
        return -1;
      }
      *(char **)(ptr + 2) = pcVar2;
      ptr[4] = 0;
      ptr[0xe] = 1;
      *ptr = 5;
      ptr[6] = 0;
      ptr[7] = 0;
      lVar3 = *(long *)(ui + 8);
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_new_null();
        *(long *)(ui + 8) = lVar3;
        if (lVar3 == 0) {
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
      iVar1 = OPENSSL_sk_push(lVar3,ptr);
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
    iVar1 = 0x65;
    reason = 0x41;
    line = 0x157;
  }
  ERR_put_error(0x28,iVar1,reason,"crypto/ui/ui_lib.c",line);
  return -1;
}

