
/* cocos2d::AudioMixer::getTrackHook(int, unsigned int, audio_format_t, audio_format_t) */

code * cocos2d::AudioMixer::getTrackHook(uint param_1,uint param_2,int param_3)

{
  code *pcVar1;
  
  if ((param_2 == 2) && (param_3 == 1)) {
    if (param_1 < 4) {
                    /* try { // try from 00a7c250 to 00b7c277 has its CatchHandler @ 00a7c360 */
      pcVar1 = (code *)(&PTR_track__nop_01c6f440)[(int)param_1];
switchD_00a7c28c_caseD_0:
      return pcVar1;
    }
switchD_00a7c28c_default:
                    /* WARNING: Subroutine does not return */
    __android_log_assert(0,"AudioMixer","bad trackType: %d",param_1);
  }
  if (8 < param_2) {
                    /* catch() { ... } // from try @ 00a7c290 with catch @ 00a7c33c */
                    /* catch() { ... } // from try @ 00a7c2a4 with catch @ 00a7c340 */
                    /* catch() { ... } // from try @ 00a7c278 with catch @ 00a7c344 */
                    /* catch() { ... } // from try @ 00a7c2a8 with catch @ 00a7c348 */
                    /* WARNING: Subroutine does not return */
    __android_log_assert("channelCount > MAX_NUM_CHANNELS","AudioMixer",0);
  }
                    /* try { // try from 00a7c278 to 00b7c27f has its CatchHandler @ 00a7c344 */
  pcVar1 = track__nop;
  switch(param_1) {
  case 0:
    goto switchD_00a7c28c_caseD_0;
  case 1:
                    /* try { // try from 00a7c290 to 00b7c293 has its CatchHandler @ 00a7c33c */
    if (param_3 == 5) {
      return track__Resample<0,float,float,int>;
    }
    if (param_3 == 1) {
                    /* try { // try from 00a7c2a4 to 00b7c2a7 has its CatchHandler @ 00a7c340 */
                    /* try { // try from 00a7c2a8 to 00b7c2c3 has its CatchHandler @ 00a7c348 */
      return track__Resample<0,int,short,int>;
    }
    break;
  case 2:
    if (param_3 == 5) {
      return track__NoResample<0,float,float,int>;
    }
    if (param_3 == 1) {
                    /* try { // try from 00a7c2c4 to 00b7c3af has its CatchHandler @ 00a7c200 */
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
    goto switchD_00a7c28c_default;
  }
                    /* catch() { ... } // from try @ 00a7c250 with catch @ 00a7c360 */
                    /* WARNING: Subroutine does not return */
  __android_log_assert(0,"AudioMixer","bad mixerInFormat: %#x");
}

