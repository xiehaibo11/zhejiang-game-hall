
undefined8 FUN_00b6fb7c(undefined8 param_1,undefined8 param_2,BIO *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  GENERAL_NAME *pGVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  X509_NAME local_88;
  
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    iVar2 = 0;
    uVar1 = param_4 + 2;
    do {
      BIO_puts(param_3,"\n");
      puVar5 = (undefined8 *)OPENSSL_sk_value(param_2,iVar2);
      piVar8 = (int *)*puVar5;
      if (piVar8 == (int *)0x0) {
LAB_00b6fcdc:
        lVar7 = puVar5[1];
      }
      else {
        if (*piVar8 == 0) {
          BIO_printf(param_3,"%*sFull Name:\n",(ulong)param_4,&DAT_0189703a);
          uVar9 = *(undefined8 *)(piVar8 + 2);
          iVar3 = OPENSSL_sk_num(uVar9);
          if (0 < iVar3) {
            iVar3 = 0;
            do {
              BIO_printf(param_3,"%*s",(ulong)uVar1,&DAT_0189703a);
              pGVar6 = (GENERAL_NAME *)OPENSSL_sk_value(uVar9,iVar3);
              GENERAL_NAME_print(param_3,pGVar6);
              BIO_puts(param_3,"\n");
              iVar3 = iVar3 + 1;
              iVar4 = OPENSSL_sk_num(uVar9);
            } while (iVar3 < iVar4);
          }
          goto LAB_00b6fcdc;
        }
        local_88.entries = *(stack_st_X509_NAME_ENTRY **)(piVar8 + 2);
        BIO_printf(param_3,"%*sRelative Name:\n%*s",(ulong)param_4,&DAT_0189703a,(ulong)uVar1,
                   &DAT_0189703a);
        X509_NAME_print_ex(param_3,&local_88,0,0x82031f);
        BIO_puts(param_3,"\n");
        lVar7 = puVar5[1];
      }
      if (lVar7 != 0) {
        FUN_00b708a8(param_3,"Reasons",lVar7,param_4);
      }
      if (puVar5[2] != 0) {
        BIO_printf(param_3,"%*sCRL Issuer:\n",(ulong)param_4,&DAT_0189703a);
        uVar9 = puVar5[2];
        iVar3 = OPENSSL_sk_num(uVar9);
        if (0 < iVar3) {
          iVar3 = 0;
          do {
            BIO_printf(param_3,"%*s",(ulong)uVar1,&DAT_0189703a);
            pGVar6 = (GENERAL_NAME *)OPENSSL_sk_value(uVar9,iVar3);
            GENERAL_NAME_print(param_3,pGVar6);
            BIO_puts(param_3,"\n");
            iVar3 = iVar3 + 1;
            iVar4 = OPENSSL_sk_num(uVar9);
          } while (iVar3 < iVar4);
        }
      }
      iVar2 = iVar2 + 1;
      iVar3 = OPENSSL_sk_num(param_2);
    } while (iVar2 < iVar3);
  }
  return 1;
}

