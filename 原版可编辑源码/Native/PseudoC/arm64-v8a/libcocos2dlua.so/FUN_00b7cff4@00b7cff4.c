
undefined8 FUN_00b7cff4(BIO *param_1,int *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
                    /* try { // try from 00b7d004 to 00c7d00b has its CatchHandler @ 00b7d388 */
                    /* try { // try from 00b7d00c to 00c7d017 has its CatchHandler @ 00b7d37c */
  if (param_2 != (int *)0x0) {
    BIO_printf(param_1,"%*s%s:\n",(ulong)param_3,&DAT_013c996e,param_4);
    if (*param_2 == 0) {
      BIO_printf(param_1,"%*sinherit\n",(ulong)(param_3 + 2),&DAT_013c996e);
    }
    else {
      if (*param_2 != 1) {
        return 0;
      }
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
                    /* try { // try from 00b7d05c to 00c7d177 has its CatchHandler @ 00b7d388 */
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_2 + 2),iVar1);
          if (*piVar3 == 1) {
            pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,
                                      (ASN1_INTEGER *)**(undefined8 **)(piVar3 + 2));
            if (pcVar4 == (char *)0x0) {
              return 0;
            }
            BIO_printf(param_1,"%*s%s-",(ulong)(param_3 + 2),&DAT_013c996e,pcVar4);
            CRYPTO_free(pcVar4);
            pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,
                                      *(ASN1_INTEGER **)(*(long *)(piVar3 + 2) + 8));
            if (pcVar4 == (char *)0x0) {
              return 0;
            }
            BIO_printf(param_1,"%s\n",pcVar4);
          }
          else {
            if (*piVar3 != 0) {
              return 0;
            }
            pcVar4 = i2s_ASN1_INTEGER((X509V3_EXT_METHOD *)0x0,*(ASN1_INTEGER **)(piVar3 + 2));
            if (pcVar4 == (char *)0x0) {
              return 0;
            }
            BIO_printf(param_1,"%*s%s\n",(ulong)(param_3 + 2),&DAT_013c996e,pcVar4);
          }
          CRYPTO_free(pcVar4);
          iVar1 = iVar1 + 1;
          iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_2 + 2));
        } while (iVar1 < iVar2);
      }
    }
  }
  return 1;
}

