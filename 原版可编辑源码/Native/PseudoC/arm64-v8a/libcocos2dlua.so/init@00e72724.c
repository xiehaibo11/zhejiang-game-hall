
/* cocos2d::experimental::AudioMixerController::init() */

bool __thiscall cocos2d::experimental::AudioMixerController::init(AudioMixerController *this)

{
  AudioMixer *this_00;
  
  this_00 = operator_new(0x1a60,(nothrow_t *)&std::nothrow);
  if (this_00 != (AudioMixer *)0x0) {
    AudioMixer::AudioMixer(this_00,(long)*(int *)this,*(uint *)(this + 4),0x20);
  }
  *(AudioMixer **)(this + 0x10) = this_00;
  return this_00 != (AudioMixer *)0x0;
}

