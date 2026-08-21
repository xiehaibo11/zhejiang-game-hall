
int EC_GROUP_check_discriminant(EC_GROUP *group,BN_CTX *ctx)

{
  int iVar1;
  
  if (*(code **)(*(long *)group + 0x48) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b1ea9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (**(code **)(*(long *)group + 0x48))();
    return iVar1;
  }
  ERR_put_error(0x10,0xab,0x42,"crypto/ec/ec_lib.c",0x1d1);
  return 0;
}

