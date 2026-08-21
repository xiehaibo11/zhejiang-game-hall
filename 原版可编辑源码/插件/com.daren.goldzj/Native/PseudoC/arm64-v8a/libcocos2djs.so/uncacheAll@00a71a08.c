
/* cocos2d::AudioEngineImpl::uncacheAll() */

void __thiscall cocos2d::AudioEngineImpl::uncacheAll(AudioEngineImpl *this)

{
  if (*(AudioPlayerProvider **)(this + 0xa0) != (AudioPlayerProvider *)0x0) {
    AudioPlayerProvider::clearAllPcmCaches(*(AudioPlayerProvider **)(this + 0xa0));
    return;
  }
  return;
}

