
/* cocos2d::PcmAudioPlayer::resume() */

void __thiscall cocos2d::PcmAudioPlayer::resume(PcmAudioPlayer *this)

{
  Track::setState(*(Track **)(this + 0x58),2);
  return;
}

