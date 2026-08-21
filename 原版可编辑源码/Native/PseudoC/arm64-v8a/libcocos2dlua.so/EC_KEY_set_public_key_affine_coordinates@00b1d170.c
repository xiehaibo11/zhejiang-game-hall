
int EC_KEY_set_public_key_affine_coordinates(EC_KEY *key,BIGNUM *x,BIGNUM *y)

{
  int iVar1;
  BN_CTX *ctx;
  EC_POINT *p;
  BIGNUM *x_00;
  BIGNUM *y_00;
  EC_METHOD *meth;
  EC_POINT *pEVar2;
  int reason;
  int line;
  code *pcVar3;
  uint uVar4;
  
  if ((((key == (EC_KEY *)0x0) || (y == (BIGNUM *)0x0)) || (x == (BIGNUM *)0x0)) ||
     (*(long *)(key + 0x18) == 0)) {
    ERR_put_error(0x10,0xe5,0x43,"crypto/ec/ec_key.c",0x15e);
    return 0;
  }
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    return 0;
  }
  BN_CTX_start(ctx);
  p = EC_POINT_new(*(EC_GROUP **)(key + 0x18));
  if (p != (EC_POINT *)0x0) {
    x_00 = BN_CTX_get(ctx);
    y_00 = BN_CTX_get(ctx);
    if (y_00 != (BIGNUM *)0x0) {
      meth = EC_GROUP_method_of(*(EC_GROUP **)(key + 0x18));
      iVar1 = EC_METHOD_get_field_type(meth);
      if (iVar1 == 0x197) {
        iVar1 = EC_POINT_set_affine_coordinates_GF2m(*(EC_GROUP **)(key + 0x18),p,x,y,ctx);
        if (iVar1 != 0) {
          iVar1 = EC_POINT_get_affine_coordinates_GF2m(*(undefined8 *)(key + 0x18),p,x_00,y_00,ctx);
          goto joined_r0x00b1d234;
        }
      }
      else {
        iVar1 = EC_POINT_set_affine_coordinates_GFp(*(EC_GROUP **)(key + 0x18),p,x,y,ctx);
        if (iVar1 != 0) {
          iVar1 = EC_POINT_get_affine_coordinates_GFp(*(EC_GROUP **)(key + 0x18),p,x_00,y_00,ctx);
joined_r0x00b1d234:
          if (iVar1 != 0) {
            iVar1 = BN_cmp(x,x_00);
            if (((iVar1 == 0) && (iVar1 = BN_cmp(y,y_00), iVar1 == 0)) &&
               ((iVar1 = BN_cmp(x,*(BIGNUM **)(*(long *)(key + 0x18) + 0x40)), iVar1 < 0 &&
                (iVar1 = BN_cmp(y,*(BIGNUM **)(*(long *)(key + 0x18) + 0x40)), iVar1 < 0)))) {
              if ((*(code **)(*(long *)key + 0x38) == (code *)0x0) ||
                 (iVar1 = (**(code **)(*(long *)key + 0x38))(key,p), iVar1 != 0)) {
                EC_POINT_free(*(EC_POINT **)(key + 0x20));
                pEVar2 = EC_POINT_dup(p,*(EC_GROUP **)(key + 0x18));
                *(EC_POINT **)(key + 0x20) = pEVar2;
                if (pEVar2 != (EC_POINT *)0x0) {
                  if (*(long **)(key + 0x18) == (long *)0x0) {
                    iVar1 = 0xb1;
                    reason = 0x43;
                    line = 0x102;
                  }
                  else {
                    pcVar3 = *(code **)(**(long **)(key + 0x18) + 0x158);
                    if (pcVar3 != (code *)0x0) {
                      iVar1 = (*pcVar3)(key);
                      uVar4 = (uint)(iVar1 != 0);
                      goto LAB_00b1d318;
                    }
                    iVar1 = 0xb1;
                    reason = 0x42;
                    line = 0x107;
                  }
                  goto LAB_00b1d310;
                }
              }
            }
            else {
              iVar1 = 0xe5;
              reason = 0x92;
              line = 399;
LAB_00b1d310:
              ERR_put_error(0x10,iVar1,reason,"crypto/ec/ec_key.c",line);
            }
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_00b1d318:
  BN_CTX_end(ctx);
  BN_CTX_free(ctx);
  EC_POINT_free(p);
  return uVar4;
}

