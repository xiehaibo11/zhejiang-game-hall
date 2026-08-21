
undefined4 ec_precompute_mont_data(long param_1)

{
  int iVar1;
  BN_CTX *ctx;
  BN_MONT_CTX *mont;
  undefined4 uVar2;
  
  ctx = BN_CTX_new();
  BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x90));
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (ctx != (BN_CTX *)0x0) {
    mont = BN_MONT_CTX_new();
    *(BN_MONT_CTX **)(param_1 + 0x90) = mont;
    if (mont != (BN_MONT_CTX *)0x0) {
      iVar1 = BN_MONT_CTX_set(mont,*(BIGNUM **)(param_1 + 0x10),ctx);
      if (iVar1 == 0) {
        BN_MONT_CTX_free(*(BN_MONT_CTX **)(param_1 + 0x90));
        uVar2 = 0;
        *(undefined8 *)(param_1 + 0x90) = 0;
      }
      else {
        uVar2 = 1;
      }
      goto LAB_00b0f308;
    }
  }
  uVar2 = 0;
LAB_00b0f308:
  BN_CTX_free(ctx);
  return uVar2;
}

