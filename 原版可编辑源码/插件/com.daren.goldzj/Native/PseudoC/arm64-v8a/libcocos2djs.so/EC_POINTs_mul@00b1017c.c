
int EC_POINTs_mul(EC_GROUP *group,EC_POINT *r,BIGNUM *n,size_t num,EC_POINT **p,BIGNUM **m,
                 BN_CTX *ctx)

{
  int iVar1;
  
  if (*(code **)(*(long *)group + 0xf0) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b10188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)group + 0xf0))();
    return iVar1;
  }
  iVar1 = ec_wNAF_mul();
  return iVar1;
}

