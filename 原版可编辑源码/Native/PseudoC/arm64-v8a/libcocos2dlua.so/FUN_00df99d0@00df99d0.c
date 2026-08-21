
long FUN_00df99d0(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* try { // try from 00df99e0 to 00ef9a0f has its CatchHandler @ 00df9d54 */
  if (*(char **)(param_2 + 8) !=
      "ZZN7cocos2d9extension13AssetsManager21downloadAndUncompressEvENK3$_4clEvEUlvE0_") {
    param_1 = 0;
  }
  return param_1;
}

