
undefined8 ec_GFp_simple_make_affine(EC_GROUP *param_1,EC_POINT *param_2,BN_CTX *param_3)

{
  int iVar1;
  BIGNUM *x;
  BIGNUM *y;
  BN_CTX *c;
  undefined8 uVar2;
  
  if ((*(int *)(param_2 + 0x20) != 0) ||
     (iVar1 = EC_POINT_is_at_infinity(param_1,param_2), iVar1 != 0)) {
    return 1;
  }
  if (param_3 == (BN_CTX *)0x0) {
    param_3 = BN_CTX_new();
    c = param_3;
    if (param_3 == (BN_CTX *)0x0) {
      return 0;
    }
  }
  else {
    c = (BN_CTX *)0x0;
  }
  BN_CTX_start(param_3);
  x = BN_CTX_get(param_3);
  y = BN_CTX_get(param_3);
  if (((y != (BIGNUM *)0x0) &&
      (iVar1 = EC_POINT_get_affine_coordinates_GFp(param_1,param_2,x,y,param_3), iVar1 != 0)) &&
     (iVar1 = EC_POINT_set_affine_coordinates_GFp(param_1,param_2,x,y,param_3), iVar1 != 0)) {
    if (*(int *)(param_2 + 0x20) != 0) {
      uVar2 = 1;
      goto LAB_00b27624;
    }
    ERR_put_error(0x10,0x66,0x44,"crypto/ec/ecp_smpl.c",0x4a4);
  }
  uVar2 = 0;
LAB_00b27624:
  BN_CTX_end(param_3);
  BN_CTX_free(c);
  return uVar2;
}

