
void X509V3_EXT_val_prn(BIO *out,stack_st_CONF_VALUE *val,int indent,int ml)

{
  int iVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  
  uVar5 = (ulong)(uint)indent;
                    /* try { // try from 00b82858 to 00c8285f has its CatchHandler @ 00b829c8 */
  if (val != (stack_st_CONF_VALUE *)0x0) {
                    /* try { // try from 00b82870 to 00c82873 has its CatchHandler @ 00b829d0 */
    if ((ml == 0) || (iVar1 = OPENSSL_sk_num(val,val,uVar5), iVar1 == 0)) {
      BIO_printf(out,"%*s",uVar5,&DAT_013c996e);
      iVar1 = OPENSSL_sk_num(val);
                    /* try { // try from 00b828a0 to 00c828a7 has its CatchHandler @ 00b82990 */
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
                    /* try { // try from 00b82984 to 00c8298f has its CatchHandler @ 00b829a8 */
            BIO_printf(out,", ");
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b828a0 with catch @ 00b82990
                       try { // try from 00b82990 to 00c829ef has its CatchHandler @ 00b8274c */
          lVar3 = OPENSSL_sk_value(val,iVar1);
          pcVar4 = *(char **)(lVar3 + 0x10);
          if ((*(char **)(lVar3 + 8) == (char *)0x0) ||
             (pcVar4 = *(char **)(lVar3 + 8), *(char **)(lVar3 + 0x10) == (char *)0x0)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b82810 with catch @ 00b829c8
                       catch(type#1 @ 00000000) { ... } // from try @ 00b82858 with catch @ 00b829c8
                        */
            BIO_puts(out,pcVar4);
          }
          else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8279c with catch @ 00b829a8
                       catch(type#1 @ 00000000) { ... } // from try @ 00b82984 with catch @ 00b829a8
                        */
            BIO_printf(out,"%s:%s");
          }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b828f8 with catch @ 00b829cc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b82870 with catch @ 00b829d0
                        */
          iVar1 = iVar1 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b8283c with catch @ 00b829d4
                        */
          iVar2 = OPENSSL_sk_num(val);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b82928 with catch @ 00b829d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b827dc with catch @ 00b829dc
                        */
        } while (iVar1 < iVar2);
      }
      else {
        iVar1 = 0;
        do {
                    /* try { // try from 00b828f8 to 00c82917 has its CatchHandler @ 00b829cc */
          BIO_printf(out,"%*s",uVar5,&DAT_013c996e);
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
                    /* try { // try from 00b829f0 to 00c829f3 has its CatchHandler @ 00b82a18 */
  return;
}

