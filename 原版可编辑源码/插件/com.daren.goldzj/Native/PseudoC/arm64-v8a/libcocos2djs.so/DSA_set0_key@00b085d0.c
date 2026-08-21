
undefined8 DSA_set0_key(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
                    /* try { // try from 00b085f4 to 00c0864f has its CatchHandler @ 00b085f4
                       catch() { ... } // from try @ 00b085f4 with catch @ 00b085f4
                       catch() { ... } // from try @ 00b0871c with catch @ 00b085f4 */
  if (param_2 == 0 && *(BIGNUM **)(param_1 + 0x28) == (BIGNUM *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x28));
      *(long *)(param_1 + 0x28) = param_2;
    }
    if (param_3 != 0) {
      BN_free(*(BIGNUM **)(param_1 + 0x30));
      *(long *)(param_1 + 0x30) = param_3;
    }
    uVar1 = 1;
  }
  return uVar1;
}

