
/* cocos2d::experimental::PcmAudioPlayer::play() */

void __thiscall cocos2d::experimental::PcmAudioPlayer::play(PcmAudioPlayer *this)

{
  AudioMixerController::addTrack(*(AudioMixerController **)(this + 0x90),*(Track **)(this + 0x58));
  Track::setState(*(Track **)(this + 0x58),1);
  return;
}

