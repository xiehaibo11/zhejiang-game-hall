
undefined4
FUN_00b11cec(EC_KEY *param_1,BN_CTX *param_2,undefined8 *param_3,undefined8 *param_4,long param_5,
            int param_6)

{
  int iVar1;
  int iVar2;
  EC_GROUP *group;
  BN_CTX *ctx;
  BIGNUM *rnd;
  BIGNUM *r;
  BIGNUM *x;
  EC_POINT *r_00;
  BIGNUM *pBVar3;
  BIGNUM *pBVar4;
  EC_METHOD *meth;
  long lVar5;
  BN_MONT_CTX *in_mont;
  undefined4 uVar6;
  
  if ((param_1 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_1), group == (EC_GROUP *)0x0))
  {
    iVar1 = 0x43;
    iVar2 = 0x2e;
LAB_00b11f88:
    ERR_put_error(0x10,0xf8,iVar1,"crypto/ec/ecdsa_ossl.c",iVar2);
    return 0;
  }
  iVar1 = EC_KEY_can_sign(param_1);
  if (iVar1 == 0) {
    iVar1 = 0x9f;
    iVar2 = 0x33;
    goto LAB_00b11f88;
  }
  ctx = param_2;
  if ((param_2 == (BN_CTX *)0x0) && (ctx = BN_CTX_new(), ctx == (BN_CTX *)0x0)) {
    iVar1 = 0x41;
    iVar2 = 0x39;
    goto LAB_00b11f88;
  }
  rnd = BN_new();
  r = BN_new();
  x = BN_new();
  if ((rnd == (BIGNUM *)0x0) || ((r == (BIGNUM *)0x0 || (x == (BIGNUM *)0x0)))) {
    iVar1 = 0x41;
    iVar2 = 0x43;
LAB_00b11fe4:
    ERR_put_error(0x10,0xf8,iVar1,"crypto/ec/ecdsa_ossl.c",iVar2);
    r_00 = (EC_POINT *)0x0;
  }
  else {
    r_00 = EC_POINT_new(group);
    if (r_00 == (EC_POINT *)0x0) {
      iVar1 = 0x10;
      iVar2 = 0x47;
      goto LAB_00b11fe4;
    }
    pBVar3 = (BIGNUM *)EC_GROUP_get0_order(group);
    if (pBVar3 == (BIGNUM *)0x0) {
      iVar1 = 0x10;
      iVar2 = 0x4c;
LAB_00b12060:
      ERR_put_error(0x10,0xf8,iVar1,"crypto/ec/ecdsa_ossl.c",iVar2);
    }
    else {
      do {
        if (param_5 == 0) {
          do {
            iVar1 = BN_rand_range(rnd,pBVar3);
            if (iVar1 == 0) {
              iVar1 = 0x9e;
              iVar2 = 0x5e;
              goto LAB_00b12060;
            }
            iVar1 = BN_is_zero(rnd);
          } while (iVar1 != 0);
        }
        else {
          do {
            pBVar4 = EC_KEY_get0_private_key(param_1);
            iVar1 = BN_generate_dsa_nonce(rnd,pBVar3,pBVar4,param_5,(long)param_6,ctx);
            if (iVar1 == 0) {
              iVar1 = 0x9e;
              iVar2 = 0x58;
              goto LAB_00b12060;
            }
            iVar1 = BN_is_zero(rnd);
          } while (iVar1 != 0);
        }
        iVar1 = BN_add(rnd,rnd,pBVar3);
        if (iVar1 == 0) goto LAB_00b12070;
        iVar1 = BN_num_bits(rnd);
        iVar2 = BN_num_bits(pBVar3);
        if ((iVar1 <= iVar2) && (iVar1 = BN_add(rnd,rnd,pBVar3), iVar1 == 0)) goto LAB_00b12070;
        iVar1 = EC_POINT_mul(group,r_00,rnd,(EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
        if (iVar1 == 0) {
          iVar1 = 0x10;
          iVar2 = 0x71;
          goto LAB_00b12060;
        }
        meth = EC_GROUP_method_of(group);
        iVar1 = EC_METHOD_get_field_type(meth);
        if (iVar1 == 0x196) {
          iVar1 = EC_POINT_get_affine_coordinates_GFp(group,r_00,x,(BIGNUM *)0x0,ctx);
          if (iVar1 == 0) {
            iVar1 = 0x10;
            iVar2 = 0x78;
            goto LAB_00b12060;
          }
        }
        else {
          iVar1 = EC_POINT_get_affine_coordinates_GF2m(group,r_00,x,0,ctx);
          if (iVar1 == 0) {
            iVar1 = 0x10;
            iVar2 = 0x82;
            goto LAB_00b12060;
          }
        }
        iVar1 = BN_nnmod(r,x,pBVar3,ctx);
        if (iVar1 == 0) {
          ERR_put_error(0x10,0xf8,3,"crypto/ec/ecdsa_ossl.c",0x88);
          goto LAB_00b12070;
        }
        iVar1 = BN_is_zero(r);
      } while (iVar1 != 0);
      lVar5 = EC_GROUP_get_mont_data(group);
      if (lVar5 == 0) {
        pBVar3 = BN_mod_inverse(rnd,rnd,pBVar3,ctx);
        if (pBVar3 != (BIGNUM *)0x0) {
LAB_00b1215c:
          BN_clear_free((BIGNUM *)*param_4);
          BN_clear_free((BIGNUM *)*param_3);
          uVar6 = 1;
          *param_4 = r;
          *param_3 = rnd;
          goto joined_r0x00b1208c;
        }
        iVar1 = 3;
        iVar2 = 0xa4;
        goto LAB_00b12060;
      }
      iVar1 = BN_set_word(x,2);
      if (iVar1 == 0) {
        iVar1 = 0x95;
      }
      else {
        iVar1 = BN_mod_sub(x,pBVar3,x,pBVar3,ctx);
        if (iVar1 != 0) {
          BN_set_flags(x,4);
          in_mont = (BN_MONT_CTX *)EC_GROUP_get_mont_data(group);
          iVar1 = BN_mod_exp_mont_consttime(rnd,rnd,x,pBVar3,ctx,in_mont);
          if (iVar1 == 0) {
            iVar1 = 3;
            iVar2 = 0x9f;
            goto LAB_00b12060;
          }
          goto LAB_00b1215c;
        }
        iVar1 = 0x99;
      }
      ERR_put_error(0x10,0xf8,3,"crypto/ec/ecdsa_ossl.c",iVar1);
    }
  }
LAB_00b12070:
  BN_clear_free(rnd);
  BN_clear_free(r);
  uVar6 = 0;
joined_r0x00b1208c:
  if (ctx != param_2) {
    BN_CTX_free(ctx);
  }
  EC_POINT_free(r_00);
  BN_clear_free(x);
  return uVar6;
}

