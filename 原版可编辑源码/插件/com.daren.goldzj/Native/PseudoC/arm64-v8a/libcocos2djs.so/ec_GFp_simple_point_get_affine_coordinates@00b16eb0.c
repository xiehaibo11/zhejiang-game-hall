
undefined4
ec_GFp_simple_point_get_affine_coordinates
          (EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  int iVar1;
  BIGNUM *pBVar2;
  BIGNUM *ret;
  BIGNUM *r;
  BIGNUM *r_00;
  BN_CTX *c;
  undefined4 uVar3;
  BIGNUM *a;
  
  iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar1 != 0) {
    ERR_put_error(0x10,0xa7,0x6a,"crypto/ec/ecp_smpl.c",0x1fa);
    return 0;
  }
  if (param_5 == (BN_CTX *)0x0) {
    param_5 = BN_CTX_new();
    c = param_5;
    if (param_5 == (BN_CTX *)0x0) {
      return 0;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(param_5);
  pBVar2 = BN_CTX_get(param_5);
  ret = BN_CTX_get(param_5);
  r = BN_CTX_get(param_5);
  r_00 = BN_CTX_get(param_5);
  if (r_00 == (BIGNUM *)0x0) goto LAB_00b17168;
  a = *(BIGNUM **)(param_2 + 0x18);
  if ((*(code **)(*(long *)param_1 + 0x128) == (code *)0x0) ||
     (iVar1 = (**(code **)(*(long *)param_1 + 0x128))
                        (param_1,pBVar2,*(BIGNUM **)(param_2 + 0x18),param_5), a = pBVar2,
     iVar1 != 0)) {
    iVar1 = BN_is_one(a);
    if (iVar1 != 0) {
      if (*(code **)(*(long *)param_1 + 0x128) == (code *)0x0) {
        if (((param_3 == (BIGNUM *)0x0) ||
            (pBVar2 = BN_copy(param_3,*(BIGNUM **)(param_2 + 8)), pBVar2 != (BIGNUM *)0x0)) &&
           ((param_4 == (BIGNUM *)0x0 ||
            (pBVar2 = BN_copy(param_4,*(BIGNUM **)(param_2 + 0x10)), pBVar2 != (BIGNUM *)0x0))))
        goto LAB_00b17160;
      }
      else if ((param_3 == (BIGNUM *)0x0) ||
              (iVar1 = (**(code **)(*(long *)param_1 + 0x128))
                                 (param_1,param_3,*(undefined8 *)(param_2 + 8),param_5), iVar1 != 0)
              ) {
        if (param_4 != (BIGNUM *)0x0) {
          iVar1 = (**(code **)(*(long *)param_1 + 0x128))
                            (param_1,param_4,*(undefined8 *)(param_2 + 0x10),param_5);
joined_r0x00b1715c:
          if (iVar1 == 0) goto LAB_00b17168;
        }
LAB_00b17160:
        uVar3 = 1;
        goto LAB_00b1716c;
      }
LAB_00b17168:
      uVar3 = 0;
      goto LAB_00b1716c;
    }
    pBVar2 = BN_mod_inverse(ret,a,*(BIGNUM **)(param_1 + 0x40),param_5);
    if (pBVar2 == (BIGNUM *)0x0) {
      ERR_put_error(0x10,0xa7,3,"crypto/ec/ecp_smpl.c",0x22d);
    }
    else {
      if (*(long *)(*(long *)param_1 + 0x120) == 0) {
        iVar1 = (**(code **)(*(long *)param_1 + 0x110))(param_1,r,ret,param_5);
      }
      else {
        iVar1 = BN_mod_sqr(r,ret,*(BIGNUM **)(param_1 + 0x40),param_5);
      }
      if ((iVar1 != 0) &&
         ((param_3 == (BIGNUM *)0x0 ||
          (iVar1 = (**(code **)(*(long *)param_1 + 0x108))
                             (param_1,param_3,*(undefined8 *)(param_2 + 8),r,param_5), iVar1 != 0)))
         ) {
        if (param_4 != (BIGNUM *)0x0) {
          if (*(long *)(*(long *)param_1 + 0x120) == 0) {
            iVar1 = (**(code **)(*(long *)param_1 + 0x108))(param_1,r_00,r,ret,param_5);
          }
          else {
            iVar1 = BN_mod_mul(r_00,r,ret,*(BIGNUM **)(param_1 + 0x40),param_5);
          }
          if (iVar1 != 0) {
            iVar1 = (**(code **)(*(long *)param_1 + 0x108))
                              (param_1,param_4,*(undefined8 *)(param_2 + 0x10),r_00,param_5);
            goto joined_r0x00b1715c;
          }
          goto LAB_00b17168;
        }
        goto LAB_00b17160;
      }
    }
  }
  uVar3 = 0;
LAB_00b1716c:
  BN_CTX_end(param_5);
  BN_CTX_free(c);
  return uVar3;
}

