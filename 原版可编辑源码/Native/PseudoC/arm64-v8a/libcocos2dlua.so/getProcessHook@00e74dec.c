
/* cocos2d::experimental::AudioMixer::getProcessHook(int, unsigned int, audio_format_t,
   audio_format_t) */

code * cocos2d::experimental::AudioMixer::getProcessHook
                 (int param_1,uint param_2,int param_3,int param_4)

{
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert(0,"AudioMixer","bad processType: %d",param_1);
  }
  if ((param_2 == 2) && (param_3 == 1)) {
    return process__OneTrack16BitsStereoNoResampling;
  }
  if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert("channelCount > MAX_NUM_CHANNELS","AudioMixer",0);
  }
  if (param_3 == 1) {
    if (param_4 == 5) {
      return process_NoResampleOneTrack<2,float,short,int>;
    }
    if (param_4 == 1) {
      return process_NoResampleOneTrack<2,short,short,int>;
    }
  }
  else {
    if (param_3 != 5) {
                    /* WARNING: Subroutine does not return */
      __android_log_assert(0,"AudioMixer","bad mixerInFormat: %#x",param_3);
    }
    if (param_4 == 5) {
      return process_NoResampleOneTrack<2,float,float,int>;
    }
    if (param_4 == 1) {
      return process_NoResampleOneTrack<2,short,float,int>;
    }
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(0,"AudioMixer","bad mixerOutFormat: %#x");
}

