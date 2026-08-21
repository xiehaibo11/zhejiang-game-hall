
/* cocos2d::AudioPlayerProvider::obtainPcmAudioPlayer(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::PcmData const&)
    */

PcmAudioPlayer * __thiscall
cocos2d::AudioPlayerProvider::obtainPcmAudioPlayer
          (AudioPlayerProvider *this,basic_string *param_1,PcmData *param_2)

{
  ulong uVar1;
  PcmAudioPlayer *this_00;
  
                    /* catch() { ... } // from try @ 00a73ef4 with catch @ 00a740c0 */
                    /* catch() { ... } // from try @ 00a73f2c with catch @ 00a740d0
                       catch() { ... } // from try @ 00a73f9c with catch @ 00a740d0 */
  uVar1 = PcmData::isValid(param_2);
  if ((uVar1 & 1) == 0) {
                    /* try { // try from 00a74128 to 00b7417b has its CatchHandler @ 00a74128
                       catch() { ... } // from try @ 00a74128 with catch @ 00a74128
                       catch() { ... } // from try @ 00a74314 with catch @ 00a74128 */
    __android_log_print(6,"AudioPlayerProvider","obtainPcmAudioPlayer failed, pcmData isn\'t valid!"
                       );
    this_00 = (PcmAudioPlayer *)0x0;
  }
  else {
    this_00 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
    if (this_00 != (PcmAudioPlayer *)0x0) {
      PcmAudioPlayer::PcmAudioPlayer
                (this_00,*(AudioMixerController **)(this + 0x158),
                 *(ICallerThreadUtils **)(this + 0x50));
      PcmAudioPlayer::prepare(this_00,param_1,param_2);
    }
  }
  return this_00;
}

