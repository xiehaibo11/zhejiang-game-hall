
/* cocos2d::experimental::AudioMixer::getTrackHook(int, unsigned int, audio_format_t,
   audio_format_t) */

code * cocos2d::experimental::AudioMixer::getTrackHook(uint param_1,uint param_2,int param_3)

{
  code *pcVar1;
  
  if ((param_2 == 2) && (param_3 == 1)) {
    if (param_1 < 4) {
      pcVar1 = (code *)(&PTR_track__nop_016f40b8)[(int)param_1];
switchD_00e745fc_caseD_0:
      return pcVar1;
    }
switchD_00e745fc_default:
                    /* WARNING: Subroutine does not return */
    __android_log_assert(0,"AudioMixer","bad trackType: %d",param_1);
  }
  if (8 < param_2) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert("channelCount > MAX_NUM_CHANNELS","AudioMixer",0);
  }
  pcVar1 = track__nop;
  switch(param_1) {
  case 0:
    goto switchD_00e745fc_caseD_0;
  case 1:
    if (param_3 == 5) {
      return track__Resample<0,float,float,int>;
    }
    if (param_3 == 1) {
      return track__Resample<0,int,short,int>;
    }
    break;
  case 2:
    if (param_3 == 5) {
      return track__NoResample<0,float,float,int>;
    }
    if (param_3 == 1) {
      return track__NoResample<0,int,short,int>;
    }
    break;
  case 3:
    if (param_3 == 5) {
      return track__NoResample<1,float,float,int>;
    }
    if (param_3 == 1) {
      return track__NoResample<1,int,short,int>;
    }
    break;
  default:
    goto switchD_00e745fc_default;
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(0,"AudioMixer","bad mixerInFormat: %#x");
}

