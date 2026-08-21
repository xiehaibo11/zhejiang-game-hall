
char * UI_get0_result(UI *ui,int i)

{
  int iVar1;
  int *piVar2;
  int line;
  
  if (i < 0) {
    iVar1 = 0x67;
    line = 400;
  }
  else {
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(ui + 8));
    if (i < iVar1) {
      piVar2 = (int *)OPENSSL_sk_value(*(undefined8 *)(ui + 8),i);
      if (1 < *piVar2 - 1U) {
        return (char *)0x0;
      }
      return *(char **)(piVar2 + 6);
    }
                    /* try { // try from 00b56e4c to 00c56e53 has its CatchHandler @ 00b5727c */
    iVar1 = 0x66;
    line = 0x194;
  }
  ERR_put_error(0x28,0x6b,iVar1,"crypto/ui/ui_lib.c",line);
  return (char *)0x0;
}

