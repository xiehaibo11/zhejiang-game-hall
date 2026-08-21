
int EC_GROUP_set_curve_GFp(EC_GROUP *group,BIGNUM *p,BIGNUM *a,BIGNUM *b,BN_CTX *ctx)

{
  int iVar1;
  
  if (*(code **)(*(long *)group + 0x28) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b0f4dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)group + 0x28))();
    return iVar1;
  }
  ERR_put_error(0x10,0x6d,0x42,"crypto/ec/ec_lib.c",0x19c);
  return 0;
}

