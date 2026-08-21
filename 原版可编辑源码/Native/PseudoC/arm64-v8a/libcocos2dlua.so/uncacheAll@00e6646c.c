
/* cocos2d::experimental::AudioEngineImpl::uncacheAll() */

void __thiscall cocos2d::experimental::AudioEngineImpl::uncacheAll(AudioEngineImpl *this)

{
  if (*(AudioPlayerProvider **)(this + 0xb8) != (AudioPlayerProvider *)0x0) {
    AudioPlayerProvider::clearAllPcmCaches(*(AudioPlayerProvider **)(this + 0xb8));
    return;
  }
  return;
}

