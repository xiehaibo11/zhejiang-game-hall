
/* cocos2d::PcmAudioPlayer::pause() */

void __thiscall cocos2d::PcmAudioPlayer::pause(PcmAudioPlayer *this)

{
  Track::setState(*(Track **)(this + 0x58),3);
  return;
}

