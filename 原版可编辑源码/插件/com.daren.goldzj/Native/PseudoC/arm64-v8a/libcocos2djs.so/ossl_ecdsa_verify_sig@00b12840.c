
uint ossl_ecdsa_verify_sig(uchar *param_1,int param_2,undefined8 *param_3,EC_KEY *param_4)

{
  int iVar1;
  uint uVar2;
  EC_GROUP *group;
  EC_POINT *q;
  BN_CTX *ctx;
  BIGNUM *r;
  BIGNUM *ret;
  BIGNUM *ret_00;
  BIGNUM *x;
  BIGNUM *b;
  BIGNUM *pBVar3;
  EC_METHOD *meth;
  int iVar4;
  EC_POINT *r_00;
  
  if ((((param_4 == (EC_KEY *)0x0) || (group = EC_KEY_get0_group(param_4), group == (EC_GROUP *)0x0)
       ) || (q = EC_KEY_get0_public_key(param_4), param_3 == (undefined8 *)0x0)) ||
     (q == (EC_POINT *)0x0)) {
    iVar1 = 0x7c;
    iVar4 = 0x166;
LAB_00b12990:
    ERR_put_error(0x10,0xfa,iVar1,"crypto/ec/ecdsa_ossl.c",iVar4);
    return 0xffffffff;
  }
  iVar1 = EC_KEY_can_sign(param_4);
  if (iVar1 == 0) {
    iVar1 = 0x9f;
    iVar4 = 0x16b;
    goto LAB_00b12990;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    iVar1 = 0x41;
    iVar4 = 0x171;
    goto LAB_00b12990;
  }
  BN_CTX_start(ctx);
  r = BN_CTX_get(ctx);
  ret = BN_CTX_get(ctx);
  ret_00 = BN_CTX_get(ctx);
  x = BN_CTX_get(ctx);
  if (x == (BIGNUM *)0x0) {
    iVar1 = 3;
    iVar4 = 0x17a;
LAB_00b12a28:
    ERR_put_error(0x10,0xfa,iVar1,"crypto/ec/ecdsa_ossl.c",iVar4);
    r_00 = (EC_POINT *)0x0;
  }
  else {
    b = (BIGNUM *)EC_GROUP_get0_order(group);
    if (b == (BIGNUM *)0x0) {
      iVar1 = 0x10;
      iVar4 = 0x180;
      goto LAB_00b12a28;
    }
    iVar1 = BN_is_zero(*param_3);
    if ((((iVar1 != 0) || (iVar1 = BN_is_negative(*param_3), iVar1 != 0)) ||
        ((iVar1 = BN_ucmp((BIGNUM *)*param_3,b), -1 < iVar1 ||
         ((iVar1 = BN_is_zero(param_3[1]), iVar1 != 0 ||
          (iVar1 = BN_is_negative(param_3[1]), iVar1 != 0)))))) ||
       (iVar1 = BN_ucmp((BIGNUM *)param_3[1],b), -1 < iVar1)) {
      ERR_put_error(0x10,0xfa,0x9c,"crypto/ec/ecdsa_ossl.c",0x187);
      uVar2 = 0;
      r_00 = (EC_POINT *)0x0;
      goto LAB_00b12a34;
    }
    pBVar3 = BN_mod_inverse(ret,(BIGNUM *)param_3[1],b,ctx);
    if (pBVar3 == (BIGNUM *)0x0) {
      iVar1 = 3;
      iVar4 = 0x18d;
      goto LAB_00b12a28;
    }
    uVar2 = BN_num_bits(b);
    if ((int)uVar2 < param_2 * 8) {
      param_2 = uVar2 + 0xe;
      if (-1 < (int)(uVar2 + 7)) {
        param_2 = uVar2 + 7;
      }
      param_2 = param_2 >> 3;
    }
    pBVar3 = BN_bin2bn(param_1,param_2,ret_00);
    if (pBVar3 == (BIGNUM *)0x0) {
      iVar1 = 3;
      iVar4 = 0x198;
      goto LAB_00b12a28;
    }
    if (((int)uVar2 < param_2 * 8) && (iVar1 = BN_rshift(ret_00,ret_00,8 - (uVar2 & 7)), iVar1 == 0)
       ) {
      iVar1 = 3;
      iVar4 = 0x19d;
      goto LAB_00b12a28;
    }
    iVar1 = BN_mod_mul(r,ret_00,ret,b,ctx);
    if (iVar1 == 0) {
      iVar1 = 3;
      iVar4 = 0x1a2;
      goto LAB_00b12a28;
    }
    iVar1 = BN_mod_mul(ret,(BIGNUM *)*param_3,ret,b,ctx);
    if (iVar1 == 0) {
      iVar1 = 3;
      iVar4 = 0x1a7;
      goto LAB_00b12a28;
    }
    r_00 = EC_POINT_new(group);
    if (r_00 == (EC_POINT *)0x0) {
      iVar1 = 0x41;
      iVar4 = 0x1ac;
    }
    else {
      iVar1 = EC_POINT_mul(group,r_00,r,q,ret,ctx);
      if (iVar1 == 0) {
        iVar1 = 0x10;
        iVar4 = 0x1b0;
      }
      else {
        meth = EC_GROUP_method_of(group);
        iVar1 = EC_METHOD_get_field_type(meth);
        if (iVar1 == 0x196) {
          iVar1 = EC_POINT_get_affine_coordinates_GFp(group,r_00,x,(BIGNUM *)0x0,ctx);
          if (iVar1 == 0) {
            iVar1 = 0x10;
            iVar4 = 0x1b6;
          }
          else {
LAB_00b12c70:
            iVar1 = BN_nnmod(r,x,b,ctx);
            if (iVar1 != 0) {
              iVar1 = BN_ucmp(r,(BIGNUM *)*param_3);
              uVar2 = (uint)(iVar1 == 0);
              goto LAB_00b12a34;
            }
            iVar1 = 3;
            iVar4 = 0x1c4;
          }
        }
        else {
          iVar1 = EC_POINT_get_affine_coordinates_GF2m(group,r_00,x,0,ctx);
          if (iVar1 != 0) goto LAB_00b12c70;
          iVar1 = 0x10;
          iVar4 = 0x1be;
        }
      }
    }
    ERR_put_error(0x10,0xfa,iVar1,"crypto/ec/ecdsa_ossl.c",iVar4);
  }
  uVar2 = 0xffffffff;
LAB_00b12a34:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  EC_POINT_free(r_00);
  return uVar2;
}

