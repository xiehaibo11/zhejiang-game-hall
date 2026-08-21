
ulong ec_GF2m_simple_invert(EC_GROUP *param_1,EC_POINT *param_2,BN_CTX *param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  
  iVar1 = EC_POINT_is_at_infinity(param_1,param_2);
                    /* try { // try from 00badfe4 to 00cae03b has its CatchHandler @ 00bae074 */
  if ((iVar1 == 0) && (iVar1 = BN_is_zero(*(undefined8 *)(param_2 + 0x10)), iVar1 == 0)) {
    uVar2 = EC_POINT_make_affine(param_1,param_2,param_3);
    uVar3 = (ulong)uVar2;
    if (uVar2 != 0) {
      uVar3 = BN_GF2m_add(*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 8),
                          *(undefined8 *)(param_2 + 0x10));
      return uVar3;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

