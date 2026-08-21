
long FUN_00ef6d00(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* catch() { ... } // from try @ 00ef6b48 with catch @ 00ef6d10 */
  if (*(char **)(param_2 + 8) != "ZN7cocos2d8DrawNodeC1EfE3$_0") {
    param_1 = 0;
  }
  return param_1;
}

