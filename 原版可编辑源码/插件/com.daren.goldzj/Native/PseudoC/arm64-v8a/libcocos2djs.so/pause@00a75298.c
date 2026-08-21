
/* cocos2d::AudioPlayerProvider::pause() */

void __thiscall cocos2d::AudioPlayerProvider::pause(AudioPlayerProvider *this)

{
                    /* try { // try from 00a75298 to 00b752ef has its CatchHandler @ 00a753ec */
  if (*(AudioMixerController **)(this + 0x158) != (AudioMixerController *)0x0) {
    AudioMixerController::pause(*(AudioMixerController **)(this + 0x158));
  }
  if (*(PcmAudioService **)(this + 0x150) != (PcmAudioService *)0x0) {
    PcmAudioService::pause(*(PcmAudioService **)(this + 0x150));
    return;
  }
  return;
}

