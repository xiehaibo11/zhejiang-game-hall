
/* cocos2d::AudioMixer::getProcessHook(int, unsigned int, audio_format_t, audio_format_t) */

code * cocos2d::AudioMixer::getProcessHook(int param_1,uint param_2,int param_3,int param_4)

{
  if (param_1 != 0) {
                    /* try { // try from 00a7cb08 to 00b7cb0b has its CatchHandler @ 00a7cba0 */
                    /* try { // try from 00a7cb0c to 00b7cb27 has its CatchHandler @ 00a7cba8 */
                    /* WARNING: Subroutine does not return */
    __android_log_assert(0,"AudioMixer","bad processType: %d",param_1);
  }
                    /* try { // try from 00a7ca68 to 00b7cab3 has its CatchHandler @ 00a7ca68
                       catch() { ... } // from try @ 00a7ca68 with catch @ 00a7ca68
                       catch() { ... } // from try @ 00a7cb28 with catch @ 00a7ca68 */
  if ((param_2 == 2) && (param_3 == 1)) {
    return process__OneTrack16BitsStereoNoResampling;
  }
  if (8 < param_2) {
                    /* try { // try from 00a7cb28 to 00b7cc0f has its CatchHandler @ 00a7ca68 */
                    /* WARNING: Subroutine does not return */
    __android_log_assert("channelCount > MAX_NUM_CHANNELS","AudioMixer",0);
  }
  if (param_3 == 1) {
    if (param_4 == 5) {
                    /* try { // try from 00a7caf4 to 00b7caf7 has its CatchHandler @ 00a7cb9c */
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
                    /* try { // try from 00a7cadc to 00b7cae3 has its CatchHandler @ 00a7cba4 */
      return process_NoResampleOneTrack<2,float,float,int>;
    }
    if (param_4 == 1) {
                    /* try { // try from 00a7cab4 to 00b7cadb has its CatchHandler @ 00a7cbc0 */
      return process_NoResampleOneTrack<2,short,float,int>;
    }
  }
                    /* WARNING: Subroutine does not return */
  __android_log_assert(0,"AudioMixer","bad mixerOutFormat: %#x");
}

