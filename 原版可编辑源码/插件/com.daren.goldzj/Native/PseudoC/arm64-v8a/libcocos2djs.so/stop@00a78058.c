
/* cocos2d::PcmAudioPlayer::stop() */

void __thiscall cocos2d::PcmAudioPlayer::stop(PcmAudioPlayer *this)

{
  Track::setState(*(Track **)(this + 0x58),4);
  return;
}

