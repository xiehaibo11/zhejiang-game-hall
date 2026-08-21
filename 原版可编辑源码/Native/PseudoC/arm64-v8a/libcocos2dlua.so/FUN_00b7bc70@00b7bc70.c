
undefined4 FUN_00b7bc70(int *param_1)

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
                    /* try { // try from 00b7bccc to 00c7bcdf has its CatchHandler @ 00b7be78 */
      if (iVar2 + -1 <= iVar1) break;
      piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1);
      iVar1 = iVar1 + 1;
      piVar4 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1);
      if (piVar3 == (int *)0x0) goto LAB_00b7be9c;
      if (*piVar3 == 1) {
        piVar3 = *(int **)(piVar3 + 2);
        piVar6 = piVar3 + 2;
LAB_00b7bd18:
        x = *(ASN1_INTEGER **)piVar3;
        y = *(ASN1_INTEGER **)piVar6;
      }
      else {
        if (*piVar3 == 0) {
          piVar3 = piVar3 + 2;
          piVar6 = piVar3;
          goto LAB_00b7bd18;
        }
                    /* try { // try from 00b7bd28 to 00c7bd33 has its CatchHandler @ 00b7be74 */
        x = (ASN1_INTEGER *)0x0;
        y = (ASN1_INTEGER *)0x0;
      }
      if (piVar4 == (int *)0x0) {
LAB_00b7be9c:
                    /* WARNING: Subroutine does not return */
        OPENSSL_die("assertion failed: aor != NULL && min != NULL && max != NULL",
                    "crypto/x509v3/v3_asid.c",0xee);
      }
      if (*piVar4 == 1) {
        piVar4 = *(int **)(piVar4 + 2);
        piVar3 = piVar4 + 2;
LAB_00b7bd58:
        y_00 = *(ASN1_INTEGER **)piVar4;
        y_01 = *(ASN1_INTEGER **)piVar3;
                    /* try { // try from 00b7bd60 to 00c7bddb has its CatchHandler @ 00b7be64 */
      }
      else {
        if (*piVar4 == 0) {
          piVar4 = piVar4 + 2;
          piVar3 = piVar4;
          goto LAB_00b7bd58;
        }
        y_00 = (ASN1_INTEGER *)0x0;
        y_01 = (ASN1_INTEGER *)0x0;
      }
      iVar2 = ASN1_INTEGER_cmp(x,y_00);
      if (((-1 < iVar2) || (iVar2 = ASN1_INTEGER_cmp(x,y), 0 < iVar2)) ||
         (iVar2 = ASN1_INTEGER_cmp(y_00,y_01), 0 < iVar2)) goto LAB_00b7bdf8;
      if (((bn == (BIGNUM *)0x0) && (bn = BN_new(), bn == (BIGNUM *)0x0)) ||
         ((pBVar5 = ASN1_INTEGER_to_BN(y,bn), pBVar5 == (BIGNUM *)0x0 ||
          ((iVar2 = BN_add_word(bn,1), iVar2 == 0 ||
           (ai = BN_to_ASN1_INTEGER(bn,ai), ai == (ASN1_INTEGER *)0x0)))))) {
        ERR_put_error(0x22,0xa2,0x41,"crypto/x509v3/v3_asid.c",0x12e);
        uVar7 = 0;
        goto LAB_00b7be70;
      }
      iVar2 = ASN1_INTEGER_cmp(ai,y_00);
      if (-1 < iVar2) goto LAB_00b7bdf8;
    }
    iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 2));
    piVar3 = (int *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 2),iVar1 + -1);
                    /* try { // try from 00b7be58 to 00c7be5b has its CatchHandler @ 00b7be60 */
                    /* try { // try from 00b7be5c to 00c7be9f has its CatchHandler @ 00b7b388 */
                    /* catch() { ... } // from try @ 00b7be58 with catch @ 00b7be60 */
                    /* catch() { ... } // from try @ 00b7bd60 with catch @ 00b7be64 */
                    /* catch() { ... } // from try @ 00b7b65c with catch @ 00b7be68 */
    if (((piVar3 == (int *)0x0) || (*piVar3 != 1)) ||
       (iVar1 = ASN1_INTEGER_cmp((ASN1_INTEGER *)**(undefined8 **)(piVar3 + 2),
                                 (ASN1_INTEGER *)(*(undefined8 **)(piVar3 + 2))[1]), iVar1 < 1)) {
                    /* catch() { ... } // from try @ 00b7b604 with catch @ 00b7be6c */
      uVar7 = 1;
      goto LAB_00b7be70;
    }
LAB_00b7bdf8:
    uVar7 = 0;
LAB_00b7be70:
                    /* catch() { ... } // from try @ 00b7b568 with catch @ 00b7be70 */
                    /* catch() { ... } // from try @ 00b7bd28 with catch @ 00b7be74 */
    ASN1_INTEGER_free(ai);
                    /* catch() { ... } // from try @ 00b7bccc with catch @ 00b7be78 */
                    /* catch() { ... } // from try @ 00b7b7b4 with catch @ 00b7be7c */
    BN_free(bn);
  }
  else {
    uVar7 = 0;
  }
                    /* catch() { ... } // from try @ 00b7b8a4 with catch @ 00b7be80 */
                    /* catch() { ... } // from try @ 00b7b5fc with catch @ 00b7be84
                       catch() { ... } // from try @ 00b7b72c with catch @ 00b7be84
                       catch() { ... } // from try @ 00b7ba28 with catch @ 00b7be84 */
  return uVar7;
}

