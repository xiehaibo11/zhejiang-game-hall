
/* WARNING: Type propagation algorithm not settling */

BIGNUM * int_bn_mod_inverse(BIGNUM *param_1,BIGNUM *param_2,BIGNUM *param_3,BN_CTX *param_4,
                           undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  BIGNUM *pBVar5;
  BIGNUM *pBVar6;
  BIGNUM *pBVar7;
  BIGNUM *pBVar8;
  BIGNUM *pBVar9;
  BIGNUM *pBVar10;
  BIGNUM *pBVar11;
  int iVar12;
  BIGNUM *local_a0;
  BIGNUM BStack_78;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  iVar1 = BN_get_flags(param_2,4);
  if ((iVar1 == 0) && (iVar1 = BN_get_flags(param_3,4), iVar1 == 0)) {
    BN_CTX_start(param_4);
    pBVar4 = BN_CTX_get(param_4);
    pBVar7 = BN_CTX_get(param_4);
    pBVar5 = BN_CTX_get(param_4);
    pBVar8 = BN_CTX_get(param_4);
    pBVar3 = BN_CTX_get(param_4);
    pBVar6 = BN_CTX_get(param_4);
    pBVar10 = BN_CTX_get(param_4);
    pBVar9 = (BIGNUM *)0x0;
    if ((pBVar10 == (BIGNUM *)0x0) ||
       ((pBVar9 = param_1, param_1 == (BIGNUM *)0x0 && (pBVar9 = BN_new(), pBVar9 == (BIGNUM *)0x0))
       )) goto joined_r0x00b89488;
    BN_set_word(pBVar5,1);
    BN_set_word(pBVar6,0);
    pBVar11 = BN_copy(pBVar7,param_2);
    if ((pBVar11 == (BIGNUM *)0x0) ||
       ((pBVar11 = BN_copy(pBVar4,param_3), pBVar11 == (BIGNUM *)0x0 ||
        (((pBVar4->neg = 0, pBVar7->neg != 0 || (iVar1 = BN_ucmp(pBVar7,pBVar4), -1 < iVar1)) &&
         (iVar1 = BN_nnmod(pBVar7,pBVar7,pBVar4,param_4), iVar1 == 0)))))) goto joined_r0x00b89488;
    iVar1 = BN_is_odd(param_3);
    if ((iVar1 == 0) || (iVar1 = BN_num_bits(param_3), 0x800 < iVar1)) {
      iVar1 = BN_is_zero(pBVar7);
      if (iVar1 != 0) goto LAB_00b8950c;
      pBVar11 = pBVar4;
      iVar1 = -1;
      local_a0 = pBVar6;
      do {
        iVar12 = iVar1;
        pBVar4 = pBVar7;
        pBVar6 = pBVar5;
        pBVar5 = pBVar11;
        iVar1 = BN_num_bits(pBVar5);
        iVar2 = BN_num_bits(pBVar4);
        if (iVar1 == iVar2) {
          iVar1 = BN_set_word(pBVar8,1);
          if (iVar1 == 0) goto joined_r0x00b89488;
          iVar1 = BN_sub(pBVar3,pBVar5,pBVar4);
        }
        else {
          iVar1 = BN_num_bits(pBVar5);
          iVar2 = BN_num_bits(pBVar4);
          if (iVar1 == iVar2 + 1) {
            iVar1 = BN_lshift1(pBVar10,pBVar4);
            if (iVar1 == 0) goto joined_r0x00b89488;
            iVar1 = BN_ucmp(pBVar5,pBVar10);
            if (iVar1 < 0) {
              iVar1 = BN_set_word(pBVar8,1);
              pBVar7 = pBVar5;
            }
            else {
              iVar1 = BN_sub(pBVar3,pBVar5,pBVar10);
              if ((iVar1 == 0) || (iVar1 = BN_add(pBVar8,pBVar10,pBVar4), iVar1 == 0))
              goto joined_r0x00b89488;
              iVar1 = BN_ucmp(pBVar5,pBVar8);
              if (iVar1 < 0) {
                iVar1 = BN_set_word(pBVar8,2);
                goto joined_r0x00b89728;
              }
              iVar1 = BN_set_word(pBVar8,3);
              pBVar7 = pBVar3;
            }
            if (iVar1 == 0) goto joined_r0x00b89488;
            iVar1 = BN_sub(pBVar3,pBVar7,pBVar4);
          }
          else {
            iVar1 = BN_div(pBVar8,pBVar3,pBVar5,pBVar4,param_4);
          }
        }
joined_r0x00b89728:
        if (iVar1 == 0) goto joined_r0x00b89488;
        iVar1 = BN_is_one(pBVar8);
        pBVar7 = pBVar6;
        if (iVar1 == 0) {
          iVar1 = BN_is_word(pBVar8,2);
          if (iVar1 == 0) {
            iVar1 = BN_is_word(pBVar8,4);
            if (iVar1 == 0) {
              if (pBVar8->top == 1) {
                pBVar7 = BN_copy(pBVar5,pBVar6);
                if (pBVar7 == (BIGNUM *)0x0) goto joined_r0x00b89488;
                iVar1 = BN_mul_word(pBVar5,*pBVar8->d);
              }
              else {
                iVar1 = BN_mul(pBVar5,pBVar8,pBVar6,param_4);
              }
            }
            else {
              iVar1 = BN_lshift(pBVar5,pBVar6,2);
            }
          }
          else {
            iVar1 = BN_lshift1(pBVar5,pBVar6);
          }
          pBVar7 = pBVar5;
          if (iVar1 == 0) goto joined_r0x00b89488;
        }
        iVar1 = BN_add(pBVar5,pBVar7,local_a0);
        if (iVar1 == 0) goto joined_r0x00b89488;
        iVar2 = BN_is_zero(pBVar3);
        pBVar11 = pBVar4;
        pBVar7 = pBVar3;
        pBVar3 = local_a0;
        iVar1 = -iVar12;
        local_a0 = pBVar6;
      } while (iVar2 == 0);
      if (0 < iVar12) goto LAB_00b8950c;
    }
    else {
      iVar1 = BN_is_zero(pBVar7);
      while (iVar1 == 0) {
        iVar1 = 0;
        while (iVar2 = BN_is_bit_set(pBVar7,iVar1), iVar2 == 0) {
          iVar2 = BN_is_odd(pBVar5);
          if ((iVar2 != 0) && (iVar2 = BN_uadd(pBVar5,pBVar5,param_3), iVar2 == 0))
          goto joined_r0x00b89488;
          iVar1 = iVar1 + 1;
          iVar2 = BN_rshift1(pBVar5,pBVar5);
          if (iVar2 == 0) goto joined_r0x00b89488;
        }
        if ((0 < iVar1) && (iVar1 = BN_rshift(pBVar7,pBVar7,iVar1), iVar1 == 0))
        goto joined_r0x00b89488;
        iVar1 = 0;
        while (iVar2 = BN_is_bit_set(pBVar4,iVar1), iVar2 == 0) {
          iVar2 = BN_is_odd(pBVar6);
          if ((iVar2 != 0) && (iVar2 = BN_uadd(pBVar6,pBVar6,param_3), iVar2 == 0))
          goto joined_r0x00b89488;
          iVar1 = iVar1 + 1;
          iVar2 = BN_rshift1(pBVar6,pBVar6);
          if (iVar2 == 0) goto joined_r0x00b89488;
        }
        if ((0 < iVar1) && (iVar1 = BN_rshift(pBVar4,pBVar4,iVar1), iVar1 == 0))
        goto joined_r0x00b89488;
        iVar1 = BN_ucmp(pBVar7,pBVar4);
        if (iVar1 < 0) {
          iVar1 = BN_uadd(pBVar6,pBVar6,pBVar5);
          if (iVar1 == 0) goto joined_r0x00b89488;
          iVar1 = BN_usub(pBVar4,pBVar4,pBVar7);
        }
        else {
          iVar1 = BN_uadd(pBVar5,pBVar5,pBVar6);
          if (iVar1 == 0) goto joined_r0x00b89488;
          iVar1 = BN_usub(pBVar7,pBVar7,pBVar4);
        }
        if (iVar1 == 0) goto joined_r0x00b89488;
        iVar1 = BN_is_zero(pBVar7);
      }
LAB_00b8950c:
      iVar1 = BN_sub(pBVar6,param_3,pBVar6);
      if (iVar1 == 0) goto joined_r0x00b89488;
    }
    iVar1 = BN_is_one(pBVar4);
    if (iVar1 == 0) {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 1;
      }
      goto joined_r0x00b89488;
    }
    pBVar5 = pBVar9;
    if ((pBVar6->neg == 0) && (iVar1 = BN_ucmp(pBVar6,param_3), iVar1 < 0)) {
      pBVar7 = BN_copy(pBVar9,pBVar6);
      if (pBVar7 == (BIGNUM *)0x0) {
LAB_00b89878:
        pBVar5 = (BIGNUM *)0x0;
      }
    }
    else {
      iVar1 = BN_nnmod(pBVar9,pBVar6,param_3,param_4);
      if (iVar1 == 0) goto LAB_00b89878;
    }
    if (param_1 != (BIGNUM *)0x0 || pBVar5 != (BIGNUM *)0x0) goto LAB_00b8959c;
  }
  else {
    BN_CTX_start(param_4);
    pBVar3 = BN_CTX_get(param_4);
    pBVar4 = BN_CTX_get(param_4);
    pBVar5 = BN_CTX_get(param_4);
    pBVar6 = BN_CTX_get(param_4);
    pBVar7 = BN_CTX_get(param_4);
    pBVar8 = BN_CTX_get(param_4);
    pBVar9 = BN_CTX_get(param_4);
    if (pBVar9 == (BIGNUM *)0x0) {
      pBVar9 = (BIGNUM *)0x0;
    }
    else {
      pBVar9 = param_1;
      if ((param_1 != (BIGNUM *)0x0) || (pBVar9 = BN_new(), pBVar9 != (BIGNUM *)0x0)) {
        BN_set_word(pBVar5,1);
        BN_set_word(pBVar8,0);
        pBVar10 = BN_copy(pBVar4,param_2);
        if ((pBVar10 != (BIGNUM *)0x0) &&
           (pBVar10 = BN_copy(pBVar3,param_3), pBVar10 != (BIGNUM *)0x0)) {
          pBVar3->neg = 0;
          if ((pBVar4->neg != 0) || (iVar1 = BN_ucmp(pBVar4,pBVar3), -1 < iVar1)) {
            bn_init(&BStack_78);
            BN_with_flags(&BStack_78,pBVar4,4);
            iVar1 = BN_nnmod(pBVar4,&BStack_78,pBVar3,param_4);
            if (iVar1 == 0) goto joined_r0x00b89488;
          }
          iVar1 = -1;
          while (pBVar11 = pBVar7, pBVar10 = pBVar5, iVar2 = BN_is_zero(pBVar4), iVar2 == 0) {
            bn_init(&BStack_78);
            BN_with_flags(&BStack_78,pBVar3,4);
            iVar2 = BN_div(pBVar6,pBVar11,&BStack_78,pBVar4,param_4);
            if ((iVar2 == 0) || (iVar2 = BN_mul(pBVar3,pBVar6,pBVar10,param_4), iVar2 == 0))
            goto joined_r0x00b89488;
            iVar2 = BN_add(pBVar3,pBVar3,pBVar8);
            iVar1 = -iVar1;
            pBVar5 = pBVar3;
            pBVar7 = pBVar8;
            pBVar3 = pBVar4;
            pBVar4 = pBVar11;
            pBVar8 = pBVar10;
            if (iVar2 == 0) goto joined_r0x00b89488;
          }
          if ((-1 < iVar1) || (iVar1 = BN_sub(pBVar8,param_3,pBVar8), iVar1 != 0)) {
            iVar1 = BN_is_one(pBVar3);
            if (iVar1 == 0) {
              ERR_put_error(3,0x8b,0x6c,"crypto/bn/bn_gcd.c",0x262);
            }
            else if ((pBVar8->neg == 0) && (iVar1 = BN_ucmp(pBVar8,param_3), iVar1 < 0)) {
              pBVar5 = BN_copy(pBVar9,pBVar8);
              if (pBVar5 != (BIGNUM *)0x0) {
LAB_00b894e8:
                pBVar5 = pBVar9;
                if (param_1 != (BIGNUM *)0x0 || pBVar9 != (BIGNUM *)0x0) goto LAB_00b8959c;
                goto LAB_00b89598;
              }
            }
            else {
              iVar1 = BN_nnmod(pBVar9,pBVar8,param_3,param_4);
              if (iVar1 != 0) goto LAB_00b894e8;
            }
          }
        }
      }
    }
joined_r0x00b89488:
    pBVar5 = (BIGNUM *)0x0;
    if (param_1 != (BIGNUM *)0x0) goto LAB_00b8959c;
  }
LAB_00b89598:
  BN_free(pBVar9);
LAB_00b8959c:
  BN_CTX_end(param_4);
  return pBVar5;
}

