
undefined4 ec_key_simple_check_key(long param_1)

{
  int iVar1;
  int line;
  BN_CTX *ctx;
  EC_POINT *r;
  undefined4 uVar2;
  BIGNUM *m;
  
  if (((param_1 == 0) || (*(EC_GROUP **)(param_1 + 0x18) == (EC_GROUP *)0x0)) ||
     (*(EC_POINT **)(param_1 + 0x20) == (EC_POINT *)0x0)) {
    ERR_put_error(0x10,0x102,0x43,"crypto/ec/ec_key.c",0x116);
    return 0;
  }
  iVar1 = EC_POINT_is_at_infinity(*(EC_GROUP **)(param_1 + 0x18),*(EC_POINT **)(param_1 + 0x20));
  if (iVar1 != 0) {
    ERR_put_error(0x10,0x102,0x6a,"crypto/ec/ec_key.c",0x11b);
    uVar2 = 0;
    ctx = (BN_CTX *)0x0;
    r = (EC_POINT *)0x0;
    goto LAB_00b1d044;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    uVar2 = 0;
    r = (EC_POINT *)0x0;
    goto LAB_00b1d044;
  }
  r = EC_POINT_new(*(EC_GROUP **)(param_1 + 0x18));
  if (r != (EC_POINT *)0x0) {
    iVar1 = EC_POINT_is_on_curve(*(EC_GROUP **)(param_1 + 0x18),*(EC_POINT **)(param_1 + 0x20),ctx);
    if (iVar1 < 1) {
      iVar1 = 0x6b;
      line = 0x126;
    }
    else {
      m = *(BIGNUM **)(*(long *)(param_1 + 0x18) + 0x10);
      iVar1 = BN_is_zero(m);
      if (iVar1 == 0) {
        iVar1 = EC_POINT_mul(*(EC_GROUP **)(param_1 + 0x18),r,(BIGNUM *)0x0,
                             *(EC_POINT **)(param_1 + 0x20),m,ctx);
        if (iVar1 == 0) {
          iVar1 = 0x10;
          line = 0x130;
        }
        else {
          iVar1 = EC_POINT_is_at_infinity(*(EC_GROUP **)(param_1 + 0x18),r);
          if (iVar1 == 0) {
            iVar1 = 0x82;
            line = 0x134;
          }
          else {
            if (*(BIGNUM **)(param_1 + 0x28) == (BIGNUM *)0x0) {
LAB_00b1d14c:
              uVar2 = 1;
              goto LAB_00b1d044;
            }
            iVar1 = BN_cmp(*(BIGNUM **)(param_1 + 0x28),m);
            if (iVar1 < 0) {
              iVar1 = EC_POINT_mul(*(EC_GROUP **)(param_1 + 0x18),r,*(BIGNUM **)(param_1 + 0x28),
                                   (EC_POINT *)0x0,(BIGNUM *)0x0,ctx);
              if (iVar1 == 0) {
                iVar1 = 0x10;
                line = 0x142;
              }
              else {
                iVar1 = EC_POINT_cmp(*(EC_GROUP **)(param_1 + 0x18),r,*(EC_POINT **)(param_1 + 0x20)
                                     ,ctx);
                if (iVar1 == 0) goto LAB_00b1d14c;
                iVar1 = 0x7b;
                line = 0x146;
              }
            }
            else {
              iVar1 = 0x82;
              line = 0x13d;
            }
          }
        }
      }
      else {
        iVar1 = 0x7a;
        line = 300;
      }
    }
    ERR_put_error(0x10,0x102,iVar1,"crypto/ec/ec_key.c",line);
  }
  uVar2 = 0;
LAB_00b1d044:
  BN_CTX_free(ctx);
  EC_POINT_free(r);
  return uVar2;
}

