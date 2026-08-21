
long FUN_00fa7b24(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* catch() { ... } // from try @ 00fa78a4 with catch @ 00fa7b38 */
  if (*(char **)(param_2 + 8) !=
      "ZN7cocos2d25EventListenerAcceleration4initERKNSt6__ndk18functionIFvPNS_12AccelerationEPNS_5EventEEEEE3$_0"
     ) {
    param_1 = 0;
  }
  return param_1;
}

