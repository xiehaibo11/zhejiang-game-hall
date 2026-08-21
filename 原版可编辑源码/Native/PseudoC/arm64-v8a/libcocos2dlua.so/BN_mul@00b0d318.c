
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
  
  iVar7 = a->top;
  if ((iVar7 == 0) || (iVar2 = b->top, iVar2 == 0)) {
    BN_set_word(r,0);
    return 1;
  }
  BN_CTX_start(ctx);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00b0d2d0 with catch @ 00b0d37c
                        */
  if (((r != a) && (b_00 = r, r != b)) || (b_00 = BN_CTX_get(ctx), b_00 != (BIGNUM *)0x0)) {
    b_00->neg = b->neg ^ a->neg;
    iVar4 = iVar7 - iVar2;
    if ((iVar7 == 8) && (iVar4 == 0)) {
      lVar5 = bn_wexpand(b_00,0x10);
      if (lVar5 != 0) {
        b_00->top = 0x10;
        bn_mul_comba8(b_00->d,a->d,b->d);
        goto LAB_00b0d4c0;
      }
    }
    else {
      iVar1 = iVar2 + iVar7;
      if (((iVar7 < 0x10) || (iVar2 < 0x10)) || (2 < iVar4 + 1U)) {
        lVar5 = bn_wexpand(b_00,iVar1);
        if (lVar5 != 0) {
          b_00->top = iVar1;
          bn_mul_normal(b_00->d,a->d,iVar7,b->d,iVar2);
          goto LAB_00b0d4c0;
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
            if ((lVar5 != 0) && (lVar5 = bn_wexpand(b_00,iVar4 << 2), lVar5 != 0)) {
              bn_mul_recursive(b_00->d,a->d,b->d,iVar4,iVar3,iVar2 - iVar4,pBVar6->d);
              b_00->top = iVar1;
LAB_00b0d4c0:
              bn_correct_top(b_00);
              if (b_00 != r) {
                BN_copy(r,b_00);
              }
              iVar7 = 1;
              goto LAB_00b0d534;
            }
          }
          else {
            lVar5 = bn_wexpand(pBVar6,iVar4 << 3);
            if ((lVar5 != 0) && (lVar5 = bn_wexpand(b_00,iVar4 << 3), lVar5 != 0)) {
              bn_mul_part_recursive(b_00->d,a->d,b->d,iVar4,iVar3,iVar2 - iVar4,pBVar6->d);
              b_00->top = iVar1;
              goto LAB_00b0d4c0;
            }
          }
        }
      }
    }
  }
  iVar7 = 0;
LAB_00b0d534:
  BN_CTX_end(ctx);
                    /* catch() { ... } // from try @ 00b0d6a0 with catch @ 00b0d554 */
  return iVar7;
}

