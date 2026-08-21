
int BN_mul(BIGNUM *r,BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BIGNUM *b_00;
  long lVar5;
  BIGNUM *pBVar6;
  int iVar7;
  
                    /* try { // try from 00afdea8 to 00bfdeaf has its CatchHandler @ 00afe020 */
                    /* try { // try from 00afdeb0 to 00bfded3 has its CatchHandler @ 00afdc48 */
  iVar7 = a->top;
                    /* try { // try from 00afded4 to 00bfdee7 has its CatchHandler @ 00afe030 */
  if ((iVar7 == 0) || (iVar2 = b->top, iVar2 == 0)) {
    BN_set_word(r,0);
    return 1;
  }
  BN_CTX_start(ctx);
  if (((r != a) && (b_00 = r, r != b)) || (b_00 = BN_CTX_get(ctx), b_00 != (BIGNUM *)0x0)) {
    b_00->neg = b->neg ^ a->neg;
    iVar4 = iVar7 - iVar2;
                    /* try { // try from 00afdf20 to 00bfdf33 has its CatchHandler @ 00afe02c */
    if ((iVar7 == 8) && (iVar4 == 0)) {
      lVar5 = bn_wexpand(b_00,0x10);
                    /* try { // try from 00afdf34 to 00bfdf4b has its CatchHandler @ 00afe00c */
      if (lVar5 != 0) {
        b_00->top = 0x10;
        bn_mul_comba8(b_00->d,a->d,b->d);
        goto LAB_00afe040;
      }
    }
    else {
      iVar1 = iVar2 + iVar7;
      if (((iVar7 < 0x10) || (iVar2 < 0x10)) || (2 < iVar4 + 1U)) {
        lVar5 = bn_wexpand(b_00,iVar1);
                    /* catch() { ... } // from try @ 00afdea8 with catch @ 00afe020 */
        if (lVar5 != 0) {
          b_00->top = iVar1;
                    /* catch() { ... } // from try @ 00afde3c with catch @ 00afe028 */
                    /* catch() { ... } // from try @ 00afdd20 with catch @ 00afe02c
                       catch() { ... } // from try @ 00afdf20 with catch @ 00afe02c */
                    /* catch() { ... } // from try @ 00afded4 with catch @ 00afe030 */
          bn_mul_normal(b_00->d,a->d,iVar7,b->d,iVar2);
          goto LAB_00afe040;
        }
      }
      else {
        iVar3 = iVar7;
        if (iVar4 < 0) {
          iVar3 = iVar2;
        }
        iVar4 = BN_num_bits_word((long)iVar3);
        pBVar6 = BN_CTX_get(ctx);
        if (pBVar6 != (BIGNUM *)0x0) {
          iVar4 = 1 << (ulong)(iVar4 - 1U & 0x1f);
          iVar3 = iVar7 - iVar4;
          if ((iVar3 == 0 || iVar7 < iVar4) && (iVar2 - iVar4 == 0 || iVar2 < iVar4)) {
            lVar5 = bn_wexpand(pBVar6,iVar4 << 2);
                    /* try { // try from 00afdfe4 to 00bfdfeb has its CatchHandler @ 00afe004 */
            if ((lVar5 != 0) && (lVar5 = bn_wexpand(b_00,iVar4 << 2), lVar5 != 0)) {
                    /* try { // try from 00afdfec to 00bfdff3 has its CatchHandler @ 00afe000 */
                    /* try { // try from 00afdff4 to 00bfe0b3 has its CatchHandler @ 00afdc48 */
                    /* catch() { ... } // from try @ 00afdfec with catch @ 00afe000 */
                    /* catch() { ... } // from try @ 00afdfe4 with catch @ 00afe004 */
              bn_mul_recursive(b_00->d,a->d,b->d,iVar4,iVar3,iVar2 - iVar4,pBVar6->d);
                    /* catch() { ... } // from try @ 00afdf34 with catch @ 00afe00c */
              b_00->top = iVar1;
                    /* catch() { ... } // from try @ 00afdd0c with catch @ 00afe010 */
LAB_00afe040:
              bn_correct_top(b_00);
              if (b_00 != r) {
                    /* catch() { ... } // from try @ 00afddc8 with catch @ 00afe050 */
                    /* catch() { ... } // from try @ 00afdd6c with catch @ 00afe054 */
                BN_copy(r,b_00);
              }
              iVar7 = 1;
              goto LAB_00afe0b4;
            }
          }
          else {
                    /* catch() { ... } // from try @ 00afddd8 with catch @ 00afe064 */
                    /* catch() { ... } // from try @ 00afdd7c with catch @ 00afe068 */
            lVar5 = bn_wexpand(pBVar6,iVar4 << 3);
            if ((lVar5 != 0) && (lVar5 = bn_wexpand(b_00,iVar4 << 3), lVar5 != 0)) {
              bn_mul_part_recursive(b_00->d,a->d,b->d,iVar4,iVar3,iVar2 - iVar4,pBVar6->d);
              b_00->top = iVar1;
              goto LAB_00afe040;
            }
          }
        }
      }
    }
  }
  iVar7 = 0;
LAB_00afe0b4:
  BN_CTX_end(ctx);
  return iVar7;
}

