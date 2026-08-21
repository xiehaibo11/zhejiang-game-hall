
/* cocos2d::AudioPlayerProvider::resume() */

void __thiscall cocos2d::AudioPlayerProvider::resume(AudioPlayerProvider *this)

{
  if (*(AudioMixerController **)(this + 0x158) != (AudioMixerController *)0x0) {
    AudioMixerController::resume(*(AudioMixerController **)(this + 0x158));
  }
  if (*(PcmAudioService **)(this + 0x150) != (PcmAudioService *)0x0) {
    PcmAudioService::resume(*(PcmAudioService **)(this + 0x150));
    return;
  }
  return;
}

