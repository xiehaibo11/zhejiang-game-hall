
long FUN_00d4bb9c(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* catch() { ... } // from try @ 00d4bc0c with catch @ 00d4bbb0
                       catch() { ... } // from try @ 00d4c0a0 with catch @ 00d4bbb0
                       catch() { ... } // from try @ 00d4c108 with catch @ 00d4bbb0 */
  if (*(char **)(param_2 + 8) != "ZN7cocos2d7TerrainC1EvE3$_0") {
    param_1 = 0;
  }
  return param_1;
}

