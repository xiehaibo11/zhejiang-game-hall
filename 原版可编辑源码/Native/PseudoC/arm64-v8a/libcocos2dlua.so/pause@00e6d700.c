
/* cocos2d::experimental::AudioPlayerProvider::pause() */

void __thiscall cocos2d::experimental::AudioPlayerProvider::pause(AudioPlayerProvider *this)

{
                    /* try { // try from 00e6d700 to 00f6d783 has its CatchHandler @ 00e6d700
                       catch() { ... } // from try @ 00e6d700 with catch @ 00e6d700
                       catch() { ... } // from try @ 00e6d798 with catch @ 00e6d700 */
  if (*(AudioMixerController **)(this + 0x158) != (AudioMixerController *)0x0) {
    AudioMixerController::pause(*(AudioMixerController **)(this + 0x158));
  }
  if (*(PcmAudioService **)(this + 0x150) != (PcmAudioService *)0x0) {
    PcmAudioService::pause(*(PcmAudioService **)(this + 0x150));
    return;
  }
  return;
}

