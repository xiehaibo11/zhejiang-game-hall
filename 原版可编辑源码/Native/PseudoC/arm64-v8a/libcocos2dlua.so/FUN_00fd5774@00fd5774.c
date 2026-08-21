
long FUN_00fd5774(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* catch() { ... } // from try @ 00fd57b4 with catch @ 00fd5788 */
  if (*(char **)(param_2 + 8) != "ZN7cocos2d14GLProgramCache4initEvE3$_0") {
    param_1 = 0;
  }
  return param_1;
}

