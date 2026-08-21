
void EC_GROUP_clear_free(EC_GROUP *group)

{
  code *pcVar1;
  long *plVar2;
  
  if (group != (EC_GROUP *)0x0) {
    pcVar1 = *(code **)(*(long *)group + 0x18);
    if ((pcVar1 != (code *)0x0) ||
       (pcVar1 = *(code **)(*(long *)group + 0x10), pcVar1 != (code *)0x0)) {
      (*pcVar1)(group);
    }
    if (*(int *)(group + 0x98) == 5) {
      EC_ec_pre_comp_free(*(undefined8 *)(group + 0xa0));
    }
    *(undefined8 *)(group + 0xa0) = 0;
    BN_MONT_CTX_free(*(BN_MONT_CTX **)(group + 0x90));
    plVar2 = *(long **)(group + 8);
    if (plVar2 != (long *)0x0) {
      pcVar1 = *(code **)(*plVar2 + 0x60);
      if ((pcVar1 != (code *)0x0) || (pcVar1 = *(code **)(*plVar2 + 0x58), pcVar1 != (code *)0x0)) {
        (*pcVar1)(plVar2);
      }
      CRYPTO_clear_free(plVar2,0x28,"crypto/ec/ec_lib.c",0x252);
    }
    BN_clear_free(*(BIGNUM **)(group + 0x10));
    BN_clear_free(*(BIGNUM **)(group + 0x18));
    CRYPTO_clear_free(*(undefined8 *)(group + 0x30),*(undefined8 *)(group + 0x38),
                      "crypto/ec/ec_lib.c",0x7e);
    CRYPTO_clear_free(group,0xa8,"crypto/ec/ec_lib.c",0x7f);
    return;
  }
  return;
}

