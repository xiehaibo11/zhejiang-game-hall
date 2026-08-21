
int BN_is_prime_fasttest_ex(BIGNUM *p,int nchecks,BN_CTX *ctx,int do_trial_division,BN_GENCB *cb)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  BIGNUM *pBVar5;
  ulong uVar6;
  BN_CTX *ctx_00;
  BIGNUM *a;
  BIGNUM *r;
  BIGNUM *rnd;
  BIGNUM *pBVar7;
  long lVar8;
  int iVar9;
  BN_MONT_CTX *mont;
  int local_64;
  
  pBVar5 = BN_value_one();
  iVar3 = BN_cmp(p,pBVar5);
  if (iVar3 < 1) {
    return 0;
  }
  if (nchecks == 0) {
    iVar3 = BN_num_bits(p);
    if (iVar3 < 0x514) {
      iVar3 = BN_num_bits(p);
      if (iVar3 < 0x352) {
        iVar3 = BN_num_bits(p);
        if (iVar3 < 0x28a) {
          iVar3 = BN_num_bits(p);
          if (iVar3 < 0x226) {
            iVar3 = BN_num_bits(p);
            if (iVar3 < 0x1c2) {
              iVar3 = BN_num_bits(p);
              if (iVar3 < 400) {
                iVar3 = BN_num_bits(p);
                if (iVar3 < 0x15e) {
                  iVar3 = BN_num_bits(p);
                  if (iVar3 < 300) {
                    iVar3 = BN_num_bits(p);
                    if (iVar3 < 0xfa) {
                      iVar3 = BN_num_bits(p);
                      if (iVar3 < 200) {
                        iVar3 = BN_num_bits(p);
                        nchecks = 0x12;
                        if (iVar3 < 0x96) {
                          nchecks = 0x1b;
                        }
                      }
                      else {
                        nchecks = 0xf;
                      }
                    }
                    else {
                      nchecks = 0xc;
                    }
                  }
                  else {
                    nchecks = 9;
                  }
                }
                else {
                  nchecks = 8;
                }
              }
              else {
                nchecks = 7;
              }
            }
            else {
              nchecks = 6;
            }
          }
          else {
            nchecks = 5;
          }
        }
        else {
          nchecks = 4;
        }
      }
      else {
        nchecks = 3;
      }
    }
    else {
      nchecks = 2;
    }
  }
  iVar3 = BN_is_odd(p);
  if (iVar3 == 0) {
    iVar3 = BN_is_word(p,2);
    return iVar3;
  }
  if (do_trial_division == 0) {
joined_r0x00bdf840:
    ctx_00 = ctx;
    if ((ctx != (BN_CTX *)0x0) || (ctx_00 = BN_CTX_new(), ctx_00 != (BN_CTX *)0x0)) {
      BN_CTX_start(ctx_00);
      pBVar5 = p;
      if (p->neg == 0) {
LAB_00bdf884:
        a = BN_CTX_get(ctx_00);
        r = BN_CTX_get(ctx_00);
        rnd = BN_CTX_get(ctx_00);
        if (((rnd != (BIGNUM *)0x0) && (pBVar7 = BN_copy(a,pBVar5), pBVar7 != (BIGNUM *)0x0)) &&
           (iVar3 = BN_sub_word(a,1), iVar3 != 0)) {
          iVar3 = BN_is_zero(a);
          if (iVar3 == 0) {
            iVar4 = 0;
            do {
              iVar4 = iVar4 + 1;
              iVar3 = BN_is_bit_set(a,iVar4);
            } while (iVar3 == 0);
            iVar3 = BN_rshift(r,a,iVar4);
            if (iVar3 == 0) {
              mont = (BN_MONT_CTX *)0x0;
            }
            else {
              mont = BN_MONT_CTX_new();
              if ((mont != (BN_MONT_CTX *)0x0) &&
                 (iVar3 = BN_MONT_CTX_set(mont,pBVar5,ctx_00), iVar3 != 0)) {
                if (nchecks < 1) {
                  iVar3 = 1;
                }
                else {
                  iVar9 = 0;
                  if (cb == (BN_GENCB *)0x0) {
                    do {
                      iVar3 = BN_pseudo_rand_range(rnd,a);
                      if (((iVar3 == 0) || (iVar3 = BN_add_word(rnd,1), iVar3 == 0)) ||
                         (iVar3 = BN_mod_exp_mont(rnd,rnd,r,pBVar5,ctx_00,mont), iVar3 == 0))
                      goto LAB_00bdf9ac;
                      iVar3 = BN_is_one(rnd);
                      if (iVar3 == 0) {
                        iVar3 = BN_cmp(rnd,a);
                        iVar1 = -iVar4;
                        while (iVar3 != 0) {
                          iVar1 = iVar1 + 1;
                          iVar3 = 0;
                          if (iVar1 == 0) goto joined_r0x00bdfb94;
                          iVar3 = BN_mod_mul(rnd,rnd,rnd,pBVar5,ctx_00);
                          if (iVar3 == 0) goto LAB_00bdf9ac;
                          iVar3 = BN_is_one(rnd);
                          if (iVar3 != 0) goto LAB_00bdfb90;
                          iVar3 = BN_cmp(rnd,a);
                        }
                      }
                      iVar9 = iVar9 + 1;
                      iVar3 = 1;
                    } while (iVar9 < nchecks);
                  }
                  else {
                    local_64 = 0;
                    do {
                      iVar3 = BN_pseudo_rand_range(rnd,a);
                      if (((iVar3 == 0) || (iVar3 = BN_add_word(rnd,1), iVar3 == 0)) ||
                         (iVar3 = BN_mod_exp_mont(rnd,rnd,r,pBVar5,ctx_00,mont), iVar3 == 0))
                      goto LAB_00bdf9ac;
                      iVar3 = BN_is_one(rnd);
                      if (iVar3 == 0) {
                        iVar3 = BN_cmp(rnd,a);
                        iVar9 = -iVar4;
                        while (iVar3 != 0) {
                          iVar9 = iVar9 + 1;
                          iVar3 = 0;
                          if (iVar9 == 0) goto joined_r0x00bdfb94;
                          iVar3 = BN_mod_mul(rnd,rnd,rnd,pBVar5,ctx_00);
                          if (iVar3 == 0) goto LAB_00bdf9ac;
                          iVar3 = BN_is_one(rnd);
                          if (iVar3 != 0) goto LAB_00bdfb90;
                          iVar3 = BN_cmp(rnd,a);
                        }
                      }
                      if (cb->ver == 2) {
                        iVar3 = (*(cb->cb).cb_1)(1,local_64,cb);
                        if (iVar3 == 0) goto LAB_00bdf9ac;
                      }
                      else {
                        if (cb->ver != 1) goto LAB_00bdf9ac;
                        if ((cb->cb).cb_1 != (_func_414 *)0x0) {
                          (*(cb->cb).cb_1)(1,local_64,cb->arg);
                        }
                      }
                      local_64 = local_64 + 1;
                      iVar3 = 1;
                    } while (local_64 < nchecks);
                  }
                }
                goto joined_r0x00bdfb94;
              }
            }
LAB_00bdf9ac:
            iVar3 = -1;
            goto joined_r0x00bdfb94;
          }
          mont = (BN_MONT_CTX *)0x0;
          iVar3 = 0;
          goto LAB_00bdf8f8;
        }
      }
      else {
        pBVar5 = BN_CTX_get(ctx_00);
        if (pBVar5 != (BIGNUM *)0x0) {
          BN_copy(pBVar5,p);
          pBVar5->neg = 0;
          goto LAB_00bdf884;
        }
      }
      mont = (BN_MONT_CTX *)0x0;
      iVar3 = -1;
      goto LAB_00bdf8f8;
    }
  }
  else {
    lVar8 = 0;
    do {
      uVar6 = BN_mod_word(p,(ulong)(ushort)(&DAT_018d4ece)[lVar8]);
      cVar2 = '\x05';
      if (uVar6 != 0xffffffffffffffff) {
        cVar2 = uVar6 == 0;
      }
      if (cVar2 != '\0') {
        if (cVar2 != '\x05') {
          return 0;
        }
        goto LAB_00bdf8e4;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < 0x7ff);
    if (cb == (BN_GENCB *)0x0) goto joined_r0x00bdf840;
    if (cb->ver == 2) {
      iVar3 = -1;
      iVar4 = (*(cb->cb).cb_1)(1,-1,cb);
      if (iVar4 == 0) {
        mont = (BN_MONT_CTX *)0x0;
        goto LAB_00bdf90c;
      }
      goto joined_r0x00bdf840;
    }
    if (cb->ver == 1) {
      if ((cb->cb).cb_1 != (_func_414 *)0x0) {
        (*(cb->cb).cb_1)(1,-1,cb->arg);
      }
      goto joined_r0x00bdf840;
    }
  }
LAB_00bdf8e4:
  mont = (BN_MONT_CTX *)0x0;
  iVar3 = -1;
LAB_00bdf90c:
  BN_MONT_CTX_free(mont);
  return iVar3;
LAB_00bdfb90:
  iVar3 = 0;
joined_r0x00bdfb94:
  if (ctx_00 == (BN_CTX *)0x0) goto LAB_00bdf90c;
LAB_00bdf8f8:
  BN_CTX_end(ctx_00);
  if (ctx == (BN_CTX *)0x0) {
    BN_CTX_free(ctx_00);
  }
  goto LAB_00bdf90c;
}

