
undefined8
ec_GF2m_simple_point_get_affine_coordinates
          (EC_GROUP *param_1,EC_POINT *param_2,BIGNUM *param_3,BIGNUM *param_4)

{
  int iVar1;
  BIGNUM *pBVar2;
  int line;
  BIGNUM *a;
  
  iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
  if (iVar1 == 0) {
    a = *(BIGNUM **)(param_2 + 0x18);
    pBVar2 = BN_value_one();
    iVar1 = BN_cmp(a,pBVar2);
    if (iVar1 == 0) {
      if (param_3 != (BIGNUM *)0x0) {
        pBVar2 = BN_copy(param_3,*(BIGNUM **)(param_2 + 8));
        if (pBVar2 == (BIGNUM *)0x0) {
          return 0;
        }
        BN_set_negative(param_3,0);
      }
      if (param_4 != (BIGNUM *)0x0) {
        pBVar2 = BN_copy(param_4,*(BIGNUM **)(param_2 + 0x10));
        if (pBVar2 == (BIGNUM *)0x0) {
          return 0;
        }
        BN_set_negative(param_4,0);
      }
      return 1;
    }
                    /* try { // try from 00badb5c to 00cadcdb has its CatchHandler @ 00bad90c */
    iVar1 = 0x42;
    line = 400;
  }
  else {
                    /* try { // try from 00badb2c to 00cadb5b has its CatchHandler @ 00badc50 */
    iVar1 = 0x6a;
    line = 0x18a;
  }
  ERR_put_error(0x10,0xa2,iVar1,"crypto/ec/ec2_smpl.c",line);
  return 0;
}

