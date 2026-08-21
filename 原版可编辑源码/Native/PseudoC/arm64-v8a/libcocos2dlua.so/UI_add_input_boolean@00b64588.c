
int UI_add_input_boolean
              (UI *ui,char *prompt,char *action_desc,char *ok_chars,char *cancel_chars,int flags,
              char *result_buf)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  int *ptr;
  long lVar4;
  int reason;
  int line;
  uint __c;
  
  if (ok_chars == (char *)0x0) {
    iVar2 = 0x6c;
    reason = 0x43;
    line = 0x9a;
  }
  else if (cancel_chars == (char *)0x0) {
    iVar2 = 0x6c;
    reason = 0x43;
    line = 0x9c;
  }
  else {
    __c = (uint)(byte)*ok_chars;
    pbVar1 = (byte *)ok_chars;
    if (*ok_chars != 0) {
      do {
        pcVar3 = strchr(cancel_chars,__c);
        if (pcVar3 != (char *)0x0) {
          ERR_put_error(0x28,0x6c,0x68,"crypto/ui/ui_lib.c",0xa1);
        }
        __c = (uint)pbVar1[1];
        pbVar1 = pbVar1 + 1;
      } while (__c != 0);
    }
    if (prompt == (char *)0x0) {
      iVar2 = 0x6d;
      reason = 0x43;
      line = 99;
    }
    else {
      if (result_buf != (char *)0x0) {
        ptr = CRYPTO_malloc(0x40,"crypto/ui/ui_lib.c",0x67);
        if (ptr == (int *)0x0) {
          return -1;
        }
        *(char **)(ptr + 2) = prompt;
        ptr[4] = flags;
        *ptr = 3;
        ptr[0xe] = 0;
        *(char **)(ptr + 6) = result_buf;
        lVar4 = *(long *)(ui + 8);
        if (lVar4 == 0) {
          lVar4 = OPENSSL_sk_new_null();
          *(long *)(ui + 8) = lVar4;
          if (lVar4 == 0) {
            if (((*(byte *)(ptr + 0xe) & 1) != 0) && (CRYPTO_free(*(void **)(ptr + 2)), *ptr == 3))
            {
              CRYPTO_free(*(void **)(ptr + 8));
              CRYPTO_free(*(void **)(ptr + 10));
              CRYPTO_free(*(void **)(ptr + 0xc));
            }
            CRYPTO_free(ptr);
            return -1;
          }
        }
        *(char **)(ptr + 8) = action_desc;
        *(char **)(ptr + 10) = ok_chars;
        *(char **)(ptr + 0xc) = cancel_chars;
        iVar2 = OPENSSL_sk_push(lVar4,ptr);
        if (iVar2 < 1) {
          if (((*(byte *)(ptr + 0xe) & 1) != 0) && (CRYPTO_free(*(void **)(ptr + 2)), *ptr == 3)) {
            CRYPTO_free(*(void **)(ptr + 8));
            CRYPTO_free(*(void **)(ptr + 10));
            CRYPTO_free(*(void **)(ptr + 0xc));
          }
          CRYPTO_free(ptr);
          return iVar2 + -1;
        }
        return iVar2;
      }
      iVar2 = 0x6d;
      reason = 0x69;
      line = 0x66;
    }
  }
  ERR_put_error(0x28,iVar2,reason,"crypto/ui/ui_lib.c",line);
  return -1;
}

