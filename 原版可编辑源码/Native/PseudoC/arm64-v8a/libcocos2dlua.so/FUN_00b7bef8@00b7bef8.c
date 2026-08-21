
undefined4 FUN_00b7bef8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ASN1_VALUE *val;
  BIGNUM *pBVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  ASN1_VALUE *pAVar8;
  int *piVar9;
  ASN1_VALUE *pAVar10;
  undefined4 uVar11;
  ASN1_INTEGER *y;
  ASN1_INTEGER *ai;
  BIGNUM *bn;
  ASN1_INTEGER *y_00;
  ASN1_INTEGER *y_01;
  ASN1_INTEGER *x;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
                    /* try { // try from 00b7c170 to 00c7c17b has its CatchHandler @ 00b7ca84 */
    uVar11 = 1;
  }
  else if ((*param_1 == 1) && (iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2)), iVar1 != 0)) {
    OPENSSL_sk_sort(*(undefined8 *)(param_1 + 2));
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
    uVar6 = *(undefined8 *)(param_1 + 2);
    if (iVar1 < 2) {
      bn = (BIGNUM *)0x0;
      ai = (ASN1_INTEGER *)0x0;
    }
    else {
      ai = (ASN1_INTEGER *)0x0;
      bn = (BIGNUM *)0x0;
      iVar1 = 0;
      do {
        piVar3 = (int *)OPENSSL_sk_value(uVar6,iVar1);
        val = (ASN1_VALUE *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1 + 1);
        if (piVar3 == (int *)0x0) goto LAB_00b7c29c;
        if (*piVar3 == 1) {
          piVar7 = *(int **)(piVar3 + 2);
          piVar9 = piVar7 + 2;
LAB_00b7bfbc:
          x = *(ASN1_INTEGER **)piVar7;
          y_00 = *(ASN1_INTEGER **)piVar9;
        }
        else {
          if (*piVar3 == 0) {
                    /* try { // try from 00b7bfa0 to 00c7c16f has its CatchHandler @ 00b7bfa0
                       catch() { ... } // from try @ 00b7bfa0 with catch @ 00b7bfa0
                       catch() { ... } // from try @ 00b7ca70 with catch @ 00b7bfa0 */
            piVar7 = piVar3 + 2;
            piVar9 = piVar7;
            goto LAB_00b7bfbc;
          }
          x = (ASN1_INTEGER *)0x0;
          y_00 = (ASN1_INTEGER *)0x0;
        }
        if (val == (ASN1_VALUE *)0x0) {
LAB_00b7c29c:
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: aor != NULL && min != NULL && max != NULL",
                      "crypto/x509v3/v3_asid.c",0xee);
        }
        if (*(int *)val == 1) {
          pAVar8 = *(ASN1_VALUE **)(val + 8);
          pAVar10 = pAVar8 + 8;
LAB_00b7c000:
          y = *(ASN1_INTEGER **)pAVar8;
          y_01 = *(ASN1_INTEGER **)pAVar10;
        }
        else {
          if (*(int *)val == 0) {
            pAVar8 = val + 8;
            pAVar10 = pAVar8;
            goto LAB_00b7c000;
          }
          y = (ASN1_INTEGER *)0x0;
          y_01 = (ASN1_INTEGER *)0x0;
        }
        iVar2 = ASN1_INTEGER_cmp(x,y);
        if (0 < iVar2) {
                    /* WARNING: Subroutine does not return */
          OPENSSL_die("assertion failed: ASN1_INTEGER_cmp(a_min, b_min) <= 0",
                      "crypto/x509v3/v3_asid.c",0x187);
        }
        iVar2 = ASN1_INTEGER_cmp(x,y_00);
        if ((0 < iVar2) || (iVar2 = ASN1_INTEGER_cmp(y,y_01), 0 < iVar2)) goto LAB_00b7c248;
        iVar2 = ASN1_INTEGER_cmp(y_00,y);
        if (-1 < iVar2) {
                    /* try { // try from 00b7c204 to 00c7c20b has its CatchHandler @ 00b7ca98 */
                    /* try { // try from 00b7c20c to 00c7c217 has its CatchHandler @ 00b7ca80 */
          ERR_put_error(0x22,0xa1,0x74,"crypto/x509v3/v3_asid.c",0x195);
          goto LAB_00b7c248;
        }
        if ((bn == (BIGNUM *)0x0) && (bn = BN_new(), bn == (BIGNUM *)0x0)) {
          bn = (BIGNUM *)0x0;
LAB_00b7c22c:
          iVar1 = 0x1a2;
LAB_00b7c244:
          ERR_put_error(0x22,0xa1,0x41,"crypto/x509v3/v3_asid.c",iVar1);
          goto LAB_00b7c248;
        }
        pBVar4 = ASN1_INTEGER_to_BN(y_00,bn);
        if (((pBVar4 == (BIGNUM *)0x0) || (iVar2 = BN_add_word(bn,1), iVar2 == 0)) ||
           (ai = BN_to_ASN1_INTEGER(bn,ai), ai == (ASN1_INTEGER *)0x0)) goto LAB_00b7c22c;
        iVar2 = ASN1_INTEGER_cmp(ai,y);
        if (iVar2 == 0) {
          if (*piVar3 == 1) {
            ASN1_INTEGER_free(*(ASN1_STRING **)(*(long *)(piVar3 + 2) + 8));
            *(ASN1_INTEGER **)(*(long *)(piVar3 + 2) + 8) = y_01;
LAB_00b7c10c:
            if (*(int *)val == 1) {
              pAVar8 = *(ASN1_VALUE **)(val + 8);
LAB_00b7c12c:
              *(undefined8 *)(pAVar8 + 8) = 0;
            }
            else {
              pAVar8 = val;
              if (*(int *)val == 0) goto LAB_00b7c12c;
            }
            ASN1_item_free(val,(ASN1_ITEM *)ASIdOrRange_it);
            OPENSSL_sk_delete(*(undefined8 *)(param_1 + 2),iVar1 + 1);
            iVar1 = iVar1 + -1;
            goto LAB_00b7c150;
          }
          if (*piVar3 != 0) goto LAB_00b7c10c;
          puVar5 = CRYPTO_malloc(0x10,"crypto/x509v3/v3_asid.c",0x1ad);
          if (puVar5 != (undefined8 *)0x0) {
            *puVar5 = x;
            puVar5[1] = y_01;
            *piVar3 = 1;
            *(undefined8 **)(piVar3 + 2) = puVar5;
            goto LAB_00b7c10c;
          }
          iVar1 = 0x1af;
          goto LAB_00b7c244;
        }
LAB_00b7c150:
        iVar1 = iVar1 + 1;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
        uVar6 = *(undefined8 *)(param_1 + 2);
      } while (iVar1 < iVar2 + -1);
    }
    iVar1 = OPENSSL_sk_num(uVar6);
    piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1 + -1);
    if (((piVar3 == (int *)0x0) || (*piVar3 != 1)) ||
       (iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)**(undefined8 **)(piVar3 + 2),
                                 (ASN1_INTEGER *)(*(undefined8 **)(piVar3 + 2))[1]), iVar1 < 1)) {
      iVar1 = FUN_00b7bc70(param_1);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: ASIdentifierChoice_is_canonical(choice)",
                    "crypto/x509v3/v3_asid.c",0x1d9);
      }
      uVar11 = 1;
    }
    else {
LAB_00b7c248:
      uVar11 = 0;
    }
    ASN1_INTEGER_free(ai);
    BN_free(bn);
  }
  else {
    ERR_put_error(0x22,0xa1,0x74,"crypto/x509v3/v3_asid.c",0x16e);
    uVar11 = 0;
  }
                    /* try { // try from 00b7c264 to 00c7c277 has its CatchHandler @ 00b7ca7c */
  return uVar11;
}

