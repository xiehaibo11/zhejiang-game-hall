
int BN_generate_prime_ex(BIGNUM *ret,int bits,int safe,BIGNUM *add,BIGNUM *rem,BN_GENCB *cb)

{
  ulong uVar1;
  ushort uVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *ptr;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *rem_00;
  BIGNUM *rnd;
  BIGNUM *r_00;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int local_70;
  
  if (bits < 0x514) {
    if (bits < 0x352) {
      if (bits < 0x28a) {
        if (bits < 0x226) {
          if (bits < 0x1c2) {
            if (bits < 400) {
              if (bits < 0x15e) {
                if (bits < 300) {
                  if (bits < 0xfa) {
                    if (bits < 200) {
                      if (bits < 2) {
                        iVar10 = 0x71;
                      }
                      else {
                        iVar10 = 0x12;
                        if (bits < 0x96) {
                          iVar10 = 0x1b;
                        }
                        if ((bits != 2) || (safe == 0)) goto LAB_00bdee40;
                        iVar10 = 0x75;
                      }
                      ERR_put_error(3,0x8d,0x76,"crypto/bn/bn_prime.c",iVar10);
                      return 0;
                    }
                    iVar10 = 0xf;
                  }
                  else {
                    iVar10 = 0xc;
                  }
                }
                else {
                  iVar10 = 9;
                }
              }
              else {
                iVar10 = 8;
              }
            }
            else {
              iVar10 = 7;
            }
          }
          else {
            iVar10 = 6;
          }
        }
        else {
          iVar10 = 5;
        }
      }
      else {
        iVar10 = 4;
      }
    }
    else {
      iVar10 = 3;
    }
  }
  else {
    iVar10 = 2;
  }
LAB_00bdee40:
  ptr = (void *)CRYPTO_zalloc(0x1000,"crypto/bn/bn_prime.c",0x79);
  if ((ptr == (void *)0x0) || (ctx = BN_CTX_new(), ctx == (BN_CTX *)0x0)) {
    CRYPTO_free(ptr);
    ctx = (BN_CTX *)0x0;
    iVar4 = 0;
  }
  else {
    BN_CTX_start(ctx);
    r = BN_CTX_get(ctx);
    if (r == (BIGNUM *)0x0) {
      CRYPTO_free(ptr);
      iVar4 = 0;
    }
    else {
      local_70 = 0;
      iVar4 = local_70;
LAB_00bdeefc:
      do {
        local_70 = iVar4;
        if (add == (BIGNUM *)0x0) {
          iVar4 = BN_rand(ret,bits,1,1);
          if (iVar4 == 0) {
LAB_00bdf404:
            iVar4 = 0;
          }
          else if (bits < 0x41) {
            uVar8 = 0xffffffffffffba38;
            do {
              lVar12 = 0;
              do {
                uVar9 = BN_mod_word(ret,(ulong)(ushort)(&DAT_018d4ece)[lVar12]);
                if (uVar9 == 0xffffffffffffffff) goto LAB_00bdf404;
                *(short *)((long)ptr + lVar12 * 2 + 2) = (short)uVar9;
                lVar12 = lVar12 + 1;
              } while (lVar12 < 0x7ff);
              uVar7 = BN_get_word(ret);
              uVar9 = 0;
              uVar11 = ((1L << ((ulong)(uint)bits & 0x3f)) + -1) - uVar7;
              if (bits == 0x40) {
                uVar11 = ~uVar7;
              }
              if (uVar8 <= uVar11) {
                uVar11 = uVar8;
              }
              do {
                uVar8 = uVar11;
                uVar11 = BN_get_word(ret);
                lVar12 = 0;
LAB_00bdf03c:
                uVar7 = (ulong)(ushort)(&DAT_018d4ece)[lVar12];
                if (uVar11 <= uVar7) goto LAB_00bdf080;
                uVar1 = uVar9 + *(ushort *)((long)ptr + lVar12 * 2 + 2);
                uVar3 = 0;
                if (uVar7 != 0) {
                  uVar3 = uVar1 / uVar7;
                }
                if (uVar1 != uVar3 * uVar7) goto code_r0x00bdf060;
                uVar9 = uVar9 + 2;
                uVar11 = uVar8;
              } while (uVar9 <= uVar8);
LAB_00bdf0a0:
              iVar5 = BN_rand(ret,bits,1,1);
              iVar4 = 0;
            } while (iVar5 != 0);
          }
          else {
            do {
              lVar12 = 0;
              do {
                uVar8 = BN_mod_word(ret,(ulong)(ushort)(&DAT_018d4ece)[lVar12]);
                if (uVar8 == 0xffffffffffffffff) goto LAB_00bdf404;
                *(short *)((long)ptr + lVar12 * 2 + 2) = (short)uVar8;
                lVar12 = lVar12 + 1;
              } while (lVar12 < 0x7ff);
              uVar8 = 0;
              do {
                lVar12 = 0;
                while( true ) {
                  uVar7 = (ulong)(ushort)(&DAT_018d4ece)[lVar12];
                  uVar9 = uVar8 + *(ushort *)((long)ptr + lVar12 * 2 + 2);
                  uVar11 = 0;
                  if (uVar7 != 0) {
                    uVar11 = uVar9 / uVar7;
                  }
                  if (uVar9 - uVar11 * uVar7 < 2) break;
                  lVar12 = lVar12 + 1;
                  if (0x7fe < lVar12) {
                    iVar4 = BN_add_word(ret,uVar8);
                    if (iVar4 == 0) goto LAB_00bdf404;
                    iVar4 = BN_num_bits(ret);
                    if (iVar4 == bits) goto joined_r0x00bdf25c;
                    goto LAB_00bdf158;
                  }
                }
                uVar8 = uVar8 + 2;
              } while (uVar8 < 0xffffffffffffba39);
LAB_00bdf158:
              iVar5 = BN_rand(ret,bits,1,1);
              iVar4 = 0;
            } while (iVar5 != 0);
          }
          goto LAB_00bdf408;
        }
        if (safe != 0) {
          BN_CTX_start(ctx);
          rem_00 = BN_CTX_get(ctx);
          rnd = BN_CTX_get(ctx);
          r_00 = BN_CTX_get(ctx);
          if ((((r_00 != (BIGNUM *)0x0) && (iVar4 = BN_rshift1(r_00,add), iVar4 != 0)) &&
              (iVar4 = BN_rand(rnd,bits + -1,0,1), iVar4 != 0)) &&
             ((iVar4 = BN_div((BIGNUM *)0x0,rem_00,rnd,r_00,ctx), iVar4 != 0 &&
              (iVar4 = BN_sub(rnd,rnd,rem_00), iVar4 != 0)))) {
            if (rem == (BIGNUM *)0x0) {
              iVar4 = BN_add_word(rnd,1);
            }
            else {
              iVar4 = BN_rshift1(rem_00,rem);
              if (iVar4 == 0) goto LAB_00bdf3fc;
              iVar4 = BN_add(rnd,rnd,rem_00);
            }
            if ((iVar4 != 0) && (iVar4 = BN_lshift1(ret,rnd), iVar4 != 0)) {
              iVar4 = BN_add_word(ret,1);
              while (iVar4 != 0) {
                lVar12 = 0;
                while( true ) {
                  uVar2 = (&DAT_018d4ece)[lVar12];
                  uVar8 = BN_mod_word(ret,(ulong)uVar2);
                  uVar9 = BN_mod_word(rnd,(ulong)uVar2);
                  if ((uVar8 == 0xffffffffffffffff) || (uVar9 == 0xffffffffffffffff))
                  goto LAB_00bdf3fc;
                  if ((uVar8 == 0) || (uVar9 == 0)) break;
                  lVar12 = lVar12 + 1;
                  if (0x7fe < lVar12) {
                    BN_CTX_end(ctx);
                    goto joined_r0x00bdf25c;
                  }
                }
                iVar4 = BN_add(ret,ret,add);
                if (iVar4 == 0) break;
                iVar4 = BN_add(rnd,rnd,r_00);
              }
            }
          }
LAB_00bdf3fc:
          BN_CTX_end(ctx);
          goto LAB_00bdf404;
        }
        iVar4 = bn_probable_prime_dh(ret,bits,add,rem,ctx);
        if (iVar4 == 0) goto LAB_00bdf404;
joined_r0x00bdf25c:
        if (cb != (BN_GENCB *)0x0) {
          if (cb->ver == 2) {
            iVar4 = (*(cb->cb).cb_1)(0,local_70,cb);
            if (iVar4 != 0) goto LAB_00bdf2a8;
          }
          else if (cb->ver == 1) {
            if ((cb->cb).cb_1 != (_func_414 *)0x0) {
              (*(cb->cb).cb_1)(0,local_70,cb->arg);
            }
            goto LAB_00bdf2a8;
          }
          goto LAB_00bdf404;
        }
LAB_00bdf2a8:
        iVar4 = local_70 + 1;
        if (safe != 0) {
          iVar5 = BN_rshift1(r,ret);
          if (iVar5 == 0) goto LAB_00bdf404;
          if (cb == (BN_GENCB *)0x0) {
            iVar5 = 0;
            while( true ) {
              iVar6 = BN_is_prime_fasttest_ex(ret,1,ctx,0,(BN_GENCB *)0x0);
              if (iVar6 == -1) goto LAB_00bdf404;
              if (iVar6 == 0) break;
              iVar6 = BN_is_prime_fasttest_ex(r,1,ctx,0,(BN_GENCB *)0x0);
              if (iVar6 == -1) goto LAB_00bdf404;
              if (iVar6 == 0) break;
              iVar5 = iVar5 + 1;
              if (iVar10 <= iVar5) goto LAB_00bdf3f4;
            }
          }
          else {
            iVar5 = 0;
            while( true ) {
              iVar6 = BN_is_prime_fasttest_ex(ret,1,ctx,0,cb);
              if (iVar6 == -1) goto LAB_00bdf404;
              if (iVar6 == 0) break;
              iVar6 = BN_is_prime_fasttest_ex(r,1,ctx,0,cb);
              if (iVar6 == -1) goto LAB_00bdf404;
              if (iVar6 == 0) break;
              if (cb->ver == 2) {
                iVar6 = (*(cb->cb).cb_1)(2,local_70,cb);
                if (iVar6 == 0) goto LAB_00bdf404;
              }
              else {
                if (cb->ver != 1) goto LAB_00bdf404;
                if ((cb->cb).cb_1 != (_func_414 *)0x0) {
                  (*(cb->cb).cb_1)(2,local_70,cb->arg);
                }
              }
              iVar5 = iVar5 + 1;
              if (iVar10 <= iVar5) goto LAB_00bdf3f4;
            }
          }
          goto LAB_00bdeefc;
        }
        iVar5 = BN_is_prime_fasttest_ex(ret,iVar10,ctx,0,cb);
      } while (iVar5 == 0);
      iVar4 = 0;
      if (iVar5 != -1) {
LAB_00bdf3f4:
        iVar4 = 1;
      }
LAB_00bdf408:
      CRYPTO_free(ptr);
    }
    BN_CTX_end(ctx);
  }
  BN_CTX_free(ctx);
  return iVar4;
code_r0x00bdf060:
  lVar12 = lVar12 + 1;
  if (0x7fe < lVar12) {
LAB_00bdf080:
    iVar4 = BN_add_word(ret,uVar9);
    if (iVar4 == 0) goto LAB_00bdf404;
    iVar4 = BN_num_bits(ret);
    if (iVar4 == bits) goto joined_r0x00bdf25c;
    goto LAB_00bdf0a0;
  }
  goto LAB_00bdf03c;
}

