
int ec_GFp_simple_field_mul
              (long param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  int iVar1;
  
  iVar1 = BN_mod_mul(param_2,param_3,param_4,*(BIGNUM **)(param_1 + 0x40),param_5);
  return iVar1;
}

