
/* cocos2d::experimental::AudioMixer::convertMixerFormat(void*, audio_format_t, void*,
   audio_format_t, unsigned long) */

void cocos2d::experimental::AudioMixer::convertMixerFormat
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
                    /* WARNING: Subroutine does not return */
      __android_log_assert(0,"AudioMixer","bad mixerInFormat: %#x");
    }
    if (param_2 == 1) {
      memcpy_to_i16_from_float(param_1,param_3,param_5);
      return;
    }
    if (param_2 == 5) {
      memcpy(param_1,param_3,param_5 << 2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(0,"AudioMixer","bad mixerOutFormat: %#x",param_2);
}

