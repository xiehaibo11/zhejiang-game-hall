
long FUN_00ff8498(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* try { // try from 00ff84ac to 010f84db has its CatchHandler @ 00ff84ac
                       catch() { ... } // from try @ 00ff84ac with catch @ 00ff84ac
                       catch() { ... } // from try @ 00ff8560 with catch @ 00ff84ac */
  if (*(char **)(param_2 + 8) != "ZN7cocos2d12experimental11FrameBuffer4initEhjjE3$_3") {
    param_1 = 0;
  }
  return param_1;
}

