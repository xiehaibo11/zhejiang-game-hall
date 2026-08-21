
undefined8 FUN_00b6d43c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  ASN1_INTEGER *y;
  ASN1_INTEGER *y_00;
  ASN1_INTEGER *x;
  ASN1_INTEGER *x_00;
  
  uVar3 = 1;
  if ((param_2 != 0) && (param_1 != param_2)) {
    if (param_1 == 0) {
LAB_00b6d568:
      uVar3 = 0;
    }
    else {
      iVar1 = OPENSSL_sk_num(param_2);
      if (0 < iVar1) {
        iVar6 = 0;
        iVar1 = 0;
        y_00 = (ASN1_INTEGER *)0x0;
        y = (ASN1_INTEGER *)0x0;
        x_00 = (ASN1_INTEGER *)0x0;
        x = (ASN1_INTEGER *)0x0;
LAB_00b6d498:
        piVar4 = (int *)OPENSSL_sk_value(param_2,iVar6);
        if (piVar4 == (int *)0x0) {
LAB_00b6d58c:
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: aor != NULL && min != NULL && max != NULL",
                      "crypto/x509v3/v3_asid.c",0xee);
        }
        if (*piVar4 == 1) {
          piVar4 = *(int **)(piVar4 + 2);
          piVar5 = piVar4 + 2;
        }
        else {
          if (*piVar4 != 0) goto LAB_00b6d4dc;
          piVar4 = piVar4 + 2;
          piVar5 = piVar4;
        }
        y = *(ASN1_INTEGER **)piVar4;
        y_00 = *(ASN1_INTEGER **)piVar5;
LAB_00b6d4dc:
        do {
          iVar2 = OPENSSL_sk_num(param_1);
          if (iVar2 <= iVar1) goto LAB_00b6d568;
          piVar4 = (int *)OPENSSL_sk_value(param_1,iVar1);
          if (piVar4 == (int *)0x0) goto LAB_00b6d58c;
          if (*piVar4 == 1) {
            piVar4 = *(int **)(piVar4 + 2);
            piVar5 = piVar4 + 2;
LAB_00b6d520:
            x = *(ASN1_INTEGER **)piVar4;
            x_00 = *(ASN1_INTEGER **)piVar5;
          }
          else if (*piVar4 == 0) {
            piVar4 = piVar4 + 2;
            piVar5 = piVar4;
            goto LAB_00b6d520;
          }
          iVar2 = ASN1_INTEGER_cmp(x_00,y_00);
          if (-1 < iVar2) goto code_r0x00b6d538;
          iVar1 = iVar1 + 1;
        } while( true );
      }
      uVar3 = 1;
    }
  }
  return uVar3;
code_r0x00b6d538:
  iVar2 = ASN1_INTEGER_cmp(x,y);
  if (0 < iVar2) goto LAB_00b6d568;
  iVar6 = iVar6 + 1;
  iVar2 = OPENSSL_sk_num(param_2);
  if (iVar2 <= iVar6) {
    return 1;
  }
  goto LAB_00b6d498;
}

