
int UI_dup_input_boolean
              (UI *ui,char *prompt,char *action_desc,char *ok_chars,char *cancel_chars,int flags,
              char *result_buf)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  int *ptr;
  long lVar4;
  char *ptr_00;
  char *ptr_01;
  byte *ptr_02;
  char *__s;
  int reason;
  int line;
  uint __c;
  
  if (prompt == (char *)0x0) {
    ptr_00 = (char *)0x0;
  }
  else {
    ptr_00 = CRYPTO_strdup(prompt,"crypto/ui/ui_lib.c",0x10a);
    if (ptr_00 == (char *)0x0) {
      ERR_put_error(0x28,0x6e,0x41,"crypto/ui/ui_lib.c",0x10c);
      ptr_01 = (char *)0x0;
      ptr_02 = (byte *)0x0;
      goto LAB_00b56520;
    }
  }
  ptr_01 = (char *)0x0;
  if ((action_desc == (char *)0x0) ||
     (ptr_01 = CRYPTO_strdup(action_desc,"crypto/ui/ui_lib.c",0x112), ptr_01 != (char *)0x0)) {
    ptr_02 = (byte *)0x0;
    if ((ok_chars == (char *)0x0) ||
       (ptr_02 = (byte *)CRYPTO_strdup(ok_chars,"crypto/ui/ui_lib.c",0x11a), ptr_02 != (byte *)0x0))
    {
      if (cancel_chars == (char *)0x0) {
        __s = (char *)0x0;
LAB_00b564d0:
        if (ptr_02 == (byte *)0x0) {
          iVar2 = 0x6c;
          reason = 0x43;
          line = 0x9a;
        }
        else if (__s == (char *)0x0) {
          iVar2 = 0x6c;
          reason = 0x43;
          line = 0x9c;
        }
        else {
          __c = (uint)*ptr_02;
          pbVar1 = ptr_02;
          if (*ptr_02 != 0) {
            do {
              pcVar3 = strchr(__s,__c);
              if (pcVar3 != (char *)0x0) {
                ERR_put_error(0x28,0x6c,0x68,"crypto/ui/ui_lib.c",0xa1);
              }
              __c = (uint)pbVar1[1];
              pbVar1 = pbVar1 + 1;
            } while (__c != 0);
          }
          if (ptr_00 == (char *)0x0) {
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
              *(char **)(ptr + 2) = ptr_00;
              ptr[4] = flags;
              *ptr = 3;
              ptr[0xe] = 1;
              *(char **)(ptr + 6) = result_buf;
              lVar4 = *(long *)(ui + 8);
              if (lVar4 == 0) {
                lVar4 = OPENSSL_sk_new_null();
                *(long *)(ui + 8) = lVar4;
                if (lVar4 == 0) {
                  if (((*(byte *)(ptr + 0xe) & 1) != 0) &&
                     (CRYPTO_free(*(void **)(ptr + 2)), *ptr == 3)) {
                    CRYPTO_free(*(void **)(ptr + 8));
                    CRYPTO_free(*(void **)(ptr + 10));
                    CRYPTO_free(*(void **)(ptr + 0xc));
                  }
                  CRYPTO_free(ptr);
                  return -1;
                }
              }
              *(char **)(ptr + 8) = ptr_01;
              *(byte **)(ptr + 10) = ptr_02;
              *(char **)(ptr + 0xc) = __s;
              iVar2 = OPENSSL_sk_push(lVar4,ptr);
              if (iVar2 < 1) {
                if (((*(byte *)(ptr + 0xe) & 1) != 0) &&
                   (CRYPTO_free(*(void **)(ptr + 2)), *ptr == 3)) {
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
      __s = CRYPTO_strdup(cancel_chars,"crypto/ui/ui_lib.c",0x122);
      if (__s != (char *)0x0) goto LAB_00b564d0;
      iVar2 = 0x124;
    }
    else {
      iVar2 = 0x11c;
    }
    ERR_put_error(0x28,0x6e,0x41,"crypto/ui/ui_lib.c",iVar2);
  }
  else {
    ERR_put_error(0x28,0x6e,0x41,"crypto/ui/ui_lib.c",0x114);
    ptr_02 = (byte *)0x0;
  }
LAB_00b56520:
  CRYPTO_free(ptr_00);
  CRYPTO_free(ptr_01);
  CRYPTO_free(ptr_02);
  CRYPTO_free((void *)0x0);
  return -1;
}

