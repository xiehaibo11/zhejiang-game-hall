
long FUN_009c7180(long param_1,long param_2)

{
                    /* catch() { ... } // from try @ 009c6ff4 with catch @ 009c7180
                       catch() { ... } // from try @ 009c70e8 with catch @ 009c7180 */
  param_1 = param_1 + 8;
  if (*(char **)(param_2 + 8) !=
      "ZN12_GLOBAL__N_111unrollLoopsERKNSt6__ndk112basic_stringIcNS0_11char_traitsIcEENS0_9allocatorIcEEEEE3$_0"
     ) {
    param_1 = 0;
  }
                    /* catch() { ... } // from try @ 009c6f7c with catch @ 009c7198 */
  return param_1;
}

