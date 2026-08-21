
/* cocos2d::PcmAudioPlayer::play() */

void __thiscall cocos2d::PcmAudioPlayer::play(PcmAudioPlayer *this)

{
  AudioMixerController::addTrack(*(AudioMixerController **)(this + 0x90),*(Track **)(this + 0x58));
                    /* try { // try from 00a7802c to 00b7807f has its CatchHandler @ 00a7802c
                       catch() { ... } // from try @ 00a7802c with catch @ 00a7802c
                       catch() { ... } // from try @ 00a78284 with catch @ 00a7802c */
  Track::setState(*(Track **)(this + 0x58),1);
  return;
}

