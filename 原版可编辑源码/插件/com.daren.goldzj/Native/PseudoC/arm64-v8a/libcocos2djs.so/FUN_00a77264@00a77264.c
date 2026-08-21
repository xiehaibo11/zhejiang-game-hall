
long FUN_00a77264(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* try { // try from 00a77274 to 00b772c7 has its CatchHandler @ 00a77274
                       catch() { ... } // from try @ 00a77274 with catch @ 00a77274
                       catch() { ... } // from try @ 00a774cc with catch @ 00a77274 */
  if (*(char **)(param_2 + 8) !=
      "ZN7cocos2d19AudioPlayerProvider13preloadEffectERKNS0_13AudioFileInfoERKNSt6__ndk18functionIFvbNS_7PcmDataEEEEbE3$_2"
     ) {
    param_1 = 0;
  }
  return param_1;
}

