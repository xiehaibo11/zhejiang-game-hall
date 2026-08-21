
int EC_GROUP_get_curve_GFp(EC_GROUP *group,BIGNUM *p,BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  
  if (*(code **)(*(long *)group + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0f51c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)group + 0x30))();
    return iVar1;
  }
  ERR_put_error(0x10,0x82,0x42,"crypto/ec/ec_lib.c",0x1a6);
  return 0;
}

