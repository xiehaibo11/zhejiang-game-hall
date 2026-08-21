
long EC_ec_pre_comp_dup(long param_1)

{
  undefined1 auStack_14 [4];
  
  if (param_1 != 0) {
    CRYPTO_atomic_add(param_1 + 0x30,1,auStack_14,*(undefined8 *)(param_1 + 0x38));
  }
  return param_1;
}

