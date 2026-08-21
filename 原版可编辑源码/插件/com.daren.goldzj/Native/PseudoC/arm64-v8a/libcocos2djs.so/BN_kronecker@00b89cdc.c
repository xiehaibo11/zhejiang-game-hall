
int BN_kronecker(BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  BIGNUM *a_00;
  BIGNUM *a_01;
  BIGNUM *pBVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  
  BN_CTX_start(ctx);
  a_00 = BN_CTX_get(ctx);
  a_01 = BN_CTX_get(ctx);
  if (a_01 == (BIGNUM *)0x0) {
    bVar1 = false;
  }
  else {
    pBVar4 = BN_copy(a_00,a);
    bVar1 = pBVar4 == (BIGNUM *)0x0;
    if (pBVar4 != (BIGNUM *)0x0) {
      pBVar4 = BN_copy(a_01,b);
      bVar1 = pBVar4 == (BIGNUM *)0x0;
      if (pBVar4 != (BIGNUM *)0x0) {
        iVar2 = BN_is_zero(a_01);
        if (iVar2 != 0) {
          iVar2 = BN_abs_is_word(a_00,1);
          goto LAB_00b89d80;
        }
        iVar2 = BN_is_odd(a_00);
        if ((iVar2 == 0) && (iVar2 = BN_is_odd(a_01), iVar2 == 0)) {
          iVar2 = 0;
          goto LAB_00b89d80;
        }
        uVar5 = 0xffffffff;
        do {
          uVar5 = uVar5 + 1;
          iVar2 = BN_is_bit_set(a_01,uVar5);
        } while (iVar2 == 0);
        iVar2 = BN_rshift(a_01,a_01,uVar5);
        bVar1 = iVar2 == 0;
        if (iVar2 != 0) {
          if ((uVar5 & 1) == 0) {
            iVar8 = 1;
            iVar3 = a_01->neg;
          }
          else {
            if (a_00->top == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = *a_00->d & 7;
            }
            iVar8 = (&DAT_018c3dcc)[uVar6];
            iVar3 = a_01->neg;
          }
          iVar2 = iVar8;
          if (iVar3 != 0) {
            a_01->neg = 0;
            iVar2 = -iVar8;
            if (a_00->neg == 0) {
              iVar2 = iVar8;
            }
          }
          iVar3 = BN_is_zero(a_00);
          while (pBVar4 = a_00, iVar3 == 0) {
            uVar5 = 0xffffffff;
            do {
              uVar5 = uVar5 + 1;
              iVar3 = BN_is_bit_set(pBVar4,uVar5);
            } while (iVar3 == 0);
            iVar3 = BN_rshift(pBVar4,pBVar4,uVar5);
            if (iVar3 == 0) {
              bVar1 = true;
              goto LAB_00b89d80;
            }
            iVar3 = iVar2;
            if ((uVar5 & 1) != 0) {
              if (a_01->top == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = *a_01->d;
              }
              iVar3 = (&DAT_018c3dcc)[uVar6 & 7] * iVar2;
            }
            if (pBVar4->neg == 0) {
              if (pBVar4->top == 0) {
                uVar5 = 0;
                iVar2 = a_01->top;
                goto joined_r0x00b89f20;
              }
              uVar5 = (uint)*pBVar4->d;
              if (a_01->top == 0) goto LAB_00b89eb4;
LAB_00b89ecc:
              uVar7 = (uint)*a_01->d;
            }
            else {
              if (pBVar4->top == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = (uint)*pBVar4->d;
              }
              uVar5 = ~uVar5;
              iVar2 = a_01->top;
joined_r0x00b89f20:
              if (iVar2 != 0) goto LAB_00b89ecc;
LAB_00b89eb4:
              uVar7 = 0;
            }
            iVar2 = -iVar3;
            if ((uVar5 & uVar7 & 2) == 0) {
              iVar2 = iVar3;
            }
            iVar3 = BN_nnmod(a_01,a_01,pBVar4,ctx);
            bVar1 = iVar3 == 0;
            if (iVar3 == 0) goto LAB_00b89d80;
            pBVar4->neg = 0;
            iVar3 = BN_is_zero(a_01);
            a_00 = a_01;
            a_01 = pBVar4;
          }
          iVar3 = BN_is_one(a_01);
          if (iVar3 == 0) {
            iVar2 = 0;
          }
          goto LAB_00b89d80;
        }
      }
    }
  }
  iVar2 = -2;
LAB_00b89d80:
  BN_CTX_end(ctx);
  if (bVar1) {
    iVar2 = -2;
  }
  return iVar2;
}

