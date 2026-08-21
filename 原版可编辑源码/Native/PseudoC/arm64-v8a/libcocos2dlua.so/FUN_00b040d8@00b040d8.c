
undefined8
FUN_00b040d8(long *param_1,long *param_2,size_t *param_3,ulong *param_4,undefined1 param_5)

{
  void *pvVar1;
  int num;
  ulong uVar2;
  long lVar3;
  
  if ((param_2 == (long *)0x0) && (*param_1 == 0)) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: *sbuffer != NULL || buffer != NULL","crypto/bio/b_print.c",0x33b)
    ;
  }
  uVar2 = *param_3;
  if (*param_4 < uVar2) {
                    /* WARNING: Subroutine does not return */
    OPENSSL_die("assertion failed: *currlen <= *maxlen","crypto/bio/b_print.c",0x33e);
  }
  if ((param_2 != (long *)0x0) && (uVar2 == *param_4)) {
    if (0x7ffffbff < uVar2) {
      return 0;
    }
    *param_4 = uVar2 + 0x400;
    num = (int)(uVar2 + 0x400);
    if ((void *)*param_2 == (void *)0x0) {
      pvVar1 = CRYPTO_malloc(num,"crypto/bio/b_print.c",0x346);
      *param_2 = (long)pvVar1;
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      if (*param_3 != 0) {
        if ((void *)*param_1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: *sbuffer != NULL","crypto/bio/b_print.c",0x34a);
        }
        memcpy(pvVar1,(void *)*param_1,*param_3);
      }
      *param_1 = 0;
    }
    else {
      pvVar1 = CRYPTO_realloc((void *)*param_2,num,"crypto/bio/b_print.c",0x350);
      if (pvVar1 == (void *)0x0) {
        return 0;
      }
      *param_2 = (long)pvVar1;
    }
  }
  uVar2 = *param_3;
  if (uVar2 < *param_4) {
    lVar3 = *param_1;
    if (lVar3 == 0) {
      lVar3 = *param_2;
    }
    *param_3 = uVar2 + 1;
    *(undefined1 *)(lVar3 + uVar2) = param_5;
  }
  return 1;
}

