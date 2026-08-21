
long FUN_00a72f94(long param_1,long param_2)

{
                    /* try { // try from 00a72f9c to 00b72faf has its CatchHandler @ 00a730d8 */
  param_1 = param_1 + 0x10;
  if (*(char **)(param_2 + 8) !=
      "ZN7cocos2d15AudioEngineImpl7preloadERKNSt6__ndk112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEERKNS1_8functionIFvbEEEE3$_1"
     ) {
    param_1 = 0;
  }
  return param_1;
}

