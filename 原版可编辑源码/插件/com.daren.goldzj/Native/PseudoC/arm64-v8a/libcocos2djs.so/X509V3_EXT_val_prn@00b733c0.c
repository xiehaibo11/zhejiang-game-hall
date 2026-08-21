
void X509V3_EXT_val_prn(BIO *out,stack_st_CONF_VALUE *val,int indent,int ml)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  
  uVar5 = (ulong)(uint)indent;
  if (val != (stack_st_CONF_VALUE *)0x0) {
    if ((ml == 0) || (iVar1 = OPENSSL_sk_num(val,val,uVar5), iVar1 == 0)) {
      BIO_printf(out,"%*s",uVar5,&DAT_0189703a);
      iVar1 = OPENSSL_sk_num(val);
      if (iVar1 == 0) {
        BIO_puts(out,"<EMPTY>\n");
      }
    }
    iVar1 = OPENSSL_sk_num(val);
    if (0 < iVar1) {
      if (ml == 0) {
        iVar1 = 0;
        do {
          if (0 < iVar1) {
            BIO_printf(out,", ");
          }
          lVar3 = OPENSSL_sk_value(val,iVar1);
          pcVar4 = *(char **)(lVar3 + 0x10);
          if ((*(char **)(lVar3 + 8) == (char *)0x0) ||
             (pcVar4 = *(char **)(lVar3 + 8), *(char **)(lVar3 + 0x10) == (char *)0x0)) {
            BIO_puts(out,pcVar4);
          }
          else {
            BIO_printf(out,"%s:%s");
          }
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(val);
        } while (iVar1 < iVar2);
      }
      else {
        iVar1 = 0;
        do {
          BIO_printf(out,"%*s",uVar5,&DAT_0189703a);
          lVar3 = OPENSSL_sk_value(val,iVar1);
          pcVar4 = *(char **)(lVar3 + 0x10);
          if ((*(char **)(lVar3 + 8) == (char *)0x0) ||
             (pcVar4 = *(char **)(lVar3 + 8), *(char **)(lVar3 + 0x10) == (char *)0x0)) {
            BIO_puts(out,pcVar4);
          }
          else {
            BIO_printf(out,"%s:%s");
          }
          BIO_puts(out,"\n");
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(val);
        } while (iVar1 < iVar2);
      }
    }
  }
  return;
}

