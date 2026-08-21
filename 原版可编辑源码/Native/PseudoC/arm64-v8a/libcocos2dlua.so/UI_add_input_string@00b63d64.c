
int UI_add_input_string(UI *ui,char *prompt,int flags,char *result_buf,int minsize,int maxsize)

{
  int iVar1;
  int *ptr;
  long lVar2;
  int line;
  
  if (prompt == (char *)0x0) {
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
      ptr[0xe] = 0;
      ptr[4] = flags;
      *ptr = 1;
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
    iVar1 = 0x69;
    line = 0x66;
  }
  ERR_put_error(0x28,0x6d,iVar1,"crypto/ui/ui_lib.c",line);
  return -1;
}

