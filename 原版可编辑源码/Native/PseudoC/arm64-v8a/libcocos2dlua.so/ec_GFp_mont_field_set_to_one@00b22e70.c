
bool ec_GFp_mont_field_set_to_one(long param_1,BIGNUM *param_2)

{
  BIGNUM *pBVar1;
  
  if (*(BIGNUM **)(param_1 + 0x80) != (BIGNUM *)0x0) {
    pBVar1 = BN_copy(param_2,*(BIGNUM **)(param_1 + 0x80));
    return pBVar1 != (BIGNUM *)0x0;
  }
  ERR_put_error(0x10,0xd1,0x6f,"crypto/ec/ecp_mont.c",0xeb);
  return false;
}

