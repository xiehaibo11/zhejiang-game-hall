
long FUN_00a68e20(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* catch() { ... } // from try @ 00a68ce0 with catch @ 00a68e34 */
  if (*(char **)(param_2 + 8) !=
      "ZN7cocos2d9extension15AssetsManagerEx4initERKNSt6__ndk112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEESA_E3$_1"
     ) {
    param_1 = 0;
  }
                    /* catch() { ... } // from try @ 00a68cd4 with catch @ 00a68e38 */
  return param_1;
}

