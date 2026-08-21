
undefined4 ec_key_simple_generate_key(long param_1)

{
  int iVar1;
  BN_CTX *ctx;
  BIGNUM *range;
  long lVar2;
  BIGNUM *rnd;
  EC_POINT *r;
  undefined4 uVar3;
  
  ctx = BN_CTX_new();
  if (ctx == (BN_CTX *)0x0) {
    rnd = (BIGNUM *)0x0;
LAB_00b1ce60:
    r = (EC_POINT *)0x0;
    lVar2 = *(long *)(param_1 + 0x20);
  }
  else {
    rnd = *(BIGNUM **)(param_1 + 0x28);
    if ((rnd == (BIGNUM *)0x0) && (rnd = BN_new(), rnd == (BIGNUM *)0x0)) goto LAB_00b1ce60;
    range = (BIGNUM *)EC_GROUP_get0_order(*(undefined8 *)(param_1 + 0x18));
    r = (EC_POINT *)0x0;
    if (range != (BIGNUM *)0x0) {
      do {
        iVar1 = BN_rand_range(rnd,range);
        if (iVar1 == 0) goto LAB_00b1ce60;
        iVar1 = BN_is_zero(rnd);
      } while (iVar1 != 0);
      r = *(EC_POINT **)(param_1 + 0x20);
      if (((r != (EC_POINT *)0x0) ||
          (r = EC_POINT_new(*(EC_GROUP **)(param_1 + 0x18)), r != (EC_POINT *)0x0)) &&
         (iVar1 = EC_POINT_mul(*(EC_GROUP **)(param_1 + 0x18),r,rnd,(EC_POINT *)0x0,(BIGNUM *)0x0,
                               ctx), iVar1 != 0)) {
        uVar3 = 1;
        *(EC_POINT **)(param_1 + 0x20) = r;
        *(BIGNUM **)(param_1 + 0x28) = rnd;
        lVar2 = *(long *)(param_1 + 0x20);
        goto joined_r0x00b1ce68;
      }
    }
    lVar2 = *(long *)(param_1 + 0x20);
  }
  uVar3 = 0;
joined_r0x00b1ce68:
  if (lVar2 == 0) {
    EC_POINT_free(r);
  }
  if (*(BIGNUM **)(param_1 + 0x28) != rnd) {
    BN_free(rnd);
  }
  BN_CTX_free(ctx);
  return uVar3;
}

