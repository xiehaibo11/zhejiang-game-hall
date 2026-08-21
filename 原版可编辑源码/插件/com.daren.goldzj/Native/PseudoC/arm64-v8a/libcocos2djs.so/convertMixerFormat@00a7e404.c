
/* cocos2d::AudioMixer::convertMixerFormat(void*, audio_format_t, void*, audio_format_t, unsigned
   long) */

void cocos2d::AudioMixer::convertMixerFormat
               (void *param_1,int param_2,void *param_3,int param_4,ulong param_5)

{
  if (param_4 == 1) {
    if (param_2 == 1) {
      ditherAndClamp(param_1,param_3,param_5 >> 1);
      return;
    }
    if (param_2 == 5) {
      memcpy_to_float_from_q4_27(param_1,param_3,param_5);
      return;
    }
  }
  else {
    if (param_4 != 5) {
                    /* try { // try from 00a7e490 to 00b7e493 has its CatchHandler @ 00a7e4a4 */
                    /* try { // try from 00a7e494 to 00b7e4b7 has its CatchHandler @ 00a7e464 */
                    /* WARNING: Subroutine does not return */
      __android_log_assert(0,"AudioMixer","bad mixerInFormat: %#x");
    }
    if (param_2 == 1) {
                    /* try { // try from 00a7e464 to 00b7e48f has its CatchHandler @ 00a7e464
                       catch() { ... } // from try @ 00a7e464 with catch @ 00a7e464
                       catch() { ... } // from try @ 00a7e494 with catch @ 00a7e464 */
      memcpy_to_i16_from_float(param_1,param_3,param_5);
      return;
    }
    if (param_2 == 5) {
      memcpy(param_1,param_3,param_5 << 2);
      return;
    }
  }
                    /* catch() { ... } // from try @ 00a7e490 with catch @ 00a7e4a4 */
                    /* WARNING: Subroutine does not return */
  __android_log_assert(0,"AudioMixer","bad mixerOutFormat: %#x",param_2);
}

