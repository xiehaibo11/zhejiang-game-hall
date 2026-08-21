
int ec_GFp_mont_field_mul
              (long param_1,BIGNUM *param_2,BIGNUM *param_3,BIGNUM *param_4,BN_CTX *param_5)

{
  int iVar1;
  
  if (*(BN_MONT_CTX **)(param_1 + 0x78) != (BN_MONT_CTX *)0x0) {
    iVar1 = BN_mod_mul_montgomery(param_2,param_3,param_4,*(BN_MONT_CTX **)(param_1 + 0x78),param_5)
    ;
    return iVar1;
  }
  ERR_put_error(0x10,0x83,0x6f,"crypto/ec/ecp_mont.c",0xbf);
  return 0;
}

