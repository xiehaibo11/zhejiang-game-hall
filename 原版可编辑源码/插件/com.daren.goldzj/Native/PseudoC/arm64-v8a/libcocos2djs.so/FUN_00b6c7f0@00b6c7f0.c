
undefined4 FUN_00b6c7f0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  BIGNUM *pBVar5;
  int *piVar6;
  BIGNUM *bn;
  ASN1_INTEGER *ai;
  undefined4 uVar7;
  ASN1_INTEGER *y;
  ASN1_INTEGER *y_00;
  ASN1_INTEGER *x;
  ASN1_INTEGER *y_01;
  
  if ((param_1 == (int *)0x0) || (*param_1 == 0)) {
    uVar7 = 1;
  }
  else if ((*param_1 == 1) && (iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2)), iVar1 != 0)) {
    iVar1 = 0;
    bn = (BIGNUM *)0x0;
    ai = (ASN1_INTEGER *)0x0;
    while( true ) {
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
      if (iVar2 + -1 <= iVar1) break;
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1);
      iVar1 = iVar1 + 1;
      piVar4 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1);
      if (piVar3 == (int *)0x0) goto LAB_00b6ca1c;
      if (*piVar3 == 1) {
        piVar3 = *(int **)(piVar3 + 2);
        piVar6 = piVar3 + 2;
LAB_00b6c898:
        x = *(ASN1_INTEGER **)piVar3;
        y = *(ASN1_INTEGER **)piVar6;
      }
      else {
        if (*piVar3 == 0) {
          piVar3 = piVar3 + 2;
          piVar6 = piVar3;
          goto LAB_00b6c898;
        }
        x = (ASN1_INTEGER *)0x0;
        y = (ASN1_INTEGER *)0x0;
      }
      if (piVar4 == (int *)0x0) {
LAB_00b6ca1c:
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: aor != NULL && min != NULL && max != NULL",
                    "crypto/x509v3/v3_asid.c",0xee);
      }
                    /* try { // try from 00b6c8bc to 00c6c907 has its CatchHandler @ 00b6c8bc
                       catch() { ... } // from try @ 00b6c8bc with catch @ 00b6c8bc
                       catch() { ... } // from try @ 00b6c92c with catch @ 00b6c8bc */
      if (*piVar4 == 1) {
        piVar4 = *(int **)(piVar4 + 2);
        piVar3 = piVar4 + 2;
LAB_00b6c8d8:
        y_00 = *(ASN1_INTEGER **)piVar4;
        y_01 = *(ASN1_INTEGER **)piVar3;
      }
      else {
        if (*piVar4 == 0) {
          piVar4 = piVar4 + 2;
          piVar3 = piVar4;
          goto LAB_00b6c8d8;
        }
        y_00 = (ASN1_INTEGER *)0x0;
        y_01 = (ASN1_INTEGER *)0x0;
      }
      iVar2 = ASN1_INTEGER_cmp(x,y_00);
                    /* try { // try from 00b6c908 to 00c6c92b has its CatchHandler @ 00b6c944 */
      if (((-1 < iVar2) || (iVar2 = ASN1_INTEGER_cmp(x,y), 0 < iVar2)) ||
         (iVar2 = ASN1_INTEGER_cmp(y_00,y_01), 0 < iVar2)) goto LAB_00b6c978;
                    /* try { // try from 00b6c92c to 00c6c957 has its CatchHandler @ 00b6c8bc */
                    /* catch() { ... } // from try @ 00b6c908 with catch @ 00b6c944 */
      if (((bn == (BIGNUM *)0x0) && (bn = BN_new(), bn == (BIGNUM *)0x0)) ||
         ((pBVar5 = ASN1_INTEGER_to_BN(y,bn), pBVar5 == (BIGNUM *)0x0 ||
          ((iVar2 = BN_add_word(bn,1), iVar2 == 0 ||
           (ai = BN_to_ASN1_INTEGER(bn,ai), ai == (ASN1_INTEGER *)0x0)))))) {
        ERR_put_error(0x22,0xa2,0x41,"crypto/x509v3/v3_asid.c",0x12e);
        uVar7 = 0;
        goto LAB_00b6c9f0;
      }
      iVar2 = ASN1_INTEGER_cmp(ai,y_00);
      if (-1 < iVar2) goto LAB_00b6c978;
    }
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
    piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1 + -1);
    if (((piVar3 == (int *)0x0) || (*piVar3 != 1)) ||
       (iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)**(undefined8 **)(piVar3 + 2),
                                 (ASN1_INTEGER *)(*(undefined8 **)(piVar3 + 2))[1]), iVar1 < 1)) {
      uVar7 = 1;
      goto LAB_00b6c9f0;
    }
LAB_00b6c978:
    uVar7 = 0;
LAB_00b6c9f0:
    ASN1_INTEGER_free(ai);
    BN_free(bn);
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

