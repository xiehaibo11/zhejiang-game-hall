
int BN_mod_exp_mont_word(BIGNUM *r,ulong a,BIGNUM *p,BIGNUM *m,BN_CTX *ctx,BN_MONT_CTX *m_ctx)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  BIGNUM *a_00;
  ulong uVar6;
  ulong uVar7;
  ulong w;
  BN_MONT_CTX *mont;
  BIGNUM *local_68;
  
  iVar3 = BN_get_flags(p,4);
  if (iVar3 != 0) {
    iVar3 = 0x42;
    iVar4 = 0x465;
LAB_00b95400:
    ERR_put_error(3,0x75,iVar3,"crypto/bn/bn_exp.c",iVar4);
    return 0;
  }
  iVar3 = BN_is_odd(m);
  if (iVar3 == 0) {
    iVar3 = 0x66;
    iVar4 = 0x46d;
    goto LAB_00b95400;
  }
  if (m->top == 1) {
    uVar6 = *m->d;
    uVar7 = 0;
    if (uVar6 != 0) {
      uVar7 = a / uVar6;
    }
    a = a - uVar7 * uVar6;
  }
  iVar3 = BN_num_bits(p);
  if (iVar3 == 0) {
    iVar3 = BN_is_one(m);
    if (iVar3 == 0) {
      iVar3 = BN_set_word(r,1);
      return iVar3;
    }
LAB_00b95674:
    BN_set_word(r,0);
    return 1;
  }
  if (a == 0) goto LAB_00b95674;
  BN_CTX_start(ctx);
  pBVar5 = BN_CTX_get(ctx);
  a_00 = BN_CTX_get(ctx);
  local_68 = BN_CTX_get(ctx);
  iVar4 = 0;
  mont = (BN_MONT_CTX *)0x0;
  if (((pBVar5 == (BIGNUM *)0x0) || (a_00 == (BIGNUM *)0x0)) || (local_68 == (BIGNUM *)0x0)) {
LAB_00b9579c:
    if (m_ctx != (BN_MONT_CTX *)0x0) goto LAB_00b957a8;
  }
  else {
    mont = m_ctx;
    if ((m_ctx != (BN_MONT_CTX *)0x0) ||
       ((mont = BN_MONT_CTX_new(), mont != (BN_MONT_CTX *)0x0 &&
        (iVar4 = BN_MONT_CTX_set(mont,m,ctx), iVar4 != 0)))) {
      uVar7 = a;
      if (iVar3 < 2) {
        bVar1 = true;
      }
      else {
        iVar3 = iVar3 + -1;
        bVar1 = true;
        do {
          w = uVar7 * uVar7;
          uVar6 = 0;
          if (uVar7 != 0) {
            uVar6 = w / uVar7;
          }
          if (uVar6 != uVar7) {
            if (bVar1) {
              iVar4 = BN_set_word(a_00,uVar7);
              if (iVar4 != 0) {
                iVar4 = BN_to_montgomery(a_00,a_00,mont,ctx);
                pBVar5 = local_68;
joined_r0x00b9554c:
                local_68 = pBVar5;
                if (iVar4 != 0) {
                  w = 1;
                  goto LAB_00b9555c;
                }
              }
            }
            else {
              iVar4 = BN_mul_word(a_00,uVar7);
              if (iVar4 != 0) {
                iVar4 = BN_div((BIGNUM *)0x0,local_68,a_00,m,ctx);
                pBVar5 = a_00;
                a_00 = local_68;
                goto joined_r0x00b9554c;
              }
            }
            goto LAB_00b9563c;
          }
          if (bVar1) {
            bVar2 = true;
          }
          else {
LAB_00b9555c:
            iVar4 = BN_mod_mul_montgomery(a_00,a_00,a_00,mont,ctx);
            bVar2 = false;
            bVar1 = false;
            if (iVar4 == 0) goto LAB_00b9563c;
          }
          iVar3 = iVar3 + -1;
          iVar4 = BN_is_bit_set(p,iVar3);
          uVar7 = w;
          if (iVar4 != 0) {
            uVar7 = w * a;
            uVar6 = 0;
            if (a != 0) {
              uVar6 = uVar7 / a;
            }
            if (uVar6 != w) {
              if (bVar2) {
                iVar4 = BN_set_word(a_00,w);
                if (iVar4 != 0) {
                  iVar4 = BN_to_montgomery(a_00,a_00,mont,ctx);
                  bVar1 = false;
                  pBVar5 = local_68;
joined_r0x00b95634:
                  local_68 = pBVar5;
                  uVar7 = a;
                  if (iVar4 != 0) goto LAB_00b955b0;
                }
              }
              else {
                iVar4 = BN_mul_word(a_00,w);
                if (iVar4 != 0) {
                  iVar4 = BN_div((BIGNUM *)0x0,local_68,a_00,m,ctx);
                  pBVar5 = a_00;
                  a_00 = local_68;
                  goto joined_r0x00b95634;
                }
              }
LAB_00b9563c:
              iVar4 = 0;
              if (m_ctx == (BN_MONT_CTX *)0x0) goto LAB_00b957a0;
              goto LAB_00b957a8;
            }
          }
LAB_00b955b0:
        } while (0 < iVar3);
      }
      if (uVar7 == 1) {
        if (bVar1) {
          iVar3 = BN_set_word(r,1);
        }
        else {
LAB_00b95774:
          iVar3 = BN_from_montgomery(r,a_00,mont,ctx);
        }
        if (iVar3 != 0) {
          iVar4 = 1;
          goto LAB_00b9579c;
        }
      }
      else if (bVar1) {
        iVar3 = BN_set_word(a_00,uVar7);
        if (iVar3 != 0) {
          iVar3 = BN_to_montgomery(a_00,a_00,mont,ctx);
joined_r0x00b95770:
          if (iVar3 != 0) goto LAB_00b95774;
        }
      }
      else {
        iVar3 = BN_mul_word(a_00,uVar7);
        if (iVar3 != 0) {
          iVar3 = BN_div((BIGNUM *)0x0,local_68,a_00,m,ctx);
          a_00 = local_68;
          goto joined_r0x00b95770;
        }
      }
      iVar4 = 0;
      goto LAB_00b9579c;
    }
    iVar4 = 0;
  }
LAB_00b957a0:
  BN_MONT_CTX_free(mont);
LAB_00b957a8:
  BN_CTX_end(ctx);
  return iVar4;
}

